package ru.geekparty.exorcist;

import nme.media.SoundChannel;
import nme.media.Sound;
import nme.display.DisplayObject;
import nme.display.MovieClip;
import ru.geekparty.exorcist.screen.IScreen;
import ru.geekparty.exorcist.screen.ScreenEvent;
import ru.geekparty.framework.IUpdatable;
import ru.geekparty.framework.AnimatedSprite;
import nme.display.Sprite;
import nme.events.Event;
import nme.events.MouseEvent;
import nme.display.Bitmap;
import nme.Lib;
import nme.Assets;
import ru.geekparty.framework.TextureAtlas;


/**
 * ...
 * @author ilyichzc/
 */

class MenuScreen extends Sprite, implements IScreen
{
	private var _menuMc:MainMenuResources;
	private var _startGameButton:DisplayObject;
	private var _exitGameButton:DisplayObject;

    private var _backMusic:Sound;
    private var _backMusicCh:SoundChannel;

	public function new()
	{
		super();
		addEventListener(Event.ADDED_TO_STAGE, init);
	}

	private function init(event:Event):Void
	{
		removeEventListener(Event.ADDED_TO_STAGE, init);
		
		
		_menuMc = new MainMenuResources();
		_startGameButton = cast _menuMc.getChildByName("startGameButton");
		_exitGameButton = cast _menuMc.getChildByName("exitGameButton");
		
		this.addChild(_menuMc);
		_startGameButton.addEventListener(MouseEvent.CLICK, startGameHandler);
		_exitGameButton.addEventListener(MouseEvent.CLICK, exitGameHandler);

        _backMusic = Assets.getSound("assets/sounds/fire_loop.mp3");
        _backMusicCh = _backMusic.play(0,9999);
	}

	private function exitGameHandler(event:MouseEvent):Void
	{
		this.close();
	}
	
	public function onEnterFrame():Void
	{
	}

	private function startGameHandler(event:MouseEvent):Void
	{
		this.dispatchEvent(new MenuEvent(MenuEvent.PRESS_START));
	}
	
	public function onResize(newWidth:Int, newHeight:Int):Void
	{

	}

	private function close():Void
	{
		this.dispatchEvent(new ScreenEvent(ScreenEvent.CLOSE_PRESSED));
	}

	public function dispose():Void
	{
		_startGameButton.removeEventListener(MouseEvent.CLICK, startGameHandler);
		
		var length:Int = this.numChildren - 1;
		while (length >= 0)
		{
			this.removeChildAt(length);
			length --;
		}
		_startGameButton = null;

        _backMusicCh.stop();
        _backMusicCh = null;
        _backMusic = null;
	}
}