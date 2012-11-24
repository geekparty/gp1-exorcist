#ifndef INCLUDED_neash_filters_GlowFilter
#define INCLUDED_neash_filters_GlowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/filters/DropShadowFilter.h>
HX_DECLARE_CLASS2(neash,filters,BitmapFilter)
HX_DECLARE_CLASS2(neash,filters,DropShadowFilter)
HX_DECLARE_CLASS2(neash,filters,GlowFilter)
namespace neash{
namespace filters{


class GlowFilter_obj : public ::neash::filters::DropShadowFilter_obj{
	public:
		typedef ::neash::filters::DropShadowFilter_obj super;
		typedef GlowFilter_obj OBJ_;
		GlowFilter_obj();
		Void __construct(hx::Null< int >  __o_in_color,hx::Null< Float >  __o_in_alpha,hx::Null< Float >  __o_in_blurX,hx::Null< Float >  __o_in_blurY,hx::Null< Float >  __o_in_strength,hx::Null< int >  __o_in_quality,hx::Null< bool >  __o_in_inner,hx::Null< bool >  __o_in_knockout);

	public:
		static hx::ObjectPtr< GlowFilter_obj > __new(hx::Null< int >  __o_in_color,hx::Null< Float >  __o_in_alpha,hx::Null< Float >  __o_in_blurX,hx::Null< Float >  __o_in_blurY,hx::Null< Float >  __o_in_strength,hx::Null< int >  __o_in_quality,hx::Null< bool >  __o_in_inner,hx::Null< bool >  __o_in_knockout);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GlowFilter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GlowFilter"); }

};

} // end namespace neash
} // end namespace filters

#endif /* INCLUDED_neash_filters_GlowFilter */ 
