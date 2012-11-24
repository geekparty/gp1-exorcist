#ifndef INCLUDED_format_swf_FrameLabel
#define INCLUDED_format_swf_FrameLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,FrameLabel)
namespace format{
namespace swf{


class FrameLabel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FrameLabel_obj OBJ_;
		FrameLabel_obj();
		Void __construct(int frame,::String name);

	public:
		static hx::ObjectPtr< FrameLabel_obj > __new(int frame,::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FrameLabel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FrameLabel"); }

		::String name; /* REM */ 
		int frame; /* REM */ 
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_FrameLabel */ 
