#ifndef INCLUDED_format_swf_symbol_EditText
#define INCLUDED_format_swf_symbol_EditText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(format,SWF)
HX_DECLARE_CLASS3(format,swf,data,SWFStream)
HX_DECLARE_CLASS3(format,swf,symbol,EditText)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
HX_DECLARE_CLASS2(neash,text,TextField)
HX_DECLARE_CLASS2(neash,text,TextFormat)
namespace format{
namespace swf{
namespace symbol{


class EditText_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EditText_obj OBJ_;
		EditText_obj();
		Void __construct(::format::SWF swf,::format::swf::data::SWFStream stream,int version);

	public:
		static hx::ObjectPtr< EditText_obj > __new(::format::SWF swf,::format::swf::data::SWFStream stream,int version);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EditText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EditText"); }

		virtual Void apply( ::neash::text::TextField textField);
		Dynamic apply_dyn();

		bool wordWrap; /* REM */ 
		bool wasStatic; /* REM */ 
		bool useOutlines; /* REM */ 
		::neash::text::TextFormat textFormat; /* REM */ 
		::String text; /* REM */ 
		::neash::geom::Rectangle rect; /* REM */ 
		bool readOnly; /* REM */ 
		bool noSelect; /* REM */ 
		bool multiline; /* REM */ 
		int maxChars; /* REM */ 
		bool html; /* REM */ 
		bool displayAsPassword; /* REM */ 
		bool border; /* REM */ 
		bool autoSize; /* REM */ 
		Float alpha; /* REM */ 
};

} // end namespace format
} // end namespace swf
} // end namespace symbol

#endif /* INCLUDED_format_swf_symbol_EditText */ 
