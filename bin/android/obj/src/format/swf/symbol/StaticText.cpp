#include <hxcpp.h>

#ifndef INCLUDED_format_SWF
#include <format/SWF.h>
#endif
#ifndef INCLUDED_format_swf_data_SWFStream
#include <format/swf/data/SWFStream.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Font
#include <format/swf/symbol/Font.h>
#endif
#ifndef INCLUDED_format_swf_symbol_StaticText
#include <format/swf/symbol/StaticText.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Symbol
#include <format/swf/symbol/Symbol.h>
#endif
#ifndef INCLUDED_neash_display_CapsStyle
#include <neash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
#endif
#ifndef INCLUDED_neash_display_JointStyle
#include <neash/display/JointStyle.h>
#endif
#ifndef INCLUDED_neash_display_LineScaleMode
#include <neash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
namespace format{
namespace swf{
namespace symbol{

Void StaticText_obj::__construct(::format::SWF swf,::format::swf::data::SWFStream stream,int version)
{
HX_STACK_PUSH("StaticText::new","format/swf/symbol/StaticText.hx",20);
{
	HX_STACK_LINE(22)
	stream->alignBits();
	HX_STACK_LINE(24)
	this->records = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(25)
	this->bounds = stream->readRect();
	HX_STACK_LINE(26)
	this->textMatrix = stream->readMatrix();
	HX_STACK_LINE(28)
	int glyphBits = stream->readByte();		HX_STACK_VAR(glyphBits,"glyphBits");
	HX_STACK_LINE(29)
	int advanceBits = stream->readByte();		HX_STACK_VAR(advanceBits,"advanceBits");
	HX_STACK_LINE(30)
	::format::swf::symbol::Font font = null();		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(31)
	Float height = 32.0;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(32)
	int color = (int)0;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(33)
	Float alpha = 1.0;		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(35)
	stream->alignBits();
	HX_STACK_LINE(37)
	while((stream->readBool())){
		HX_STACK_LINE(39)
		stream->readBits((int)3,null());
		HX_STACK_LINE(41)
		bool hasFont = stream->readBool();		HX_STACK_VAR(hasFont,"hasFont");
		HX_STACK_LINE(42)
		bool hasColor = stream->readBool();		HX_STACK_VAR(hasColor,"hasColor");
		HX_STACK_LINE(43)
		bool hasY = stream->readBool();		HX_STACK_VAR(hasY,"hasY");
		HX_STACK_LINE(44)
		bool hasX = stream->readBool();		HX_STACK_VAR(hasX,"hasX");
		HX_STACK_LINE(46)
		if ((hasFont)){
			HX_STACK_LINE(48)
			int fontID = stream->readID();		HX_STACK_VAR(fontID,"fontID");
			HX_STACK_LINE(49)
			::format::swf::symbol::Symbol symbol = swf->getSymbol(fontID);		HX_STACK_VAR(symbol,"symbol");
			HX_STACK_LINE(51)
			{
				::format::swf::symbol::Symbol _switch_1 = (symbol);
				switch((_switch_1)->GetIndex()){
					case 4: {
						::format::swf::symbol::Font f = _switch_1->__Param(0);
{
							HX_STACK_LINE(53)
							font = f;
						}
					}
					;break;
					default: {
						HX_STACK_LINE(57)
						hx::Throw (HX_CSTRING("Not font character"));
					}
				}
			}
		}
		else{
			HX_STACK_LINE(63)
			if (((font == null()))){
				HX_STACK_LINE(63)
				hx::Throw (HX_CSTRING("No font - not implemented"));
			}
		}
		HX_STACK_LINE(69)
		if ((hasColor)){
			HX_STACK_LINE(71)
			color = stream->readRGB();
			HX_STACK_LINE(73)
			if (((version >= (int)2))){
				HX_STACK_LINE(73)
				alpha = (Float(stream->readByte()) / Float(255.0));
			}
		}
		HX_STACK_LINE(81)
		int offsetX = (  ((hasX)) ? int(stream->readSInt16()) : int((int)0) );		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(82)
		int offsetY = (  ((hasY)) ? int(stream->readSInt16()) : int((int)0) );		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(84)
		if ((hasFont)){
			HX_STACK_LINE(84)
			height = (stream->readUInt16() * 0.05);
		}
		HX_STACK_LINE(90)
		int count = stream->readByte();		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(92)
		Array< int > glyphs = Array_obj< int >::__new();		HX_STACK_VAR(glyphs,"glyphs");
		HX_STACK_LINE(93)
		Array< int > advances = Array_obj< int >::__new();		HX_STACK_VAR(advances,"advances");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while(((_g < count))){
				HX_STACK_LINE(95)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(97)
				glyphs->push(stream->readBits(glyphBits,null()));
				HX_STACK_LINE(98)
				advances->push(stream->readBits(advanceBits,true));
			}
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &offsetY,int &color,int &offsetX,Array< int > &glyphs,Float &alpha,Float &height,Array< int > &advances,::format::swf::symbol::Font &font){
				HX_STACK_PUSH("*::closure","format/swf/symbol/StaticText.hx",102);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("swfFont") , font,false);
					__result->Add(HX_CSTRING("offsetX") , offsetX,false);
					__result->Add(HX_CSTRING("offsetY") , offsetY,false);
					__result->Add(HX_CSTRING("glyphs") , glyphs,false);
					__result->Add(HX_CSTRING("color") , color,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					__result->Add(HX_CSTRING("height") , height,false);
					__result->Add(HX_CSTRING("advances") , advances,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		this->records->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(offsetY,color,offsetX,glyphs,alpha,height,advances,font));
		HX_STACK_LINE(115)
		stream->alignBits();
	}
}
;
	return null();
}

StaticText_obj::~StaticText_obj() { }

Dynamic StaticText_obj::__CreateEmpty() { return  new StaticText_obj; }
hx::ObjectPtr< StaticText_obj > StaticText_obj::__new(::format::SWF swf,::format::swf::data::SWFStream stream,int version)
{  hx::ObjectPtr< StaticText_obj > result = new StaticText_obj();
	result->__construct(swf,stream,version);
	return result;}

Dynamic StaticText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticText_obj > result = new StaticText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void StaticText_obj::render( ::neash::display::Graphics graphics){
{
		HX_STACK_PUSH("StaticText::render","format/swf/symbol/StaticText.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_LINE(124)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Dynamic _g1 = this->records;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(124)
			Dynamic record = _g1->__GetItem(_g);		HX_STACK_VAR(record,"record");
			HX_STACK_LINE(124)
			++(_g);
			HX_STACK_LINE(126)
			Float scale = (Float(record->__Field(HX_CSTRING("height"),true)) / Float((int)1024));		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(128)
			::neash::geom::Matrix matrix = this->textMatrix->clone();		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(129)
			matrix->scale(scale,scale);
			HX_STACK_LINE(131)
			matrix->tx = this->textMatrix->tx;
			HX_STACK_LINE(132)
			matrix->ty = this->textMatrix->ty;
			HX_STACK_LINE(134)
			hx::AddEq(matrix->tx,(record->__Field(HX_CSTRING("offsetX"),true) * 0.05));
			HX_STACK_LINE(135)
			hx::AddEq(matrix->ty,(record->__Field(HX_CSTRING("offsetY"),true) * 0.05));
			HX_STACK_LINE(137)
			graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = record->__Field(HX_CSTRING("glyphs"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(139)
				while(((_g3 < _g2))){
					HX_STACK_LINE(139)
					int i = (_g3)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(141)
					Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
					HX_STACK_LINE(143)
					graphics->beginFill(record->__Field(HX_CSTRING("color"),true),record->__Field(HX_CSTRING("alpha"),true));
					HX_STACK_LINE(144)
					record->__Field(HX_CSTRING("swfFont"),true)->__Field(HX_CSTRING("renderGlyph"),true)(graphics,record->__Field(HX_CSTRING("glyphs"),true)->__GetItem(i),matrix);
					HX_STACK_LINE(145)
					graphics->endFill();
					HX_STACK_LINE(147)
					hx::AddEq(matrix->tx,(record->__Field(HX_CSTRING("advances"),true)->__GetItem(i) * 0.05));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StaticText_obj,render,(void))


StaticText_obj::StaticText_obj()
{
}

void StaticText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticText);
	HX_MARK_MEMBER_NAME(textMatrix,"textMatrix");
	HX_MARK_MEMBER_NAME(records,"records");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_END_CLASS();
}

void StaticText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textMatrix,"textMatrix");
	HX_VISIT_MEMBER_NAME(records,"records");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
}

Dynamic StaticText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { return records; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textMatrix") ) { return textMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StaticText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { records=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textMatrix") ) { textMatrix=inValue.Cast< ::neash::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("textMatrix"));
	outFields->push(HX_CSTRING("records"));
	outFields->push(HX_CSTRING("bounds"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("textMatrix"),
	HX_CSTRING("records"),
	HX_CSTRING("bounds"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticText_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticText_obj::__mClass,"__mClass");
};

Class StaticText_obj::__mClass;

void StaticText_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.symbol.StaticText"), hx::TCanCast< StaticText_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StaticText_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
} // end namespace symbol
