#ifndef INCLUDED_format_SWF
#define INCLUDED_format_SWF

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(IntHash)
HX_DECLARE_CLASS1(format,SWF)
HX_DECLARE_CLASS2(format,swf,MovieClip)
HX_DECLARE_CLASS3(format,swf,data,SWFStream)
HX_DECLARE_CLASS3(format,swf,symbol,Symbol)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,SimpleButton)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,utils,ByteArray)
HX_DECLARE_CLASS2(neash,utils,IDataInput)
HX_DECLARE_CLASS2(neash,utils,IMemoryRange)
namespace format{


class SWF_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SWF_obj OBJ_;
		SWF_obj();
		Void __construct(::neash::utils::ByteArray data);

	public:
		static hx::ObjectPtr< SWF_obj > __new(::neash::utils::ByteArray data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SWF_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SWF"); }

		virtual Void readSymbolClass( );
		Dynamic readSymbolClass_dyn();

		virtual Void readText( int version);
		Dynamic readText_dyn();

		virtual Void readSprite( bool isStage);
		Dynamic readSprite_dyn();

		virtual Void readShape( int version);
		Dynamic readShape_dyn();

		virtual Void readMorphShape( int version);
		Dynamic readMorphShape_dyn();

		virtual Void readFont( int version);
		Dynamic readFont_dyn();

		virtual Void readFileAttributes( );
		Dynamic readFileAttributes_dyn();

		virtual Void readEditText( int version);
		Dynamic readEditText_dyn();

		virtual Void readButton( int version);
		Dynamic readButton_dyn();

		virtual Void readBitmap( bool lossless,int version);
		Dynamic readBitmap_dyn();

		virtual ::format::swf::symbol::Symbol getSymbol( int id);
		Dynamic getSymbol_dyn();

		virtual ::neash::display::BitmapData getBitmapData( ::String className);
		Dynamic getBitmapData_dyn();

		virtual ::format::swf::MovieClip createMovieClip( ::String className);
		Dynamic createMovieClip_dyn();

		virtual ::neash::display::SimpleButton createButton( ::String className);
		Dynamic createButton_dyn();

		int version; /* REM */ 
		::IntHash streamPositions; /* REM */ 
		::format::swf::data::SWFStream stream; /* REM */ 
		::IntHash symbolData; /* REM */ 
		int width; /* REM */ 
		::Hash symbols; /* REM */ 
		int height; /* REM */ 
		Float frameRate; /* REM */ 
		int backgroundColor; /* REM */ 
		static ::Hash instances; /* REM */ 
};

} // end namespace format

#endif /* INCLUDED_format_SWF */ 
