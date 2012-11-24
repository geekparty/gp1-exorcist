#include <hxcpp.h>

#ifndef INCLUDED_ru_geekparty_exorcist_player_Player
#include <ru/geekparty/exorcist/player/Player.h>
#endif
namespace ru{
namespace geekparty{
namespace exorcist{
namespace player{

Void Player_obj::__construct()
{
HX_STACK_PUSH("Player::new","ru/geekparty/exorcist/player/Player.hx",14);
{
	HX_STACK_LINE(14)
	this->_score = (int)0;
}
;
	return null();
}

Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

int Player_obj::getScore( ){
	HX_STACK_PUSH("Player::getScore","ru/geekparty/exorcist/player/Player.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return this->_score;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getScore,return )

Void Player_obj::setScore( int value){
{
		HX_STACK_PUSH("Player::setScore","ru/geekparty/exorcist/player/Player.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(19)
		this->_score = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setScore,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(_score,"_score");
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_score,"_score");
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_score") ) { return _score; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScore") ) { return getScore_dyn(); }
		if (HX_FIELD_EQ(inName,"setScore") ) { return setScore_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_score") ) { _score=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_score"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getScore"),
	HX_CSTRING("setScore"),
	HX_CSTRING("_score"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

Class Player_obj::__mClass;

void Player_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.player.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Player_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
} // end namespace player
