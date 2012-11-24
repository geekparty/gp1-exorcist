#ifndef INCLUDED_neash_filters_BlurFilter
#define INCLUDED_neash_filters_BlurFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/filters/BitmapFilter.h>
HX_DECLARE_CLASS2(neash,filters,BitmapFilter)
HX_DECLARE_CLASS2(neash,filters,BlurFilter)
namespace neash{
namespace filters{


class BlurFilter_obj : public ::neash::filters::BitmapFilter_obj{
	public:
		typedef ::neash::filters::BitmapFilter_obj super;
		typedef BlurFilter_obj OBJ_;
		BlurFilter_obj();
		Void __construct(hx::Null< Float >  __o_inBlurX,hx::Null< Float >  __o_inBlurY,hx::Null< int >  __o_inQuality);

	public:
		static hx::ObjectPtr< BlurFilter_obj > __new(hx::Null< Float >  __o_inBlurX,hx::Null< Float >  __o_inBlurY,hx::Null< int >  __o_inQuality);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BlurFilter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BlurFilter"); }

		virtual ::neash::filters::BitmapFilter clone( );

		int quality; /* REM */ 
		Float blurY; /* REM */ 
		Float blurX; /* REM */ 
};

} // end namespace neash
} // end namespace filters

#endif /* INCLUDED_neash_filters_BlurFilter */ 
