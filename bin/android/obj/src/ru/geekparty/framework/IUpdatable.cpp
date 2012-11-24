#include <hxcpp.h>

#ifndef INCLUDED_ru_geekparty_framework_IUpdatable
#include <ru/geekparty/framework/IUpdatable.h>
#endif
namespace ru{
namespace geekparty{
namespace framework{

HX_DEFINE_DYNAMIC_FUNC1(IUpdatable_obj,update,)


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IUpdatable_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IUpdatable_obj::__mClass,"__mClass");
};

Class IUpdatable_obj::__mClass;

void IUpdatable_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.framework.IUpdatable"), hx::TCanCast< IUpdatable_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IUpdatable_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace framework
