#ifndef INCLUDED_format_swf_data_DisplayAttributes
#define INCLUDED_format_swf_data_DisplayAttributes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(format,swf,data,DisplayAttributes)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,filters,BitmapFilter)
HX_DECLARE_CLASS2(neash,geom,ColorTransform)
HX_DECLARE_CLASS2(neash,geom,Matrix)
namespace format{
namespace swf{
namespace data{


class DisplayAttributes_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DisplayAttributes_obj OBJ_;
		DisplayAttributes_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DisplayAttributes_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DisplayAttributes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DisplayAttributes"); }

		virtual ::format::swf::data::DisplayAttributes clone( );
		Dynamic clone_dyn();

		virtual bool apply( ::neash::display::DisplayObject object);
		Dynamic apply_dyn();

		int symbolID; /* REM */ 
		Dynamic ratio; /* REM */ 
		::String name; /* REM */ 
		::neash::geom::Matrix matrix; /* REM */ 
		int frame; /* REM */ 
		Array< ::neash::filters::BitmapFilter > filters; /* REM */ 
		::neash::geom::ColorTransform colorTransform; /* REM */ 
};

} // end namespace format
} // end namespace swf
} // end namespace data

#endif /* INCLUDED_format_swf_data_DisplayAttributes */ 
