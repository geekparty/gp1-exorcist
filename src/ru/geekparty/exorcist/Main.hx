package ru.geekparty.exorcist;

import haxe.io.Error;
import nme.events.KeyboardEvent;
import ru.geekparty.exorcist.player.Player;
import ru.geekparty.exorcist.screen.ScreenEvent;
import ru.geekparty.exorcist.screen.IScreen;

import nme.display.FPS;
import nme.display.Sprite;
import nme.events.Event;
import nme.Lib;

/**
 * ...
 * @author Null/
 */

class Main extends Sprite
{
	private var _player:Player;
	private var _currentScreen:IScreen;

	public function new()
	{
		super();
		#if iphone
		Lib.current.stage.addEventListener(Event.RESIZE, init);
		#else
		addEventListener(Event.ADDED_TO_STAGE, init);		
		#end
		
        Lib.current.stage.addEventListener(Event.RESIZE, stageResizeHandler);
		addEventListener(KeyboardEvent.KEY_UP, keyUpHandler );
		addEventListener(Event.ENTER_FRAME, enterFrameHandler);
		
	}

	private function init(e):Void
	{
		_player = new Player();
		Lib.current.stage.removeEventListener(Event.RESIZE, init);
		switchScreen( new MenuScreen() );
		addChild( new FPS(10,10,0xffffff) );
	}
	private function onExit():Void
	{
		Lib.current.stage.removeEventListener(Event.RESIZE, stageResizeHandler);
		switchScreen( new MenuScreen() );
		addChild( new FPS(10,10,0xffffff) );
	}
	static public function main()
	{
		var stage = Lib.current.stage;
		stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		stage.align = nme.display.StageAlign.TOP_LEFT;

		Lib.current.addChild(new Main());
	}

	private function switchScreen(screen:IScreen):Void
	{
		if ( _currentScreen != null )
		{
			if (this.contains(cast _currentScreen))
            {
                removeChild( cast _currentScreen );
				
				if ( Std.is(_currentScreen, MenuScreen ) || Std.is(_currentScreen, LooseScreen ))
				{
					_currentScreen.removeEventListener(MenuEvent.PRESS_START, startPressedHandler);
				}
            }
            _currentScreen.removeEventListener(ScreenEvent.CLOSE_PRESSED, closePressedHandler);
			_currentScreen.dispose();
			_currentScreen = null;
		}

		_currentScreen = screen;
        _currentScreen.addEventListener(ScreenEvent.CLOSE_PRESSED, closePressedHandler);
		
		if ( Std.is(_currentScreen, MenuScreen ) || Std.is(_currentScreen, LooseScreen))
		{
			_currentScreen.addEventListener(MenuEvent.PRESS_START, startPressedHandler);
		}
		
		addChild( cast _currentScreen );
	}
	
	private function onCloseCurrentScreen():Void
    {
		if (Std.is (_currentScreen, GameScreen))
        {
            switchScreen(new LooseScreen(_player));
        }
        else if (Std.is(_currentScreen, LooseScreen ))
        {
            switchScreen(new MenuScreen());
        }
        else if (Std.is (_currentScreen, MenuScreen))
        {
            Lib.exit ();
        }

    }

    //------- Event handlers

    private function closePressedHandler(event:ScreenEvent):Void
    {
		if ( _currentScreen != null )
			onCloseCurrentScreen();
    }

	private function keyUpHandler (event:KeyboardEvent):Void 
	{
		
		#if android
		
		if (event.keyCode == 27) 
		{	
			event.stopImmediatePropagation ();
			onCloseCurrentScreen();
		}
		
		#end
		
	}
    private function enterFrameHandler(event:Event):Void
    {
        if (_currentScreen != null) 
			_currentScreen.onEnterFrame();
    }

    private function stageResizeHandler(event:Event):Void
    {
        if (_currentScreen != null)
		{
			_currentScreen.onResize(Lib.current.stage.stageWidth, Lib.current.stage.stageHeight);
		}
    }
	
	private function startPressedHandler(event:MenuEvent):Void
    {
		
		switchScreen(new GameScreen(_player));
    }
}
