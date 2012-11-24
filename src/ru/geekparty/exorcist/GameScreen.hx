package ru.geekparty.exorcist;

import nme.media.SoundChannel;
import nme.display.DisplayObject;
import nme.text.TextField;
import nme.text.TextFormat;
import nme.events.MouseEvent;
import nme.display.MovieClip;
import ru.geekparty.exorcist.player.Player;
import ru.geekparty.exorcist.screen.IScreen;
import ru.geekparty.exorcist.screen.ScreenEvent;
import ru.geekparty.framework.IUpdatable;
import ru.geekparty.framework.AnimatedSprite;
import nme.display.Sprite;
import nme.events.Event;
import nme.Lib;
import nme.Assets;
import ru.geekparty.framework.TextureAtlas;
import ru.geekparty.exorcist.data.GameState;
import nme.media.Sound;
import nme.Assets;

/**
 * ...
 * @author ilyichzc/
 */

class GameScreen extends Sprite, implements IScreen
{
    private var _minEnrageTime:Float = 3;
    private var _maxEnrageTime:Float = 5;
    private var _gameOverDT:Float = 25 / 60;

    private var _touch:Bool;
    private var _gameState:GameState;
    private var _gameTime:Float;
    private var _exsorcismTime:Float;
    private var _enrageTime:Float;
    private var _timeToEnrage:Float;
    private var _timeToGameOver:Float;

    private var _score:Int;
    private var _dscore:Int;
    private var _dscoreEnrage:Int;
    private var _targetScore:Int;

	private var _backgroundMc:DisplayObject;
    private var _gameMc:GameBackground;

    private var _scoreTextField:TextField;
    private var _stateTextField:TextField;

	private var _player:Player;

    private var _touchSound:SoundChannel;
    private var _attackSound:SoundChannel;
	
	public function new(player:Player)
	{
		super();
		init();
		_player = player;
	}

	private function init():Void
	{
        _touch = false;
        _gameState = GameState.chill;
        _gameTime = 0;
        _exsorcismTime = 0;
        _enrageTime = 0;
        _timeToEnrage = 0;
        _timeToGameOver = 0;

        _score = 0;
        _dscore = 1;
        _dscoreEnrage = _dscore * 2;
        _targetScore = 1000;
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDownHandler, true);
        addEventListener(MouseEvent.MOUSE_UP, mouseUpHandler, true);

		_backgroundMc = cast new GameBackground();
        _gameMc = cast _backgroundMc;
        _gameMc.stop();
		addChild(_backgroundMc);

        _scoreTextField = new TextField();
        _scoreTextField.x = 5;
        _scoreTextField.y = 40;
        _scoreTextField.defaultTextFormat = new TextFormat("_sans", 15, 0xffffff);
        addChild(_scoreTextField);
        updateScore();

        _stateTextField = new TextField();
        _stateTextField.x = 10;
        _stateTextField.y = 60;
        _stateTextField.defaultTextFormat = new TextFormat("_sans", 12, 0xffffff);
        //addChild(_stateTextField);
	}

	public function onEnterFrame():Void
	{
        loop();
	}

	public function onResize(newWidth:Int, newHeight:Int):Void
	{

	}

	public function dispose():Void
	{
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDownHandler);
        removeEventListener(MouseEvent.MOUSE_UP, mouseUpHandler);
	}

    //------ Event handlers

    private function mouseDownHandler(event:MouseEvent):Void
    {
        _touch = true;
        var touchSnd:Sound = Assets.getSound("assets/sounds/on_playerTouch.mp3");

        _touchSound = touchSnd.play();
    }

    private function mouseUpHandler(event:MouseEvent):Void
    {
        _touch = false;

        _touchSound.stop();
    }

    //------- Game logic

    private function onGameOver():Void
    {
        _stateTextField.text = "Game over FOREVER";
        _player.setScore(_score);
		this.dispatchEvent(new ScreenEvent(ScreenEvent.CLOSE_PRESSED));
    }

    private function onLevelComplete():Void
    {
        _player.setScore(_score);
        _stateTextField.text = "Level compete";
    }

    private function updateScore():Void
    {
        _scoreTextField.text = cast _score + " / " + cast _targetScore;
    }

    private function loop():Void
    {
        var dt:Float = 1 / 60;

        _gameTime += dt;
        updateScore();
        _stateTextField.text = cast _gameState;

        if (_attackSound != null)
        {
            if (_gameState != enrage) _attackSound = null;
        }

        switch (_gameState)
        {
            case chill:
            {
                _gameMc.gotoAndStop(2);

                if (_touch == true)
                {
                    _gameState = exorcism;
                    _exsorcismTime = 0;

                    _timeToEnrage = _minEnrageTime + Std.random(cast (_maxEnrageTime - _minEnrageTime));
                }
            }
            case exorcism:
            {
                if (_touch == true)
                {
                    _exsorcismTime += dt;
                    _score += _dscore;

                    if (_score >= _targetScore)
                    {
                        _gameState = levelComplete;
                        return;
                    }
                    if (_exsorcismTime >= _timeToEnrage)
                    {
                        _gameState = enrage;
                        _enrageTime = 0;

                        _timeToGameOver = _gameOverDT;
                    }
                    _gameMc.gotoAndStop(3);
                }
                else
                {
                    _gameState = gameOver;
                }
            }
            case enrage:
            {
                if (_touch == true)
                {
                    _enrageTime += dt;
                    _score += _dscoreEnrage;

                    if (_score >= _targetScore)
                    {
                        _gameState = levelComplete;
                        return;
                    }

                    if (_enrageTime >= _timeToGameOver)
                    {
                        _gameState = gameOver;
                    }
                    _gameMc.gotoAndStop(4);

                    if (_attackSound == null)
                    {
                        var attackSnd:Sound = Assets.getSound("assets/sounds/growl.mp3");

                        _attackSound = attackSnd.play();
                    }
                }
                else
                {
                    _gameState = chill;
                }
            }
            case levelComplete:
            {
                 onLevelComplete();
            }
            case gameOver:
            {
                 onGameOver();
            }
        }
    }
}