#ifndef INCLUDED_ru_geekparty_framework_TextureAtlas
#define INCLUDED_ru_geekparty_framework_TextureAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,Graphics)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,Tilesheet)
HX_DECLARE_CLASS3(ru,geekparty,framework,TextureAtlas)
namespace ru{
namespace geekparty{
namespace framework{


class TextureAtlas_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureAtlas_obj OBJ_;
		TextureAtlas_obj();
		Void __construct(::neash::display::BitmapData image,::String framesDescJson);

	public:
		static hx::ObjectPtr< TextureAtlas_obj > __new(::neash::display::BitmapData image,::String framesDescJson);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureAtlas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureAtlas"); }

		virtual Void DrawTiles( ::neash::display::Graphics graphics,Dynamic jobs,Dynamic smooth);
		Dynamic DrawTiles_dyn();

		::Hash frameName2IndexMap; /* REM */ 
		::Hash frames; /* REM */ 
		::neash::display::Tilesheet tilesheet; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace framework

#endif /* INCLUDED_ru_geekparty_framework_TextureAtlas */ 
