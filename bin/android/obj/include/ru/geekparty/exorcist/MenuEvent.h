#ifndef INCLUDED_ru_geekparty_exorcist_MenuEvent
#define INCLUDED_ru_geekparty_exorcist_MenuEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/events/Event.h>
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS3(ru,geekparty,exorcist,MenuEvent)
namespace ru{
namespace geekparty{
namespace exorcist{


class MenuEvent_obj : public ::neash::events::Event_obj{
	public:
		typedef ::neash::events::Event_obj super;
		typedef MenuEvent_obj OBJ_;
		MenuEvent_obj();
		Void __construct(::String type);

	public:
		static hx::ObjectPtr< MenuEvent_obj > __new(::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MenuEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MenuEvent"); }

		static ::String PRESS_START; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace exorcist

#endif /* INCLUDED_ru_geekparty_exorcist_MenuEvent */ 
