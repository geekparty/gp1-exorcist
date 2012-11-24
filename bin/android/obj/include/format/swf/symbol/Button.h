#ifndef INCLUDED_format_swf_symbol_Button
#define INCLUDED_format_swf_symbol_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(format,SWF)
HX_DECLARE_CLASS3(format,swf,data,SWFStream)
HX_DECLARE_CLASS3(format,swf,symbol,Button)
HX_DECLARE_CLASS3(format,swf,symbol,ButtonRecord)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,SimpleButton)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,filters,BitmapFilter)
namespace format{
namespace swf{
namespace symbol{


class Button_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Button_obj OBJ_;
		Button_obj();
		Void __construct(::format::SWF swf,::format::swf::data::SWFStream stream,int version);

	public:
		static hx::ObjectPtr< Button_obj > __new(::format::SWF swf,::format::swf::data::SWFStream stream,int version);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Button_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Button"); }

		virtual Void apply( ::neash::display::SimpleButton simpleButton);
		Dynamic apply_dyn();

		::format::SWF swf; /* REM */ 
		Array< ::neash::filters::BitmapFilter > filters; /* REM */ 
		Array< ::format::swf::symbol::ButtonRecord > buttonRecords; /* REM */ 
};

} // end namespace format
} // end namespace swf
} // end namespace symbol

#endif /* INCLUDED_format_swf_symbol_Button */ 
