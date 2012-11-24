#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_SWF
#include <format/SWF.h>
#endif
#ifndef INCLUDED_format_swf_MovieClip
#include <format/swf/MovieClip.h>
#endif
#ifndef INCLUDED_format_swf_data_SWFStream
#include <format/swf/data/SWFStream.h>
#endif
#ifndef INCLUDED_format_swf_data_Tags
#include <format/swf/data/Tags.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Bitmap
#include <format/swf/symbol/Bitmap.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Button
#include <format/swf/symbol/Button.h>
#endif
#ifndef INCLUDED_format_swf_symbol_EditText
#include <format/swf/symbol/EditText.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Font
#include <format/swf/symbol/Font.h>
#endif
#ifndef INCLUDED_format_swf_symbol_MorphShape
#include <format/swf/symbol/MorphShape.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Shape
#include <format/swf/symbol/Shape.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Sprite
#include <format/swf/symbol/Sprite.h>
#endif
#ifndef INCLUDED_format_swf_symbol_StaticText
#include <format/swf/symbol/StaticText.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Symbol
#include <format/swf/symbol/Symbol.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_SimpleButton
#include <neash/display/SimpleButton.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
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

Void SWF_obj::__construct(::neash::utils::ByteArray data)
{
HX_STACK_PUSH("SWF::new","format/SWF.hx",41);
{
	HX_STACK_LINE(43)
	this->stream = ::format::swf::data::SWFStream_obj::__new(data);
	HX_STACK_LINE(45)
	this->symbolData = ::IntHash_obj::__new();
	HX_STACK_LINE(46)
	this->streamPositions = ::IntHash_obj::__new();
	HX_STACK_LINE(47)
	this->symbols = ::Hash_obj::__new();
	HX_STACK_LINE(49)
	::neash::geom::Rectangle dimensions = this->stream->readRect();		HX_STACK_VAR(dimensions,"dimensions");
	HX_STACK_LINE(50)
	this->width = ::Std_obj::_int(dimensions->width);
	HX_STACK_LINE(51)
	this->height = ::Std_obj::_int(dimensions->height);
	HX_STACK_LINE(52)
	this->frameRate = this->stream->readFrameRate();
	HX_STACK_LINE(54)
	this->streamPositions->set((int)0,this->stream->getPosition());
	HX_STACK_LINE(55)
	int numFrames = this->stream->readFrames();		HX_STACK_VAR(numFrames,"numFrames");
	HX_STACK_LINE(57)
	int tag = (int)0;		HX_STACK_VAR(tag,"tag");
	HX_STACK_LINE(58)
	int position = this->stream->getPosition();		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(60)
	while((((tag = this->stream->beginTag()) != (int)0))){
		HX_STACK_LINE(62)
		int _switch_1 = (tag);
		if (  ( _switch_1==::format::swf::data::Tags_obj::SetBackgroundColor)){
			HX_STACK_LINE(64)
			this->backgroundColor = this->stream->readRGB();
		}
		else if (  ( _switch_1==::format::swf::data::Tags_obj::DefineShape) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineShape2) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineShape3) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineShape4) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineMorphShape) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineMorphShape2) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineSprite) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineBitsJPEG2) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineBitsJPEG3) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineBitsLossless) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineBitsLossless2) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineFont) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineFont2) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineFont3) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineText) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineEditText) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineButton) ||  ( _switch_1==::format::swf::data::Tags_obj::DefineButton2)){
			HX_STACK_LINE(70)
			int id = this->stream->readID();		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(72)
			this->streamPositions->set(id,position);
		}
		else if (  ( _switch_1==::format::swf::data::Tags_obj::SymbolClass)){
			HX_STACK_LINE(76)
			int numberOfSymbols = this->stream->readUInt16();		HX_STACK_VAR(numberOfSymbols,"numberOfSymbols");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(76)
				while(((_g < numberOfSymbols))){
					HX_STACK_LINE(76)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(76)
					int symbolID = this->stream->readUInt16();		HX_STACK_VAR(symbolID,"symbolID");
					HX_STACK_LINE(76)
					::String className = this->stream->readString();		HX_STACK_VAR(className,"className");
					HX_STACK_LINE(76)
					this->symbols->set(className,symbolID);
				}
			}
		}
		HX_STACK_LINE(80)
		this->stream->endTag();
		HX_STACK_LINE(81)
		position = this->stream->getPosition();
	}
}
;
	return null();
}

SWF_obj::~SWF_obj() { }

