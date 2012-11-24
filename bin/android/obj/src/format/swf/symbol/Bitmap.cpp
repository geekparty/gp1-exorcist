#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_format_swf_data_SWFStream
#include <format/swf/data/SWFStream.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Bitmap
#include <format/swf/symbol/Bitmap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_neash_utils_IMemoryRange
#include <neash/utils/IMemoryRange.h>
#endif
namespace format{
namespace swf{
namespace symbol{

Void Bitmap_obj::__construct(::format::swf::data::SWFStream stream,bool lossless,int version)
{
HX_STACK_PUSH("Bitmap::new","format/swf/symbol/Bitmap.hx",28);
{
	HX_STACK_LINE(28)
	if ((lossless)){
		HX_STACK_LINE(32)
		int format = stream->readByte();		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(42)
		if (((bool((version == (int)2)) && bool((format == (int)4))))){
			HX_STACK_LINE(42)
			hx::Throw (HX_CSTRING("No 15-bit format in DefineBitsLossless2"));
		}
		HX_STACK_LINE(48)
		int width = stream->readUInt16();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(49)
		int height = stream->readUInt16();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(50)
		int tableSize = (int)0;		HX_STACK_VAR(tableSize,"tableSize");
		HX_STACK_LINE(52)
		if (((format == (int)3))){
			HX_STACK_LINE(52)
			tableSize = (stream->readByte() + (int)1);
		}
		HX_STACK_LINE(58)
		::neash::utils::ByteArray buffer = stream->readFlashBytes(stream->getBytesLeft());		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(59)
		buffer->uncompress(null());
		HX_STACK_LINE(61)
		bool transparent = false;		HX_STACK_VAR(transparent,"transparent");
		HX_STACK_LINE(63)
		if (((version == (int)2))){
			HX_STACK_LINE(63)
			transparent = true;
		}
		HX_STACK_LINE(69)
		if (((format == (int)3))){
			HX_STACK_LINE(71)
			Array< int > colorTable = Array_obj< int >::__new();		HX_STACK_VAR(colorTable,"colorTable");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				while(((_g < tableSize))){
					HX_STACK_LINE(73)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(75)
					int r = (  (((buffer->position < buffer->length))) ? int(buffer->b->__get((buffer->position)++)) : int(buffer->ThrowEOFi()) );		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(76)
					int g = (  (((buffer->position < buffer->length))) ? int(buffer->b->__get((buffer->position)++)) : int(buffer->ThrowEOFi()) );		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(77)
					int b = (  (((buffer->position < buffer->length))) ? int(buffer->b->__get((buffer->position)++)) : int(buffer->ThrowEOFi()) );		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(79)
					if ((transparent)){
						HX_STACK_LINE(81)
						int a = (  (((buffer->position < buffer->length))) ? int(buffer->b->__get((buffer->position)++)) : int(buffer->ThrowEOFi()) );		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(82)
						colorTable->push((((((int(a) << int((int)24))) + ((int(r) << int((int)16)))) + ((int(g) << int((int)8)))) + b));
					}
					else{
						HX_STACK_LINE(84)
						colorTable->push(((((int(r) << int((int)16))) + ((int(g) << int((int)8)))) + b));
					}
				}
			}
			HX_STACK_LINE(92)
			::neash::utils::ByteArray imageData = ::neash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(imageData,"imageData");
			HX_STACK_LINE(93)
			int padding = (::Math_obj::ceil((Float(width) / Float((int)4))) - ::Math_obj::floor((Float(width) / Float((int)4))));		HX_STACK_VAR(padding,"padding");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(95)
				while(((_g < height))){
					HX_STACK_LINE(95)
					int y = (_g)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(97)
						while(((_g1 < width))){
							HX_STACK_LINE(97)
							int x = (_g1)++;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(99)
							imageData->writeUnsignedInt(colorTable->__get((  (((buffer->position < buffer->length))) ? int(buffer->b->__get((buffer->position)++)) : int(buffer->ThrowEOFi()) )));
						}
					}
					HX_STACK_LINE(103)
					hx::AddEq(buffer->position,padding);
				}
			}
			HX_STACK_LINE(107)
			buffer = imageData;
			HX_STACK_LINE(108)
			buffer->position = (int)0;
		}
		HX_STACK_LINE(112)
		this->bitmapData = ::neash::display::BitmapData_obj::__new(width,height,transparent,null(),null());
		HX_STACK_LINE(113)
		this->bitmapData->setPixels(::neash::geom::Rectangle_obj::__new((int)0,(int)0,width,height),buffer);
	}
	else{
		HX_STACK_LINE(117)
		::neash::utils::ByteArray buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(118)
		::neash::utils::ByteArray alpha = null();		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(120)
		if (((version == (int)2))){
			HX_STACK_LINE(122)
			int size = stream->getBytesLeft();		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(123)
			buffer = stream->readBytes(size);
		}
		else{
			HX_STACK_LINE(125)
			if (((version == (int)3))){
				HX_STACK_LINE(127)
				int size = stream->readInt();		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(128)
				buffer = stream->readBytes(size);
				HX_STACK_LINE(130)
				alpha = stream->readFlashBytes(stream->getBytesLeft());
				HX_STACK_LINE(131)
				alpha->uncompress(null());
			}
		}
		HX_STACK_LINE(145)
		this->bitmapData = ::neash::display::BitmapData_obj::loadFromHaxeBytes(buffer,alpha);
		HX_STACK_LINE(147)
		if (((bool(!(lossless)) && bool((alpha != null()))))){
			HX_STACK_LINE(147)
			this->bitmapData = this->createWithAlpha(this->bitmapData,alpha);
		}
	}
}
;
	return null();
}

Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::format::swf::data::SWFStream stream,bool lossless,int version)
{  hx::ObjectPtr< Bitmap_obj > result = new Bitmap_obj();
	result->__construct(stream,lossless,version);
	return result;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > result = new Bitmap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::neash::display::BitmapData Bitmap_obj::createWithAlpha( ::neash::display::BitmapData data,::neash::utils::ByteArray alpha){
	HX_STACK_PUSH("Bitmap::createWithAlpha","format/swf/symbol/Bitmap.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_LINE(164)
	::neash::display::BitmapData alphaBitmap = ::neash::display::BitmapData_obj::__new(data->nmeGetWidth(),data->nmeGetHeight(),true,null(),null());		HX_STACK_VAR(alphaBitmap,"alphaBitmap");
	HX_STACK_LINE(165)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = data->nmeGetHeight();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		while(((_g1 < _g))){
			HX_STACK_LINE(167)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = data->nmeGetWidth();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(169)
				while(((_g3 < _g2))){
					HX_STACK_LINE(169)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(173)
					alphaBitmap->setPixel32(x,y,(data->getPixel(x,y) + ((int(alpha->__get((index)++)) << int((int)24)))));
				}
			}
		}
	}
	HX_STACK_LINE(187)
	return alphaBitmap;
}


HX_DEFINE_DYNAMIC_FUNC2(Bitmap_obj,createWithAlpha,return )


Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
}

Dynamic Bitmap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createWithAlpha") ) { return createWithAlpha_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createWithAlpha"),
	HX_CSTRING("bitmapData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.symbol.Bitmap"), hx::TCanCast< Bitmap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Bitmap_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
} // end namespace symbol
