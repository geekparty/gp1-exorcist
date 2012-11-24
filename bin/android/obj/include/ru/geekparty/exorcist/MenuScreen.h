#ifndef INCLUDED_ru_geekparty_exorcist_MenuScreen
#define INCLUDED_ru_geekparty_exorcist_MenuScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
#include <ru/geekparty/exorcist/screen/IScreen.h>
HX_DECLARE_CLASS0(MainMenuResources)
HX_DECLARE_CLASS2(format,swf,MovieClip)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,events,MouseEvent)
HX_DECLARE_CLASS3(ru,geekparty,exorcist,MenuScreen)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,screen,IScreen)
namespace ru{
namespace geekparty{
namespace exorcist{


class MenuScreen_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef MenuScreen_obj OBJ_;
		MenuScreen_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MenuScreen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MenuScreen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::ru::geekparty::exorcist::screen::IScreen_obj *()
			{ return new ::ru::geekparty::exorcist::screen::IScreen_delegate_< MenuScreen_obj >(this); }
		inline operator ::neash::events::IEventDispatcher_obj *()
			{ return new ::neash::events::IEventDispatcher_delegate_< MenuScreen_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("MenuScreen"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void onResize( int newWidth,int newHeight);
		Dynamic onResize_dyn();

		virtual Void startGameHandler( ::neash::events::MouseEvent event);
		Dynamic startGameHandler_dyn();

		virtual Void onEnterFrame( );
		Dynamic onEnterFrame_dyn();

		virtual Void exitGameHandler( ::neash::events::MouseEvent event);
		Dynamic exitGameHandler_dyn();

		virtual Void init( ::neash::events::Event event);
		Dynamic init_dyn();

		::neash::display::DisplayObject _exitGameButton; /* REM */ 
		::neash::display::DisplayObject _startGameButton; /* REM */ 
		::MainMenuResources _menuMc; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist

#endif /* INCLUDED_ru_geekparty_exorcist_MenuScreen */ 