Dynamic SWF_obj::__CreateEmpty() { return  new SWF_obj; }
hx::ObjectPtr< SWF_obj > SWF_obj::__new(::neash::utils::ByteArray data)
{  hx::ObjectPtr< SWF_obj > result = new SWF_obj();
	result->__construct(data);
	return result;}

Dynamic SWF_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SWF_obj > result = new SWF_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SWF_obj::readSymbolClass( ){
{
		HX_STACK_PUSH("SWF::readSymbolClass","format/SWF.hx",373);
		HX_STACK_THIS(this);
		HX_STACK_LINE(375)
		int numberOfSymbols = this->stream->readUInt16();		HX_STACK_VAR(numberOfSymbols,"numberOfSymbols");
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(377)
			while(((_g < numberOfSymbols))){
				HX_STACK_LINE(377)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(379)
				int symbolID = this->stream->readUInt16();		HX_STACK_VAR(symbolID,"symbolID");
				HX_STACK_LINE(380)
				::String className = this->stream->readString();		HX_STACK_VAR(className,"className");
				HX_STACK_LINE(381)
				this->symbols->set(className,symbolID);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SWF_obj,readSymbolClass,(void))

Void SWF_obj::readText( int version){
{
		HX_STACK_PUSH("SWF::readText","format/SWF.hx",365);
		HX_STACK_THIS(this);
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(367)
		int id = this->stream->readID();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(368)
		this->symbolData->set(id,::format::swf::symbol::Symbol_obj::staticTextSymbol(::format::swf::symbol::StaticText_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,version)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,readText,(void))

Void SWF_obj::readSprite( bool isStage){
{
		HX_STACK_PUSH("SWF::readSprite","format/SWF.hx",289);
		HX_STACK_THIS(this);
		HX_STACK_ARG(isStage,"isStage");
		HX_STACK_LINE(291)
		int id;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(293)
		if ((isStage)){
			HX_STACK_LINE(293)
			id = (int)0;
		}
		else{
			HX_STACK_LINE(297)
			id = this->stream->readID();
		}
		HX_STACK_LINE(303)
		::format::swf::symbol::Sprite sprite = ::format::swf::symbol::Sprite_obj::__new(hx::ObjectPtr<OBJ_>(this),id,this->stream->readFrames());		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(304)
		int tag = (int)0;		HX_STACK_VAR(tag,"tag");
		HX_STACK_LINE(306)
		while((((tag = this->stream->beginTag()) != (int)0))){
			HX_STACK_LINE(308)
			int _switch_2 = (tag);
			if (  ( _switch_2==::format::swf::data::Tags_obj::FrameLabel)){
				HX_STACK_LINE(310)
				sprite->labelFrame(this->stream->readString());
			}
			else if (  ( _switch_2==::format::swf::data::Tags_obj::ShowFrame)){
				HX_STACK_LINE(314)
				sprite->showFrame();
			}
			else if (  ( _switch_2==::format::swf::data::Tags_obj::PlaceObject)){
				HX_STACK_LINE(318)
				sprite->placeObject(this->stream,(int)1);
			}
			else if (  ( _switch_2==::format::swf::data::Tags_obj::PlaceObject2)){
				HX_STACK_LINE(322)
				sprite->placeObject(this->stream,(int)2);
			}
			else if (  ( _switch_2==::format::swf::data::Tags_obj::PlaceObject3)){
				HX_STACK_LINE(326)
				sprite->placeObject(this->stream,(int)3);
			}
			else if (  ( _switch_2==::format::swf::data::Tags_obj::RemoveObject)){
				HX_STACK_LINE(330)
				sprite->removeObject(this->stream,(int)1);
			}
			else if (  ( _switch_2==::format::swf::data::Tags_obj::RemoveObject2)){
				HX_STACK_LINE(334)
				sprite->removeObject(this->stream,(int)2);
			}
			else if (  ( _switch_2==::format::swf::data::Tags_obj::DoAction)){
			}
			else if (  ( _switch_2==::format::swf::data::Tags_obj::Protect)){
			}
			else  {
				HX_STACK_LINE(346)
				if ((!(isStage))){
					HX_STACK_LINE(348)
					::haxe::Log_obj::trace((HX_CSTRING("Unknown sub tag: ") + ::format::swf::data::Tags_obj::string(tag)),hx::SourceInfo(HX_CSTRING("SWF.hx"),350,HX_CSTRING("format.SWF"),HX_CSTRING("readSprite")));
				}
			}
;
;
			HX_STACK_LINE(356)
			this->stream->endTag();
		}
		HX_STACK_LINE(360)
		this->symbolData->set(id,::format::swf::symbol::Symbol_obj::spriteSymbol(sprite));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,readSprite,(void))

Void SWF_obj::readShape( int version){
{
		HX_STACK_PUSH("SWF::readShape","format/SWF.hx",281);
		HX_STACK_THIS(this);
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(283)
		int id = this->stream->readID();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(284)
		this->symbolData->set(id,::format::swf::symbol::Symbol_obj::shapeSymbol(::format::swf::symbol::Shape_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,version)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,readShape,(void))

Void SWF_obj::readMorphShape( int version){
{
		HX_STACK_PUSH("SWF::readMorphShape","format/SWF.hx",273);
		HX_STACK_THIS(this);
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(275)
		int id = this->stream->readID();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(276)
		this->symbolData->set(id,::format::swf::symbol::Symbol_obj::morphShapeSymbol(::format::swf::symbol::MorphShape_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,version)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,readMorphShape,(void))

Void SWF_obj::readFont( int version){
{
		HX_STACK_PUSH("SWF::readFont","format/SWF.hx",265);
		HX_STACK_THIS(this);
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(267)
		int id = this->stream->readID();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(268)
		this->symbolData->set(id,::format::swf::symbol::Symbol_obj::fontSymbol(::format::swf::symbol::Font_obj::__new(this->stream,version)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,readFont,(void))

Void SWF_obj::readFileAttributes( ){
{
		HX_STACK_PUSH("SWF::readFileAttributes","format/SWF.hx",255);
		HX_STACK_THIS(this);
		HX_STACK_LINE(257)
		int flags = this->stream->readByte();		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(258)
		int zero = this->stream->readByte();		HX_STACK_VAR(zero,"zero");
		HX_STACK_LINE(259)
		zero = this->stream->readByte();
		HX_STACK_LINE(260)
		zero = this->stream->readByte();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SWF_obj,readFileAttributes,(void))

Void SWF_obj::readEditText( int version){
{
		HX_STACK_PUSH("SWF::readEditText","format/SWF.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(249)
		int id = this->stream->readID();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(250)
		this->symbolData->set(id,::format::swf::symbol::Symbol_obj::editTextSymbol(::format::swf::symbol::EditText_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,version)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,readEditText,(void))

Void SWF_obj::readButton( int version){
{
		HX_STACK_PUSH("SWF::readButton","format/SWF.hx",239);
		HX_STACK_THIS(this);
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(241)
		int id = this->stream->readID();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(242)
		this->symbolData->set(id,::format::swf::symbol::Symbol_obj::buttonSymbol(::format::swf::symbol::Button_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,version)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,readButton,(void))

Void SWF_obj::readBitmap( bool lossless,int version){
{
		HX_STACK_PUSH("SWF::readBitmap","format/SWF.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lossless,"lossless");
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(233)
		int id = this->stream->readID();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(234)
		this->symbolData->set(id,::format::swf::symbol::Symbol_obj::bitmapSymbol(::format::swf::symbol::Bitmap_obj::__new(this->stream,lossless,version)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SWF_obj,readBitmap,(void))

::format::swf::symbol::Symbol SWF_obj::getSymbol( int id){
	HX_STACK_PUSH("SWF::getSymbol","format/SWF.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(171)
	if ((!(this->streamPositions->exists(id)))){
		HX_STACK_LINE(171)
		hx::Throw (((HX_CSTRING("Invalid symbol ID (") + id) + HX_CSTRING(")")));
	}
	HX_STACK_LINE(177)
	if ((!(this->symbolData->exists(id)))){
		HX_STACK_LINE(179)
		int cachePosition = this->stream->getPosition();		HX_STACK_VAR(cachePosition,"cachePosition");
		HX_STACK_LINE(180)
		this->stream->pushTag();
		HX_STACK_LINE(182)
		this->stream->setPosition(this->streamPositions->get(id));
		HX_STACK_LINE(184)
		if (((id == (int)0))){
			HX_STACK_LINE(184)
			this->readSprite(true);
		}
		else{
			HX_STACK_LINE(188)
			int _switch_3 = (this->stream->beginTag());
			if (  ( _switch_3==::format::swf::data::Tags_obj::DefineShape)){
				HX_STACK_LINE(192)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(192)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::shapeSymbol(::format::swf::symbol::Shape_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)1)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineShape2)){
				HX_STACK_LINE(193)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(193)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::shapeSymbol(::format::swf::symbol::Shape_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)2)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineShape3)){
				HX_STACK_LINE(194)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(194)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::shapeSymbol(::format::swf::symbol::Shape_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)3)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineShape4)){
				HX_STACK_LINE(195)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(195)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::shapeSymbol(::format::swf::symbol::Shape_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)4)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineMorphShape)){
				HX_STACK_LINE(197)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(197)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::morphShapeSymbol(::format::swf::symbol::MorphShape_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)1)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineMorphShape2)){
				HX_STACK_LINE(198)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(198)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::morphShapeSymbol(::format::swf::symbol::MorphShape_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)2)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineSprite)){
				HX_STACK_LINE(200)
				this->readSprite(false);
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineButton)){
				HX_STACK_LINE(202)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(202)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::buttonSymbol(::format::swf::symbol::Button_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)1)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineButton2)){
				HX_STACK_LINE(203)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(203)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::buttonSymbol(::format::swf::symbol::Button_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)2)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineBitsJPEG2)){
				HX_STACK_LINE(205)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(205)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::bitmapSymbol(::format::swf::symbol::Bitmap_obj::__new(this->stream,false,(int)2)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineBitsJPEG3)){
				HX_STACK_LINE(206)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(206)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::bitmapSymbol(::format::swf::symbol::Bitmap_obj::__new(this->stream,false,(int)3)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineBitsLossless)){
				HX_STACK_LINE(207)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(207)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::bitmapSymbol(::format::swf::symbol::Bitmap_obj::__new(this->stream,true,(int)1)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineBitsLossless2)){
				HX_STACK_LINE(208)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(208)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::bitmapSymbol(::format::swf::symbol::Bitmap_obj::__new(this->stream,true,(int)2)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineFont)){
				HX_STACK_LINE(210)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(210)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::fontSymbol(::format::swf::symbol::Font_obj::__new(this->stream,(int)1)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineFont2)){
				HX_STACK_LINE(211)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(211)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::fontSymbol(::format::swf::symbol::Font_obj::__new(this->stream,(int)2)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineFont3)){
				HX_STACK_LINE(212)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(212)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::fontSymbol(::format::swf::symbol::Font_obj::__new(this->stream,(int)3)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineText)){
				HX_STACK_LINE(214)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(214)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::staticTextSymbol(::format::swf::symbol::StaticText_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)1)));
			}
			else if (  ( _switch_3==::format::swf::data::Tags_obj::DefineEditText)){
				HX_STACK_LINE(215)
				int id1 = this->stream->readID();		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(215)
				this->symbolData->set(id1,::format::swf::symbol::Symbol_obj::editTextSymbol(::format::swf::symbol::EditText_obj::__new(hx::ObjectPtr<OBJ_>(this),this->stream,(int)1)));
			}
		}
		HX_STACK_LINE(221)
		this->stream->setPosition(cachePosition);
		HX_STACK_LINE(222)
		this->stream->popTag();
	}
	HX_STACK_LINE(226)
	return this->symbolData->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,getSymbol,return )

::neash::display::BitmapData SWF_obj::getBitmapData( ::String className){
	HX_STACK_PUSH("SWF::getBitmapData","format/SWF.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_ARG(className,"className");
	HX_STACK_LINE(146)
	if ((!(this->symbols->exists(className)))){
		HX_STACK_LINE(146)
		return null();
	}
	HX_STACK_LINE(152)
	{
		::format::swf::symbol::Symbol _switch_4 = (this->getSymbol(this->symbols->get(className)));
		switch((_switch_4)->GetIndex()){
			case 3: {
				::format::swf::symbol::Bitmap bitmap = _switch_4->__Param(0);
{
					HX_STACK_LINE(154)
					return bitmap->bitmapData;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(158)
				return null();
			}
		}
	}
	HX_STACK_LINE(164)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,getBitmapData,return )

::format::swf::MovieClip SWF_obj::createMovieClip( ::String __o_className){
::String className = __o_className.Default(HX_CSTRING(""));
	HX_STACK_PUSH("SWF::createMovieClip","format/SWF.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(className,"className");
{
		HX_STACK_LINE(113)
		int id = (int)0;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(115)
		if (((className != HX_CSTRING("")))){
			HX_STACK_LINE(117)
			if ((!(this->symbols->exists(className)))){
				HX_STACK_LINE(117)
				return null();
			}
			HX_STACK_LINE(123)
			id = this->symbols->get(className);
		}
		HX_STACK_LINE(127)
		{
			::format::swf::symbol::Symbol _switch_5 = (this->getSymbol(id));
			switch((_switch_5)->GetIndex()){
				case 2: {
					::format::swf::symbol::Sprite data = _switch_5->__Param(0);
{
						HX_STACK_LINE(129)
						return ::format::swf::MovieClip_obj::__new(data);
					}
				}
				;break;
				default: {
					HX_STACK_LINE(133)
					return null();
				}
			}
		}
		HX_STACK_LINE(139)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,createMovieClip,return )

::neash::display::SimpleButton SWF_obj::createButton( ::String className){
	HX_STACK_PUSH("SWF::createButton","format/SWF.hx",88);
	HX_STACK_THIS(this);
	HX_STACK_ARG(className,"className");
	HX_STACK_LINE(90)
	Dynamic id = this->symbols->get(className);		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(92)
	{
		::format::swf::symbol::Symbol _switch_6 = (this->getSymbol(id));
		switch((_switch_6)->GetIndex()){
			case 7: {
				::format::swf::symbol::Button data = _switch_6->__Param(0);
{
					HX_STACK_LINE(96)
					::neash::display::SimpleButton b = ::neash::display::SimpleButton_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(97)
					data->apply(b);
					HX_STACK_LINE(98)
					return b;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(100)
				return null();
			}
		}
	}
	HX_STACK_LINE(106)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SWF_obj,createButton,return )

::Hash SWF_obj::instances;


SWF_obj::SWF_obj()
{
}

void SWF_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SWF);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(streamPositions,"streamPositions");
	HX_MARK_MEMBER_NAME(stream,"stream");
	HX_MARK_MEMBER_NAME(symbolData,"symbolData");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(symbols,"symbols");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_END_CLASS();
}

void SWF_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(streamPositions,"streamPositions");
	HX_VISIT_MEMBER_NAME(stream,"stream");
	HX_VISIT_MEMBER_NAME(symbolData,"symbolData");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(symbols,"symbols");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
}

Dynamic SWF_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { return stream; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"symbols") ) { return symbols; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readText") ) { return readText_dyn(); }
		if (HX_FIELD_EQ(inName,"readFont") ) { return readFont_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { return instances; }
		if (HX_FIELD_EQ(inName,"readShape") ) { return readShape_dyn(); }
		if (HX_FIELD_EQ(inName,"getSymbol") ) { return getSymbol_dyn(); }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readSprite") ) { return readSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"readButton") ) { return readButton_dyn(); }
		if (HX_FIELD_EQ(inName,"readBitmap") ) { return readBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"symbolData") ) { return symbolData; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readEditText") ) { return readEditText_dyn(); }
		if (HX_FIELD_EQ(inName,"createButton") ) { return createButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readMorphShape") ) { return readMorphShape_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readSymbolClass") ) { return readSymbolClass_dyn(); }
		if (HX_FIELD_EQ(inName,"createMovieClip") ) { return createMovieClip_dyn(); }
		if (HX_FIELD_EQ(inName,"streamPositions") ) { return streamPositions; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readFileAttributes") ) { return readFileAttributes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SWF_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { stream=inValue.Cast< ::format::swf::data::SWFStream >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"symbols") ) { symbols=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolData") ) { symbolData=inValue.Cast< ::IntHash >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"streamPositions") ) { streamPositions=inValue.Cast< ::IntHash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SWF_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("version"));
	outFields->push(HX_CSTRING("streamPositions"));
	outFields->push(HX_CSTRING("stream"));
	outFields->push(HX_CSTRING("symbolData"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("symbols"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("backgroundColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instances"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readSymbolClass"),
	HX_CSTRING("readText"),
	HX_CSTRING("readSprite"),
	HX_CSTRING("readShape"),
	HX_CSTRING("readMorphShape"),
	HX_CSTRING("readFont"),
	HX_CSTRING("readFileAttributes"),
	HX_CSTRING("readEditText"),
	HX_CSTRING("readButton"),
	HX_CSTRING("readBitmap"),
	HX_CSTRING("getSymbol"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("createMovieClip"),
	HX_CSTRING("createButton"),
	HX_CSTRING("version"),
	HX_CSTRING("streamPositions"),
	HX_CSTRING("stream"),
	HX_CSTRING("symbolData"),
	HX_CSTRING("width"),
	HX_CSTRING("symbols"),
	HX_CSTRING("height"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("backgroundColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SWF_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SWF_obj::instances,"instances");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SWF_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SWF_obj::instances,"instances");
};

Class SWF_obj::__mClass;

void SWF_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.SWF"), hx::TCanCast< SWF_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SWF_obj::__boot()
{
	instances= ::Hash_obj::__new();
}

} // end namespace format
