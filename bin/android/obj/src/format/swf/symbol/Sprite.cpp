#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_format_SWF
#include <format/SWF.h>
#endif
#ifndef INCLUDED_format_swf_data_Filters
#include <format/swf/data/Filters.h>
#endif
#ifndef INCLUDED_format_swf_data_Frame
#include <format/swf/data/Frame.h>
#endif
#ifndef INCLUDED_format_swf_data_SWFStream
#include <format/swf/data/SWFStream.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Sprite
#include <format/swf/symbol/Sprite.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Symbol
#include <format/swf/symbol/Symbol.h>
#endif
#ifndef INCLUDED_neash_display_BlendMode
#include <neash/display/BlendMode.h>
#endif
#ifndef INCLUDED_neash_filters_BitmapFilter
#include <neash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_neash_geom_ColorTransform
#include <neash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
namespace format{
namespace swf{
namespace symbol{

Void Sprite_obj::__construct(::format::SWF swf,int id,int frameCount)
{
HX_STACK_PUSH("Sprite::new","format/swf/symbol/Sprite.hx",31);
{
	HX_STACK_LINE(33)
	this->swf = swf;
	HX_STACK_LINE(34)
	this->frameCount = frameCount;
	HX_STACK_LINE(35)
	this->frames = Array_obj< ::format::swf::data::Frame >::__new().Add(null());
	HX_STACK_LINE(37)
	this->frame = ::format::swf::data::Frame_obj::__new(null());
	HX_STACK_LINE(38)
	this->frameLabels = ::Hash_obj::__new();
	HX_STACK_LINE(39)
	this->name = (HX_CSTRING("Sprite ") + id);
	HX_STACK_LINE(40)
	this->cacheAsBitmap = false;
}
;
	return null();
}

Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(::format::SWF swf,int id,int frameCount)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(swf,id,frameCount);
	return result;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Sprite_obj::showFrame( ){
{
		HX_STACK_PUSH("Sprite::showFrame","format/swf/symbol/Sprite.hx",211);
		HX_STACK_THIS(this);
		HX_STACK_LINE(213)
		this->frames->push(this->frame);
		HX_STACK_LINE(214)
		this->frame = ::format::swf::data::Frame_obj::__new(this->frame);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,showFrame,(void))

Void Sprite_obj::removeObject( ::format::swf::data::SWFStream stream,int version){
{
		HX_STACK_PUSH("Sprite::removeObject","format/swf/symbol/Sprite.hx",197);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stream,"stream");
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(199)
		if (((version == (int)1))){
			HX_STACK_LINE(199)
			stream->readID();
		}
		HX_STACK_LINE(205)
		int depth = stream->readDepth();		HX_STACK_VAR(depth,"depth");
		HX_STACK_LINE(206)
		this->frame->remove(depth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,removeObject,(void))

Void Sprite_obj::placeObject( ::format::swf::data::SWFStream stream,int version){
{
		HX_STACK_PUSH("Sprite::placeObject","format/swf/symbol/Sprite.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stream,"stream");
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(52)
		if (((version == (int)1))){
			HX_STACK_LINE(56)
			int symbolID = stream->readID();		HX_STACK_VAR(symbolID,"symbolID");
			HX_STACK_LINE(57)
			::format::swf::symbol::Symbol symbol = this->swf->getSymbol(symbolID);		HX_STACK_VAR(symbol,"symbol");
			HX_STACK_LINE(58)
			int depth = stream->readDepth();		HX_STACK_VAR(depth,"depth");
			HX_STACK_LINE(59)
			::neash::geom::Matrix matrix = stream->readMatrix();		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(61)
			::neash::geom::ColorTransform colorTransform = null();		HX_STACK_VAR(colorTransform,"colorTransform");
			HX_STACK_LINE(63)
			if (((stream->getBytesLeft() > (int)0))){
				HX_STACK_LINE(63)
				colorTransform = stream->readColorTransform(false);
			}
			HX_STACK_LINE(69)
			this->frame->place(symbolID,symbol,depth,matrix,colorTransform,null(),null(),null());
		}
		else{
			HX_STACK_LINE(71)
			if (((bool((version == (int)2)) || bool((version == (int)3))))){
				HX_STACK_LINE(73)
				stream->alignBits();
				HX_STACK_LINE(75)
				bool hasClipAction = stream->readBool();		HX_STACK_VAR(hasClipAction,"hasClipAction");
				HX_STACK_LINE(76)
				bool hasClipDepth = stream->readBool();		HX_STACK_VAR(hasClipDepth,"hasClipDepth");
				HX_STACK_LINE(77)
				bool hasName = stream->readBool();		HX_STACK_VAR(hasName,"hasName");
				HX_STACK_LINE(78)
				bool hasRatio = stream->readBool();		HX_STACK_VAR(hasRatio,"hasRatio");
				HX_STACK_LINE(79)
				bool hasColorTransform = stream->readBool();		HX_STACK_VAR(hasColorTransform,"hasColorTransform");
				HX_STACK_LINE(80)
				bool hasMatrix = stream->readBool();		HX_STACK_VAR(hasMatrix,"hasMatrix");
				HX_STACK_LINE(81)
				bool hasSymbol = stream->readBool();		HX_STACK_VAR(hasSymbol,"hasSymbol");
				HX_STACK_LINE(82)
				bool move = stream->readBool();		HX_STACK_VAR(move,"move");
				HX_STACK_LINE(84)
				bool hasImage = false;		HX_STACK_VAR(hasImage,"hasImage");
				HX_STACK_LINE(85)
				bool hasClassName = false;		HX_STACK_VAR(hasClassName,"hasClassName");
				HX_STACK_LINE(86)
				bool hasCacheAsBitmap = false;		HX_STACK_VAR(hasCacheAsBitmap,"hasCacheAsBitmap");
				HX_STACK_LINE(87)
				bool hasBlendMode = false;		HX_STACK_VAR(hasBlendMode,"hasBlendMode");
				HX_STACK_LINE(88)
				bool hasFilterList = false;		HX_STACK_VAR(hasFilterList,"hasFilterList");
				HX_STACK_LINE(90)
				if (((version == (int)3))){
					HX_STACK_LINE(92)
					stream->readBool();
					HX_STACK_LINE(93)
					stream->readBool();
					HX_STACK_LINE(94)
					stream->readBool();
					HX_STACK_LINE(96)
					hasImage = stream->readBool();
					HX_STACK_LINE(97)
					hasClassName = stream->readBool();
					HX_STACK_LINE(98)
					hasCacheAsBitmap = stream->readBool();
					HX_STACK_LINE(99)
					hasBlendMode = stream->readBool();
					HX_STACK_LINE(100)
					hasFilterList = stream->readBool();
				}
				HX_STACK_LINE(104)
				int depth = stream->readDepth();		HX_STACK_VAR(depth,"depth");
				HX_STACK_LINE(106)
				if ((hasClassName)){
					HX_STACK_LINE(106)
					this->className = stream->readString();
				}
				HX_STACK_LINE(112)
				int symbolID = (  ((hasSymbol)) ? int(stream->readID()) : int((int)0) );		HX_STACK_VAR(symbolID,"symbolID");
				HX_STACK_LINE(113)
				::neash::geom::Matrix matrix = (  ((hasMatrix)) ? ::neash::geom::Matrix(stream->readMatrix()) : ::neash::geom::Matrix(null()) );		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(114)
				::neash::geom::ColorTransform colorTransform = (  ((hasColorTransform)) ? ::neash::geom::ColorTransform(stream->readColorTransform(true)) : ::neash::geom::ColorTransform(null()) );		HX_STACK_VAR(colorTransform,"colorTransform");
				HX_STACK_LINE(115)
				Dynamic ratio = (  ((hasRatio)) ? Dynamic(stream->readUInt16()) : Dynamic(null()) );		HX_STACK_VAR(ratio,"ratio");
				HX_STACK_LINE(116)
				::String name = null();		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(118)
				if (((bool(hasName) || bool((bool(hasImage) && bool(hasSymbol)))))){
					HX_STACK_LINE(118)
					name = stream->readString();
				}
				HX_STACK_LINE(124)
				int clipDepth = (  ((hasClipDepth)) ? int(stream->readDepth()) : int((int)0) );		HX_STACK_VAR(clipDepth,"clipDepth");
				HX_STACK_LINE(125)
				Array< ::neash::filters::BitmapFilter > filters = null();		HX_STACK_VAR(filters,"filters");
				HX_STACK_LINE(127)
				if ((hasFilterList)){
					HX_STACK_LINE(127)
					filters = ::format::swf::data::Filters_obj::readFilters(stream);
				}
				HX_STACK_LINE(133)
				if ((hasBlendMode)){
					struct _Function_4_1{
						inline static ::neash::display::BlendMode Block( ::format::swf::data::SWFStream &stream){
							HX_STACK_PUSH("*::closure","format/swf/symbol/Sprite.hx",135);
							{
								HX_STACK_LINE(135)
								switch( (int)(stream->readByte())){
									case (int)2: {
										HX_STACK_LINE(136)
										return ::neash::display::BlendMode_obj::LAYER_dyn();
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(137)
										return ::neash::display::BlendMode_obj::MULTIPLY_dyn();
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(138)
										return ::neash::display::BlendMode_obj::SCREEN_dyn();
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(139)
										return ::neash::display::BlendMode_obj::LIGHTEN_dyn();
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(140)
										return ::neash::display::BlendMode_obj::DARKEN_dyn();
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(141)
										return ::neash::display::BlendMode_obj::DIFFERENCE_dyn();
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(142)
										return ::neash::display::BlendMode_obj::ADD_dyn();
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(143)
										return ::neash::display::BlendMode_obj::SUBTRACT_dyn();
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(144)
										return ::neash::display::BlendMode_obj::INVERT_dyn();
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(145)
										return ::neash::display::BlendMode_obj::ALPHA_dyn();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(146)
										return ::neash::display::BlendMode_obj::ERASE_dyn();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(147)
										return ::neash::display::BlendMode_obj::OVERLAY_dyn();
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(148)
										return ::neash::display::BlendMode_obj::HARDLIGHT_dyn();
									}
									;break;
									default: {
										HX_STACK_LINE(149)
										return ::neash::display::BlendMode_obj::NORMAL_dyn();
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(133)
					this->blendMode = _Function_4_1::Block(stream);
				}
				HX_STACK_LINE(154)
				if ((hasBlendMode)){
					HX_STACK_LINE(154)
					this->cacheAsBitmap = (stream->readByte() > (int)0);
				}
				HX_STACK_LINE(160)
				if ((hasClipAction)){
					HX_STACK_LINE(162)
					int reserved = stream->readID();		HX_STACK_VAR(reserved,"reserved");
					HX_STACK_LINE(163)
					int actionFlags = stream->readID();		HX_STACK_VAR(actionFlags,"actionFlags");
					HX_STACK_LINE(165)
					hx::Throw (HX_CSTRING("clip action not implemented"));
				}
				HX_STACK_LINE(169)
				if ((move)){
					HX_STACK_LINE(169)
					if ((hasSymbol)){
						HX_STACK_LINE(171)
						this->frame->place(symbolID,this->swf->getSymbol(symbolID),depth,matrix,colorTransform,ratio,name,filters);
					}
					else{
						HX_STACK_LINE(176)
						this->frame->move(depth,matrix,colorTransform,ratio);
					}
				}
				else{
					HX_STACK_LINE(182)
					this->frame->place(symbolID,this->swf->getSymbol(symbolID),depth,matrix,colorTransform,ratio,name,filters);
				}
			}
			else{
				HX_STACK_LINE(188)
				hx::Throw ((HX_CSTRING("Place object not implemented: ") + version));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,placeObject,(void))

Void Sprite_obj::labelFrame( ::String name){
{
		HX_STACK_PUSH("Sprite::labelFrame","format/swf/symbol/Sprite.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(45)
		this->frameLabels->set(name,this->frame->frame);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,labelFrame,(void))


Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(swf,"swf");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameLabels,"frameLabels");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(swf,"swf");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameLabels,"frameLabels");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
}

Dynamic Sprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { return swf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showFrame") ) { return showFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"labelFrame") ) { return labelFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeObject") ) { return placeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"frameLabels") ) { return frameLabels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeObject") ) { return removeObject_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return cacheAsBitmap; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { swf=inValue.Cast< ::format::SWF >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::format::swf::data::Frame >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::format::swf::data::Frame > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::neash::display::BlendMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameLabels") ) { frameLabels=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("cacheAsBitmap"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("swf"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("frameLabels"));
	outFields->push(HX_CSTRING("frameCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("showFrame"),
	HX_CSTRING("removeObject"),
	HX_CSTRING("placeObject"),
	HX_CSTRING("labelFrame"),
	HX_CSTRING("name"),
	HX_CSTRING("frame"),
	HX_CSTRING("className"),
	HX_CSTRING("cacheAsBitmap"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("swf"),
	HX_CSTRING("frames"),
	HX_CSTRING("frameLabels"),
	HX_CSTRING("frameCount"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.symbol.Sprite"), hx::TCanCast< Sprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sprite_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
} // end namespace symbol
