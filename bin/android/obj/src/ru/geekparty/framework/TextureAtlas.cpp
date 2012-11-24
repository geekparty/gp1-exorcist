#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_Tilesheet
#include <neash/display/Tilesheet.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_ru_geekparty_framework_TextureAtlas
#include <ru/geekparty/framework/TextureAtlas.h>
#endif
namespace ru{
namespace geekparty{
namespace framework{

Void TextureAtlas_obj::__construct(::neash::display::BitmapData image,::String framesDescJson)
{
HX_STACK_PUSH("TextureAtlas::new","ru/geekparty/framework/TextureAtlas.hx",29);
{
	HX_STACK_LINE(30)
	Dynamic data = ::haxe::Json_obj::parse(framesDescJson);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(31)
	this->frames = ::Hash_obj::__new();
	HX_STACK_LINE(32)
	this->frameName2IndexMap = ::Hash_obj::__new();
	HX_STACK_LINE(33)
	this->tilesheet = ::neash::display::Tilesheet_obj::__new(image);
	HX_STACK_LINE(35)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::String > _g1 = ::Reflect_obj::fields(data->__Field(HX_CSTRING("frames"),true));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		while(((_g < _g1->length))){
			HX_STACK_LINE(36)
			::String frameName = _g1->__get(_g);		HX_STACK_VAR(frameName,"frameName");
			HX_STACK_LINE(36)
			++(_g);
			HX_STACK_LINE(38)
			Dynamic frame = ::Reflect_obj::field(data->__Field(HX_CSTRING("frames"),true),frameName)->__Field(HX_CSTRING("frame"),true);		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(39)
			::neash::geom::Rectangle r = ::neash::geom::Rectangle_obj::__new(::Std_obj::parseFloat(frame->__Field(HX_CSTRING("x"),true)),::Std_obj::parseFloat(frame->__Field(HX_CSTRING("y"),true)),::Std_obj::parseFloat(frame->__Field(HX_CSTRING("w"),true)),::Std_obj::parseFloat(frame->__Field(HX_CSTRING("h"),true)));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(43)
			this->frames->set(frameName,r);
			HX_STACK_LINE(44)
			this->frameName2IndexMap->set(frameName,(i)++);
			HX_STACK_LINE(45)
			this->tilesheet->addTileRect(r,null());
		}
	}
}
;
	return null();
}

TextureAtlas_obj::~TextureAtlas_obj() { }

Dynamic TextureAtlas_obj::__CreateEmpty() { return  new TextureAtlas_obj; }
hx::ObjectPtr< TextureAtlas_obj > TextureAtlas_obj::__new(::neash::display::BitmapData image,::String framesDescJson)
{  hx::ObjectPtr< TextureAtlas_obj > result = new TextureAtlas_obj();
	result->__construct(image,framesDescJson);
	return result;}

Dynamic TextureAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureAtlas_obj > result = new TextureAtlas_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TextureAtlas_obj::DrawTiles( ::neash::display::Graphics graphics,Dynamic jobs,Dynamic __o_smooth){
Dynamic smooth = __o_smooth.Default(false);
	HX_STACK_PUSH("TextureAtlas::DrawTiles","ru/geekparty/framework/TextureAtlas.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphics,"graphics");
	HX_STACK_ARG(jobs,"jobs");
	HX_STACK_ARG(smooth,"smooth");
{
		HX_STACK_LINE(51)
		Array< Float > tileData = Array_obj< Float >::__new();		HX_STACK_VAR(tileData,"tileData");
		HX_STACK_LINE(55)
		bool useRotation = false;		HX_STACK_VAR(useRotation,"useRotation");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			while(((_g < jobs->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(57)
				Dynamic job = jobs->__GetItem(_g);		HX_STACK_VAR(job,"job");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(59)
				tileData->push(job->__Field(HX_CSTRING("point"),true)->__Field(HX_CSTRING("x"),true));
				HX_STACK_LINE(60)
				tileData->push(job->__Field(HX_CSTRING("point"),true)->__Field(HX_CSTRING("y"),true));
				HX_STACK_LINE(61)
				tileData->push(this->frameName2IndexMap->get(job->__Field(HX_CSTRING("rect"),true)));
				HX_STACK_LINE(62)
				tileData->push(job->__Field(HX_CSTRING("rotation"),true));
			}
		}
		HX_STACK_LINE(65)
		int flags = (int)2;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(67)
		this->tilesheet->drawTiles(graphics,tileData,smooth,flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextureAtlas_obj,DrawTiles,(void))


TextureAtlas_obj::TextureAtlas_obj()
{
}

void TextureAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureAtlas);
	HX_MARK_MEMBER_NAME(frameName2IndexMap,"frameName2IndexMap");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_END_CLASS();
}

void TextureAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameName2IndexMap,"frameName2IndexMap");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
}

Dynamic TextureAtlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DrawTiles") ) { return DrawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"frameName2IndexMap") ) { return frameName2IndexMap; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::neash::display::Tilesheet >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"frameName2IndexMap") ) { frameName2IndexMap=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frameName2IndexMap"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("tilesheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("DrawTiles"),
	HX_CSTRING("frameName2IndexMap"),
	HX_CSTRING("frames"),
	HX_CSTRING("tilesheet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
};

Class TextureAtlas_obj::__mClass;

void TextureAtlas_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ru.geekparty.framework.TextureAtlas"), hx::TCanCast< TextureAtlas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureAtlas_obj::__boot()
{
}

} // end namespace ru
} // end namespace geekparty
} // end namespace framework
