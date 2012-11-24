#include <hxcpp.h>

#ifndef INCLUDED_EndMenuResources
#include <EndMenuResources.h>
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
#ifndef INCLUDED_neash_text_TextField
#include <neash/text/TextField.h>
#endif
#ifndef INCLUDED_neash_text_TextFormat
#include <neash/text/TextFormat.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_LooseScreen
#include <ru/geekparty/exorcist/LooseScreen.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_MenuEvent
#include <ru/geekparty/exorcist/MenuEvent.h>
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

Void LooseScreen_obj::__construct(::ru::geekparty::exorcist::player::Player player)
{
HX_STACK_PUSH("LooseScreen::new","ru/geekparty/exorcist/LooseScreen.hx",27);
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(29)
	this->_player = player;
	HX_STACK_LINE(30)
	this->addEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

LooseScreen_obj::~LooseScreen_obj() { }

Dynamic LooseScreen_obj::__CreateEmpty() { return  new LooseScreen_obj; }
hx::ObjectPtr< LooseScreen_obj > LooseScreen_obj::__new(::ru::geekparty::exorcist::player::Player player)
{  hx::ObjectPtr< LooseScreen_obj > result = new LooseScreen_obj();
	result->__construct(player);
	return result;}

Dynamic LooseScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LooseScreen_obj > result = new LooseScreen_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *LooseScreen_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::ru::geekparty::exorcist::screen::IScreen_obj)) return operator ::ru::geekparty::exorcist::screen::IScreen_obj *();
	if (inType==typeid( ::neash::events::IEventDispatcher_obj)) return operator ::neash::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

