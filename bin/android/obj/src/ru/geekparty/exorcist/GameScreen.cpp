#include <hxcpp.h>

#ifndef INCLUDED_GameBackground
#include <GameBackground.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_swf_MovieClip
#include <format/swf/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_MouseEvent
#include <neash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_neash_media_Sound
#include <neash/media/Sound.h>
#endif
#ifndef INCLUDED_neash_media_SoundChannel
#include <neash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_neash_media_SoundTransform
#include <neash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_neash_text_TextField
#include <neash/text/TextField.h>
#endif
#ifndef INCLUDED_neash_text_TextFormat
#include <neash/text/TextFormat.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_GameScreen
#include <ru/geekparty/exorcist/GameScreen.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_data_GameState
#include <ru/geekparty/exorcist/data/GameState.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_player_Player
#include <ru/geekparty/exorcist/player/Player.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_screen_IScreen
#include <ru/geekparty/exorcist/screen/IScreen.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_screen_ScreenEvent
#include <ru/geekparty/exorcist/screen/ScreenEvent.h>
#endif
namespace ru{
namespace geekparty{
namespace exorcist{

Void GameScreen_obj::__construct(::ru::geekparty::exorcist::player::Player player)
{
HX_STACK_PUSH("GameScreen::new","ru/geekparty/exorcist/GameScreen.hx",28);
{
	HX_STACK_LINE(32)
	this->_gameOverDT = (Float((int)25) / Float((int)60));
	HX_STACK_LINE(31)
	this->_maxEnrageTime = (int)5;
	HX_STACK_LINE(30)
	this->_minEnrageTime = (int)3;
	HX_STACK_LINE(60)
	super::__construct();
	HX_STACK_LINE(61)
	this->init();
	HX_STACK_LINE(62)
	this->_player = player;
}
;
	return null();
}

GameScreen_obj::~GameScreen_obj() { }

Dynamic GameScreen_obj::__CreateEmpty() { return  new GameScreen_obj; }
hx::ObjectPtr< GameScreen_obj > GameScreen_obj::__new(::ru::geekparty::exorcist::player::Player player)
{  hx::ObjectPtr< GameScreen_obj > result = new GameScreen_obj();
	result->__construct(player);
	return result;}

Dynamic GameScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameScreen_obj > result = new GameScreen_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *GameScreen_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::ru::geekparty::exorcist::screen::IScreen_obj)) return operator ::ru::geekparty::exorcist::screen::IScreen_obj *();
	if (inType==typeid( ::neash::events::IEventDispatcher_obj)) return operator ::neash::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

Void GameScreen_obj::loop( ){
{
		HX_STACK_PUSH("GameScreen::loop","ru/geekparty/exorcist/GameScreen.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_LINE(156)
		Float dt = (Float((int)1) / Float((int)60));		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(158)
		hx::AddEq(this->_gameTime,dt);
		HX_STACK_LINE(159)
		this->updateScore();
		HX_STACK_LINE(160)
		this->_stateTextField->nmeSetText(this->_gameState);
		HX_STACK_LINE(162)
		if (((this->_attackSound != null()))){
			HX_STACK_LINE(163)
			if (((this->_gameState != ::ru::geekparty::exorcist::data::GameState_obj::enrage_dyn()))){
				HX_STACK_LINE(164)
				this->_attackSound = null();
			}
		}
		HX_STACK_LINE(167)
		{
			::ru::geekparty::exorcist::data::GameState _switch_1 = (this->_gameState);
			switch((_switch_1)->GetIndex()){
				case 0: {
					HX_STACK_LINE(171)
					this->_gameMc->gotoAndStop((int)2,null());
					HX_STACK_LINE(173)
					if (((this->_touch == true))){
						HX_STACK_LINE(175)
						this->_gameState = ::ru::geekparty::exorcist::data::GameState_obj::exorcism_dyn();
						HX_STACK_LINE(176)
						this->_exsorcismTime = (int)0;
						HX_STACK_LINE(178)
						this->_timeToEnrage = (this->_minEnrageTime + ::Std_obj::random((this->_maxEnrageTime - this->_minEnrageTime)));
					}
				}
				;break;
				case 1: {
					HX_STACK_LINE(181)
					if (((this->_touch == true))){
						HX_STACK_LINE(185)
						hx::AddEq(this->_exsorcismTime,dt);
						HX_STACK_LINE(186)
						hx::AddEq(this->_score,this->_dscore);
						HX_STACK_LINE(188)
						if (((this->_score >= this->_targetScore))){
							HX_STACK_LINE(190)
							this->_gameState = ::ru::geekparty::exorcist::data::GameState_obj::levelComplete_dyn();
							HX_STACK_LINE(191)
							return null();
						}
						HX_STACK_LINE(193)
						if (((this->_exsorcismTime >= this->_timeToEnrage))){
							HX_STACK_LINE(195)
							this->_gameState = ::ru::geekparty::exorcist::data::GameState_obj::enrage_dyn();
							HX_STACK_LINE(196)
							this->_enrageTime = (int)0;
							HX_STACK_LINE(198)
							this->_timeToGameOver = this->_gameOverDT;
						}
						HX_STACK_LINE(200)
						this->_gameMc->gotoAndStop((int)3,null());
					}
					else{
						HX_STACK_LINE(203)
						this->_gameState = ::ru::geekparty::exorcist::data::GameState_obj::gameOver_dyn();
					}
				}
				;break;
				case 2: {
					HX_STACK_LINE(207)
					if (((this->_touch == true))){
						HX_STACK_LINE(211)
						hx::AddEq(this->_enrageTime,dt);
						HX_STACK_LINE(212)
						hx::AddEq(this->_score,this->_dscoreEnrage);
						HX_STACK_LINE(214)
						if (((this->_score >= this->_targetScore))){
							HX_STACK_LINE(216)
							this->_gameState = ::ru::geekparty::exorcist::data::GameState_obj::levelComplete_dyn();
							HX_STACK_LINE(217)
							return null();
						}
						HX_STACK_LINE(220)
						if (((this->_enrageTime >= this->_timeToGameOver))){
							HX_STACK_LINE(221)
							this->_gameState = ::ru::geekparty::exorcist::data::GameState_obj::gameOver_dyn();
						}
						HX_STACK_LINE(224)
						this->_gameMc->gotoAndStop((int)4,null());
						HX_STACK_LINE(226)
						if (((this->_attackSound == null()))){
							HX_STACK_LINE(228)
							::neash::media::Sound attackSnd = ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/sounds/growl.mp3"));		HX_STACK_VAR(attackSnd,"attackSnd");
							HX_STACK_LINE(230)
							this->_attackSound = attackSnd->play(null(),null(),null());
						}
					}
					else{
						HX_STACK_LINE(234)
						this->_gameState = ::ru::geekparty::exorcist::data::GameState_obj::chill_dyn();
					}
				}
				;break;
				case 4: {
					HX_STACK_LINE(238)
					this->onLevelComplete();
				}
				;break;
				case 3: {
					HX_STACK_LINE(242)
					this->onGameOver();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScreen_obj,loop,(void))

Void GameScreen_obj::updateScore( ){
{
		HX_STACK_PUSH("GameScreen::updateScore","ru/geekparty/exorcist/GameScreen.hx",150);
		HX_STACK_THIS(this);
		HX_STACK_LINE(150)
		this->_scoreTextField->nmeSetText(((this->_score + HX_CSTRING(" / ")) + this->_targetScore));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScreen_obj,updateScore,(void))

Void GameScreen_obj::onLevelComplete( ){
{
		HX_STACK_PUSH("GameScreen::onLevelComplete","ru/geekparty/exorcist/GameScreen.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_LINE(145)
		this->_player->setScore(this->_score);
		HX_STACK_LINE(146)
		this->_stateTextField->nmeSetText(HX_CSTRING("Level compete"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScreen_obj,onLevelComplete,(void))

Void GameScreen_obj::onGameOver( ){
{
		HX_STACK_PUSH("GameScreen::onGameOver","ru/geekparty/exorcist/GameScreen.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_LINE(138)
		this->_stateTextField->nmeSetText(HX_CSTRING("Game over FOREVER"));
		HX_STACK_LINE(139)
		this->_player->setScore(this->_score);
		HX_STACK_LINE(140)
		this->dispatchEvent(::ru::geekparty::exorcist::screen::ScreenEvent_obj::__new(HX_CSTRING("screenClosePressed")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScreen_obj,onGameOver,(void))

Void GameScreen_obj::mouseUpHandler( ::neash::events::MouseEvent event){
{
		HX_STACK_PUSH("GameScreen::mouseUpHandler","ru/geekparty/exorcist/GameScreen.hx",128);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(129)
		this->_touch = false;
		HX_STACK_LINE(131)
		this->_touchSound->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,mouseUpHandler,(void))

Void GameScreen_obj::mouseDownHandler( ::neash::events::MouseEvent event){
{
		HX_STACK_PUSH("GameScreen::mouseDownHandler","ru/geekparty/exorcist/GameScreen.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(121)
		this->_touch = true;
		HX_STACK_LINE(122)
		::neash::media::Sound touchSnd = ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/sounds/on_playerTouch.mp3"));		HX_STACK_VAR(touchSnd,"touchSnd");
		HX_STACK_LINE(124)
		this->_touchSound = touchSnd->play(null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,mouseDownHandler,(void))

Void GameScreen_obj::dispose( ){
{
		HX_STACK_PUSH("GameScreen::dispose","ru/geekparty/exorcist/GameScreen.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		this->removeEventListener(::neash::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDownHandler_dyn(),null());
		HX_STACK_LINE(114)
		this->removeEventListener(::neash::events::MouseEvent_obj::MOUSE_UP,this->mouseUpHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScreen_obj,dispose,(void))

Void GameScreen_obj::onResize( int newWidth,int newHeight){
{
		HX_STACK_PUSH("GameScreen::onResize","ru/geekparty/exorcist/GameScreen.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newWidth,"newWidth");
		HX_STACK_ARG(newHeight,"newHeight");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GameScreen_obj,onResize,(void))

Void GameScreen_obj::onEnterFrame( ){
{
		HX_STACK_PUSH("GameScreen::onEnterFrame","ru/geekparty/exorcist/GameScreen.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_LINE(102)
		this->loop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScreen_obj,onEnterFrame,(void))

Void GameScreen_obj::init( ){
{
		HX_STACK_PUSH("GameScreen::init","ru/geekparty/exorcist/GameScreen.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(67)
		this->_touch = false;
		HX_STACK_LINE(68)
		this->_gameState = ::ru::geekparty::exorcist::data::GameState_obj::chill_dyn();
		HX_STACK_LINE(69)
		this->_gameTime = (int)0;
		HX_STACK_LINE(70)
		this->_exsorcismTime = (int)0;
		HX_STACK_LINE(71)
		this->_enrageTime = (int)0;
		HX_STACK_LINE(72)
		this->_timeToEnrage = (int)0;
		HX_STACK_LINE(73)
		this->_timeToGameOver = (int)0;
		HX_STACK_LINE(75)
		this->_score = (int)0;
		HX_STACK_LINE(76)
		this->_dscore = (int)1;
		HX_STACK_LINE(77)
		this->_dscoreEnrage = (this->_dscore * (int)2);
		HX_STACK_LINE(78)
		this->_targetScore = (int)1000;
		HX_STACK_LINE(79)
		this->addEventListener(::neash::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDownHandler_dyn(),true,null(),null());
		HX_STACK_LINE(80)
		this->addEventListener(::neash::events::MouseEvent_obj::MOUSE_UP,this->mouseUpHandler_dyn(),true,null(),null());
		HX_STACK_LINE(82)
		this->_backgroundMc = ::GameBackground_obj::__new();
		HX_STACK_LINE(83)
		this->_gameMc = this->_backgroundMc;
		HX_STACK_LINE(84)
		this->_gameMc->stop();
		HX_STACK_LINE(85)
		this->addChild(this->_backgroundMc);
		HX_STACK_LINE(87)
		this->_scoreTextField = ::neash::text::TextField_obj::__new();
		HX_STACK_LINE(88)
		this->_scoreTextField->nmeSetX((int)5);
		HX_STACK_LINE(89)
		this->_scoreTextField->nmeSetY((int)40);
		HX_STACK_LINE(90)
		this->_scoreTextField->nmeSetDefaultTextFormat(::neash::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)15,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
		HX_STACK_LINE(91)
		this->addChild(this->_scoreTextField);
		HX_STACK_LINE(92)
		this->updateScore();
		HX_STACK_LINE(94)
		this->_stateTextField = ::neash::text::TextField_obj::__new();
		HX_STACK_LINE(95)
		this->_stateTextField->nmeSetX((int)10);
		HX_STACK_LINE(96)
		this->_stateTextField->nmeSetY((int)60);
		HX_STACK_LINE(97)
		this->_stateTextField->nmeSetDefaultTextFormat(::neash::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScreen_obj,init,(void))


GameScreen_obj::GameScreen_obj()
{
}

void GameScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameScreen);
	HX_MARK_MEMBER_NAME(_attackSound,"_attackSound");
	HX_MARK_MEMBER_NAME(_touchSound,"_touchSound");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_stateTextField,"_stateTextField");
	HX_MARK_MEMBER_NAME(_scoreTextField,"_scoreTextField");
	HX_MARK_MEMBER_NAME(_gameMc,"_gameMc");
	HX_MARK_MEMBER_NAME(_backgroundMc,"_backgroundMc");
	HX_MARK_MEMBER_NAME(_targetScore,"_targetScore");
	HX_MARK_MEMBER_NAME(_dscoreEnrage,"_dscoreEnrage");
	HX_MARK_MEMBER_NAME(_dscore,"_dscore");
	HX_MARK_MEMBER_NAME(_score,"_score");
	HX_MARK_MEMBER_NAME(_timeToGameOver,"_timeToGameOver");
	HX_MARK_MEMBER_NAME(_timeToEnrage,"_timeToEnrage");
	HX_MARK_MEMBER_NAME(_enrageTime,"_enrageTime");
	HX_MARK_MEMBER_NAME(_exsorcismTime,"_exsorcismTime");
	HX_MARK_MEMBER_NAME(_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(_gameState,"_gameState");
	HX_MARK_MEMBER_NAME(_touch,"_touch");
	HX_MARK_MEMBER_NAME(_gameOverDT,"_gameOverDT");
	HX_MARK_MEMBER_NAME(_maxEnrageTime,"_maxEnrageTime");
	HX_MARK_MEMBER_NAME(_minEnrageTime,"_minEnrageTime");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_attackSound,"_attackSound");
	HX_VISIT_MEMBER_NAME(_touchSound,"_touchSound");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_stateTextField,"_stateTextField");
	HX_VISIT_MEMBER_NAME(_scoreTextField,"_scoreTextField");
	HX_VISIT_MEMBER_NAME(_gameMc,"_gameMc");
	HX_VISIT_MEMBER_NAME(_backgroundMc,"_backgroundMc");
	HX_VISIT_MEMBER_NAME(_targetScore,"_targetScore");
	HX_VISIT_MEMBER_NAME(_dscoreEnrage,"_dscoreEnrage");
	HX_VISIT_MEMBER_NAME(_dscore,"_dscore");
	HX_VISIT_MEMBER_NAME(_score,"_score");
	HX_VISIT_MEMBER_NAME(_timeToGameOver,"_timeToGameOver");
	HX_VISIT_MEMBER_NAME(_timeToEnrage,"_timeToEnrage");
	HX_VISIT_MEMBER_NAME(_enrageTime,"_enrageTime");
	HX_VISIT_MEMBER_NAME(_exsorcismTime,"_exsorcismTime");
	HX_VISIT_MEMBER_NAME(_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(_gameState,"_gameState");
	HX_VISIT_MEMBER_NAME(_touch,"_touch");
	HX_VISIT_MEMBER_NAME(_gameOverDT,"_gameOverDT");
	HX_VISIT_MEMBER_NAME(_maxEnrageTime,"_maxEnrageTime");
	HX_VISIT_MEMBER_NAME(_minEnrageTime,"_minEnrageTime");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GameScreen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_score") ) { return _score; }
		if (HX_FIELD_EQ(inName,"_touch") ) { return _touch; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"_gameMc") ) { return _gameMc; }
		if (HX_FIELD_EQ(inName,"_dscore") ) { return _dscore; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onGameOver") ) { return onGameOver_dyn(); }
		if (HX_FIELD_EQ(inName,"_gameState") ) { return _gameState; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateScore") ) { return updateScore_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchSound") ) { return _touchSound; }
		if (HX_FIELD_EQ(inName,"_enrageTime") ) { return _enrageTime; }
		if (HX_FIELD_EQ(inName,"_gameOverDT") ) { return _gameOverDT; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"_attackSound") ) { return _attackSound; }
		if (HX_FIELD_EQ(inName,"_targetScore") ) { return _targetScore; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_backgroundMc") ) { return _backgroundMc; }
		if (HX_FIELD_EQ(inName,"_dscoreEnrage") ) { return _dscoreEnrage; }
		if (HX_FIELD_EQ(inName,"_timeToEnrage") ) { return _timeToEnrage; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseUpHandler") ) { return mouseUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_exsorcismTime") ) { return _exsorcismTime; }
		if (HX_FIELD_EQ(inName,"_maxEnrageTime") ) { return _maxEnrageTime; }
		if (HX_FIELD_EQ(inName,"_minEnrageTime") ) { return _minEnrageTime; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onLevelComplete") ) { return onLevelComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"_stateTextField") ) { return _stateTextField; }
		if (HX_FIELD_EQ(inName,"_scoreTextField") ) { return _scoreTextField; }
		if (HX_FIELD_EQ(inName,"_timeToGameOver") ) { return _timeToGameOver; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mouseDownHandler") ) { return mouseDownHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_score") ) { _score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touch") ) { _touch=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::ru::geekparty::exorcist::player::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gameMc") ) { _gameMc=inValue.Cast< ::GameBackground >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dscore") ) { _dscore=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_gameState") ) { _gameState=inValue.Cast< ::ru::geekparty::exorcist::data::GameState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_touchSound") ) { _touchSound=inValue.Cast< ::neash::media::SoundChannel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enrageTime") ) { _enrageTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gameOverDT") ) { _gameOverDT=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_attackSound") ) { _attackSound=inValue.Cast< ::neash::media::SoundChannel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_targetScore") ) { _targetScore=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_backgroundMc") ) { _backgroundMc=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dscoreEnrage") ) { _dscoreEnrage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timeToEnrage") ) { _timeToEnrage=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_exsorcismTime") ) { _exsorcismTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxEnrageTime") ) { _maxEnrageTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minEnrageTime") ) { _minEnrageTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_stateTextField") ) { _stateTextField=inValue.Cast< ::neash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scoreTextField") ) { _scoreTextField=inValue.Cast< ::neash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timeToGameOver") ) { _timeToGameOver=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_attackSound"));
	outFields->push(HX_CSTRING("_touchSound"));
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_stateTextField"));
	outFields->push(HX_CSTRING("_scoreTextField"));
	outFields->push(HX_CSTRING("_gameMc"));
	outFields->push(HX_CSTRING("_backgroundMc"));
	outFields->push(HX_CSTRING("_targetScore"));
	outFields->push(HX_CSTRING("_dscoreEnrage"));
	outFields->push(HX_CSTRING("_dscore"));
	outFields->push(HX_CSTRING("_score"));
	outFields->push(HX_CSTRING("_timeToGameOver"));
	outFields->push(HX_CSTRING("_timeToEnrage"));
	outFields->push(HX_CSTRING("_enrageTime"));
	outFields->push(HX_CSTRING("_exsorcismTime"));
	outFields->push(HX_CSTRING("_gameTime"));
	outFields->push(HX_CSTRING("_gameState"));
	outFields->push(HX_CSTRING("_touch"));
	outFields->push(HX_CSTRING("_gameOverDT"));
	outFields->push(HX_CSTRING("_maxEnrageTime"));
	outFields->push(HX_CSTRING("_minEnrageTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loop"),
	HX_CSTRING("updateScore"),
	HX_CSTRING("onLevelComplete"),
	HX_CSTRING("onGameOver"),
	HX_CSTRING("mouseUpHandler"),
	HX_CSTRING("mouseDownHandler"),
	HX_CSTRING("dispose"),
	HX_CSTRING("onResize"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("init"),
	HX_CSTRING("_attackSound"),
	HX_CSTRING("_touchSound"),
	HX_CSTRING("_player"),
	HX_CSTRING("_stateTextField"),
	HX_CSTRING("_scoreTextField"),
	HX_CSTRING("_gameMc"),
	HX_CSTRING("_backgroundMc"),
	HX_CSTRING("_targetScore"),
	HX_CSTRING("_dscoreEnrage"),
	HX_CSTRING("_dscore"),
	HX_CSTRING("_score"),
	HX_CSTRING("_timeToGameOver"),
	HX_CSTRING("_timeToEnrage"),
	HX_CSTRING("_enrageTime"),
	HX_CSTRING("_exsorcismTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_gameState"),
	HX_CSTRING("_touch"),
	HX_CSTRING("_gameOverDT"),
	HX_CSTRING("_maxEnrageTime"),
	HX_CSTRING("_minEnrageTime"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameScreen_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameScreen_obj::__mClass,"__mClass");
};

Class GameScreen_obj::__mClass;

void GameScreen_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.GameScreen"), hx::TCanCast< GameScreen_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameScreen_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
