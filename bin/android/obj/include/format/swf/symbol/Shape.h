#ifndef INCLUDED_format_swf_symbol_Shape
#define INCLUDED_format_swf_symbol_Shape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(format,SWF)
HX_DECLARE_CLASS3(format,swf,data,SWFStream)
HX_DECLARE_CLASS3(format,swf,symbol,Shape)
HX_DECLARE_CLASS3(format,swf,symbol,ShapeEdge)
HX_DECLARE_CLASS2(neash,display,Graphics)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
namespace format{
namespace swf{
namespace symbol{


class Shape_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shape_obj OBJ_;
		Shape_obj();
		Void __construct(::format::SWF swf,::format::swf::data::SWFStream stream,int version);

	public:
		static hx::ObjectPtr< Shape_obj > __new(::format::SWF swf,::format::swf::data::SWFStream stream,int version);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Shape_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Shape"); }

		virtual bool render( ::neash::display::Graphics graphics);
		Dynamic render_dyn();

		virtual Dynamic readLineStyles( ::format::swf::data::SWFStream stream,int version);
		Dynamic readLineStyles_dyn();

		virtual Dynamic readFillStyles( ::format::swf::data::SWFStream stream,int version);
		Dynamic readFillStyles_dyn();

		virtual Void flushCommands( Dynamic edges,Array< ::format::swf::symbol::ShapeEdge > fills);
		Dynamic flushCommands_dyn();

		bool waitingLoader; /* REM */ 
		::format::SWF swf; /* REM */ 
		bool hasScaled; /* REM */ 
		bool hasNonScaled; /* REM */ 
		Dynamic fillStyles; /* REM */ 
		::neash::geom::Rectangle edgeBounds; /* REM */ 
		Dynamic commands; /* REM */ 
		::neash::geom::Rectangle bounds; /* REM */ 
		bool hasGradientFill; /* REM */ 
		bool hasCurves; /* REM */ 
		bool hasBitmapRepeat; /* REM */ 
		static int ftSolid; /* REM */ 
		static int ftLinear; /* REM */ 
		static int ftRadial; /* REM */ 
		static int ftRadialF; /* REM */ 
		static int ftBitmapRepeatSmooth; /* REM */ 
		static int ftBitmapClippedSmooth; /* REM */ 
		static int ftBitmapRepeat; /* REM */ 
		static int ftBitmapClipped; /* REM */ 
};

} // end namespace format
} // end namespace swf
} // end namespace symbol

#endif /* INCLUDED_format_swf_symbol_Shape */ 
