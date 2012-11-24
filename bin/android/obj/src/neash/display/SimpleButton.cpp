#include <hxcpp.h>

#ifndef INCLUDED_neash_Loader
#include <neash/Loader.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_SimpleButton
#include <neash/display/SimpleButton.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
namespace neash{
namespace display{

Void SimpleButton_obj::__construct(::neash::display::DisplayObject upState,::neash::display::DisplayObject overState,::neash::display::DisplayObject downState,::neash::display::DisplayObject hitTestState)
{
HX_STACK_PUSH("SimpleButton::new","neash/display/SimpleButton.hx",22);
{
	HX_STACK_LINE(23)
	super::__construct(::neash::display::SimpleButton_obj::nme_simple_button_create(),HX_CSTRING("SimpleButton"));
	HX_STACK_LINE(24)
	this->nmeSetUpState(upState);
	HX_STACK_LINE(25)
	this->nmeSetOverState(overState);
	HX_STACK_LINE(26)
	this->nmeSetDownState(downState);
	HX_STACK_LINE(27)
	this->nmeSetHitTestState(hitTestState);
}
;
	return null();
}

SimpleButton_obj::~SimpleButton_obj() { }

Dynamic SimpleButton_obj::__CreateEmpty() { return  new SimpleButton_obj; }
hx::ObjectPtr< SimpleButton_obj > SimpleButton_obj::__new(::neash::display::DisplayObject upState,::neash::display::DisplayObject overState,::neash::display::DisplayObject downState,::neash::display::DisplayObject hitTestState)
{  hx::ObjectPtr< SimpleButton_obj > result = new SimpleButton_obj();
	result->__construct(upState,overState,downState,hitTestState);
	return result;}

Dynamic SimpleButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleButton_obj > result = new SimpleButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::neash::display::DisplayObject SimpleButton_obj::nmeSetUpState( ::neash::display::DisplayObject inState){
	HX_STACK_PUSH("SimpleButton::nmeSetUpState","neash/display/SimpleButton.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inState,"inState");
	HX_STACK_LINE(78)
	this->upState = inState;
	HX_STACK_LINE(79)
	::neash::display::SimpleButton_obj::nme_simple_button_set_state(this->nmeHandle,(int)0,(  (((inState == null()))) ? Dynamic(null()) : Dynamic(inState->nmeHandle) ));
	HX_STACK_LINE(80)
	return inState;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,nmeSetUpState,return )

::neash::display::DisplayObject SimpleButton_obj::nmeSetOverState( ::neash::display::DisplayObject inState){
	HX_STACK_PUSH("SimpleButton::nmeSetOverState","neash/display/SimpleButton.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inState,"inState");
	HX_STACK_LINE(70)
	this->overState = inState;
	HX_STACK_LINE(71)
	::neash::display::SimpleButton_obj::nme_simple_button_set_state(this->nmeHandle,(int)2,(  (((inState == null()))) ? Dynamic(null()) : Dynamic(inState->nmeHandle) ));
	HX_STACK_LINE(72)
	return inState;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,nmeSetOverState,return )

::neash::display::DisplayObject SimpleButton_obj::nmeSetHitTestState( ::neash::display::DisplayObject inState){
	HX_STACK_PUSH("SimpleButton::nmeSetHitTestState","neash/display/SimpleButton.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inState,"inState");
	HX_STACK_LINE(62)
	this->hitTestState = inState;
	HX_STACK_LINE(63)
	::neash::display::SimpleButton_obj::nme_simple_button_set_state(this->nmeHandle,(int)3,(  (((inState == null()))) ? Dynamic(null()) : Dynamic(inState->nmeHandle) ));
	HX_STACK_LINE(64)
	return inState;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,nmeSetHitTestState,return )

bool SimpleButton_obj::nmeSetHandCursor( bool inVal){
	HX_STACK_PUSH("SimpleButton::nmeSetHandCursor","neash/display/SimpleButton.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(55)
	::neash::display::SimpleButton_obj::nme_simple_button_set_hand_cursor(this->nmeHandle,inVal);
	HX_STACK_LINE(56)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,nmeSetHandCursor,return )

bool SimpleButton_obj::nmeGetHandCursor( ){
	HX_STACK_PUSH("SimpleButton::nmeGetHandCursor","neash/display/SimpleButton.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	return ::neash::display::SimpleButton_obj::nme_simple_button_get_hand_cursor(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,nmeGetHandCursor,return )

bool SimpleButton_obj::nmeSetEnabled( bool inVal){
	HX_STACK_PUSH("SimpleButton::nmeSetEnabled","neash/display/SimpleButton.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(47)
	::neash::display::SimpleButton_obj::nme_simple_button_set_enabled(this->nmeHandle,inVal);
	HX_STACK_LINE(48)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,nmeSetEnabled,return )

bool SimpleButton_obj::nmeGetEnabled( ){
	HX_STACK_PUSH("SimpleButton::nmeGetEnabled","neash/display/SimpleButton.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(44)
	return ::neash::display::SimpleButton_obj::nme_simple_button_get_enabled(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,nmeGetEnabled,return )

::neash::display::DisplayObject SimpleButton_obj::nmeSetDownState( ::neash::display::DisplayObject inState){
	HX_STACK_PUSH("SimpleButton::nmeSetDownState","neash/display/SimpleButton.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inState,"inState");
	HX_STACK_LINE(38)
	this->downState = inState;
	HX_STACK_LINE(39)
	::neash::display::SimpleButton_obj::nme_simple_button_set_state(this->nmeHandle,(int)1,(  (((inState == null()))) ? Dynamic(null()) : Dynamic(inState->nmeHandle) ));
	HX_STACK_LINE(40)
	return inState;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,nmeSetDownState,return )

Dynamic SimpleButton_obj::nme_simple_button_set_state;

Dynamic SimpleButton_obj::nme_simple_button_get_enabled;

Dynamic SimpleButton_obj::nme_simple_button_set_enabled;

Dynamic SimpleButton_obj::nme_simple_button_get_hand_cursor;

Dynamic SimpleButton_obj::nme_simple_button_set_hand_cursor;

Dynamic SimpleButton_obj::nme_simple_button_create;


SimpleButton_obj::SimpleButton_obj()
{
}

void SimpleButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleButton);
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(upState,"upState");
	HX_MARK_MEMBER_NAME(overState,"overState");
	HX_MARK_MEMBER_NAME(hitTestState,"hitTestState");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(downState,"downState");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(upState,"upState");
	HX_VISIT_MEMBER_NAME(overState,"overState");
	HX_VISIT_MEMBER_NAME(hitTestState,"hitTestState");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(downState,"downState");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"upState") ) { return upState; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return inCallProp ? nmeGetEnabled() : enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overState") ) { return overState; }
		if (HX_FIELD_EQ(inName,"downState") ) { return downState; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { return hitTestState; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nmeSetUpState") ) { return nmeSetUpState_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetEnabled") ) { return nmeSetEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetEnabled") ) { return nmeGetEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return inCallProp ? nmeGetHandCursor() : useHandCursor; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeSetOverState") ) { return nmeSetOverState_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetDownState") ) { return nmeSetDownState_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeSetHandCursor") ) { return nmeSetHandCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetHandCursor") ) { return nmeGetHandCursor_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeSetHitTestState") ) { return nmeSetHitTestState_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_simple_button_create") ) { return nme_simple_button_create; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_simple_button_set_state") ) { return nme_simple_button_set_state; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_simple_button_get_enabled") ) { return nme_simple_button_get_enabled; }
		if (HX_FIELD_EQ(inName,"nme_simple_button_set_enabled") ) { return nme_simple_button_set_enabled; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"nme_simple_button_get_hand_cursor") ) { return nme_simple_button_get_hand_cursor; }
		if (HX_FIELD_EQ(inName,"nme_simple_button_set_hand_cursor") ) { return nme_simple_button_set_hand_cursor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp) return nmeSetUpState(inValue);upState=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp) return nmeSetEnabled(inValue);enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overState") ) { if (inCallProp) return nmeSetOverState(inValue);overState=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp) return nmeSetDownState(inValue);downState=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { if (inCallProp) return nmeSetHitTestState(inValue);hitTestState=inValue.Cast< ::neash::display::DisplayObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { if (inCallProp) return nmeSetHandCursor(inValue);useHandCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_simple_button_create") ) { nme_simple_button_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_simple_button_set_state") ) { nme_simple_button_set_state=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_simple_button_get_enabled") ) { nme_simple_button_get_enabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_simple_button_set_enabled") ) { nme_simple_button_set_enabled=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"nme_simple_button_get_hand_cursor") ) { nme_simple_button_get_hand_cursor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_simple_button_set_hand_cursor") ) { nme_simple_button_set_hand_cursor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useHandCursor"));
	outFields->push(HX_CSTRING("upState"));
	outFields->push(HX_CSTRING("overState"));
	outFields->push(HX_CSTRING("hitTestState"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("downState"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_simple_button_set_state"),
	HX_CSTRING("nme_simple_button_get_enabled"),
	HX_CSTRING("nme_simple_button_set_enabled"),
	HX_CSTRING("nme_simple_button_get_hand_cursor"),
	HX_CSTRING("nme_simple_button_set_hand_cursor"),
	HX_CSTRING("nme_simple_button_create"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("nmeSetUpState"),
	HX_CSTRING("nmeSetOverState"),
	HX_CSTRING("nmeSetHitTestState"),
	HX_CSTRING("nmeSetHandCursor"),
	HX_CSTRING("nmeGetHandCursor"),
	HX_CSTRING("nmeSetEnabled"),
	HX_CSTRING("nmeGetEnabled"),
	HX_CSTRING("nmeSetDownState"),
	HX_CSTRING("useHandCursor"),
	HX_CSTRING("upState"),
	HX_CSTRING("overState"),
	HX_CSTRING("hitTestState"),
	HX_CSTRING("enabled"),
	HX_CSTRING("downState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::nme_simple_button_set_state,"nme_simple_button_set_state");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::nme_simple_button_get_enabled,"nme_simple_button_get_enabled");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::nme_simple_button_set_enabled,"nme_simple_button_set_enabled");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::nme_simple_button_get_hand_cursor,"nme_simple_button_get_hand_cursor");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::nme_simple_button_set_hand_cursor,"nme_simple_button_set_hand_cursor");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::nme_simple_button_create,"nme_simple_button_create");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::nme_simple_button_set_state,"nme_simple_button_set_state");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::nme_simple_button_get_enabled,"nme_simple_button_get_enabled");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::nme_simple_button_set_enabled,"nme_simple_button_set_enabled");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::nme_simple_button_get_hand_cursor,"nme_simple_button_get_hand_cursor");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::nme_simple_button_set_hand_cursor,"nme_simple_button_set_hand_cursor");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::nme_simple_button_create,"nme_simple_button_create");
};

Class SimpleButton_obj::__mClass;

void SimpleButton_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.display.SimpleButton"), hx::TCanCast< SimpleButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SimpleButton_obj::__boot()
{
	nme_simple_button_set_state= ::neash::Loader_obj::load(HX_CSTRING("nme_simple_button_set_state"),(int)3);
	nme_simple_button_get_enabled= ::neash::Loader_obj::load(HX_CSTRING("nme_simple_button_get_enabled"),(int)1);
	nme_simple_button_set_enabled= ::neash::Loader_obj::load(HX_CSTRING("nme_simple_button_set_enabled"),(int)2);
	nme_simple_button_get_hand_cursor= ::neash::Loader_obj::load(HX_CSTRING("nme_simple_button_get_hand_cursor"),(int)1);
	nme_simple_button_set_hand_cursor= ::neash::Loader_obj::load(HX_CSTRING("nme_simple_button_set_hand_cursor"),(int)2);
	nme_simple_button_create= ::neash::Loader_obj::load(HX_CSTRING("nme_simple_button_create"),(int)0);
}

} // end namespace neash
} // end namespace display
