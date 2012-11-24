#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_display_StageAlign
#include <neash/display/StageAlign.h>
#endif
#ifndef INCLUDED_neash_display_StageScaleMode
#include <neash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_media_Sound
#include <neash/media/Sound.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_neash_utils_IMemoryRange
#include <neash/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_Main
#include <ru/geekparty/exorcist/Main.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Void ApplicationMain_obj::main( ){
{
		HX_STACK_PUSH("ApplicationMain::main","ApplicationMain.hx",13);
		HX_STACK_LINE(15)
		::nme::Lib_obj::setPackage(HX_CSTRING("Null/"),HX_CSTRING("exorcist"),HX_CSTRING("ru.geekparty.exorcist"),HX_CSTRING("1.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_1","ApplicationMain.hx",40);
			{
				HX_STACK_LINE(42)
				{
					HX_STACK_LINE(43)
					::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeSetAlign(::neash::display::StageAlign_obj::TOP_LEFT_dyn());
					HX_STACK_LINE(44)
					::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeSetScaleMode(::neash::display::StageScaleMode_obj::NO_SCALE_dyn());
				}
				HX_STACK_LINE(47)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::ru::geekparty::exorcist::Main >());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(49)
					while(((_g < _g1->length))){
						HX_STACK_LINE(49)
						::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(49)
						++(_g);
						HX_STACK_LINE(51)
						if (((methodName == HX_CSTRING("main")))){
							HX_STACK_LINE(53)
							hasMain = true;
							HX_STACK_LINE(54)
							break;
						}
					}
				}
				HX_STACK_LINE(58)
				if ((hasMain)){
					HX_STACK_LINE(59)
					::Reflect_obj::callMethod(hx::ClassOf< ::ru::geekparty::exorcist::Main >(),::Reflect_obj::field(hx::ClassOf< ::ru::geekparty::exorcist::Main >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(63)
					::nme::Lib_obj::nmeGetCurrent()->addChild(hx::TCast< neash::display::DisplayObject >::cast(::Type_obj::createInstance(hx::ClassOf< ::ru::geekparty::exorcist::Main >(),Dynamic( Array_obj<Dynamic>::__new()))));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(39)
		::nme::Lib_obj::create( Dynamic(new _Function_1_1()),(int)0,(int)0,(int)60,(int)0,(int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int(::nme::Lib_obj::RESIZABLE))) | int((int)0))) | int((int)0))) | int(::nme::Lib_obj::FULLSCREEN))) | int((int)0))) | int((int)0)),HX_CSTRING("exorcist"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",87);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(90)
	if (((inName == HX_CSTRING("libraries/game_resources.swf")))){
		HX_STACK_LINE(91)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("libraries/game_resources.swf"));
	}
	HX_STACK_LINE(97)
	if (((inName == HX_CSTRING("libraries/menu.swf")))){
		HX_STACK_LINE(98)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("libraries/menu.swf"));
	}
	HX_STACK_LINE(104)
	if (((inName == HX_CSTRING("img/another.png")))){
		HX_STACK_LINE(105)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("img/another.png"),null());
	}
	HX_STACK_LINE(111)
	if (((inName == HX_CSTRING("img/exit.png")))){
		HX_STACK_LINE(112)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("img/exit.png"),null());
	}
	HX_STACK_LINE(118)
	if (((inName == HX_CSTRING("img/girl.json")))){
		HX_STACK_LINE(119)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("img/girl.json"));
	}
	HX_STACK_LINE(125)
	if (((inName == HX_CSTRING("img/girl.png")))){
		HX_STACK_LINE(126)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("img/girl.png"),null());
	}
	HX_STACK_LINE(132)
	if (((inName == HX_CSTRING("img/start.png")))){
		HX_STACK_LINE(133)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("img/start.png"),null());
	}
	HX_STACK_LINE(139)
	if (((inName == HX_CSTRING("assets/sounds/fire_loop.mp3")))){
		HX_STACK_LINE(140)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/sounds/fire_loop.mp3"));
	}
	HX_STACK_LINE(146)
	if (((inName == HX_CSTRING("assets/sounds/growl.mp3")))){
		HX_STACK_LINE(147)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/sounds/growl.mp3"));
	}
	HX_STACK_LINE(153)
	if (((inName == HX_CSTRING("assets/sounds/on_playerTouch.mp3")))){
		HX_STACK_LINE(154)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/sounds/on_playerTouch.mp3"));
	}
	HX_STACK_LINE(160)
	if (((inName == HX_CSTRING("assets/sounds/scream_good.mp3")))){
		HX_STACK_LINE(161)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/sounds/scream_good.mp3"));
	}
	HX_STACK_LINE(167)
	if (((inName == HX_CSTRING("assets/sounds/theme.mp3")))){
		HX_STACK_LINE(168)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/sounds/theme.mp3"));
	}
	HX_STACK_LINE(175)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

void ApplicationMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMain);
	HX_MARK_END_CLASS();
}

void ApplicationMain_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("getAsset"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationMain_obj::__boot()
{
}

