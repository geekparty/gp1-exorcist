#include <hxcpp.h>

#ifndef INCLUDED_ru_geekparty_exorcist_data_GameState
#include <ru/geekparty/exorcist/data/GameState.h>
#endif
namespace ru{
namespace geekparty{
namespace exorcist{
namespace data{

::ru::geekparty::exorcist::data::GameState GameState_obj::chill;

::ru::geekparty::exorcist::data::GameState GameState_obj::enrage;

::ru::geekparty::exorcist::data::GameState GameState_obj::exorcism;

::ru::geekparty::exorcist::data::GameState GameState_obj::gameOver;

::ru::geekparty::exorcist::data::GameState GameState_obj::levelComplete;

HX_DEFINE_CREATE_ENUM(GameState_obj)

int GameState_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("chill")) return 0;
	if (inName==HX_CSTRING("enrage")) return 2;
	if (inName==HX_CSTRING("exorcism")) return 1;
	if (inName==HX_CSTRING("gameOver")) return 3;
	if (inName==HX_CSTRING("levelComplete")) return 4;
	return super::__FindIndex(inName);
}

int GameState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("chill")) return 0;
	if (inName==HX_CSTRING("enrage")) return 0;
	if (inName==HX_CSTRING("exorcism")) return 0;
	if (inName==HX_CSTRING("gameOver")) return 0;
	if (inName==HX_CSTRING("levelComplete")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GameState_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("chill")) return chill;
	if (inName==HX_CSTRING("enrage")) return enrage;
	if (inName==HX_CSTRING("exorcism")) return exorcism;
	if (inName==HX_CSTRING("gameOver")) return gameOver;
	if (inName==HX_CSTRING("levelComplete")) return levelComplete;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("chill"),
	HX_CSTRING("exorcism"),
	HX_CSTRING("enrage"),
	HX_CSTRING("gameOver"),
	HX_CSTRING("levelComplete"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::chill,"chill");
	HX_MARK_MEMBER_NAME(GameState_obj::enrage,"enrage");
	HX_MARK_MEMBER_NAME(GameState_obj::exorcism,"exorcism");
	HX_MARK_MEMBER_NAME(GameState_obj::gameOver,"gameOver");
	HX_MARK_MEMBER_NAME(GameState_obj::levelComplete,"levelComplete");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameState_obj::chill,"chill");
	HX_VISIT_MEMBER_NAME(GameState_obj::enrage,"enrage");
	HX_VISIT_MEMBER_NAME(GameState_obj::exorcism,"exorcism");
	HX_VISIT_MEMBER_NAME(GameState_obj::gameOver,"gameOver");
	HX_VISIT_MEMBER_NAME(GameState_obj::levelComplete,"levelComplete");
};

static ::String sMemberFields[] = { ::String(null()) };
Class GameState_obj::__mClass;

Dynamic __Create_GameState_obj() { return new GameState_obj; }

void GameState_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.data.GameState"), hx::TCanCast< GameState_obj >,sStaticFields,sMemberFields,
	&__Create_GameState_obj, &__Create,
	&super::__SGetClass(), &CreateGameState_obj, sMarkStatics, sVisitStatic);
}

void GameState_obj::__boot()
{
Static(chill) = hx::CreateEnum< GameState_obj >(HX_CSTRING("chill"),0);
Static(enrage) = hx::CreateEnum< GameState_obj >(HX_CSTRING("enrage"),2);
Static(exorcism) = hx::CreateEnum< GameState_obj >(HX_CSTRING("exorcism"),1);
Static(gameOver) = hx::CreateEnum< GameState_obj >(HX_CSTRING("gameOver"),3);
Static(levelComplete) = hx::CreateEnum< GameState_obj >(HX_CSTRING("levelComplete"),4);
}


} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
} // end namespace data
