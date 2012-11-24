#ifndef INCLUDED_ru_geekparty_exorcist_player_Player
#define INCLUDED_ru_geekparty_exorcist_player_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(ru,geekparty,exorcist,player,Player)
namespace ru{
namespace geekparty{
namespace exorcist{
namespace player{


class Player_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Player"); }

		virtual int getScore( );
		Dynamic getScore_dyn();

		virtual Void setScore( int value);
		Dynamic setScore_dyn();

		int _score; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
} // end namespace player

#endif /* INCLUDED_ru_geekparty_exorcist_player_Player */ 
