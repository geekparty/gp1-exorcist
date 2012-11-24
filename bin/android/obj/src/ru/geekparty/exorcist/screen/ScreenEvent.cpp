#include <hxcpp.h>

#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_screen_ScreenEvent
#include <ru/geekparty/exorcist/screen/ScreenEvent.h>
#endif
namespace ru{
namespace geekparty{
namespace exorcist{
namespace screen{

Void ScreenEvent_obj::__construct(::String type)
{
HX_STACK_PUSH("ScreenEvent::new","ru/geekparty/exorcist/screen/ScreenEvent.hx",14);
{
	HX_STACK_LINE(14)
	super::__construct(type,null(),null());
}
;
	return null();
}

ScreenEvent_obj::~ScreenEvent_obj() { }

Dynamic ScreenEvent_obj::__CreateEmpty() { return  new ScreenEvent_obj; }
hx::ObjectPtr< ScreenEvent_obj > ScreenEvent_obj::__new(::String type)
{  hx::ObjectPtr< ScreenEvent_obj > result = new ScreenEvent_obj();
	result->__construct(type);
	return result;}

Dynamic ScreenEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenEvent_obj > result = new ScreenEvent_obj();
	result->__construct(inArgs[0]);
	return result;}

::String ScreenEvent_obj::CLOSE_PRESSED;


ScreenEvent_obj::ScreenEvent_obj()
{
}

void ScreenEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenEvent);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScreenEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ScreenEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"CLOSE_PRESSED") ) { return CLOSE_PRESSED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"CLOSE_PRESSED") ) { CLOSE_PRESSED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLOSE_PRESSED"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScreenEvent_obj::CLOSE_PRESSED,"CLOSE_PRESSED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScreenEvent_obj::CLOSE_PRESSED,"CLOSE_PRESSED");
};

Class ScreenEvent_obj::__mClass;

void ScreenEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.screen.ScreenEvent"), hx::TCanCast< ScreenEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ScreenEvent_obj::__boot()
{
	CLOSE_PRESSED= HX_CSTRING("screenClosePressed");
}

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
} // end namespace screen
