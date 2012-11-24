#ifndef INCLUDED_format_swf_symbol_Bitmap
#define INCLUDED_format_swf_symbol_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(format,swf,data,SWFStream)
HX_DECLARE_CLASS3(format,swf,symbol,Bitmap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,utils,ByteArray)
HX_DECLARE_CLASS2(neash,utils,IDataInput)
HX_DECLARE_CLASS2(neash,utils,IMemoryRange)
namespace format{
namespace swf{
namespace symbol{


class Bitmap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();
		Void __construct(::format::swf::data::SWFStream stream,bool lossless,int version);

	public:
		static hx::ObjectPtr< Bitmap_obj > __new(::format::swf::data::SWFStream stream,bool lossless,int version);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Bitmap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Bitmap"); }

		virtual ::neash::display::BitmapData createWithAlpha( ::neash::display::BitmapData data,::neash::utils::ByteArray alpha);
		Dynamic createWithAlpha_dyn();

		::neash::display::BitmapData bitmapData; /* REM */ 
};

} // end namespace format
} // end namespace swf
} // end namespace symbol

#endif /* INCLUDED_format_swf_symbol_Bitmap */ 
