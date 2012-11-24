#ifndef INCLUDED_EndMenuResources
#define INCLUDED_EndMenuResources

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/swf/MovieClip.h>
HX_DECLARE_CLASS0(EndMenuResources)
HX_DECLARE_CLASS2(format,swf,MovieClip)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)


class EndMenuResources_obj : public ::format::swf::MovieClip_obj{
	public:
		typedef ::format::swf::MovieClip_obj super;
		typedef EndMenuResources_obj OBJ_;
		EndMenuResources_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EndMenuResources_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EndMenuResources_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EndMenuResources"); }

};


#endif /* INCLUDED_EndMenuResources */ 
