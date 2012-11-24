#include <hxcpp.h>

#ifndef INCLUDED_neash_filters_BitmapFilter
#include <neash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_neash_filters_DropShadowFilter
#include <neash/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_neash_filters_GlowFilter
#include <neash/filters/GlowFilter.h>
#endif
namespace neash{
namespace filters{

Void GlowFilter_obj::__construct(hx::Null< int >  __o_in_color,hx::Null< Float >  __o_in_alpha,hx::Null< Float >  __o_in_blurX,hx::Null< Float >  __o_in_blurY,hx::Null< Float >  __o_in_strength,hx::Null< int >  __o_in_quality,hx::Null< bool >  __o_in_inner,hx::Null< bool >  __o_in_knockout)
{
HX_STACK_PUSH("GlowFilter::new","neash/filters/GlowFilter.hx",8);
int in_color = __o_in_color.Default(0);
Float in_alpha = __o_in_alpha.Default(1.0);
Float in_blurX = __o_in_blurX.Default(6.0);
Float in_blurY = __o_in_blurY.Default(6.0);
Float in_strength = __o_in_strength.Default(2.0);
int in_quality = __o_in_quality.Default(1);
bool in_inner = __o_in_inner.Default(false);
bool in_knockout = __o_in_knockout.Default(false);
{
	HX_STACK_LINE(8)
	super::__construct((int)0,(int)0,in_color,in_alpha,in_blurX,in_blurY,in_strength,in_quality,in_inner,in_knockout,false);
}
;
	return null();
}

GlowFilter_obj::~GlowFilter_obj() { }

Dynamic GlowFilter_obj::__CreateEmpty() { return  new GlowFilter_obj; }
hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__new(hx::Null< int >  __o_in_color,hx::Null< Float >  __o_in_alpha,hx::Null< Float >  __o_in_blurX,hx::Null< Float >  __o_in_blurY,hx::Null< Float >  __o_in_strength,hx::Null< int >  __o_in_quality,hx::Null< bool >  __o_in_inner,hx::Null< bool >  __o_in_knockout)
{  hx::ObjectPtr< GlowFilter_obj > result = new GlowFilter_obj();
	result->__construct(__o_in_color,__o_in_alpha,__o_in_blurX,__o_in_blurY,__o_in_strength,__o_in_quality,__o_in_inner,__o_in_knockout);
	return result;}

Dynamic GlowFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GlowFilter_obj > result = new GlowFilter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}


GlowFilter_obj::GlowFilter_obj()
{
}

void GlowFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlowFilter);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GlowFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GlowFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GlowFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GlowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
};

Class GlowFilter_obj::__mClass;

void GlowFilter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.filters.GlowFilter"), hx::TCanCast< GlowFilter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GlowFilter_obj::__boot()
{
}

} // end namespace neash
} // end namespace filters
