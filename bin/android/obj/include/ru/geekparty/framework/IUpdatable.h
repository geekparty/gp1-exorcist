#ifndef INCLUDED_ru_geekparty_framework_IUpdatable
#define INCLUDED_ru_geekparty_framework_IUpdatable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(ru,geekparty,framework,IUpdatable)
namespace ru{
namespace geekparty{
namespace framework{


class IUpdatable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IUpdatable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void update( Float dt)=0;
		Dynamic update_dyn();
};

#define DELEGATE_ru_geekparty_framework_IUpdatable \
virtual Void update( Float dt) { return mDelegate->update(dt);}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \


template<typename IMPL>
class IUpdatable_delegate_ : public IUpdatable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IUpdatable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_ru_geekparty_framework_IUpdatable
};

} // end namespace ru
} // end namespace geekparty
} // end namespace framework

#endif /* INCLUDED_ru_geekparty_framework_IUpdatable */ 
