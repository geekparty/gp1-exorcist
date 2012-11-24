#ifndef INCLUDED_ru_geekparty_exorcist_Main
#define INCLUDED_ru_geekparty_exorcist_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,events,KeyboardEvent)
HX_DECLARE_CLASS3(ru,geekparty,exorcist,Main)
HX_DECLARE_CLASS3(ru,geekparty,exorcist,MenuEvent)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,player,Player)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,screen,IScreen)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,screen,ScreenEvent)
namespace ru{
namespace geekparty{
namespace exorcist{


class Main_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		virtual Void startPressedHandler( ::ru::geekparty::exorcist::MenuEvent event);
		Dynamic startPressedHandler_dyn();

		virtual Void stageResizeHandler( ::neash::events::Event event);
		Dynamic stageResizeHandler_dyn();

		virtual Void enterFrameHandler( ::neash::events::Event event);
		Dynamic enterFrameHandler_dyn();

		virtual Void keyUpHandler( ::neash::events::KeyboardEvent event);
		Dynamic keyUpHandler_dyn();

		virtual Void closePressedHandler( ::ru::geekparty::exorcist::screen::ScreenEvent event);
		Dynamic closePressedHandler_dyn();

		virtual Void onCloseCurrentScreen( );
		Dynamic onCloseCurrentScreen_dyn();

		virtual Void switchScreen( ::ru::geekparty::exorcist::screen::IScreen screen);
		Dynamic switchScreen_dyn();

		virtual Void onExit( );
		Dynamic onExit_dyn();

		virtual Void init( Dynamic e);
		Dynamic init_dyn();

		::ru::geekparty::exorcist::screen::IScreen _currentScreen; /* REM */ 
		::ru::geekparty::exorcist::player::Player _player; /* REM */ 
		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist

#endif /* INCLUDED_ru_geekparty_exorcist_Main */ 
