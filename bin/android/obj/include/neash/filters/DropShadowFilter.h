#ifndef INCLUDED_neash_filters_DropShadowFilter
#define INCLUDED_neash_filters_DropShadowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/filters/BitmapFilter.h>
HX_DECLARE_CLASS2(neash,filters,BitmapFilter)
HX_DECLARE_CLASS2(neash,filters,DropShadowFilter)
namespace neash{
namespace filters{


class DropShadowFilter_obj : public ::neash::filters::BitmapFilter_obj{
	public:
		typedef ::neash::filters::BitmapFilter_obj super;
		typedef DropShadowFilter_obj OBJ_;
		DropShadowFilter_obj();
		Void __construct(hx::Null< Float >  __o_in_distance,hx::Null< Float >  __o_in_angle,hx::Null< int >  __o_in_color,hx::Null< Float >  __o_in_alpha,hx::Null< Float >  __o_in_blurX,hx::Null< Float >  __o_in_blurY,hx::Null< Float >  __o_in_strength,hx::Null< int >  __o_in_quality,hx::Null< bool >  __o_in_inner,hx::Null< bool >  __o_in_knockout,hx::Null< bool >  __o_in_hideObject);

	public:
		static hx::ObjectPtr< DropShadowFilter_obj > __new(hx::Null< Float >  __o_in_distance,hx::Null< Float >  __o_in_angle,hx::Null< int >  __o_in_color,hx::Null< Float >  __o_in_alpha,hx::Null< Float >  __o_in_blurX,hx::Null< Float >  __o_in_blurY,hx::Null< Float >  __o_in_strength,hx::Null< int >  __o_in_quality,hx::Null< bool >  __o_in_inner,hx::Null< bool >  __o_in_knockout,hx::Null< bool >  __o_in_hideObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DropShadowFilter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DropShadowFilter"); }

		virtual ::neash::filters::BitmapFilter clone( );

		Float strength; /* REM */ 
		int quality; /* REM */ 
		bool knockout; /* REM */ 
		bool inner; /* REM */ 
		bool hideObject; /* REM */ 
		Float distance; /* REM */ 
		int color; /* REM */ 
		Float blurY; /* REM */ 
		Float blurX; /* REM */ 
		Float angle; /* REM */ 
		Float alpha; /* REM */ 
};

} // end namespace neash
} // end namespace filters

#endif /* INCLUDED_neash_filters_DropShadowFilter */ 