Void LooseScreen_obj::dispose( ){
{
		HX_STACK_PUSH("LooseScreen::dispose","ru/geekparty/exorcist/LooseScreen.hx",83);
		HX_STACK_THIS(this);
		HX_STACK_LINE(84)
		this->_anotherGameButton->removeEventListener(::neash::events::MouseEvent_obj::CLICK,this->startAnotherGameHandler_dyn(),null());
		HX_STACK_LINE(85)
		this->_exitToMenuButton->removeEventListener(::neash::events::MouseEvent_obj::CLICK,this->exitToMenuHandler_dyn(),null());
		HX_STACK_LINE(86)
		int length = (this->nmeGetNumChildren() - (int)1);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(87)
		while(((length >= (int)0))){
			HX_STACK_LINE(89)
			this->removeChildAt(length);
			HX_STACK_LINE(90)
			(length)--;
		}
		HX_STACK_LINE(92)
		this->_anotherGameButton = null();
		HX_STACK_LINE(93)
		this->_exitToMenuButton = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LooseScreen_obj,dispose,(void))

Void LooseScreen_obj::close( ){
{
		HX_STACK_PUSH("LooseScreen::close","ru/geekparty/exorcist/LooseScreen.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_LINE(78)
		this->dispatchEvent(::ru::geekparty::exorcist::screen::ScreenEvent_obj::__new(HX_CSTRING("screenClosePressed")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LooseScreen_obj,close,(void))

Void LooseScreen_obj::onResize( int newWidth,int newHeight){
{
		HX_STACK_PUSH("LooseScreen::onResize","ru/geekparty/exorcist/LooseScreen.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newWidth,"newWidth");
		HX_STACK_ARG(newHeight,"newHeight");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LooseScreen_obj,onResize,(void))

Void LooseScreen_obj::exitToMenuHandler( ::neash::events::MouseEvent event){
{
		HX_STACK_PUSH("LooseScreen::exitToMenuHandler","ru/geekparty/exorcist/LooseScreen.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(69)
		this->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LooseScreen_obj,exitToMenuHandler,(void))

Void LooseScreen_obj::startAnotherGameHandler( ::neash::events::MouseEvent event){
{
		HX_STACK_PUSH("LooseScreen::startAnotherGameHandler","ru/geekparty/exorcist/LooseScreen.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(64)
		this->dispatchEvent(::ru::geekparty::exorcist::MenuEvent_obj::__new(::ru::geekparty::exorcist::MenuEvent_obj::PRESS_START));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LooseScreen_obj,startAnotherGameHandler,(void))

Void LooseScreen_obj::onEnterFrame( ){
{
		HX_STACK_PUSH("LooseScreen::onEnterFrame","ru/geekparty/exorcist/LooseScreen.hx",60);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LooseScreen_obj,onEnterFrame,(void))

Void LooseScreen_obj::setScore( int score){
{
		HX_STACK_PUSH("LooseScreen::setScore","ru/geekparty/exorcist/LooseScreen.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_ARG(score,"score");
		HX_STACK_LINE(55)
		this->_scoreTxt->nmeSetText(::Std_obj::string(score));
		HX_STACK_LINE(56)
		this->_scoreTxt->setTextFormat(::neash::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)20,(int)16763955,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LooseScreen_obj,setScore,(void))

Void LooseScreen_obj::init( ::neash::events::Event event){
{
		HX_STACK_PUSH("LooseScreen::init","ru/geekparty/exorcist/LooseScreen.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(35)
		this->removeEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(38)
		this->_menuMc = ::EndMenuResources_obj::__new();
		HX_STACK_LINE(39)
		this->_exitToMenuButton = this->_menuMc->getChildByName(HX_CSTRING("exitToMenuButton"));
		HX_STACK_LINE(40)
		this->_anotherGameButton = this->_menuMc->getChildByName(HX_CSTRING("anotherGameButton"));
		HX_STACK_LINE(41)
		this->_scoreTxt = this->_menuMc->getChildByName(HX_CSTRING("scoreTxt"));
		HX_STACK_LINE(45)
		this->addChild(this->_menuMc);
		HX_STACK_LINE(47)
		this->_exitToMenuButton->addEventListener(::neash::events::MouseEvent_obj::CLICK,this->exitToMenuHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(48)
		this->_anotherGameButton->addEventListener(::neash::events::MouseEvent_obj::CLICK,this->startAnotherGameHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(50)
		this->setScore(this->_player->getScore());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LooseScreen_obj,init,(void))


LooseScreen_obj::LooseScreen_obj()
{
}

void LooseScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LooseScreen);
	HX_MARK_MEMBER_NAME(_textFormat,"_textFormat");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_scoreTxt,"_scoreTxt");
	HX_MARK_MEMBER_NAME(_exitToMenuButton,"_exitToMenuButton");
	HX_MARK_MEMBER_NAME(_anotherGameButton,"_anotherGameButton");
	HX_MARK_MEMBER_NAME(_menuMc,"_menuMc");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LooseScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textFormat,"_textFormat");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_scoreTxt,"_scoreTxt");
	HX_VISIT_MEMBER_NAME(_exitToMenuButton,"_exitToMenuButton");
	HX_VISIT_MEMBER_NAME(_anotherGameButton,"_anotherGameButton");
	HX_VISIT_MEMBER_NAME(_menuMc,"_menuMc");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LooseScreen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"_menuMc") ) { return _menuMc; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"setScore") ) { return setScore_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_scoreTxt") ) { return _scoreTxt; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { return _textFormat; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"exitToMenuHandler") ) { return exitToMenuHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_exitToMenuButton") ) { return _exitToMenuButton; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_anotherGameButton") ) { return _anotherGameButton; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"startAnotherGameHandler") ) { return startAnotherGameHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LooseScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::ru::geekparty::exorcist::player::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_menuMc") ) { _menuMc=inValue.Cast< ::EndMenuResources >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_scoreTxt") ) { _scoreTxt=inValue.Cast< ::neash::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { _textFormat=inValue.Cast< ::neash::text::TextFormat >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_exitToMenuButton") ) { _exitToMenuButton=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_anotherGameButton") ) { _anotherGameButton=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LooseScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textFormat"));
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_scoreTxt"));
	outFields->push(HX_CSTRING("_exitToMenuButton"));
	outFields->push(HX_CSTRING("_anotherGameButton"));
	outFields->push(HX_CSTRING("_menuMc"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("close"),
	HX_CSTRING("onResize"),
	HX_CSTRING("exitToMenuHandler"),
	HX_CSTRING("startAnotherGameHandler"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("setScore"),
	HX_CSTRING("init"),
	HX_CSTRING("_textFormat"),
	HX_CSTRING("_player"),
	HX_CSTRING("_scoreTxt"),
	HX_CSTRING("_exitToMenuButton"),
	HX_CSTRING("_anotherGameButton"),
	HX_CSTRING("_menuMc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LooseScreen_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LooseScreen_obj::__mClass,"__mClass");
};

Class LooseScreen_obj::__mClass;

void LooseScreen_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.LooseScreen"), hx::TCanCast< LooseScreen_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LooseScreen_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
