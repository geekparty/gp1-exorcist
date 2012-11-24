#ifndef INCLUDED_neash_display_SimpleButton
#define INCLUDED_neash_display_SimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/InteractiveObject.h>
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,SimpleButton)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
namespace neash{
namespace display{


class SimpleButton_obj : public ::neash::display::InteractiveObject_obj{
	public:
		typedef ::neash::display::InteractiveObject_obj super;
		typedef SimpleButton_obj OBJ_;
		SimpleButton_obj();
		Void __construct(::neash::display::DisplayObject upState,::neash::display::DisplayObject overState,::neash::display::DisplayObject downState,::neash::display::DisplayObject hitTestState);

	public:
		static hx::ObjectPtr< SimpleButton_obj > __new(::neash::display::DisplayObject upState,::neash::display::DisplayObject overState,::neash::display::DisplayObject downState,::neash::display::DisplayObject hitTestState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SimpleButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SimpleButton"); }

		virtual ::neash::display::DisplayObject nmeSetUpState( ::neash::display::DisplayObject inState);
		Dynamic nmeSetUpState_dyn();

		virtual ::neash::display::DisplayObject nmeSetOverState( ::neash::display::DisplayObject inState);
		Dynamic nmeSetOverState_dyn();

		virtual ::neash::display::DisplayObject nmeSetHitTestState( ::neash::display::DisplayObject inState);
		Dynamic nmeSetHitTestState_dyn();

		virtual bool nmeSetHandCursor( bool inVal);
		Dynamic nmeSetHandCursor_dyn();

		virtual bool nmeGetHandCursor( );
		Dynamic nmeGetHandCursor_dyn();

		virtual bool nmeSetEnabled( bool inVal);
		Dynamic nmeSetEnabled_dyn();

		virtual bool nmeGetEnabled( );
		Dynamic nmeGetEnabled_dyn();

		virtual ::neash::display::DisplayObject nmeSetDownState( ::neash::display::DisplayObject inState);
		Dynamic nmeSetDownState_dyn();

		bool useHandCursor; /* REM */ 
		::neash::display::DisplayObject upState; /* REM */ 
		::neash::display::DisplayObject overState; /* REM */ 
		::neash::display::DisplayObject hitTestState; /* REM */ 
		bool enabled; /* REM */ 
		::neash::display::DisplayObject downState; /* REM */ 
		static Dynamic nme_simple_button_set_state; /* REM */ 
		static Dynamic &nme_simple_button_set_state_dyn() { return nme_simple_button_set_state;}
		static Dynamic nme_simple_button_get_enabled; /* REM */ 
		static Dynamic &nme_simple_button_get_enabled_dyn() { return nme_simple_button_get_enabled;}
		static Dynamic nme_simple_button_set_enabled; /* REM */ 
		static Dynamic &nme_simple_button_set_enabled_dyn() { return nme_simple_button_set_enabled;}
		static Dynamic nme_simple_button_get_hand_cursor; /* REM */ 
		static Dynamic &nme_simple_button_get_hand_cursor_dyn() { return nme_simple_button_get_hand_cursor;}
		static Dynamic nme_simple_button_set_hand_cursor; /* REM */ 
		static Dynamic &nme_simple_button_set_hand_cursor_dyn() { return nme_simple_button_set_hand_cursor;}
		static Dynamic nme_simple_button_create; /* REM */ 
		static Dynamic &nme_simple_button_create_dyn() { return nme_simple_button_create;}
};

} // end namespace neash
} // end namespace display

#endif /* INCLUDED_neash_display_SimpleButton */ 
