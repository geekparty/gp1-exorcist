#ifndef INCLUDED_ru_geekparty_exorcist_screen_ScreenEvent
#define INCLUDED_ru_geekparty_exorcist_screen_ScreenEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/events/Event.h>
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS4(ru,geekparty,exorcist,screen,ScreenEvent)
namespace ru{
namespace geekparty{
namespace exorcist{
namespace screen{


class ScreenEvent_obj : public ::neash::events::Event_obj{
	public:
		typedef ::neash::events::Event_obj super;
		typedef ScreenEvent_obj OBJ_;
		ScreenEvent_obj();
		Void __construct(::String type);

	public:
		static hx::ObjectPtr< ScreenEvent_obj > __new(::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ScreenEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScreenEvent"); }

		static ::String CLOSE_PRESSED; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist
} // end namespace screen

#endif /* INCLUDED_ru_geekparty_exorcist_screen_ScreenEvent */ 
