package ru.geekparty.exorcist;
import nme.display.Sprite;
import nme.events.MouseEvent;
import ru.geekparty.exorcist.screen.IScreen;

/**
 * ...
 * @author ratnikova
 */

class MenuLooseScreen extends Sprite implements IScreen
{
	private var _startAnotherButton:Sprite;
	private var _exitButton:Sprite;
	
	public function new() 
	{
		super();
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(event:Event):Void
	{
		removeEventListener(Event.ADDED_TO_STAGE, init);
		
		_startAnotherButton = new Sprite();
		var b:Bitmap = new Bitmap(Assets.getBitmapData("img/exit.png"));
		_startAnotherButton.addChild(b);
		_startAnotherButton.x = (stage.stageWidth - _startAnotherButton.width) / 2;
		_startAnotherButton.y = (stage.stageHeight - _startAnotherButton.height) / 2;
		addChild(_startAnotherButton);	
		_startAnotherButton.addEventListener(MouseEvent.CLICK, startAnotherGameHandler);
		
		_exitButton = new Sprite();
		var b:Bitmap = new Bitmap(Assets.getBitmapData("img/another.png"));
		_exitButton.addChild(b);
		_exitButton.x = (stage.stageWidth - _exitButton.width) / 2;
		_exitButton.y = (stage.stageHeight - _exitButton.height) / 2;
		addChild(_exitButton);
		_exitButton.addEventListener(MouseEvent.CLICK, exitGameHandler);
	}
	
	public function onEnterFrame():Void
	{
	}
	
	private function startAnotherGameHandler(event:MouseEvent):Void
	{
		this.close();
		this.dispatchEvent(new MenuEvent(MenuEvent.PRESS_START));
	}
	
	private function exitGameHandler(event:MouseEvent):Void 
	{
		this.close();
		this.dispatchEvent(new ScreenEvent(ScreenEvent.CLOSE_PRESSED));
	}
	
	public function onResize():Void
	{
	}
	
	private function close():Void 
	{
		this.dispose();
	}
	
	public function dispose():Void
	{
		_startAnotherButton.removeEventListener(MouseEvent.CLICK, startAnotherGameHandler);
		_exitButton.removeEventListener(MouseEvent.CLICK, exitGameHandler);
		var length:Int = this.numChildren - 1;
		while (length >= 0)
		{
			this.removeChildAt(length);
			length --;
		}
		_startAnotherButton = null;
		_exitButton = null;
	}
}