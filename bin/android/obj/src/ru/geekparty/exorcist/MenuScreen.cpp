#include <hxcpp.h>

#ifndef INCLUDED_MainMenuResources
#include <MainMenuResources.h>
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
#ifndef INCLUDED_ru_geekparty_exorcist_MenuEvent
#include <ru/geekparty/exorcist/MenuEvent.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_MenuScreen
#include <ru/geekparty/exorcist/MenuScreen.h>
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

Void MenuScreen_obj::__construct()
{
HX_STACK_PUSH("MenuScreen::new","ru/geekparty/exorcist/MenuScreen.hx",31);
{
	HX_STACK_LINE(32)
	super::__construct();
	HX_STACK_LINE(33)
	this->addEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

MenuScreen_obj::~MenuScreen_obj() { }

Dynamic MenuScreen_obj::__CreateEmpty() { return  new MenuScreen_obj; }
hx::ObjectPtr< MenuScreen_obj > MenuScreen_obj::__new()
{  hx::ObjectPtr< MenuScreen_obj > result = new MenuScreen_obj();
	result->__construct();
	return result;}

Dynamic MenuScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuScreen_obj > result = new MenuScreen_obj();
	result->__construct();
	return result;}

hx::Object *MenuScreen_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::ru::geekparty::exorcist::screen::IScreen_obj)) return operator ::ru::geekparty::exorcist::screen::IScreen_obj *();
	if (inType==typeid( ::neash::events::IEventDispatcher_obj)) return operator ::neash::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

Void MenuScreen_obj::dispose( ){
{
		HX_STACK_PUSH("MenuScreen::dispose","ru/geekparty/exorcist/MenuScreen.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(77)
		this->_startGameButton->removeEventListener(::neash::events::MouseEvent_obj::CLICK,this->startGameHandler_dyn(),null());
		HX_STACK_LINE(79)
		int length = (this->nmeGetNumChildren() - (int)1);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(80)
		while(((length >= (int)0))){
			HX_STACK_LINE(82)
			this->removeChildAt(length);
			HX_STACK_LINE(83)
			(length)--;
		}
		HX_STACK_LINE(85)
		this->_startGameButton = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuScreen_obj,dispose,(void))

Void MenuScreen_obj::close( ){
{
		HX_STACK_PUSH("MenuScreen::close","ru/geekparty/exorcist/MenuScreen.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_LINE(71)
		this->dispatchEvent(::ru::geekparty::exorcist::screen::ScreenEvent_obj::__new(HX_CSTRING("screenClosePressed")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuScreen_obj,close,(void))

Void MenuScreen_obj::onResize( int newWidth,int newHeight){
{
		HX_STACK_PUSH("MenuScreen::onResize","ru/geekparty/exorcist/MenuScreen.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newWidth,"newWidth");
		HX_STACK_ARG(newHeight,"newHeight");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MenuScreen_obj,onResize,(void))

Void MenuScreen_obj::startGameHandler( ::neash::events::MouseEvent event){
{
		HX_STACK_PUSH("MenuScreen::startGameHandler","ru/geekparty/exorcist/MenuScreen.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(61)
		this->dispatchEvent(::ru::geekparty::exorcist::MenuEvent_obj::__new(::ru::geekparty::exorcist::MenuEvent_obj::PRESS_START));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuScreen_obj,startGameHandler,(void))

Void MenuScreen_obj::onEnterFrame( ){
{
		HX_STACK_PUSH("MenuScreen::onEnterFrame","ru/geekparty/exorcist/MenuScreen.hx",57);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuScreen_obj,onEnterFrame,(void))

Void MenuScreen_obj::exitGameHandler( ::neash::events::MouseEvent event){
{
		HX_STACK_PUSH("MenuScreen::exitGameHandler","ru/geekparty/exorcist/MenuScreen.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(51)
		this->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuScreen_obj,exitGameHandler,(void))

Void MenuScreen_obj::init( ::neash::events::Event event){
{
		HX_STACK_PUSH("MenuScreen::init","ru/geekparty/exorcist/MenuScreen.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(38)
		this->removeEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(41)
		this->_menuMc = ::MainMenuResources_obj::__new();
		HX_STACK_LINE(42)
		this->_startGameButton = this->_menuMc->getChildByName(HX_CSTRING("startGameButton"));
		HX_STACK_LINE(43)
		this->_exitGameButton = this->_menuMc->getChildByName(HX_CSTRING("exitGameButton"));
		HX_STACK_LINE(45)
		this->addChild(this->_menuMc);
		HX_STACK_LINE(46)
		this->_startGameButton->addEventListener(::neash::events::MouseEvent_obj::CLICK,this->startGameHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(47)
		this->_exitGameButton->addEventListener(::neash::events::MouseEvent_obj::CLICK,this->exitGameHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuScreen_obj,init,(void))


MenuScreen_obj::MenuScreen_obj()
{
}

void MenuScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuScreen);
	HX_MARK_MEMBER_NAME(_exitGameButton,"_exitGameButton");
	HX_MARK_MEMBER_NAME(_startGameButton,"_startGameButton");
	HX_MARK_MEMBER_NAME(_menuMc,"_menuMc");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_exitGameButton,"_exitGameButton");
	HX_VISIT_MEMBER_NAME(_startGameButton,"_startGameButton");
	HX_VISIT_MEMBER_NAME(_menuMc,"_menuMc");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MenuScreen_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"_menuMc") ) { return _menuMc; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"exitGameHandler") ) { return exitGameHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_exitGameButton") ) { return _exitGameButton; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startGameHandler") ) { return startGameHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_startGameButton") ) { return _startGameButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_menuMc") ) { _menuMc=inValue.Cast< ::MainMenuResources >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_exitGameButton") ) { _exitGameButton=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_startGameButton") ) { _startGameButton=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_exitGameButton"));
	outFields->push(HX_CSTRING("_startGameButton"));
	outFields->push(HX_CSTRING("_menuMc"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("close"),
	HX_CSTRING("onResize"),
	HX_CSTRING("startGameHandler"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("exitGameHandler"),
	HX_CSTRING("init"),
	HX_CSTRING("_exitGameButton"),
	HX_CSTRING("_startGameButton"),
	HX_CSTRING("_menuMc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuScreen_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuScreen_obj::__mClass,"__mClass");
};

Class MenuScreen_obj::__mClass;

void MenuScreen_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.MenuScreen"), hx::TCanCast< MenuScreen_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MenuScreen_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
