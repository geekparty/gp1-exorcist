#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
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
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_ru_geekparty_framework_AnimatedSprite
#include <ru/geekparty/framework/AnimatedSprite.h>
#endif
#ifndef INCLUDED_ru_geekparty_framework_Animation
#include <ru/geekparty/framework/Animation.h>
#endif
#ifndef INCLUDED_ru_geekparty_framework_IUpdatable
#include <ru/geekparty/framework/IUpdatable.h>
#endif
#ifndef INCLUDED_ru_geekparty_framework_TextureAtlas
#include <ru/geekparty/framework/TextureAtlas.h>
#endif
namespace ru{
namespace geekparty{
namespace framework{

Void AnimatedSprite_obj::__construct(Array< ::ru::geekparty::framework::TextureAtlas > atlases)
{
HX_STACK_PUSH("AnimatedSprite::new","ru/geekparty/framework/AnimatedSprite.hx",22);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	this->currentAtlasIndex = (int)-1;
	HX_STACK_LINE(26)
	this->atlases = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		while(((_g < atlases->length))){
			HX_STACK_LINE(27)
			::ru::geekparty::framework::TextureAtlas ta = atlases->__get(_g);		HX_STACK_VAR(ta,"ta");
			HX_STACK_LINE(27)
			++(_g);
			struct _Function_3_1{
				inline static Dynamic Block( ::ru::geekparty::framework::TextureAtlas &ta){
					HX_STACK_PUSH("*::closure","ru/geekparty/framework/AnimatedSprite.hx",29);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("atlas") , ta,false);
						__result->Add(HX_CSTRING("animation") , ::ru::geekparty::framework::Animation_obj::__new(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(29)
			this->atlases->__Field(HX_CSTRING("push"),true)(_Function_3_1::Block(ta));
		}
	}
}
;
	return null();
}

AnimatedSprite_obj::~AnimatedSprite_obj() { }

Dynamic AnimatedSprite_obj::__CreateEmpty() { return  new AnimatedSprite_obj; }
hx::ObjectPtr< AnimatedSprite_obj > AnimatedSprite_obj::__new(Array< ::ru::geekparty::framework::TextureAtlas > atlases)
{  hx::ObjectPtr< AnimatedSprite_obj > result = new AnimatedSprite_obj();
	result->__construct(atlases);
	return result;}

Dynamic AnimatedSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimatedSprite_obj > result = new AnimatedSprite_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *AnimatedSprite_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::ru::geekparty::framework::IUpdatable_obj)) return operator ::ru::geekparty::framework::IUpdatable_obj *();
	return super::__ToInterface(inType);
}

Void AnimatedSprite_obj::draw( ){
{
		HX_STACK_PUSH("AnimatedSprite::draw","ru/geekparty/framework/AnimatedSprite.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(76)
		if (((this->currentAtlasIndex >= (int)0))){
			HX_STACK_LINE(79)
			Dynamic atlasAnimPair = this->atlases->__GetItem(this->currentAtlasIndex);		HX_STACK_VAR(atlasAnimPair,"atlasAnimPair");
			HX_STACK_LINE(80)
			::ru::geekparty::framework::Animation animation = atlasAnimPair->__Field(HX_CSTRING("animation"),true);		HX_STACK_VAR(animation,"animation");
			HX_STACK_LINE(81)
			::String currentFrame = animation->_getCurrentFrame();		HX_STACK_VAR(currentFrame,"currentFrame");
			HX_STACK_LINE(83)
			if (((bool((currentFrame != null())) && bool(!(animation->valid))))){
				HX_STACK_LINE(85)
				animation->valid = true;
				HX_STACK_LINE(86)
				this->nmeGetGraphics()->clear();
				HX_STACK_LINE(88)
				::ru::geekparty::framework::TextureAtlas atlas = atlasAnimPair->__Field(HX_CSTRING("atlas"),true);		HX_STACK_VAR(atlas,"atlas");
				struct _Function_3_1{
					inline static Dynamic Block( ::String &currentFrame){
						HX_STACK_PUSH("*::closure","ru/geekparty/framework/AnimatedSprite.hx",90);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("rect") , currentFrame,false);
							__result->Add(HX_CSTRING("point") , ::neash::geom::Point_obj::__new((int)0,(int)0),false);
							__result->Add(HX_CSTRING("rotation") , 0.0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(89)
				atlas->DrawTiles(this->nmeGetGraphics(),Dynamic( Array_obj<Dynamic>::__new().Add(_Function_3_1::Block(currentFrame))),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimatedSprite_obj,draw,(void))

Void AnimatedSprite_obj::update( Float dt){
{
		HX_STACK_PUSH("AnimatedSprite::update","ru/geekparty/framework/AnimatedSprite.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dt,"dt");
		HX_STACK_LINE(62)
		if (((this->currentAtlasIndex >= (int)0))){
			HX_STACK_LINE(64)
			this->atlases->__GetItem(this->currentAtlasIndex)->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("update"),true)(dt);
			HX_STACK_LINE(65)
			if (((this->atlases->__GetItem(this->currentAtlasIndex)->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("state"),true) == null()))){
				HX_STACK_LINE(66)
				this->currentAtlasIndex = (int)-1;
			}
		}
		HX_STACK_LINE(71)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,update,(void))

Void AnimatedSprite_obj::playAnimation( ::String name,Dynamic onComplete){
{
		HX_STACK_PUSH("AnimatedSprite::playAnimation","ru/geekparty/framework/AnimatedSprite.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(onComplete,"onComplete");
		HX_STACK_LINE(40)
		this->currentAtlasIndex = (int)-1;
		HX_STACK_LINE(42)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = this->atlases;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(43)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(43)
				Dynamic ta = _g1->__GetItem(_g);		HX_STACK_VAR(ta,"ta");
				HX_STACK_LINE(43)
				++(_g);
				HX_STACK_LINE(45)
				if ((ta->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("animations"),true)->__Field(HX_CSTRING("exists"),true)(name))){
					HX_STACK_LINE(47)
					ta->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("playAnimation"),true)(name,onComplete);
					HX_STACK_LINE(48)
					this->currentAtlasIndex = i;
				}
				else{
					HX_STACK_LINE(51)
					ta->__Field(HX_CSTRING("animation"),true)->__FieldRef(HX_CSTRING("state")) = null();
				}
				HX_STACK_LINE(55)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimatedSprite_obj,playAnimation,(void))

Void AnimatedSprite_obj::addAnimation( ::String name,int atlasIndex,Array< ::String > frames,Dynamic __o_fps,Dynamic __o_loop){
Dynamic fps = __o_fps.Default(12);
Dynamic loop = __o_loop.Default(false);
	HX_STACK_PUSH("AnimatedSprite::addAnimation","ru/geekparty/framework/AnimatedSprite.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(atlasIndex,"atlasIndex");
	HX_STACK_ARG(frames,"frames");
	HX_STACK_ARG(fps,"fps");
	HX_STACK_ARG(loop,"loop");
{
		HX_STACK_LINE(34)
		this->atlases->__GetItem(atlasIndex)->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("addAnimation"),true)(name,frames,fps,loop);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(AnimatedSprite_obj,addAnimation,(void))


AnimatedSprite_obj::AnimatedSprite_obj()
{
}

void AnimatedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatedSprite);
	HX_MARK_MEMBER_NAME(currentAtlasIndex,"currentAtlasIndex");
	HX_MARK_MEMBER_NAME(atlases,"atlases");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimatedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentAtlasIndex,"currentAtlasIndex");
	HX_VISIT_MEMBER_NAME(atlases,"atlases");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AnimatedSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"atlases") ) { return atlases; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return playAnimation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentAtlasIndex") ) { return currentAtlasIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimatedSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"atlases") ) { atlases=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentAtlasIndex") ) { currentAtlasIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimatedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentAtlasIndex"));
	outFields->push(HX_CSTRING("atlases"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("playAnimation"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("currentAtlasIndex"),
	HX_CSTRING("atlases"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimatedSprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimatedSprite_obj::__mClass,"__mClass");
};

Class AnimatedSprite_obj::__mClass;

void AnimatedSprite_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.framework.AnimatedSprite"), hx::TCanCast< AnimatedSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AnimatedSprite_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace framework
