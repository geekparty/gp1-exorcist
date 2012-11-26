package ru.geekparty.exorcist;
import nme.media.SoundChannel;
import nme.media.Sound;
import nme.display.DisplayObject;
import nme.display.Sprite;
import nme.events.Event;
import nme.events.MouseEvent;
import nme.text.TextField;
import nme.text.TextFormat;
import nme.Assets;
import ru.geekparty.exorcist.player.Player;
import ru.geekparty.exorcist.screen.IScreen;
import ru.geekparty.exorcist.screen.ScreenEvent;

/**
 * ...
 * @author ratnikova
 */

class LooseScreen extends Sprite, implements IScreen
{
	private var _menuMc:EndMenuResources;
	private var _anotherGameButton:DisplayObject;
	private var _exitToMenuButton:DisplayObject;
	private var _scoreTxt:TextField;
	private var _player:Player;
	private var _textFormat:TextFormat;
    private var _backMusic:Sound;
    private var _backMusicCh:SoundChannel;

	public function new(player:Player) 
	{
		super();
		_player = player;
		addEventListener(Event.ADDED_TO_STAGE, init);
	}
	
	private function init(event:Event):Void
	{
		removeEventListener(Event.ADDED_TO_STAGE, init);

		_menuMc = new EndMenuResources();
		_exitToMenuButton = cast _menuMc.getChildByName("exitToMenuButton");
		_anotherGameButton = cast _menuMc.getChildByName("anotherGameButton");
		_scoreTxt = cast _menuMc.getChildByName("scoreTxt");
		
		_textFormat = _scoreTxt.getTextFormat();
		
		this.addChild(_menuMc);
		
		_exitToMenuButton.addEventListener(MouseEvent.CLICK, exitToMenuHandler);
		_anotherGameButton.addEventListener(MouseEvent.CLICK, startAnotherGameHandler);
		
		this.setScore(_player.getScore());

        _backMusic = Assets.getSound("assets/sounds/theme.mp3");
        _backMusicCh = _backMusic.play();
	}
	
	public function setScore(score:Int):Void
	{
		_scoreTxt.text = Std.string(score);
		_scoreTxt.setTextFormat(_textFormat);
	}
	
	public function onEnterFrame():Void
	{
	}
	
	private function startAnotherGameHandler(event:MouseEvent):Void
	{
		this.dispatchEvent(new MenuEvent(MenuEvent.PRESS_START));
	}
	
	private function exitToMenuHandler(event:MouseEvent):Void 
	{
		this.close();
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
		_anotherGameButton.removeEventListener(MouseEvent.CLICK, startAnotherGameHandler);
		_exitToMenuButton.removeEventListener(MouseEvent.CLICK, exitToMenuHandler);
		var length:Int = this.numChildren - 1;
		while (length >= 0)
		{
			this.removeChildAt(length);
			length --;
		}
		_anotherGameButton = null;
		_exitToMenuButton = null;
        _backMusicCh.stop();
        _backMusicCh = null;
        _backMusic = null;
	}
}