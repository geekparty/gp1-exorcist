#ifndef INCLUDED_ru_geekparty_framework_Animation
#define INCLUDED_ru_geekparty_framework_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <ru/geekparty/framework/IUpdatable.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS3(ru,geekparty,framework,Animation)
HX_DECLARE_CLASS3(ru,geekparty,framework,IUpdatable)
namespace ru{
namespace geekparty{
namespace framework{


class Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Animation_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Animation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::ru::geekparty::framework::IUpdatable_obj *()
			{ return new ::ru::geekparty::framework::IUpdatable_delegate_< Animation_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Animation"); }

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual ::String _getCurrentFrame( );
		Dynamic _getCurrentFrame_dyn();

		virtual Void playAnimation( ::String name,Dynamic onComplete);
		Dynamic playAnimation_dyn();

		virtual Void addAnimation( ::String name,Array< ::String > frames,Dynamic fps,Dynamic loop);
		Dynamic addAnimation_dyn();

		::String currentFrame; /* REM */ 
		bool valid; /* REM */ 
		Dynamic state; /* REM */ 
		::Hash animations; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace framework

#endif /* INCLUDED_ru_geekparty_framework_Animation */ 
