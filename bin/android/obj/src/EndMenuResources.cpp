#include <hxcpp.h>

#ifndef INCLUDED_EndMenuResources
#include <EndMenuResources.h>
#endif
#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_format_SWF
#include <format/SWF.h>
#endif
#ifndef INCLUDED_format_swf_MovieClip
#include <format/swf/MovieClip.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Sprite
#include <format/swf/symbol/Sprite.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Symbol
#include <format/swf/symbol/Symbol.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_neash_utils_IMemoryRange
#include <neash/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void EndMenuResources_obj::__construct()
{
HX_STACK_PUSH("EndMenuResources::new","EndMenuResources.hx",13);
{
	HX_STACK_LINE(15)
	if ((!(::format::SWF_obj::instances->exists(HX_CSTRING("libraries/menu.swf"))))){
		HX_STACK_LINE(15)
		::format::SWF_obj::instances->set(HX_CSTRING("libraries/menu.swf"),::format::SWF_obj::__new(::nme::installer::Assets_obj::getBytes(HX_CSTRING("libraries/menu.swf"))));
	}
	HX_STACK_LINE(21)
	::format::SWF swf = ::format::SWF_obj::instances->get(HX_CSTRING("libraries/menu.swf"));		HX_STACK_VAR(swf,"swf");
	HX_STACK_LINE(23)
	{
		::format::swf::symbol::Symbol _switch_1 = (swf->getSymbol((int)25));
		switch((_switch_1)->GetIndex()){
			case 2: {
				::format::swf::symbol::Sprite data = _switch_1->__Param(0);
{
					HX_STACK_LINE(25)
					super::__construct(data);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(29)
				super::__construct(null());
			}
		}
	}
}
;
	return null();
}

EndMenuResources_obj::~EndMenuResources_obj() { }

Dynamic EndMenuResources_obj::__CreateEmpty() { return  new EndMenuResources_obj; }
hx::ObjectPtr< EndMenuResources_obj > EndMenuResources_obj::__new()
{  hx::ObjectPtr< EndMenuResources_obj > result = new EndMenuResources_obj();
	result->__construct();
	return result;}

Dynamic EndMenuResources_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EndMenuResources_obj > result = new EndMenuResources_obj();
	result->__construct();
	return result;}


EndMenuResources_obj::EndMenuResources_obj()
{
}

void EndMenuResources_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EndMenuResources);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EndMenuResources_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EndMenuResources_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic EndMenuResources_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EndMenuResources_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EndMenuResources_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EndMenuResources_obj::__mClass,"__mClass");
};

Class EndMenuResources_obj::__mClass;

void EndMenuResources_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("EndMenuResources"), hx::TCanCast< EndMenuResources_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EndMenuResources_obj::__boot()
{
}

