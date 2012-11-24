#include <hxcpp.h>

#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_MenuEvent
#include <ru/geekparty/exorcist/MenuEvent.h>
#endif
namespace ru{
namespace geekparty{
namespace exorcist{

Void MenuEvent_obj::__construct(::String type)
{
HX_STACK_PUSH("MenuEvent::new","ru/geekparty/exorcist/MenuEvent.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct(type,null(),null());
}
;
	return null();
}

MenuEvent_obj::~MenuEvent_obj() { }

Dynamic MenuEvent_obj::__CreateEmpty() { return  new MenuEvent_obj; }
hx::ObjectPtr< MenuEvent_obj > MenuEvent_obj::__new(::String type)
{  hx::ObjectPtr< MenuEvent_obj > result = new MenuEvent_obj();
	result->__construct(type);
	return result;}

Dynamic MenuEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuEvent_obj > result = new MenuEvent_obj();
	result->__construct(inArgs[0]);
	return result;}

::String MenuEvent_obj::PRESS_START;


MenuEvent_obj::MenuEvent_obj()
{
}

void MenuEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuEvent);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MenuEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"PRESS_START") ) { return PRESS_START; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"PRESS_START") ) { PRESS_START=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PRESS_START"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MenuEvent_obj::PRESS_START,"PRESS_START");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::PRESS_START,"PRESS_START");
};

Class MenuEvent_obj::__mClass;

void MenuEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.MenuEvent"), hx::TCanCast< MenuEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MenuEvent_obj::__boot()
{
	PRESS_START= HX_CSTRING("PRESS_START_EVENT");
}

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
