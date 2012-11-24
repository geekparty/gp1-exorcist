#ifndef INCLUDED_ru_geekparty_framework_AnimatedSprite
#define INCLUDED_ru_geekparty_framework_AnimatedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
#include <ru/geekparty/framework/IUpdatable.h>
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS3(ru,geekparty,framework,AnimatedSprite)
HX_DECLARE_CLASS3(ru,geekparty,framework,IUpdatable)
HX_DECLARE_CLASS3(ru,geekparty,framework,TextureAtlas)
namespace ru{
namespace geekparty{
namespace framework{


class AnimatedSprite_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef AnimatedSprite_obj OBJ_;
		AnimatedSprite_obj();
		Void __construct(Array< ::ru::geekparty::framework::TextureAtlas > atlases);

	public:
		static hx::ObjectPtr< AnimatedSprite_obj > __new(Array< ::ru::geekparty::framework::TextureAtlas > atlases);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimatedSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::ru::geekparty::framework::IUpdatable_obj *()
			{ return new ::ru::geekparty::framework::IUpdatable_delegate_< AnimatedSprite_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("AnimatedSprite"); }

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void playAnimation( ::String name,Dynamic onComplete);
		Dynamic playAnimation_dyn();

		virtual Void addAnimation( ::String name,int atlasIndex,Array< ::String > frames,Dynamic fps,Dynamic loop);
		Dynamic addAnimation_dyn();

		int currentAtlasIndex; /* REM */ 
		Dynamic atlases; /* REM */ 
};

} // end namespace ru
} // end namespace geekparty
} // end namespace framework

#endif /* INCLUDED_ru_geekparty_framework_AnimatedSprite */ 
