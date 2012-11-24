#include <hxcpp.h>

#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_format_swf_data_DepthSlot
#include <format/swf/data/DepthSlot.h>
#endif
#ifndef INCLUDED_format_swf_data_DisplayAttributes
#include <format/swf/data/DisplayAttributes.h>
#endif
#ifndef INCLUDED_format_swf_data_Frame
#include <format/swf/data/Frame.h>
#endif
#ifndef INCLUDED_format_swf_symbol_Symbol
#include <format/swf/symbol/Symbol.h>
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
namespace data{

Void Frame_obj::__construct(::format::swf::data::Frame previous)
{
HX_STACK_PUSH("Frame::new","format/swf/data/Frame.hx",18);
{
	HX_STACK_LINE(20)
	this->objects = ::IntHash_obj::__new();
	HX_STACK_LINE(22)
	if (((previous != null()))){
		HX_STACK_LINE(24)
		::IntHash previousObjects = previous->objects;		HX_STACK_VAR(previousObjects,"previousObjects");
		HX_STACK_LINE(26)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(previousObjects->keys());  __it->hasNext(); ){
			int depth = __it->next();
			this->objects->set(depth,previousObjects->get(depth));
		}
		HX_STACK_LINE(32)
		this->frame = (previous->frame + (int)1);
	}
	else{
		HX_STACK_LINE(34)
		this->frame = (int)1;
	}
}
;
	return null();
}

Frame_obj::~Frame_obj() { }

Dynamic Frame_obj::__CreateEmpty() { return  new Frame_obj; }
hx::ObjectPtr< Frame_obj > Frame_obj::__new(::format::swf::data::Frame previous)
{  hx::ObjectPtr< Frame_obj > result = new Frame_obj();
	result->__construct(previous);
	return result;}

Dynamic Frame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Frame_obj > result = new Frame_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Frame_obj::remove( int depth){
{
		HX_STACK_PUSH("Frame::remove","format/swf/data/Frame.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(depth,"depth");
		HX_STACK_LINE(114)
		this->objects->remove(depth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Frame_obj,remove,(void))

Void Frame_obj::place( int symbolID,::format::swf::symbol::Symbol symbol,int depth,::neash::geom::Matrix matrix,::neash::geom::ColorTransform colorTransform,Dynamic ratio,::String name,Array< ::neash::filters::BitmapFilter > filters){
{
		HX_STACK_PUSH("Frame::place","format/swf/data/Frame.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(symbolID,"symbolID");
		HX_STACK_ARG(symbol,"symbol");
		HX_STACK_ARG(depth,"depth");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_ARG(colorTransform,"colorTransform");
		HX_STACK_ARG(ratio,"ratio");
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(filters,"filters");
		HX_STACK_LINE(75)
		::format::swf::data::DepthSlot previousObject = this->objects->get(depth);		HX_STACK_VAR(previousObject,"previousObject");
		HX_STACK_LINE(77)
		if (((previousObject != null()))){
			HX_STACK_LINE(77)
			if (((matrix == null()))){
				HX_STACK_LINE(79)
				matrix = previousObject->attributes->__get((int)0)->matrix;
			}
		}
		HX_STACK_LINE(89)
		::format::swf::data::DisplayAttributes attributes = ::format::swf::data::DisplayAttributes_obj::__new();		HX_STACK_VAR(attributes,"attributes");
		HX_STACK_LINE(90)
		attributes->frame = this->frame;
		HX_STACK_LINE(91)
		attributes->matrix = matrix;
		HX_STACK_LINE(92)
		attributes->colorTransform = colorTransform;
		HX_STACK_LINE(93)
		attributes->ratio = ratio;
		HX_STACK_LINE(95)
		if (((name == null()))){
			HX_STACK_LINE(95)
			attributes->name = HX_CSTRING("");
		}
		else{
			HX_STACK_LINE(99)
			attributes->name = name;
		}
		HX_STACK_LINE(105)
		attributes->filters = filters;
		HX_STACK_LINE(106)
		attributes->symbolID = symbolID;
		HX_STACK_LINE(108)
		::format::swf::data::DepthSlot object = ::format::swf::data::DepthSlot_obj::__new(symbolID,symbol,attributes);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(109)
		this->objects->set(depth,object);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Frame_obj,place,(void))

Void Frame_obj::move( int depth,::neash::geom::Matrix matrix,::neash::geom::ColorTransform colorTransform,Dynamic ratio){
{
		HX_STACK_PUSH("Frame::move","format/swf/data/Frame.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_ARG(depth,"depth");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_ARG(colorTransform,"colorTransform");
		HX_STACK_ARG(ratio,"ratio");
		HX_STACK_LINE(60)
		::format::swf::data::DepthSlot object = this->objects->get(depth);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(62)
		if (((object == null()))){
			HX_STACK_LINE(62)
			hx::Throw (HX_CSTRING("Depth has no object"));
		}
		HX_STACK_LINE(68)
		object->move(this->frame,matrix,colorTransform,ratio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Frame_obj,move,(void))

::IntHash Frame_obj::copyObjectSet( ){
	HX_STACK_PUSH("Frame::copyObjectSet","format/swf/data/Frame.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	::IntHash copy = ::IntHash_obj::__new();		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(47)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->objects->keys());  __it->hasNext(); ){
		int depth = __it->next();
		copy->set(depth,this->objects->get(depth));
	}
	HX_STACK_LINE(53)
	return copy;
}


HX_DEFINE_DYNAMIC_FUNC0(Frame_obj,copyObjectSet,return )


Frame_obj::Frame_obj()
{
}

void Frame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Frame);
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_END_CLASS();
}

void Frame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(frame,"frame");
}

Dynamic Frame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"place") ) { return place_dyn(); }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyObjectSet") ) { return copyObjectSet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Frame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::IntHash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("objects"));
	outFields->push(HX_CSTRING("frame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("remove"),
	HX_CSTRING("place"),
	HX_CSTRING("move"),
	HX_CSTRING("copyObjectSet"),
	HX_CSTRING("objects"),
	HX_CSTRING("frame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Frame_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Frame_obj::__mClass,"__mClass");
};

Class Frame_obj::__mClass;

void Frame_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.data.Frame"), hx::TCanCast< Frame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Frame_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
} // end namespace data
