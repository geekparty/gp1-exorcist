#ifndef INCLUDED_ru_geekparty_exorcist_LooseScreen
#define INCLUDED_ru_geekparty_exorcist_LooseScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
#include <ru/geekparty/exorcist/screen/IScreen.h>
HX_DECLARE_CLASS0(EndMenuResources)
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
HX_DECLARE_CLASS2(neash,text,TextField)
HX_DECLARE_CLASS2(neash,text,TextFormat)
HX_DECLARE_CLASS3(ru,geekparty,exorcist,LooseScreen)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,player,Player)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,screen,IScreen)
namespace ru{
namespace geekparty{
namespace exorcist{


class LooseScreen_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef LooseScreen_obj OBJ_;
		LooseScreen_obj();
		Void __construct(::ru::geekparty::exorcist::player::Player player);

	public:
		static hx::ObjectPtr< LooseScreen_obj > __new(::ru::geekparty::exorcist::player::Player player);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LooseScreen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::ru::geekparty::exorcist::screen::IScreen_obj *()
			{ return new ::ru::geekparty::exorcist::screen::IScreen_delegate_< LooseScreen_obj >(this); }
		inline operator ::neash::events::IEventDispatcher_obj *()
			{ return new ::neash::events::IEventDispatcher_delegate_< LooseScreen_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("LooseScreen"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void onResize( int newWidth,int newHeight);
		Dynamic onResize_dyn();

		virtual Void exitToMenuHandler( ::neash::events::MouseEvent event);
		Dynamic exitToMenuHandler_dyn();

		virtual Void startAnotherGameHandler( ::neash::events::MouseEvent event);
		Dynamic startAnotherGameHandler_dyn();

		virtual Void onEnterFrame( );
		Dynamic onEnterFrame_dyn();

		virtual Void setScore( int score);
		Dynamic setScore_dyn();

		virtual Void init( ::neash::events::Event event);
		Dynamic init_dyn();

		::neash::text::TextFormat _textFormat; /* REM */ 
		::ru::geekparty::exorcist::player::Player _player; /* REM */ 
		::neash::text::TextField _scoreTxt; /* REM */ 
		::neash::display::DisplayObject _exitToMenuButton; /* REM */ 
		::neash::display::DisplayObject _anotherGameButton; /* REM */ 
		::EndMenuResources _menuMc; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist

#endif /* INCLUDED_ru_geekparty_exorcist_LooseScreen */ 
