#ifndef INCLUDED_ru_geekparty_exorcist_GameScreen
#define INCLUDED_ru_geekparty_exorcist_GameScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
#include <ru/geekparty/exorcist/screen/IScreen.h>
HX_DECLARE_CLASS0(GameBackground)
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
HX_DECLARE_CLASS2(neash,media,SoundChannel)
HX_DECLARE_CLASS2(neash,text,TextField)
HX_DECLARE_CLASS3(ru,geekparty,exorcist,GameScreen)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,data,GameState)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,player,Player)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,screen,IScreen)
namespace ru{
namespace geekparty{
namespace exorcist{


class GameScreen_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef GameScreen_obj OBJ_;
		GameScreen_obj();
		Void __construct(::ru::geekparty::exorcist::player::Player player);

	public:
		static hx::ObjectPtr< GameScreen_obj > __new(::ru::geekparty::exorcist::player::Player player);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GameScreen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::ru::geekparty::exorcist::screen::IScreen_obj *()
			{ return new ::ru::geekparty::exorcist::screen::IScreen_delegate_< GameScreen_obj >(this); }
		inline operator ::neash::events::IEventDispatcher_obj *()
			{ return new ::neash::events::IEventDispatcher_delegate_< GameScreen_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("GameScreen"); }

		virtual Void loop( );
		Dynamic loop_dyn();

		virtual Void updateScore( );
		Dynamic updateScore_dyn();

		virtual Void onLevelComplete( );
		Dynamic onLevelComplete_dyn();

		virtual Void onGameOver( );
		Dynamic onGameOver_dyn();

		virtual Void mouseUpHandler( ::neash::events::MouseEvent event);
		Dynamic mouseUpHandler_dyn();

		virtual Void mouseDownHandler( ::neash::events::MouseEvent event);
		Dynamic mouseDownHandler_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void onResize( int newWidth,int newHeight);
		Dynamic onResize_dyn();

		virtual Void onEnterFrame( );
		Dynamic onEnterFrame_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		::neash::media::SoundChannel _attackSound; /* REM */ 
		::neash::media::SoundChannel _touchSound; /* REM */ 
		::ru::geekparty::exorcist::player::Player _player; /* REM */ 
		::neash::text::TextField _stateTextField; /* REM */ 
		::neash::text::TextField _scoreTextField; /* REM */ 
		::GameBackground _gameMc; /* REM */ 
		::neash::display::DisplayObject _backgroundMc; /* REM */ 
		int _targetScore; /* REM */ 
		int _dscoreEnrage; /* REM */ 
		int _dscore; /* REM */ 
		int _score; /* REM */ 
		Float _timeToGameOver; /* REM */ 
		Float _timeToEnrage; /* REM */ 
		Float _enrageTime; /* REM */ 
		Float _exsorcismTime; /* REM */ 
		Float _gameTime; /* REM */ 
		::ru::geekparty::exorcist::data::GameState _gameState; /* REM */ 
		bool _touch; /* REM */ 
		Float _gameOverDT; /* REM */ 
		Float _maxEnrageTime; /* REM */ 
		Float _minEnrageTime; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist

#endif /* INCLUDED_ru_geekparty_exorcist_GameScreen */ 
