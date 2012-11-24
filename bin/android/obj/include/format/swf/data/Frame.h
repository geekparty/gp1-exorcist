#ifndef INCLUDED_format_swf_data_Frame
#define INCLUDED_format_swf_data_Frame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IntHash)
HX_DECLARE_CLASS3(format,swf,data,Frame)
HX_DECLARE_CLASS3(format,swf,symbol,Symbol)
HX_DECLARE_CLASS2(neash,filters,BitmapFilter)
HX_DECLARE_CLASS2(neash,geom,ColorTransform)
HX_DECLARE_CLASS2(neash,geom,Matrix)
namespace format{
namespace swf{
namespace data{


class Frame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Frame_obj OBJ_;
		Frame_obj();
		Void __construct(::format::swf::data::Frame previous);

	public:
		static hx::ObjectPtr< Frame_obj > __new(::format::swf::data::Frame previous);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Frame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Frame"); }

		virtual Void remove( int depth);
		Dynamic remove_dyn();

		virtual Void place( int symbolID,::format::swf::symbol::Symbol symbol,int depth,::neash::geom::Matrix matrix,::neash::geom::ColorTransform colorTransform,Dynamic ratio,::String name,Array< ::neash::filters::BitmapFilter > filters);
		Dynamic place_dyn();

		virtual Void move( int depth,::neash::geom::Matrix matrix,::neash::geom::ColorTransform colorTransform,Dynamic ratio);
		Dynamic move_dyn();

		virtual ::IntHash copyObjectSet( );
		Dynamic copyObjectSet_dyn();

		::IntHash objects; /* REM */ 
		int frame; /* REM */ 
};

} // end namespace format
} // end namespace swf
} // end namespace data

#endif /* INCLUDED_format_swf_data_Frame */ 
