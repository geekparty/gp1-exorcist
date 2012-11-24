#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_ru_geekparty_framework_Animation
#include <ru/geekparty/framework/Animation.h>
#endif
#ifndef INCLUDED_ru_geekparty_framework_IUpdatable
#include <ru/geekparty/framework/IUpdatable.h>
#endif
namespace ru{
namespace geekparty{
namespace framework{

Void Animation_obj::__construct()
{
HX_STACK_PUSH("Animation::new","ru/geekparty/framework/Animation.hx",33);
{
	HX_STACK_LINE(34)
	this->animations = ::Hash_obj::__new();
	HX_STACK_LINE(35)
	this->valid = true;
}
;
	return null();
}

Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new()
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct();
	return result;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct();
	return result;}

hx::Object *Animation_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::ru::geekparty::framework::IUpdatable_obj)) return operator ::ru::geekparty::framework::IUpdatable_obj *();
	return super::__ToInterface(inType);
}

Void Animation_obj::update( Float dt){
{
		HX_STACK_PUSH("Animation::update","ru/geekparty/framework/Animation.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dt,"dt");
		HX_STACK_LINE(66)
		if (((this->state == null()))){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(68)
		hx::AddEq(this->state->__FieldRef(HX_CSTRING("timer")),dt);
		HX_STACK_LINE(70)
		int frame = ::Math_obj::floor((this->state->__Field(HX_CSTRING("timer"),true) * this->state->__Field(HX_CSTRING("currentAnimation"),true)->__Field(HX_CSTRING("fps"),true)));		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(71)
		if (((frame > this->state->__Field(HX_CSTRING("currentFrame"),true)))){
			HX_STACK_LINE(73)
			if (((frame > (this->state->__Field(HX_CSTRING("currentAnimation"),true)->__Field(HX_CSTRING("frames"),true)->__Field(HX_CSTRING("length"),true) - (int)1)))){
				HX_STACK_LINE(74)
				if ((this->state->__Field(HX_CSTRING("currentAnimation"),true)->__Field(HX_CSTRING("loop"),true))){
					HX_STACK_LINE(77)
					this->state->__FieldRef(HX_CSTRING("currentFrame")) = (int)0;
					HX_STACK_LINE(78)
					this->state->__FieldRef(HX_CSTRING("timer")) = 0.0;
				}
				else{
					HX_STACK_LINE(82)
					if (((this->state->__Field(HX_CSTRING("completeCb"),true) != null()))){
						HX_STACK_LINE(83)
						this->state->__Field(HX_CSTRING("completeCb"),true)();
					}
					HX_STACK_LINE(86)
					this->state = null();
					HX_STACK_LINE(87)
					return null();
				}
			}
			else{
				HX_STACK_LINE(91)
				this->state->__FieldRef(HX_CSTRING("currentFrame")) = frame;
			}
			HX_STACK_LINE(94)
			this->valid = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,update,(void))

::String Animation_obj::_getCurrentFrame( ){
	HX_STACK_PUSH("Animation::_getCurrentFrame","ru/geekparty/framework/Animation.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	if (((this->state == null()))){
		HX_STACK_LINE(58)
		return null();
	}
	HX_STACK_LINE(59)
	if (((this->state->__Field(HX_CSTRING("currentFrame"),true) < (int)0))){
		HX_STACK_LINE(59)
		return null();
	}
	HX_STACK_LINE(61)
	return this->state->__Field(HX_CSTRING("currentAnimation"),true)->__Field(HX_CSTRING("frames"),true)->__GetItem(this->state->__Field(HX_CSTRING("currentFrame"),true));
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,_getCurrentFrame,return )

Void Animation_obj::playAnimation( ::String name,Dynamic onComplete){
{
		HX_STACK_PUSH("Animation::playAnimation","ru/geekparty/framework/Animation.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(onComplete,"onComplete");
		struct _Function_1_1{
			inline static Dynamic Block( ::ru::geekparty::framework::Animation_obj *__this,::String &name,Dynamic &onComplete){
				HX_STACK_PUSH("*::closure","ru/geekparty/framework/Animation.hx",47);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("currentAnimation") , __this->animations->get(name),false);
					__result->Add(HX_CSTRING("timer") , 0.0,false);
					__result->Add(HX_CSTRING("currentFrame") , (int)-1,false);
					__result->Add(HX_CSTRING("completeCb") , onComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		this->state = _Function_1_1::Block(this,name,onComplete);
		HX_STACK_LINE(53)
		this->update(0.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,playAnimation,(void))

Void Animation_obj::addAnimation( ::String name,Array< ::String > frames,Dynamic __o_fps,Dynamic __o_loop){
Dynamic fps = __o_fps.Default(12);
Dynamic loop = __o_loop.Default(false);
	HX_STACK_PUSH("Animation::addAnimation","ru/geekparty/framework/Animation.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(frames,"frames");
	HX_STACK_ARG(fps,"fps");
	HX_STACK_ARG(loop,"loop");
{
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &frames,Dynamic &fps,Dynamic &loop){
				HX_STACK_PUSH("*::closure","ru/geekparty/framework/Animation.hx",40);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("frames") , frames,false);
					__result->Add(HX_CSTRING("fps") , fps,false);
					__result->Add(HX_CSTRING("loop") , loop,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(39)
		this->animations->set(name,_Function_1_1::Block(frames,fps,loop));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Animation_obj,addAnimation,(void))


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(valid,"valid");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	HX_VISIT_MEMBER_NAME(valid,"valid");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(animations,"animations");
}

Dynamic Animation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { return valid; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return inCallProp ? _getCurrentFrame() : currentFrame; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return playAnimation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_getCurrentFrame") ) { return _getCurrentFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { valid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentFrame"));
	outFields->push(HX_CSTRING("valid"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("animations"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("_getCurrentFrame"),
	HX_CSTRING("playAnimation"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("currentFrame"),
	HX_CSTRING("valid"),
	HX_CSTRING("state"),
	HX_CSTRING("animations"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.framework.Animation"), hx::TCanCast< Animation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Animation_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace framework
