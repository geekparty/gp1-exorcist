#include <hxcpp.h>

#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_ru_geekparty_exorcist_screen_IScreen
#include <ru/geekparty/exorcist/screen/IScreen.h>
#endif
namespace ru{
namespace geekparty{
namespace exorcist{
namespace screen{

HX_DEFINE_DYNAMIC_FUNC2(IScreen_obj,onResize,)

HX_DEFINE_DYNAMIC_FUNC0(IScreen_obj,onEnterFrame,)

HX_DEFINE_DYNAMIC_FUNC0(IScreen_obj,dispose,)


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IScreen_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IScreen_obj::__mClass,"__mClass");
};

Class IScreen_obj::__mClass;

void IScreen_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.exorcist.screen.IScreen"), hx::TCanCast< IScreen_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IScreen_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
} // end namespace screen
