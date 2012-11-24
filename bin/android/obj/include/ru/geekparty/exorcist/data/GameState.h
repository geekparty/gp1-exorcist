#ifndef INCLUDED_ru_geekparty_exorcist_data_GameState
#define INCLUDED_ru_geekparty_exorcist_data_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(ru,geekparty,exorcist,data,GameState)
namespace ru{
namespace geekparty{
namespace exorcist{
namespace data{


class GameState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GameState_obj OBJ_;

	public:
		GameState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("ru.geekparty.exorcist.data.GameState"); }
		::String __ToString() const { return HX_CSTRING("GameState.") + tag; }

		static ::ru::geekparty::exorcist::data::GameState chill;
		static inline ::ru::geekparty::exorcist::data::GameState chill_dyn() { return chill; }
		static ::ru::geekparty::exorcist::data::GameState enrage;
		static inline ::ru::geekparty::exorcist::data::GameState enrage_dyn() { return enrage; }
		static ::ru::geekparty::exorcist::data::GameState exorcism;
		static inline ::ru::geekparty::exorcist::data::GameState exorcism_dyn() { return exorcism; }
		static ::ru::geekparty::exorcist::data::GameState gameOver;
		static inline ::ru::geekparty::exorcist::data::GameState gameOver_dyn() { return gameOver; }
		static ::ru::geekparty::exorcist::data::GameState levelComplete;
		static inline ::ru::geekparty::exorcist::data::GameState levelComplete_dyn() { return levelComplete; }
};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
} // end namespace data

#endif /* INCLUDED_ru_geekparty_exorcist_data_GameState */ 
