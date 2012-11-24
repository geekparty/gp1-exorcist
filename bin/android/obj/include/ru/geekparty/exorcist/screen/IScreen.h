#ifndef INCLUDED_ru_geekparty_exorcist_screen_IScreen
#define INCLUDED_ru_geekparty_exorcist_screen_IScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/events/IEventDispatcher.h>
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,screen,IScreen)
namespace ru{
namespace geekparty{
namespace exorcist{
namespace screen{


class IScreen_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IScreen_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void onResize( int newWidth,int newHeight)=0;
		Dynamic onResize_dyn();
virtual Void onEnterFrame( )=0;
		Dynamic onEnterFrame_dyn();
virtual Void dispose( )=0;
		Dynamic dispose_dyn();
};

#define DELEGATE_ru_geekparty_exorcist_screen_IScreen \
virtual Void onResize( int newWidth,int newHeight) { return mDelegate->onResize(newWidth,newHeight);}  \
virtual Dynamic onResize_dyn() { return mDelegate->onResize_dyn();}  \
virtual Void onEnterFrame( ) { return mDelegate->onEnterFrame();}  \
virtual Dynamic onEnterFrame_dyn() { return mDelegate->onEnterFrame_dyn();}  \
virtual Void dispose( ) { return mDelegate->dispose();}  \
virtual Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}  \


template<typename IMPL>
class IScreen_delegate_ : public IScreen_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IScreen_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_ru_geekparty_exorcist_screen_IScreen
};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
} // end namespace screen

#endif /* INCLUDED_ru_geekparty_exorcist_screen_IScreen */ 
