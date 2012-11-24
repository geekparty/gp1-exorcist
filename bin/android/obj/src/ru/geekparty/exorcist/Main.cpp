#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_display_StageAlign
#include <neash/display/StageAlign.h>
#endif
#ifndef INCLUDED_neash_display_StageScaleMode
#include <neash/display/StageScaleMode.h>
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
#ifndef INCLUDED_neash_events_KeyboardEvent
#include <neash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_neash_text_TextField
#include <neash/text/TextField.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_display_FPS
#include <nme/display/FPS.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_GameScreen
#include <ru/geekparty/exorcist/GameScreen.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_LooseScreen
#include <ru/geekparty/exorcist/LooseScreen.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_Main
#include <ru/geekparty/exorcist/Main.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_MenuEvent
#include <ru/geekparty/exorcist/MenuEvent.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_MenuScreen
#include <ru/geekparty/exorcist/MenuScreen.h>
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

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","ru/geekparty/exorcist/Main.hx",25);
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(30)
	this->addEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
	HX_STACK_LINE(33)
	::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::Event_obj::RESIZE,this->stageResizeHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(34)
	this->addEventListener(::neash::events::KeyboardEvent_obj::KEY_UP,this->keyUpHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(35)
	this->addEventListener(::neash::events::Event_obj::ENTER_FRAME,this->enterFrameHandler_dyn(),null(),null(),null());
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::startPressedHandler( ::ru::geekparty::exorcist::MenuEvent event){
{
		HX_STACK_PUSH("Main::startPressedHandler","ru/geekparty/exorcist/Main.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(144)
		this->switchScreen(::ru::geekparty::exorcist::GameScreen_obj::__new(this->_player));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startPressedHandler,(void))

Void Main_obj::stageResizeHandler( ::neash::events::Event event){
{
		HX_STACK_PUSH("Main::stageResizeHandler","ru/geekparty/exorcist/Main.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(136)
		if (((this->_currentScreen != null()))){
			HX_STACK_LINE(138)
			this->_currentScreen->onResize(::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeGetStageWidth(),::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeGetStageHeight());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,stageResizeHandler,(void))

Void Main_obj::enterFrameHandler( ::neash::events::Event event){
{
		HX_STACK_PUSH("Main::enterFrameHandler","ru/geekparty/exorcist/Main.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(130)
		if (((this->_currentScreen != null()))){
			HX_STACK_LINE(132)
			this->_currentScreen->onEnterFrame();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,enterFrameHandler,(void))

Void Main_obj::keyUpHandler( ::neash::events::KeyboardEvent event){
{
		HX_STACK_PUSH("Main::keyUpHandler","ru/geekparty/exorcist/Main.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(116)
		if (((event->keyCode == (int)27))){
			HX_STACK_LINE(122)
			event->stopImmediatePropagation();
			HX_STACK_LINE(123)
			this->onCloseCurrentScreen();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyUpHandler,(void))

Void Main_obj::closePressedHandler( ::ru::geekparty::exorcist::screen::ScreenEvent event){
{
		HX_STACK_PUSH("Main::closePressedHandler","ru/geekparty/exorcist/Main.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(110)
		if (((this->_currentScreen != null()))){
			HX_STACK_LINE(112)
			this->onCloseCurrentScreen();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,closePressedHandler,(void))

Void Main_obj::onCloseCurrentScreen( ){
{
		HX_STACK_PUSH("Main::onCloseCurrentScreen","ru/geekparty/exorcist/Main.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(91)
		if ((::Std_obj::is(this->_currentScreen,hx::ClassOf< ::ru::geekparty::exorcist::GameScreen >()))){
			HX_STACK_LINE(93)
			this->switchScreen(::ru::geekparty::exorcist::LooseScreen_obj::__new(this->_player));
		}
		else{
			HX_STACK_LINE(96)
			if ((::Std_obj::is(this->_currentScreen,hx::ClassOf< ::ru::geekparty::exorcist::LooseScreen >()))){
				HX_STACK_LINE(97)
				this->switchScreen(::ru::geekparty::exorcist::MenuScreen_obj::__new());
			}
			else{
				HX_STACK_LINE(100)
				if ((::Std_obj::is(this->_currentScreen,hx::ClassOf< ::ru::geekparty::exorcist::MenuScreen >()))){
					HX_STACK_LINE(101)
					::nme::Lib_obj::exit();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,onCloseCurrentScreen,(void))

Void Main_obj::switchScreen( ::ru::geekparty::exorcist::screen::IScreen screen){
{
		HX_STACK_PUSH("Main::switchScreen","ru/geekparty/exorcist/Main.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(screen,"screen");
		HX_STACK_LINE(63)
		if (((this->_currentScreen != null()))){
			HX_STACK_LINE(65)
			if ((this->contains(this->_currentScreen))){
				HX_STACK_LINE(67)
				this->removeChild(this->_currentScreen);
				HX_STACK_LINE(69)
				if (((bool(::Std_obj::is(this->_currentScreen,hx::ClassOf< ::ru::geekparty::exorcist::MenuScreen >())) || bool(::Std_obj::is(this->_currentScreen,hx::ClassOf< ::ru::geekparty::exorcist::LooseScreen >()))))){
					HX_STACK_LINE(70)
					this->_currentScreen->__Field(HX_CSTRING("removeEventListener"),true)(::ru::geekparty::exorcist::MenuEvent_obj::PRESS_START,this->startPressedHandler_dyn(),null());
				}
			}
			HX_STACK_LINE(74)
			this->_currentScreen->__Field(HX_CSTRING("removeEventListener"),true)(HX_CSTRING("screenClosePressed"),this->closePressedHandler_dyn(),null());
			HX_STACK_LINE(75)
			this->_currentScreen->dispose();
			HX_STACK_LINE(76)
			this->_currentScreen = null();
		}
		HX_STACK_LINE(79)
		this->_currentScreen = screen;
		HX_STACK_LINE(80)
		this->_currentScreen->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("screenClosePressed"),this->closePressedHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(82)
		if (((bool(::Std_obj::is(this->_currentScreen,hx::ClassOf< ::ru::geekparty::exorcist::MenuScreen >())) || bool(::Std_obj::is(this->_currentScreen,hx::ClassOf< ::ru::geekparty::exorcist::LooseScreen >()))))){
			HX_STACK_LINE(83)
			this->_currentScreen->__Field(HX_CSTRING("addEventListener"),true)(::ru::geekparty::exorcist::MenuEvent_obj::PRESS_START,this->startPressedHandler_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(87)
		this->addChild(this->_currentScreen);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,switchScreen,(void))

Void Main_obj::onExit( ){
{
		HX_STACK_PUSH("Main::onExit","ru/geekparty/exorcist/Main.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->removeEventListener(::neash::events::Event_obj::RESIZE,this->stageResizeHandler_dyn(),null());
		HX_STACK_LINE(49)
		this->switchScreen(::ru::geekparty::exorcist::MenuScreen_obj::__new());
		HX_STACK_LINE(50)
		this->addChild(::nme::display::FPS_obj::__new((int)10,(int)10,(int)16777215));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,onExit,(void))

Void Main_obj::init( Dynamic e){
{
		HX_STACK_PUSH("Main::init","ru/geekparty/exorcist/Main.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(41)
		this->_player = ::ru::geekparty::exorcist::player::Player_obj::__new();
		HX_STACK_LINE(42)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->removeEventListener(::neash::events::Event_obj::RESIZE,this->init_dyn(),null());
		HX_STACK_LINE(43)
		this->switchScreen(::ru::geekparty::exorcist::MenuScreen_obj::__new());
		HX_STACK_LINE(44)
		this->addChild(::nme::display::FPS_obj::__new((int)10,(int)10,(int)16777215));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

Void Main_obj::main( ){
{
		HX_STACK_PUSH("Main::main","ru/geekparty/exorcist/Main.hx",53);
		HX_STACK_LINE(54)
		::neash::display::Stage stage = ::nme::Lib_obj::nmeGetCurrent()->nmeGetStage();		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(55)
		stage->nmeSetScaleMode(::neash::display::StageScaleMode_obj::NO_SCALE_dyn());
		HX_STACK_LINE(56)
		stage->nmeSetAlign(::neash::display::StageAlign_obj::TOP_LEFT_dyn());
		HX_STACK_LINE(58)
		::nme::Lib_obj::nmeGetCurrent()->addChild(::ru::geekparty::exorcist::Main_obj::__new());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(_currentScreen,"_currentScreen");
	HX_MARK_MEMBER_NAME(_player,"_player");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_currentScreen,"_currentScreen");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { return onExit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyUpHandler") ) { return keyUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"switchScreen") ) { return switchScreen_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentScreen") ) { return _currentScreen; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"enterFrameHandler") ) { return enterFrameHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stageResizeHandler") ) { return stageResizeHandler_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"startPressedHandler") ) { return startPressedHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"closePressedHandler") ) { return closePressedHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onCloseCurrentScreen") ) { return onCloseCurrentScreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::ru::geekparty::exorcist::player::Player >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentScreen") ) { _currentScreen=inValue.Cast< ::ru::geekparty::exorcist::screen::IScreen >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_currentScreen"));
	outFields->push(HX_CSTRING("_player"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("startPressedHandler"),
	HX_CSTRING("stageResizeHandler"),
	HX_CSTRING("enterFrameHandler"),
	HX_CSTRING("keyUpHandler"),
	HX_CSTRING("closePressedHandler"),
	HX_CSTRING("onCloseCurrentScreen"),
	HX_CSTRING("switchScreen"),
	HX_CSTRING("onExit"),
	HX_CSTRING("init"),
	HX_CSTRING("_currentScreen"),
	HX_CSTRING("_player"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
