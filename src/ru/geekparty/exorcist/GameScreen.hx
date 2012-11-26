package ru.geekparty.exorcist;

import format.swf.MovieClip;
import nme.media.SoundChannel;
import nme.display.DisplayObject;
import nme.text.TextField;
import nme.text.TextFormat;
import nme.events.MouseEvent;
import ru.geekparty.exorcist.player.Player;
import ru.geekparty.exorcist.screen.IScreen;
import ru.geekparty.exorcist.screen.ScreenEvent;
import nme.display.Sprite;
import nme.events.Event;
import nme.Lib;
import nme.Assets;
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

   // private var _gameMc:GameBackground;

    private var _scoreTextField:TextField;
    private var _stateTextField:TextField;

	private var _player:Player;

    private var _touchSnd:Sound;
    private var _enrageSnd:Sound;
    private var _gameOverSnd:Sound;
    private var _touchSoundCh:SoundChannel;
    private var _enrageSoundCh:SoundChannel;
    private var _gameOverSoundCh:SoundChannel;

    private var _currentAnim:MovieClip;
    private var _currAnimEndCallback:Void->Void;
    private var _shouldCurrAnimLoop:Bool;
    private var _guiLayer:Sprite;
    private var _animLayer:Sprite;

	public function new(player:Player)
	{
		super();
		init();
		_player = player;
	}

	private function init():Void
	{
        _touch = false;
        _gameTime = 0;
        _exsorcismTime = 0;
        _enrageTime = 0;
        _timeToEnrage = 0;
        _timeToGameOver = 0;

        _score = 0;
        _dscore = 1;
        _dscoreEnrage = _dscore * 2;
        _targetScore = 1000;


        _animLayer = new Sprite();
        _guiLayer = new Sprite();
        addChild(_animLayer);
        addChild(_guiLayer);

        _scoreTextField = new TextField();
        _scoreTextField.x = 5;
        _scoreTextField.y = 40;
        _scoreTextField.width = 700;
        _scoreTextField.defaultTextFormat = new TextFormat("_sans", 25, 0x000000);
        _guiLayer.addChild(_scoreTextField);
        updateScore();

        _stateTextField = new TextField();
        _stateTextField.x = 10;
        _stateTextField.y = 60;
        _stateTextField.defaultTextFormat = new TextFormat("_sans", 12, 0xffffff);
        //_guiLayer.addChild(_stateTextField);

        _touchSnd = Assets.getSound("assets/sounds/on_playerTouch.mp3");
        _enrageSnd = Assets.getSound("assets/sounds/growl.mp3");
        _gameOverSnd = Assets.getSound("assets/sounds/scream_good.mp3");

        switchState(GameState.chill);

        addEventListener(MouseEvent.MOUSE_DOWN, mouseDownHandler, true);
        addEventListener(MouseEvent.MOUSE_UP, mouseUpHandler, true);
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

        if (_currentAnim != null && _animLayer.contains(_currentAnim))
        {
            _animLayer.removeChild(_currentAnim);
        }

        removeChild(_guiLayer);
        removeChild(_animLayer);

        _guiLayer = null;
        _animLayer = null;
        _touchSnd = null;
        _enrageSnd = null;
        _gameOverSnd = null;
        _currentAnim = null;
	}

    private function switchAnimation(animMc:MovieClip, ?loop:Bool=false, ?endCallback:Void->Void):Void
    {
       if ( _currentAnim != null )
       {
           _animLayer.removeChild(_currentAnim);

           if (_currAnimEndCallback != null)
                doCurrAnimCallback();
       }
        _currentAnim = animMc;
        _currentAnim.gotoAndPlay(1);
        _animLayer.addChild(_currentAnim);
        _shouldCurrAnimLoop = loop;
        _currAnimEndCallback = endCallback;
    }

    private function doCurrAnimCallback():Void
    {
        _stateTextField.text = "DO CALLBACK";

       if (_currAnimEndCallback != null)
       {
          _currAnimEndCallback();
          _currAnimEndCallback = null;
       }
    }

//------ Event handlers

    private function mouseDownHandler(event:MouseEvent):Void
    {
        _touch = true;
    }
    private function mouseUpHandler(event:MouseEvent):Void
    {
        _touch = false;
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
        this.dispatchEvent(new ScreenEvent(ScreenEvent.CLOSE_PRESSED));
    }

    private function updateScore():Void
    {
        _scoreTextField.text = "Исцеление: " + cast _score + " / " + cast _targetScore;
    }

    private function checkSounds():Void
    {
        if (_enrageSoundCh != null)
        {
            if (_gameState != enrage)
            {
                _enrageSoundCh.stop();
                _enrageSoundCh = null;
            }
        }

        if (_touchSoundCh != null)
        {
            if (_gameState != exorcism)
            {
                _touchSoundCh.stop();
                _touchSoundCh = null;
            }
        }
    }

    private function checkAnimation():Void
    {
        if ( _currentAnim != null )
        {
           if (_currentAnim.currentFrame >= _currentAnim.totalFrames-1)
           {
              if (_shouldCurrAnimLoop)
                  _currentAnim.gotoAndPlay(1);
               else if (_currAnimEndCallback != null)
                  doCurrAnimCallback();
           }
        }
    }

    private function switchState(newState:GameState):Void
    {
        switch(newState)
        {
            case GameState.chill:
                switchAnimation(cast new Chill());

            case GameState.exorcism:

                switchAnimation(cast new Exorcism(), true);
                _exsorcismTime = 0;
                _timeToEnrage = _minEnrageTime + Std.random(cast (_maxEnrageTime - _minEnrageTime));

                if (_touchSoundCh == null)
                    _touchSoundCh = _touchSnd.play();


            case GameState.enrage:

                switchAnimation(cast new Enrage(), true);

                if (_enrageSoundCh == null)
                    _enrageSoundCh = _enrageSnd.play();

                _enrageTime = 0;
                _timeToGameOver = _gameOverDT;

            case GameState.attack:

                switchAnimation(cast new Attack(), false, onGameOver);

            case GameState.gameOver:

                onGameOver();

            case GameState.levelComplete:

                onLevelComplete();

        }

        _gameState = newState;
        checkSounds();
    }


    private function loop():Void
    {
        var dt:Float = 1 / 60;

        _gameTime += dt;

        updateScore();

        _stateTextField.text = cast _gameState;
        checkAnimation();

        switch (_gameState)
        {
            case GameState.chill:

                if (_touch == true)
                {
                    switchState(GameState.exorcism);
                }

            case GameState.exorcism:

                if (_touch == true)
                {
                    _exsorcismTime += dt;
                    _score += _dscore;

                    if (_score >= _targetScore)
                    {
                        switchState(GameState.levelComplete);
                        return;
                    }
                    if (_exsorcismTime >= _timeToEnrage)
                    {
                        switchState(GameState.enrage);
                    }
                }
                else
                {
                    switchState(GameState.gameOver);
                }

            case GameState.enrage:

                if (_touch == true)
                {
                    _enrageTime += dt;
                    _score += _dscoreEnrage;

                    if (_score >= _targetScore)
                    {
                        switchState(GameState.levelComplete);
                        return;
                    }

                    if (_enrageTime >= _timeToGameOver)
                    {
                        switchState(GameState.attack);
                    }
                }
                else
                {
                    switchState(GameState.chill);
                }

            case GameState.attack:
            case GameState.gameOver:
            case GameState.levelComplete:
       }
    }
}