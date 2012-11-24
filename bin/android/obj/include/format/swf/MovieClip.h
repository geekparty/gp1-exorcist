#ifndef INCLUDED_format_swf_MovieClip
#define INCLUDED_format_swf_MovieClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS0(IntHash)
HX_DECLARE_CLASS1(format,SWF)
HX_DECLARE_CLASS2(format,swf,FrameLabel)
HX_DECLARE_CLASS2(format,swf,MovieClip)
HX_DECLARE_CLASS3(format,swf,data,Frame)
HX_DECLARE_CLASS3(format,swf,symbol,Sprite)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
namespace format{
namespace swf{


class MovieClip_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef MovieClip_obj OBJ_;
		MovieClip_obj();
		Void __construct(::format::swf::symbol::Sprite data);

	public:
		static hx::ObjectPtr< MovieClip_obj > __new(::format::swf::symbol::Sprite data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MovieClip_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MovieClip"); }

		virtual Void this_onEnterFrame( ::neash::events::Event event);
		Dynamic this_onEnterFrame_dyn();

		virtual Void updateObjects( );
		Dynamic updateObjects_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void prevFrame( );
		Dynamic prevFrame_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void nextFrame( );
		Dynamic nextFrame_dyn();

		virtual Void gotoAndStop( Dynamic frame,::String scene);
		Dynamic gotoAndStop_dyn();

		virtual Void gotoAndPlay( Dynamic frame,::String scene);
		Dynamic gotoAndPlay_dyn();

		::format::SWF swf; /* REM */ 
		bool playing; /* REM */ 
		::IntHash objectPool; /* REM */ 
		Array< ::format::swf::data::Frame > frames; /* REM */ 
		Dynamic activeObjects; /* REM */ 
		bool trackAsMenu; /* REM */ 
		int totalFrames; /* REM */ 
		int framesLoaded; /* REM */ 
		bool enabled; /* REM */ 
		Array< ::format::swf::FrameLabel > currentLabels; /* REM */ 
		::String currentLabel; /* REM */ 
		::String currentFrameLabel; /* REM */ 
		int currentFrame; /* REM */ 
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_MovieClip */ 
