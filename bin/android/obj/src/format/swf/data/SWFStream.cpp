#include <hxcpp.h>

#ifndef INCLUDED_format_swf_data_SWFStream
#include <format/swf/data/SWFStream.h>
#endif
#ifndef INCLUDED_format_swf_data_Tags
#include <format/swf/data/Tags.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_display_CapsStyle
#include <neash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_neash_display_InterpolationMethod
#include <neash/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_neash_display_JointStyle
#include <neash/display/JointStyle.h>
#endif
#ifndef INCLUDED_neash_display_LineScaleMode
#include <neash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_neash_display_SpreadMethod
#include <neash/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_neash_geom_ColorTransform
#include <neash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_neash_text_TextFormatAlign
#include <neash/text/TextFormatAlign.h>
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
namespace data{

Void SWFStream_obj::__construct(::neash::utils::ByteArray bytes)
{
HX_STACK_PUSH("SWFStream::new","format/swf/data/SWFStream.hx",33);
{
	HX_STACK_LINE(35)
	this->stream = bytes;
	HX_STACK_LINE(37)
	::String signature = HX_CSTRING("");		HX_STACK_VAR(signature,"signature");
	struct _Function_1_1{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",39);
			{
				HX_STACK_LINE(39)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(39)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(39)
	hx::AddEq(signature,::String::fromCharCode(_Function_1_1::Block(this)));
	struct _Function_1_2{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",40);
			{
				HX_STACK_LINE(40)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(40)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(40)
	hx::AddEq(signature,::String::fromCharCode(_Function_1_2::Block(this)));
	struct _Function_1_3{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",41);
			{
				HX_STACK_LINE(41)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(41)
	hx::AddEq(signature,::String::fromCharCode(_Function_1_3::Block(this)));
	HX_STACK_LINE(43)
	if (((bool((signature != HX_CSTRING("FWS"))) && bool((signature != HX_CSTRING("CWS")))))){
		HX_STACK_LINE(43)
		hx::Throw (HX_CSTRING("Invalid signature"));
	}
	struct _Function_1_4{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",49);
			{
				HX_STACK_LINE(49)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(49)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(49)
	this->version = _Function_1_4::Block(this);
	HX_STACK_LINE(50)
	int length = this->stream->readInt();		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(52)
	if (((signature == HX_CSTRING("CWS")))){
		HX_STACK_LINE(54)
		::neash::utils::ByteArray buffer = ::neash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(55)
		this->stream->readBytes(buffer,null(),null());
		HX_STACK_LINE(56)
		buffer->uncompress(null());
		HX_STACK_LINE(57)
		this->stream = buffer;
	}
	HX_STACK_LINE(61)
	this->stream->nmeSetEndian(HX_CSTRING("littleEndian"));
	HX_STACK_LINE(63)
	this->bitPosition = (int)0;
	HX_STACK_LINE(64)
	this->byteBuffer = (int)0;
	HX_STACK_LINE(65)
	this->tagRead = (int)0;
}
;
	return null();
}

SWFStream_obj::~SWFStream_obj() { }

Dynamic SWFStream_obj::__CreateEmpty() { return  new SWFStream_obj; }
hx::ObjectPtr< SWFStream_obj > SWFStream_obj::__new(::neash::utils::ByteArray bytes)
{  hx::ObjectPtr< SWFStream_obj > result = new SWFStream_obj();
	result->__construct(bytes);
	return result;}

Dynamic SWFStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SWFStream_obj > result = new SWFStream_obj();
	result->__construct(inArgs[0]);
	return result;}

int SWFStream_obj::setPosition( int value){
	HX_STACK_PUSH("SWFStream::setPosition","format/swf/data/SWFStream.hx",623);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(623)
	return this->stream->position = value;
}


HX_DEFINE_DYNAMIC_FUNC1(SWFStream_obj,setPosition,return )

int SWFStream_obj::getPosition( ){
	HX_STACK_PUSH("SWFStream::getPosition","format/swf/data/SWFStream.hx",616);
	HX_STACK_THIS(this);
	HX_STACK_LINE(616)
	return this->stream->position;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,getPosition,return )

Float SWFStream_obj::readUTwips( ){
	HX_STACK_PUSH("SWFStream::readUTwips","format/swf/data/SWFStream.hx",602);
	HX_STACK_THIS(this);
	HX_STACK_LINE(602)
	return (this->readUInt16() * 0.05);
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readUTwips,return )

int SWFStream_obj::readUInt16( ){
	HX_STACK_PUSH("SWFStream::readUInt16","format/swf/data/SWFStream.hx",594);
	HX_STACK_THIS(this);
	HX_STACK_LINE(596)
	hx::AddEq(this->tagRead,(int)2);
	HX_STACK_LINE(597)
	return this->stream->readUnsignedShort();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readUInt16,return )

Float SWFStream_obj::readTwips( int length){
	HX_STACK_PUSH("SWFStream::readTwips","format/swf/data/SWFStream.hx",587);
	HX_STACK_THIS(this);
	HX_STACK_ARG(length,"length");
	HX_STACK_LINE(587)
	return (this->readBits(length,true) * 0.05);
}


HX_DEFINE_DYNAMIC_FUNC1(SWFStream_obj,readTwips,return )

::String SWFStream_obj::readString( ){
	HX_STACK_PUSH("SWFStream::readString","format/swf/data/SWFStream.hx",564);
	HX_STACK_THIS(this);
	HX_STACK_LINE(566)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(568)
	while((true)){
		HX_STACK_LINE(570)
		int code = this->readByte();		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(572)
		if (((code == (int)0))){
			HX_STACK_LINE(572)
			return result;
		}
		HX_STACK_LINE(578)
		hx::AddEq(result,::String::fromCharCode(code));
	}
	HX_STACK_LINE(582)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readString,return )

::neash::display::SpreadMethod SWFStream_obj::readSpreadMethod( ){
	HX_STACK_PUSH("SWFStream::readSpreadMethod","format/swf/data/SWFStream.hx",548);
	HX_STACK_THIS(this);
	HX_STACK_LINE(550)
	switch( (int)(this->readBits((int)2,null()))){
		case (int)0: {
			HX_STACK_LINE(552)
			return ::neash::display::SpreadMethod_obj::PAD_dyn();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(553)
			return ::neash::display::SpreadMethod_obj::REFLECT_dyn();
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(554)
			return ::neash::display::SpreadMethod_obj::REPEAT_dyn();
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(555)
			return ::neash::display::SpreadMethod_obj::PAD_dyn();
		}
		;break;
	}
	HX_STACK_LINE(559)
	return ::neash::display::SpreadMethod_obj::REPEAT_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readSpreadMethod,return )

Float SWFStream_obj::readSTwips( ){
	HX_STACK_PUSH("SWFStream::readSTwips","format/swf/data/SWFStream.hx",541);
	HX_STACK_THIS(this);
	HX_STACK_LINE(541)
	return (this->readSInt16() * 0.05);
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readSTwips,return )

int SWFStream_obj::readSInt16( ){
	HX_STACK_PUSH("SWFStream::readSInt16","format/swf/data/SWFStream.hx",533);
	HX_STACK_THIS(this);
	HX_STACK_LINE(535)
	hx::AddEq(this->tagRead,(int)2);
	HX_STACK_LINE(536)
	return this->stream->readShort();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readSInt16,return )

::neash::display::LineScaleMode SWFStream_obj::readScaleMode( ){
	HX_STACK_PUSH("SWFStream::readScaleMode","format/swf/data/SWFStream.hx",517);
	HX_STACK_THIS(this);
	HX_STACK_LINE(519)
	switch( (int)(this->readBits((int)2,null()))){
		case (int)0: {
			HX_STACK_LINE(521)
			return ::neash::display::LineScaleMode_obj::NORMAL_dyn();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(522)
			return ::neash::display::LineScaleMode_obj::HORIZONTAL_dyn();
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(523)
			return ::neash::display::LineScaleMode_obj::VERTICAL_dyn();
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(524)
			return ::neash::display::LineScaleMode_obj::NONE_dyn();
		}
		;break;
	}
	HX_STACK_LINE(528)
	return ::neash::display::LineScaleMode_obj::NORMAL_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readScaleMode,return )

int SWFStream_obj::readRGB( ){
	HX_STACK_PUSH("SWFStream::readRGB","format/swf/data/SWFStream.hx",506);
	HX_STACK_THIS(this);
	HX_STACK_LINE(508)
	hx::AddEq(this->tagRead,(int)3);
	struct _Function_1_1{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",509);
			{
				HX_STACK_LINE(509)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(509)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(509)
	int r = _Function_1_1::Block(this);		HX_STACK_VAR(r,"r");
	struct _Function_1_2{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",510);
			{
				HX_STACK_LINE(510)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(510)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(510)
	int g = _Function_1_2::Block(this);		HX_STACK_VAR(g,"g");
	struct _Function_1_3{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",511);
			{
				HX_STACK_LINE(511)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(511)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(511)
	int b = _Function_1_3::Block(this);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(512)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readRGB,return )

::neash::geom::Rectangle SWFStream_obj::readRect( ){
	HX_STACK_PUSH("SWFStream::readRect","format/swf/data/SWFStream.hx",490);
	HX_STACK_THIS(this);
	HX_STACK_LINE(492)
	this->alignBits();
	HX_STACK_LINE(494)
	int bits = this->readBits((int)5,null());		HX_STACK_VAR(bits,"bits");
	HX_STACK_LINE(496)
	Float x0 = this->readTwips(bits);		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(497)
	Float x1 = this->readTwips(bits);		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(498)
	Float y0 = this->readTwips(bits);		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(499)
	Float y1 = this->readTwips(bits);		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(501)
	return ::neash::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readRect,return )

::String SWFStream_obj::readPascalString( ){
	HX_STACK_PUSH("SWFStream::readPascalString","format/swf/data/SWFStream.hx",468);
	HX_STACK_THIS(this);
	HX_STACK_LINE(470)
	int length = this->readByte();		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(471)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(473)
	{
		HX_STACK_LINE(473)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(473)
		while(((_g < length))){
			HX_STACK_LINE(473)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(475)
			int code = this->readByte();		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(477)
			if (((code > (int)0))){
				HX_STACK_LINE(477)
				hx::AddEq(result,::String::fromCharCode(code));
			}
		}
	}
	HX_STACK_LINE(485)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readPascalString,return )

::neash::geom::Matrix SWFStream_obj::readMatrix( ){
	HX_STACK_PUSH("SWFStream::readMatrix","format/swf/data/SWFStream.hx",440);
	HX_STACK_THIS(this);
	HX_STACK_LINE(442)
	::neash::geom::Matrix result = ::neash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(444)
	this->alignBits();
	HX_STACK_LINE(446)
	bool hasScale = this->readBool();		HX_STACK_VAR(hasScale,"hasScale");
	HX_STACK_LINE(447)
	int scaleBits = (  ((hasScale)) ? int(this->readBits((int)5,null())) : int((int)0) );		HX_STACK_VAR(scaleBits,"scaleBits");
	HX_STACK_LINE(449)
	result->a = (  ((hasScale)) ? Float(this->readFixedBits(scaleBits)) : Float(1.0) );
	HX_STACK_LINE(450)
	result->d = (  ((hasScale)) ? Float(this->readFixedBits(scaleBits)) : Float(1.0) );
	HX_STACK_LINE(452)
	bool hasRotate = this->readBool();		HX_STACK_VAR(hasRotate,"hasRotate");
	HX_STACK_LINE(453)
	int rotateBits = (  ((hasRotate)) ? int(this->readBits((int)5,null())) : int((int)0) );		HX_STACK_VAR(rotateBits,"rotateBits");
	HX_STACK_LINE(455)
	result->b = (  ((hasRotate)) ? Float(this->readFixedBits(rotateBits)) : Float(0.0) );
	HX_STACK_LINE(456)
	result->c = (  ((hasRotate)) ? Float(this->readFixedBits(rotateBits)) : Float(0.0) );
	HX_STACK_LINE(458)
	int transBits = this->readBits((int)5,null());		HX_STACK_VAR(transBits,"transBits");
	HX_STACK_LINE(460)
	result->tx = this->readTwips(transBits);
	HX_STACK_LINE(461)
	result->ty = this->readTwips(transBits);
	HX_STACK_LINE(463)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readMatrix,return )

::neash::display::JointStyle SWFStream_obj::readJoinStyle( ){
	HX_STACK_PUSH("SWFStream::readJoinStyle","format/swf/data/SWFStream.hx",425);
	HX_STACK_THIS(this);
	HX_STACK_LINE(427)
	switch( (int)(this->readBits((int)2,null()))){
		case (int)0: {
			HX_STACK_LINE(429)
			return ::neash::display::JointStyle_obj::ROUND_dyn();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(430)
			return ::neash::display::JointStyle_obj::BEVEL_dyn();
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(431)
			return ::neash::display::JointStyle_obj::MITER_dyn();
		}
		;break;
	}
	HX_STACK_LINE(435)
	return ::neash::display::JointStyle_obj::ROUND_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readJoinStyle,return )

::neash::display::InterpolationMethod SWFStream_obj::readInterpolationMethod( ){
	HX_STACK_PUSH("SWFStream::readInterpolationMethod","format/swf/data/SWFStream.hx",411);
	HX_STACK_THIS(this);
	HX_STACK_LINE(413)
	switch( (int)(this->readBits((int)2,null()))){
		case (int)0: {
			HX_STACK_LINE(415)
			return ::neash::display::InterpolationMethod_obj::RGB_dyn();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(416)
			return ::neash::display::InterpolationMethod_obj::LINEAR_RGB_dyn();
		}
		;break;
	}
	HX_STACK_LINE(420)
	return ::neash::display::InterpolationMethod_obj::RGB_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readInterpolationMethod,return )

int SWFStream_obj::readInt( ){
	HX_STACK_PUSH("SWFStream::readInt","format/swf/data/SWFStream.hx",403);
	HX_STACK_THIS(this);
	HX_STACK_LINE(405)
	hx::AddEq(this->tagRead,(int)4);
	HX_STACK_LINE(406)
	return this->stream->readInt();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readInt,return )

int SWFStream_obj::readID( ){
	HX_STACK_PUSH("SWFStream::readID","format/swf/data/SWFStream.hx",394);
	HX_STACK_THIS(this);
	HX_STACK_LINE(396)
	hx::AddEq(this->tagRead,(int)2);
	HX_STACK_LINE(398)
	return this->stream->readUnsignedShort();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readID,return )

int SWFStream_obj::readFrames( ){
	HX_STACK_PUSH("SWFStream::readFrames","format/swf/data/SWFStream.hx",387);
	HX_STACK_THIS(this);
	HX_STACK_LINE(387)
	return this->stream->readUnsignedShort();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readFrames,return )

Float SWFStream_obj::readFrameRate( ){
	HX_STACK_PUSH("SWFStream::readFrameRate","format/swf/data/SWFStream.hx",380);
	HX_STACK_THIS(this);
	HX_STACK_LINE(380)
	return (Float(this->stream->readUnsignedShort()) / Float(256.0));
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readFrameRate,return )

Float SWFStream_obj::readFloat( ){
	HX_STACK_PUSH("SWFStream::readFloat","format/swf/data/SWFStream.hx",372);
	HX_STACK_THIS(this);
	HX_STACK_LINE(374)
	hx::AddEq(this->tagRead,(int)4);
	HX_STACK_LINE(375)
	return this->stream->readInt();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readFloat,return )

::neash::utils::ByteArray SWFStream_obj::readFlashBytes( int length){
	HX_STACK_PUSH("SWFStream::readFlashBytes","format/swf/data/SWFStream.hx",362);
	HX_STACK_THIS(this);
	HX_STACK_ARG(length,"length");
	HX_STACK_LINE(364)
	::neash::utils::ByteArray bytes = ::neash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(365)
	this->stream->readBytes(bytes,(int)0,length);
	HX_STACK_LINE(366)
	hx::AddEq(this->tagRead,length);
	HX_STACK_LINE(367)
	return bytes;
}


HX_DEFINE_DYNAMIC_FUNC1(SWFStream_obj,readFlashBytes,return )

Float SWFStream_obj::readFixedBits( int length){
	HX_STACK_PUSH("SWFStream::readFixedBits","format/swf/data/SWFStream.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_ARG(length,"length");
	HX_STACK_LINE(355)
	return (Float(this->readBits(length,true)) / Float(65536.0));
}


HX_DEFINE_DYNAMIC_FUNC1(SWFStream_obj,readFixedBits,return )

Float SWFStream_obj::readFixed8( ){
	HX_STACK_PUSH("SWFStream::readFixed8","format/swf/data/SWFStream.hx",345);
	HX_STACK_THIS(this);
	HX_STACK_LINE(347)
	this->alignBits();
	HX_STACK_LINE(349)
	Float frac = (Float(this->readByte()) / Float(256.0));		HX_STACK_VAR(frac,"frac");
	HX_STACK_LINE(350)
	return (this->readByte() + frac);
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readFixed8,return )

Float SWFStream_obj::readFixed( ){
	HX_STACK_PUSH("SWFStream::readFixed","format/swf/data/SWFStream.hx",335);
	HX_STACK_THIS(this);
	HX_STACK_LINE(337)
	this->alignBits();
	HX_STACK_LINE(339)
	Float frac = (Float(this->readUInt16()) / Float(65536.0));		HX_STACK_VAR(frac,"frac");
	HX_STACK_LINE(340)
	return (this->readUInt16() + frac);
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readFixed,return )

int SWFStream_obj::readDepth( ){
	HX_STACK_PUSH("SWFStream::readDepth","format/swf/data/SWFStream.hx",326);
	HX_STACK_THIS(this);
	HX_STACK_LINE(328)
	hx::AddEq(this->tagRead,(int)2);
	HX_STACK_LINE(330)
	return this->stream->readUnsignedShort();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readDepth,return )

::neash::geom::ColorTransform SWFStream_obj::readColorTransform( bool withAlpha){
	HX_STACK_PUSH("SWFStream::readColorTransform","format/swf/data/SWFStream.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(withAlpha,"withAlpha");
	HX_STACK_LINE(275)
	this->alignBits();
	HX_STACK_LINE(277)
	::neash::geom::ColorTransform result = ::neash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(279)
	bool hasOffset = this->readBool();		HX_STACK_VAR(hasOffset,"hasOffset");
	HX_STACK_LINE(280)
	bool hasMultiplier = this->readBool();		HX_STACK_VAR(hasMultiplier,"hasMultiplier");
	HX_STACK_LINE(282)
	int length = this->readBits((int)4,null());		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(284)
	if (((bool(!(hasOffset)) && bool(!(hasMultiplier))))){
		HX_STACK_LINE(286)
		this->alignBits();
		HX_STACK_LINE(287)
		return null();
	}
	HX_STACK_LINE(291)
	if ((hasMultiplier)){
		HX_STACK_LINE(293)
		result->redMultiplier = (Float(this->readBits(length,true)) / Float(256.0));
		HX_STACK_LINE(294)
		result->greenMultiplier = (Float(this->readBits(length,true)) / Float(256.0));
		HX_STACK_LINE(295)
		result->blueMultiplier = (Float(this->readBits(length,true)) / Float(256.0));
		HX_STACK_LINE(297)
		if ((withAlpha)){
			HX_STACK_LINE(297)
			result->alphaMultiplier = (Float(this->readBits(length,true)) / Float(256.0));
		}
	}
	HX_STACK_LINE(305)
	if ((hasOffset)){
		HX_STACK_LINE(307)
		result->redOffset = this->readBits(length,true);
		HX_STACK_LINE(308)
		result->greenOffset = this->readBits(length,true);
		HX_STACK_LINE(309)
		result->blueOffset = this->readBits(length,true);
		HX_STACK_LINE(311)
		if ((withAlpha)){
			HX_STACK_LINE(311)
			result->alphaOffset = this->readBits(length,true);
		}
	}
	HX_STACK_LINE(319)
	this->alignBits();
	HX_STACK_LINE(321)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(SWFStream_obj,readColorTransform,return )

::neash::display::CapsStyle SWFStream_obj::readCapsStyle( ){
	HX_STACK_PUSH("SWFStream::readCapsStyle","format/swf/data/SWFStream.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_LINE(260)
	switch( (int)(this->readBits((int)2,null()))){
		case (int)0: {
			HX_STACK_LINE(262)
			return ::neash::display::CapsStyle_obj::ROUND_dyn();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(263)
			return ::neash::display::CapsStyle_obj::NONE_dyn();
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(264)
			return ::neash::display::CapsStyle_obj::SQUARE_dyn();
		}
		;break;
	}
	HX_STACK_LINE(268)
	return ::neash::display::CapsStyle_obj::ROUND_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readCapsStyle,return )

::neash::utils::ByteArray SWFStream_obj::readBytes( int length){
	HX_STACK_PUSH("SWFStream::readBytes","format/swf/data/SWFStream.hx",248);
	HX_STACK_THIS(this);
	HX_STACK_ARG(length,"length");
	HX_STACK_LINE(250)
	::neash::utils::ByteArray bytes = ::neash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(251)
	this->stream->readBytes(bytes,(int)0,length);
	HX_STACK_LINE(252)
	hx::AddEq(this->tagRead,length);
	HX_STACK_LINE(253)
	return bytes;
}


HX_DEFINE_DYNAMIC_FUNC1(SWFStream_obj,readBytes,return )

int SWFStream_obj::readByte( ){
	HX_STACK_PUSH("SWFStream::readByte","format/swf/data/SWFStream.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_LINE(242)
	(this->tagRead)++;
	struct _Function_1_1{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",243);
			{
				HX_STACK_LINE(243)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(243)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(243)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readByte,return )

bool SWFStream_obj::readBool( ){
	HX_STACK_PUSH("SWFStream::readBool","format/swf/data/SWFStream.hx",233);
	HX_STACK_THIS(this);
	HX_STACK_LINE(233)
	return (this->readBits((int)1,null()) == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readBool,return )

int SWFStream_obj::readBits( int length,hx::Null< bool >  __o_isSigned){
bool isSigned = __o_isSigned.Default(false);
	HX_STACK_PUSH("SWFStream::readBits","format/swf/data/SWFStream.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(isSigned,"isSigned");
{
		HX_STACK_LINE(191)
		int signBit = (length - (int)1);		HX_STACK_VAR(signBit,"signBit");
		HX_STACK_LINE(192)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(193)
		int bitsLeft = length;		HX_STACK_VAR(bitsLeft,"bitsLeft");
		HX_STACK_LINE(195)
		while(((bitsLeft != (int)0))){
			HX_STACK_LINE(197)
			if (((this->bitPosition == (int)0))){
				struct _Function_3_1{
					inline static int Block( ::format::swf::data::SWFStream_obj *__this){
						HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",199);
						{
							HX_STACK_LINE(199)
							::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(199)
							return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
						}
						return null();
					}
				};
				HX_STACK_LINE(199)
				this->byteBuffer = _Function_3_1::Block(this);
				HX_STACK_LINE(200)
				(this->tagRead)++;
				HX_STACK_LINE(201)
				this->bitPosition = (int)8;
			}
			HX_STACK_LINE(205)
			while(((bool((this->bitPosition > (int)0)) && bool((bitsLeft > (int)0))))){
				HX_STACK_LINE(207)
				result = (int((int(result) << int((int)1))) | int((int((int(this->byteBuffer) >> int((int)7))) & int((int)1))));
				HX_STACK_LINE(208)
				(this->bitPosition)--;
				HX_STACK_LINE(209)
				(bitsLeft)--;
				HX_STACK_LINE(210)
				hx::ShlEq(this->byteBuffer,(int)1);
			}
		}
		HX_STACK_LINE(216)
		if ((isSigned)){
			HX_STACK_LINE(218)
			int mask = (int((int)1) << int(signBit));		HX_STACK_VAR(mask,"mask");
			HX_STACK_LINE(220)
			if (((((int(result) & int(mask))) != (int)0))){
				HX_STACK_LINE(220)
				hx::SubEq(result,(int((int)1) << int(length)));
			}
		}
		HX_STACK_LINE(228)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(SWFStream_obj,readBits,return )

int SWFStream_obj::readArraySize( bool extended){
	HX_STACK_PUSH("SWFStream::readArraySize","format/swf/data/SWFStream.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(extended,"extended");
	HX_STACK_LINE(174)
	(this->tagRead)++;
	struct _Function_1_1{
		inline static int Block( ::format::swf::data::SWFStream_obj *__this){
			HX_STACK_PUSH("*::closure","format/swf/data/SWFStream.hx",175);
			{
				HX_STACK_LINE(175)
				::neash::utils::ByteArray _this = __this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(175)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(175)
	int result = _Function_1_1::Block(this);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(177)
	if (((bool(extended) && bool((result == (int)255))))){
		HX_STACK_LINE(179)
		hx::AddEq(this->tagRead,(int)2);
		HX_STACK_LINE(180)
		result = this->stream->readUnsignedShort();
	}
	HX_STACK_LINE(184)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(SWFStream_obj,readArraySize,return )

::String SWFStream_obj::readAlign( ){
	HX_STACK_PUSH("SWFStream::readAlign","format/swf/data/SWFStream.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	switch( (int)(this->readByte())){
		case (int)0: {
			HX_STACK_LINE(160)
			return ::neash::text::TextFormatAlign_obj::LEFT;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(161)
			return ::neash::text::TextFormatAlign_obj::RIGHT;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(162)
			return ::neash::text::TextFormatAlign_obj::CENTER;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(163)
			return ::neash::text::TextFormatAlign_obj::JUSTIFY;
		}
		;break;
	}
	HX_STACK_LINE(167)
	return ::neash::text::TextFormatAlign_obj::LEFT;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,readAlign,return )

Void SWFStream_obj::pushTag( ){
{
		HX_STACK_PUSH("SWFStream::pushTag","format/swf/data/SWFStream.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_LINE(150)
		this->pushTagRead = this->tagRead;
		HX_STACK_LINE(151)
		this->pushTagSize = this->tagSize;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,pushTag,(void))

Void SWFStream_obj::popTag( ){
{
		HX_STACK_PUSH("SWFStream::popTag","format/swf/data/SWFStream.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_LINE(142)
		this->tagRead = this->pushTagSize;
		HX_STACK_LINE(143)
		this->tagSize = this->pushTagSize;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,popTag,(void))

int SWFStream_obj::getVersion( ){
	HX_STACK_PUSH("SWFStream::getVersion","format/swf/data/SWFStream.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	return this->version;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,getVersion,return )

int SWFStream_obj::getBytesLeft( ){
	HX_STACK_PUSH("SWFStream::getBytesLeft","format/swf/data/SWFStream.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_LINE(125)
	return (this->tagSize - this->tagRead);
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,getBytesLeft,return )

Void SWFStream_obj::endTag( ){
{
		HX_STACK_PUSH("SWFStream::endTag","format/swf/data/SWFStream.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(106)
		int read = this->tagRead;		HX_STACK_VAR(read,"read");
		HX_STACK_LINE(107)
		int size = this->tagSize;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(109)
		if (((read > size))){
			HX_STACK_LINE(109)
			hx::Throw (HX_CSTRING("Tag read overflow"));
		}
		HX_STACK_LINE(115)
		while(((read < size))){
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				::neash::utils::ByteArray _this = this->stream;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(117)
				if (((_this->position < _this->length))){
					HX_STACK_LINE(117)
					_this->b->__get((_this->position)++);
				}
				else{
					HX_STACK_LINE(117)
					_this->ThrowEOFi();
				}
			}
			HX_STACK_LINE(118)
			(read)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,endTag,(void))

Void SWFStream_obj::close( ){
{
		HX_STACK_PUSH("SWFStream::close","format/swf/data/SWFStream.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(97)
		this->stream = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,close,(void))

int SWFStream_obj::beginTag( ){
	HX_STACK_PUSH("SWFStream::beginTag","format/swf/data/SWFStream.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	int data = this->stream->readUnsignedShort();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(80)
	int tag = (int(data) >> int((int)6));		HX_STACK_VAR(tag,"tag");
	HX_STACK_LINE(81)
	int length = (int(data) & int((int)63));		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(83)
	if (((tag >= ::format::swf::data::Tags_obj::LAST))){
		HX_STACK_LINE(84)
		return (int)0;
	}
	HX_STACK_LINE(86)
	if (((length == (int)63))){
		HX_STACK_LINE(87)
		length = this->stream->readUnsignedInt();
	}
	HX_STACK_LINE(89)
	this->tagSize = length;
	HX_STACK_LINE(90)
	this->tagRead = (int)0;
	HX_STACK_LINE(92)
	return tag;
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,beginTag,return )

Void SWFStream_obj::alignBits( ){
{
		HX_STACK_PUSH("SWFStream::alignBits","format/swf/data/SWFStream.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		this->bitPosition = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SWFStream_obj,alignBits,(void))


SWFStream_obj::SWFStream_obj()
{
}

void SWFStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SWFStream);
	HX_MARK_MEMBER_NAME(pushTagSize,"pushTagSize");
	HX_MARK_MEMBER_NAME(pushTagRead,"pushTagRead");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(tagSize,"tagSize");
	HX_MARK_MEMBER_NAME(tagRead,"tagRead");
	HX_MARK_MEMBER_NAME(stream,"stream");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(byteBuffer,"byteBuffer");
	HX_MARK_MEMBER_NAME(bitPosition,"bitPosition");
	HX_MARK_END_CLASS();
}

void SWFStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pushTagSize,"pushTagSize");
	HX_VISIT_MEMBER_NAME(pushTagRead,"pushTagRead");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(tagSize,"tagSize");
	HX_VISIT_MEMBER_NAME(tagRead,"tagRead");
	HX_VISIT_MEMBER_NAME(stream,"stream");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(byteBuffer,"byteBuffer");
	HX_VISIT_MEMBER_NAME(bitPosition,"bitPosition");
}

Dynamic SWFStream_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"readID") ) { return readID_dyn(); }
		if (HX_FIELD_EQ(inName,"popTag") ) { return popTag_dyn(); }
		if (HX_FIELD_EQ(inName,"endTag") ) { return endTag_dyn(); }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readRGB") ) { return readRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"pushTag") ) { return pushTag_dyn(); }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"tagSize") ) { return tagSize; }
		if (HX_FIELD_EQ(inName,"tagRead") ) { return tagRead; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readRect") ) { return readRect_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"readBool") ) { return readBool_dyn(); }
		if (HX_FIELD_EQ(inName,"readBits") ) { return readBits_dyn(); }
		if (HX_FIELD_EQ(inName,"beginTag") ) { return beginTag_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp ? getPosition() : position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readTwips") ) { return readTwips_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readFixed") ) { return readFixed_dyn(); }
		if (HX_FIELD_EQ(inName,"readDepth") ) { return readDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readAlign") ) { return readAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"alignBits") ) { return alignBits_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readUTwips") ) { return readUTwips_dyn(); }
		if (HX_FIELD_EQ(inName,"readUInt16") ) { return readUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		if (HX_FIELD_EQ(inName,"readSTwips") ) { return readSTwips_dyn(); }
		if (HX_FIELD_EQ(inName,"readSInt16") ) { return readSInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"readMatrix") ) { return readMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"readFrames") ) { return readFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"readFixed8") ) { return readFixed8_dyn(); }
		if (HX_FIELD_EQ(inName,"getVersion") ) { return getVersion_dyn(); }
		if (HX_FIELD_EQ(inName,"byteBuffer") ) { return byteBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"pushTagSize") ) { return pushTagSize; }
		if (HX_FIELD_EQ(inName,"pushTagRead") ) { return pushTagRead; }
		if (HX_FIELD_EQ(inName,"bitPosition") ) { return bitPosition; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBytesLeft") ) { return getBytesLeft_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readScaleMode") ) { return readScaleMode_dyn(); }
		if (HX_FIELD_EQ(inName,"readJoinStyle") ) { return readJoinStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"readFrameRate") ) { return readFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"readFixedBits") ) { return readFixedBits_dyn(); }
		if (HX_FIELD_EQ(inName,"readCapsStyle") ) { return readCapsStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"readArraySize") ) { return readArraySize_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readFlashBytes") ) { return readFlashBytes_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readSpreadMethod") ) { return readSpreadMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"readPascalString") ) { return readPascalString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readColorTransform") ) { return readColorTransform_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"readInterpolationMethod") ) { return readInterpolationMethod_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SWFStream_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { stream=inValue.Cast< ::neash::utils::ByteArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagSize") ) { tagSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagRead") ) { tagRead=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp) return setPosition(inValue);position=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteBuffer") ) { byteBuffer=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pushTagSize") ) { pushTagSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pushTagRead") ) { pushTagRead=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitPosition") ) { bitPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SWFStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pushTagSize"));
	outFields->push(HX_CSTRING("pushTagRead"));
	outFields->push(HX_CSTRING("version"));
	outFields->push(HX_CSTRING("tagSize"));
	outFields->push(HX_CSTRING("tagRead"));
	outFields->push(HX_CSTRING("stream"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("byteBuffer"));
	outFields->push(HX_CSTRING("bitPosition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setPosition"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("readUTwips"),
	HX_CSTRING("readUInt16"),
	HX_CSTRING("readTwips"),
	HX_CSTRING("readString"),
	HX_CSTRING("readSpreadMethod"),
	HX_CSTRING("readSTwips"),
	HX_CSTRING("readSInt16"),
	HX_CSTRING("readScaleMode"),
	HX_CSTRING("readRGB"),
	HX_CSTRING("readRect"),
	HX_CSTRING("readPascalString"),
	HX_CSTRING("readMatrix"),
	HX_CSTRING("readJoinStyle"),
	HX_CSTRING("readInterpolationMethod"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readID"),
	HX_CSTRING("readFrames"),
	HX_CSTRING("readFrameRate"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readFlashBytes"),
	HX_CSTRING("readFixedBits"),
	HX_CSTRING("readFixed8"),
	HX_CSTRING("readFixed"),
	HX_CSTRING("readDepth"),
	HX_CSTRING("readColorTransform"),
	HX_CSTRING("readCapsStyle"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBool"),
	HX_CSTRING("readBits"),
	HX_CSTRING("readArraySize"),
	HX_CSTRING("readAlign"),
	HX_CSTRING("pushTag"),
	HX_CSTRING("popTag"),
	HX_CSTRING("getVersion"),
	HX_CSTRING("getBytesLeft"),
	HX_CSTRING("endTag"),
	HX_CSTRING("close"),
	HX_CSTRING("beginTag"),
	HX_CSTRING("alignBits"),
	HX_CSTRING("pushTagSize"),
	HX_CSTRING("pushTagRead"),
	HX_CSTRING("version"),
	HX_CSTRING("tagSize"),
	HX_CSTRING("tagRead"),
	HX_CSTRING("stream"),
	HX_CSTRING("position"),
	HX_CSTRING("byteBuffer"),
	HX_CSTRING("bitPosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SWFStream_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SWFStream_obj::__mClass,"__mClass");
};

Class SWFStream_obj::__mClass;

void SWFStream_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.data.SWFStream"), hx::TCanCast< SWFStream_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SWFStream_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
} // end namespace data
