#include <hxcpp.h>

#ifndef INCLUDED_format_SWF
#include <format/SWF.h>
#endif
#ifndef INCLUDED_format_swf_MorphObject
#include <format/swf/MorphObject.h>
#endif
#ifndef INCLUDED_format_swf_MovieClip
#include <format/swf/MovieClip.h>
#endif
#ifndef INCLUDED_format_swf_data_Filters
#include <format/swf/data/Filters.h>
#endif
#ifndef INCLUDED_format_swf_data_SWFStream
#include <format/swf/data/SWFStream.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Bitmap
#include <format/swf/symbol/Bitmap.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Button
#include <format/swf/symbol/Button.h>
#endif
#ifndef INCLUDED_format_swf_symbol_ButtonRecord
#include <format/swf/symbol/ButtonRecord.h>
#endif
#ifndef INCLUDED_format_swf_symbol_ButtonState
#include <format/swf/symbol/ButtonState.h>
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
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_Shape
#include <neash/display/Shape.h>
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
#ifndef INCLUDED_neash_filters_BitmapFilter
#include <neash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_neash_geom_ColorTransform
#include <neash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_text_TextField
#include <neash/text/TextField.h>
#endif
namespace format{
namespace swf{
namespace symbol{

Void Button_obj::__construct(::format::SWF swf,::format::swf::data::SWFStream stream,int version)
{
HX_STACK_PUSH("Button::new","format/swf/symbol/Button.hx",23);
{
	HX_STACK_LINE(25)
	this->swf = swf;
	HX_STACK_LINE(27)
	if (((version == (int)2))){
		HX_STACK_LINE(29)
		stream->readBits((int)7,null());
		HX_STACK_LINE(31)
		bool trackAsMenu = stream->readBool();		HX_STACK_VAR(trackAsMenu,"trackAsMenu");
		HX_STACK_LINE(32)
		int actionOffset = stream->readUInt16();		HX_STACK_VAR(actionOffset,"actionOffset");
	}
	HX_STACK_LINE(36)
	this->buttonRecords = Array_obj< ::format::swf::symbol::ButtonRecord >::__new();
	HX_STACK_LINE(38)
	while(((stream->readByte() != (int)0))){
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::format::swf::data::SWFStream _g = stream;		HX_STACK_VAR(_g,"_g");
			int _g1 = _g->getPosition();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(40)
			_g->setPosition((_g1 - (int)1));
			HX_STACK_LINE(40)
			_g1;
		}
		HX_STACK_LINE(42)
		int blank = stream->readBits((int)2,null());		HX_STACK_VAR(blank,"blank");
		HX_STACK_LINE(44)
		bool hasBlendMode = stream->readBool();		HX_STACK_VAR(hasBlendMode,"hasBlendMode");
		HX_STACK_LINE(45)
		bool hasFilterList = stream->readBool();		HX_STACK_VAR(hasFilterList,"hasFilterList");
		HX_STACK_LINE(47)
		bool stateHitTest = stream->readBool();		HX_STACK_VAR(stateHitTest,"stateHitTest");
		HX_STACK_LINE(48)
		bool stateDown = stream->readBool();		HX_STACK_VAR(stateDown,"stateDown");
		HX_STACK_LINE(49)
		bool stateOver = stream->readBool();		HX_STACK_VAR(stateOver,"stateOver");
		HX_STACK_LINE(50)
		bool stateUp = stream->readBool();		HX_STACK_VAR(stateUp,"stateUp");
		HX_STACK_LINE(52)
		int characterID = stream->readUInt16();		HX_STACK_VAR(characterID,"characterID");
		HX_STACK_LINE(54)
		::format::swf::symbol::ButtonState state = ::format::swf::symbol::ButtonState_obj::UP_dyn();		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(55)
		if ((stateHitTest)){
			HX_STACK_LINE(55)
			state = ::format::swf::symbol::ButtonState_obj::HIT_TEST_dyn();
		}
		HX_STACK_LINE(56)
		if ((stateDown)){
			HX_STACK_LINE(56)
			state = ::format::swf::symbol::ButtonState_obj::DOWN_dyn();
		}
		HX_STACK_LINE(57)
		if ((stateOver)){
			HX_STACK_LINE(57)
			state = ::format::swf::symbol::ButtonState_obj::OVER_dyn();
		}
		HX_STACK_LINE(58)
		if ((stateUp)){
			HX_STACK_LINE(58)
			state = ::format::swf::symbol::ButtonState_obj::UP_dyn();
		}
		HX_STACK_LINE(60)
		this->buttonRecords->push(::format::swf::symbol::ButtonRecord_obj::__new(characterID,state));
		HX_STACK_LINE(62)
		int placeDepth = stream->readUInt16();		HX_STACK_VAR(placeDepth,"placeDepth");
		HX_STACK_LINE(63)
		::neash::geom::Matrix placeMatrix = stream->readMatrix();		HX_STACK_VAR(placeMatrix,"placeMatrix");
		HX_STACK_LINE(65)
		if (((version == (int)2))){
			HX_STACK_LINE(67)
			::neash::geom::ColorTransform colorTransform = stream->readColorTransform(true);		HX_STACK_VAR(colorTransform,"colorTransform");
			HX_STACK_LINE(69)
			if ((hasFilterList)){
				HX_STACK_LINE(69)
				this->filters = ::format::swf::data::Filters_obj::readFilters(stream);
			}
			HX_STACK_LINE(75)
			if ((hasBlendMode)){
				HX_STACK_LINE(75)
				stream->readByte();
			}
		}
	}
}
;
	return null();
}

Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new(::format::SWF swf,::format::swf::data::SWFStream stream,int version)
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct(swf,stream,version);
	return result;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Button_obj::apply( ::neash::display::SimpleButton simpleButton){
{
		HX_STACK_PUSH("Button::apply","format/swf/symbol/Button.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(simpleButton,"simpleButton");
		HX_STACK_LINE(107)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::format::swf::symbol::ButtonRecord > _g1 = this->buttonRecords;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		while(((_g < _g1->length))){
			HX_STACK_LINE(107)
			::format::swf::symbol::ButtonRecord buttonRecord = _g1->__get(_g);		HX_STACK_VAR(buttonRecord,"buttonRecord");
			HX_STACK_LINE(107)
			++(_g);
			HX_STACK_LINE(109)
			::neash::display::DisplayObject displayObject = null();		HX_STACK_VAR(displayObject,"displayObject");
			HX_STACK_LINE(111)
			{
				::format::swf::symbol::Symbol _switch_1 = (this->swf->getSymbol(buttonRecord->id));
				switch((_switch_1)->GetIndex()){
					case 2: {
						::format::swf::symbol::Sprite sprite = _switch_1->__Param(0);
{
							HX_STACK_LINE(115)
							::format::swf::MovieClip movie = ::format::swf::MovieClip_obj::__new(sprite);		HX_STACK_VAR(movie,"movie");
							HX_STACK_LINE(116)
							displayObject = movie;
						}
					}
					;break;
					case 0: {
						::format::swf::symbol::Shape shape = _switch_1->__Param(0);
{
							HX_STACK_LINE(120)
							::neash::display::Shape s = ::neash::display::Shape_obj::__new();		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(121)
							s->nmeSetCacheAsBitmap(true);
							HX_STACK_LINE(123)
							shape->render(s->nmeGetGraphics());
							HX_STACK_LINE(124)
							displayObject = s;
						}
					}
					;break;
					case 1: {
						::format::swf::symbol::MorphShape morphData = _switch_1->__Param(0);
{
							HX_STACK_LINE(128)
							::format::swf::MorphObject morph = ::format::swf::MorphObject_obj::__new(morphData);		HX_STACK_VAR(morph,"morph");
							HX_STACK_LINE(130)
							displayObject = morph;
						}
					}
					;break;
					case 5: {
						::format::swf::symbol::StaticText text = _switch_1->__Param(0);
{
							HX_STACK_LINE(134)
							::neash::display::Shape s = ::neash::display::Shape_obj::__new();		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(135)
							s->nmeSetCacheAsBitmap(true);
							HX_STACK_LINE(136)
							text->render(s->nmeGetGraphics());
							HX_STACK_LINE(137)
							displayObject = s;
						}
					}
					;break;
					case 6: {
						::format::swf::symbol::EditText text = _switch_1->__Param(0);
{
							HX_STACK_LINE(141)
							::neash::text::TextField t = ::neash::text::TextField_obj::__new();		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(142)
							text->apply(t);
							HX_STACK_LINE(143)
							displayObject = t;
						}
					}
					;break;
					case 3: {
						::format::swf::symbol::Bitmap shape = _switch_1->__Param(0);
{
							HX_STACK_LINE(145)
							hx::Throw (HX_CSTRING("Adding bitmap?"));
						}
					}
					;break;
					case 4: {
						::format::swf::symbol::Font font = _switch_1->__Param(0);
{
							HX_STACK_LINE(149)
							hx::Throw (HX_CSTRING("Adding font?"));
						}
					}
					;break;
					case 7: {
						::format::swf::symbol::Button button = _switch_1->__Param(0);
{
							HX_STACK_LINE(155)
							::neash::display::SimpleButton b = ::neash::display::SimpleButton_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(156)
							button->apply(b);
							HX_STACK_LINE(157)
							displayObject = b;
						}
					}
					;break;
				}
			}
			HX_STACK_LINE(161)
			{
				::format::swf::symbol::ButtonState _switch_2 = (buttonRecord->state);
				switch((_switch_2)->GetIndex()){
					case 0: {
						HX_STACK_LINE(163)
						simpleButton->nmeSetUpState(displayObject);
					}
					;break;
					case 1: {
						HX_STACK_LINE(167)
						simpleButton->nmeSetOverState(displayObject);
					}
					;break;
					case 2: {
						HX_STACK_LINE(171)
						simpleButton->nmeSetDownState(displayObject);
					}
					;break;
					case 3: {
						HX_STACK_LINE(175)
						simpleButton->nmeSetHitTestState(displayObject);
					}
					;break;
					case 4: {
					}
					;break;
				}
			}
			HX_STACK_LINE(183)
			if (((simpleButton->hitTestState == null()))){
				HX_STACK_LINE(183)
				simpleButton->nmeSetHitTestState(simpleButton->upState);
			}
			HX_STACK_LINE(189)
			simpleButton->nmeSetFilters(this->filters);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,apply,(void))


Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(swf,"swf");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(buttonRecords,"buttonRecords");
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(swf,"swf");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(buttonRecords,"buttonRecords");
}

Dynamic Button_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { return swf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return filters; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buttonRecords") ) { return buttonRecords; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { swf=inValue.Cast< ::format::SWF >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< Array< ::neash::filters::BitmapFilter > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buttonRecords") ) { buttonRecords=inValue.Cast< Array< ::format::swf::symbol::ButtonRecord > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("swf"));
	outFields->push(HX_CSTRING("filters"));
	outFields->push(HX_CSTRING("buttonRecords"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	HX_CSTRING("swf"),
	HX_CSTRING("filters"),
	HX_CSTRING("buttonRecords"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

Class Button_obj::__mClass;

void Button_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.symbol.Button"), hx::TCanCast< Button_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Button_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
} // end namespace symbol
