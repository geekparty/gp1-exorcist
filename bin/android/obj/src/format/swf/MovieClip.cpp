#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_SWF
#include <format/SWF.h>
#endif
#ifndef INCLUDED_format_swf_FrameLabel
#include <format/swf/FrameLabel.h>
#endif
#ifndef INCLUDED_format_swf_MorphObject
#include <format/swf/MorphObject.h>
#endif
#ifndef INCLUDED_format_swf_MovieClip
#include <format/swf/MovieClip.h>
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
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_text_TextField
#include <neash/text/TextField.h>
#endif
namespace format{
namespace swf{

Void MovieClip_obj::__construct(::format::swf::symbol::Sprite data)
{
HX_STACK_PUSH("MovieClip::new","format/swf/MovieClip.hx",35);
{
	HX_STACK_LINE(37)
	super::__construct();
	HX_STACK_LINE(39)
	this->objectPool = ::IntHash_obj::__new();
	HX_STACK_LINE(41)
	this->enabled = true;
	HX_STACK_LINE(42)
	this->playing = false;
	HX_STACK_LINE(44)
	this->currentFrameLabel = null();
	HX_STACK_LINE(45)
	this->currentLabel = null();
	HX_STACK_LINE(46)
	this->currentLabels = Array_obj< ::format::swf::FrameLabel >::__new();
	HX_STACK_LINE(48)
	if (((data != null()))){
		HX_STACK_LINE(50)
		this->totalFrames = data->frameCount;
		HX_STACK_LINE(51)
		this->currentFrame = this->totalFrames;
		HX_STACK_LINE(52)
		this->framesLoaded = this->totalFrames;
		HX_STACK_LINE(54)
		this->swf = data->swf;
		HX_STACK_LINE(55)
		this->frames = data->frames;
		HX_STACK_LINE(57)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(data->frameLabels->keys());  __it->hasNext(); ){
			::String label = __it->next();
			{
				HX_STACK_LINE(59)
				::format::swf::FrameLabel frameLabel = ::format::swf::FrameLabel_obj::__new(data->frameLabels->get(label),label);		HX_STACK_VAR(frameLabel,"frameLabel");
				HX_STACK_LINE(60)
				this->currentLabels->push(frameLabel);
			}
;
		}
		HX_STACK_LINE(64)
		this->activeObjects = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(67)
		this->currentFrame = (int)1;
		HX_STACK_LINE(68)
		this->updateObjects();
		HX_STACK_LINE(69)
		this->play();
	}
	else{
		HX_STACK_LINE(73)
		this->currentFrame = (int)1;
		HX_STACK_LINE(74)
		this->totalFrames = (int)1;
		HX_STACK_LINE(75)
		this->framesLoaded = (int)1;
	}
}
;
	return null();
}

MovieClip_obj::~MovieClip_obj() { }

Dynamic MovieClip_obj::__CreateEmpty() { return  new MovieClip_obj; }
hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new(::format::swf::symbol::Sprite data)
{  hx::ObjectPtr< MovieClip_obj > result = new MovieClip_obj();
	result->__construct(data);
	return result;}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MovieClip_obj > result = new MovieClip_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MovieClip_obj::this_onEnterFrame( ::neash::events::Event event){
{
		HX_STACK_PUSH("MovieClip::this_onEnterFrame","format/swf/MovieClip.hx",444);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(444)
		if ((this->playing)){
			HX_STACK_LINE(448)
			(this->currentFrame)++;
			HX_STACK_LINE(450)
			if (((this->currentFrame > this->totalFrames))){
				HX_STACK_LINE(450)
				this->currentFrame = (int)1;
			}
			HX_STACK_LINE(456)
			this->updateObjects();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,this_onEnterFrame,(void))

Void MovieClip_obj::updateObjects( ){
{
		HX_STACK_PUSH("MovieClip::updateObjects","format/swf/MovieClip.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_LINE(208)
		if (((this->frames != null()))){
			HX_STACK_LINE(212)
			::format::swf::data::Frame frame = this->frames->__get(this->currentFrame);		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(213)
			bool depthChanged = false;		HX_STACK_VAR(depthChanged,"depthChanged");
			HX_STACK_LINE(214)
			bool waitingLoader = false;		HX_STACK_VAR(waitingLoader,"waitingLoader");
			HX_STACK_LINE(216)
			if (((frame != null()))){
				HX_STACK_LINE(218)
				::IntHash frameObjects = frame->copyObjectSet();		HX_STACK_VAR(frameObjects,"frameObjects");
				HX_STACK_LINE(219)
				Dynamic newActiveObjects = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(newActiveObjects,"newActiveObjects");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Dynamic _g1 = this->activeObjects;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(221)
					while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(221)
						Dynamic activeObject = _g1->__GetItem(_g);		HX_STACK_VAR(activeObject,"activeObject");
						HX_STACK_LINE(221)
						++(_g);
						HX_STACK_LINE(223)
						::format::swf::data::DepthSlot depthSlot = frameObjects->get(activeObject->__Field(HX_CSTRING("depth"),true));		HX_STACK_VAR(depthSlot,"depthSlot");
						HX_STACK_LINE(225)
						if (((bool((bool((depthSlot == null())) || bool((depthSlot->symbolID != activeObject->__Field(HX_CSTRING("symbolID"),true))))) || bool(activeObject->__Field(HX_CSTRING("waitingLoader"),true))))){
							HX_STACK_LINE(229)
							if ((!(activeObject->__Field(HX_CSTRING("waitingLoader"),true)))){
								HX_STACK_LINE(231)
								::List pool = this->objectPool->get(activeObject->__Field(HX_CSTRING("symbolID"),true));		HX_STACK_VAR(pool,"pool");
								HX_STACK_LINE(233)
								if (((pool == null()))){
									HX_STACK_LINE(235)
									pool = ::List_obj::__new();
									HX_STACK_LINE(236)
									this->objectPool->set(activeObject->__Field(HX_CSTRING("symbolID"),true),pool);
								}
								HX_STACK_LINE(240)
								pool->push(activeObject->__Field(HX_CSTRING("object"),true));
							}
							HX_STACK_LINE(245)
							this->removeChild(activeObject->__Field(HX_CSTRING("object"),true));
						}
						else{
							HX_STACK_LINE(250)
							frameObjects->remove(activeObject->__Field(HX_CSTRING("depth"),true));
							HX_STACK_LINE(252)
							activeObject->__FieldRef(HX_CSTRING("index")) = depthSlot->findClosestFrame(activeObject->__Field(HX_CSTRING("index"),true),this->currentFrame);
							HX_STACK_LINE(253)
							::format::swf::data::DisplayAttributes attributes = depthSlot->attributes->__get(activeObject->__Field(HX_CSTRING("index"),true));		HX_STACK_VAR(attributes,"attributes");
							HX_STACK_LINE(254)
							attributes->apply(activeObject->__Field(HX_CSTRING("object"),true));
							HX_STACK_LINE(256)
							newActiveObjects->__Field(HX_CSTRING("push"),true)(activeObject);
						}
					}
				}
				HX_STACK_LINE(263)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(frameObjects->keys());  __it->hasNext(); ){
					int depth = __it->next();
					{
						HX_STACK_LINE(265)
						::format::swf::data::DepthSlot slot = frameObjects->get(depth);		HX_STACK_VAR(slot,"slot");
						HX_STACK_LINE(266)
						::neash::display::DisplayObject displayObject = null();		HX_STACK_VAR(displayObject,"displayObject");
						HX_STACK_LINE(267)
						::List pool = this->objectPool->get(slot->symbolID);		HX_STACK_VAR(pool,"pool");
						HX_STACK_LINE(269)
						if (((bool((pool != null())) && bool((pool->length > (int)0))))){
							HX_STACK_LINE(271)
							displayObject = pool->pop();
							HX_STACK_LINE(273)
							{
								::format::swf::symbol::Symbol _switch_1 = (slot->symbol);
								switch((_switch_1)->GetIndex()){
									case 2: {
										::format::swf::symbol::Sprite data = _switch_1->__Param(0);
{
											HX_STACK_LINE(277)
											::format::swf::MovieClip clip = displayObject;		HX_STACK_VAR(clip,"clip");
											HX_STACK_LINE(278)
											clip->gotoAndPlay((int)1,null());
										}
									}
									;break;
									default: {
									}
								}
							}
						}
						else{
							HX_STACK_LINE(285)
							{
								::format::swf::symbol::Symbol _switch_2 = (slot->symbol);
								switch((_switch_2)->GetIndex()){
									case 2: {
										::format::swf::symbol::Sprite sprite = _switch_2->__Param(0);
{
											HX_STACK_LINE(291)
											::format::swf::MovieClip movie = ::format::swf::MovieClip_obj::__new(sprite);		HX_STACK_VAR(movie,"movie");
											HX_STACK_LINE(292)
											displayObject = movie;
										}
									}
									;break;
									case 0: {
										::format::swf::symbol::Shape shape = _switch_2->__Param(0);
{
											HX_STACK_LINE(296)
											::neash::display::Shape s = ::neash::display::Shape_obj::__new();		HX_STACK_VAR(s,"s");
											HX_STACK_LINE(298)
											if (((bool((bool(shape->hasBitmapRepeat) || bool(shape->hasCurves))) || bool(shape->hasGradientFill)))){
												HX_STACK_LINE(298)
												s->nmeSetCacheAsBitmap(true);
											}
											HX_STACK_LINE(305)
											waitingLoader = shape->render(s->nmeGetGraphics());
											HX_STACK_LINE(306)
											displayObject = s;
										}
									}
									;break;
									case 1: {
										::format::swf::symbol::MorphShape morphData = _switch_2->__Param(0);
{
											HX_STACK_LINE(310)
											::format::swf::MorphObject morph = ::format::swf::MorphObject_obj::__new(morphData);		HX_STACK_VAR(morph,"morph");
											HX_STACK_LINE(312)
											displayObject = morph;
										}
									}
									;break;
									case 5: {
										::format::swf::symbol::StaticText text = _switch_2->__Param(0);
{
											HX_STACK_LINE(316)
											::neash::display::Shape s = ::neash::display::Shape_obj::__new();		HX_STACK_VAR(s,"s");
											HX_STACK_LINE(317)
											s->nmeSetCacheAsBitmap(true);
											HX_STACK_LINE(318)
											text->render(s->nmeGetGraphics());
											HX_STACK_LINE(319)
											displayObject = s;
										}
									}
									;break;
									case 6: {
										::format::swf::symbol::EditText text = _switch_2->__Param(0);
{
											HX_STACK_LINE(323)
											::neash::text::TextField t = ::neash::text::TextField_obj::__new();		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(324)
											text->apply(t);
											HX_STACK_LINE(325)
											displayObject = t;
										}
									}
									;break;
									case 3: {
										::format::swf::symbol::Bitmap shape = _switch_2->__Param(0);
{
											HX_STACK_LINE(327)
											hx::Throw (HX_CSTRING("Adding bitmap?"));
										}
									}
									;break;
									case 4: {
										::format::swf::symbol::Font font = _switch_2->__Param(0);
{
											HX_STACK_LINE(331)
											hx::Throw (HX_CSTRING("Adding font?"));
										}
									}
									;break;
									case 7: {
										::format::swf::symbol::Button button = _switch_2->__Param(0);
{
											HX_STACK_LINE(337)
											::neash::display::SimpleButton b = ::neash::display::SimpleButton_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(338)
											button->apply(b);
											HX_STACK_LINE(339)
											displayObject = b;
										}
									}
									;break;
								}
							}
						}
						HX_STACK_LINE(350)
						bool added = false;		HX_STACK_VAR(added,"added");
						HX_STACK_LINE(354)
						{
							HX_STACK_LINE(354)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g = this->nmeGetNumChildren();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(354)
							while(((_g1 < _g))){
								HX_STACK_LINE(354)
								int cid = (_g1)++;		HX_STACK_VAR(cid,"cid");
								HX_STACK_LINE(362)
								int childDepth = (int)-1;		HX_STACK_VAR(childDepth,"childDepth");
								HX_STACK_LINE(363)
								::neash::display::DisplayObject sought = this->getChildAt(cid);		HX_STACK_VAR(sought,"sought");
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(365)
									while(((_g2 < newActiveObjects->__Field(HX_CSTRING("length"),true)))){
										HX_STACK_LINE(365)
										Dynamic child = newActiveObjects->__GetItem(_g2);		HX_STACK_VAR(child,"child");
										HX_STACK_LINE(365)
										++(_g2);
										HX_STACK_LINE(367)
										if (((child->__Field(HX_CSTRING("object"),true) == sought))){
											HX_STACK_LINE(369)
											childDepth = child->__Field(HX_CSTRING("depth"),true);
											HX_STACK_LINE(370)
											break;
										}
									}
								}
								HX_STACK_LINE(378)
								if (((childDepth > depth))){
									HX_STACK_LINE(380)
									this->addChildAt(displayObject,cid);
									HX_STACK_LINE(381)
									added = true;
									HX_STACK_LINE(382)
									break;
								}
							}
						}
						HX_STACK_LINE(388)
						if ((!(added))){
							HX_STACK_LINE(388)
							this->addChild(displayObject);
						}
						HX_STACK_LINE(394)
						int idx = slot->findClosestFrame((int)0,this->currentFrame);		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(395)
						slot->attributes->__get(idx)->apply(displayObject);
						struct _Function_4_1{
							inline static Dynamic Block( ::neash::display::DisplayObject &displayObject,int &depth,int &idx,bool &waitingLoader,::format::swf::data::DepthSlot &slot){
								HX_STACK_PUSH("*::closure","format/swf/MovieClip.hx",397);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("object") , displayObject,false);
									__result->Add(HX_CSTRING("depth") , depth,false);
									__result->Add(HX_CSTRING("index") , idx,false);
									__result->Add(HX_CSTRING("symbolID") , slot->symbolID,false);
									__result->Add(HX_CSTRING("waitingLoader") , waitingLoader,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(397)
						Dynamic act = _Function_4_1::Block(displayObject,depth,idx,waitingLoader,slot);		HX_STACK_VAR(act,"act");
						HX_STACK_LINE(399)
						newActiveObjects->__Field(HX_CSTRING("push"),true)(act);
						HX_STACK_LINE(400)
						depthChanged = true;
					}
;
				}
				HX_STACK_LINE(404)
				this->activeObjects = newActiveObjects;
				HX_STACK_LINE(406)
				this->currentFrameLabel = null();
				HX_STACK_LINE(407)
				this->currentFrameLabel = null();
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::format::swf::FrameLabel > _g1 = this->currentLabels;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(409)
					while(((_g < _g1->length))){
						HX_STACK_LINE(409)
						::format::swf::FrameLabel frameLabel = _g1->__get(_g);		HX_STACK_VAR(frameLabel,"frameLabel");
						HX_STACK_LINE(409)
						++(_g);
						HX_STACK_LINE(411)
						if (((frameLabel->frame < frame->frame))){
							HX_STACK_LINE(411)
							this->currentLabel = frameLabel->name;
						}
						else{
							HX_STACK_LINE(415)
							if (((frameLabel->frame == frame->frame))){
								HX_STACK_LINE(417)
								this->currentFrameLabel = frameLabel->name;
								HX_STACK_LINE(418)
								this->currentLabel = this->currentFrameLabel;
								HX_STACK_LINE(420)
								break;
							}
							else{
								HX_STACK_LINE(422)
								break;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,updateObjects,(void))

Void MovieClip_obj::stop( ){
{
		HX_STACK_PUSH("MovieClip::stop","format/swf/MovieClip.hx",200);
		HX_STACK_THIS(this);
		HX_STACK_LINE(202)
		this->playing = false;
		HX_STACK_LINE(203)
		this->removeEventListener(::neash::events::Event_obj::ENTER_FRAME,this->this_onEnterFrame_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

Void MovieClip_obj::prevFrame( ){
{
		HX_STACK_PUSH("MovieClip::prevFrame","format/swf/MovieClip.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_LINE(187)
		int previous = (this->currentFrame - (int)1);		HX_STACK_VAR(previous,"previous");
		HX_STACK_LINE(189)
		if (((previous < (int)1))){
			HX_STACK_LINE(189)
			previous = (int)1;
		}
		HX_STACK_LINE(195)
		this->gotoAndStop(previous,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

Void MovieClip_obj::play( ){
{
		HX_STACK_PUSH("MovieClip::play","format/swf/MovieClip.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_LINE(168)
		if (((this->totalFrames > (int)1))){
			HX_STACK_LINE(172)
			this->playing = true;
			HX_STACK_LINE(173)
			this->removeEventListener(::neash::events::Event_obj::ENTER_FRAME,this->this_onEnterFrame_dyn(),null());
			HX_STACK_LINE(174)
			this->addEventListener(::neash::events::Event_obj::ENTER_FRAME,this->this_onEnterFrame_dyn(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(176)
			this->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

Void MovieClip_obj::nextFrame( ){
{
		HX_STACK_PUSH("MovieClip::nextFrame","format/swf/MovieClip.hx",146);
		HX_STACK_THIS(this);
		HX_STACK_LINE(148)
		int next = (this->currentFrame + (int)1);		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(150)
		if (((next > this->totalFrames))){
			HX_STACK_LINE(150)
			next = this->totalFrames;
		}
		HX_STACK_LINE(156)
		this->gotoAndStop(next,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		HX_STACK_PUSH("MovieClip::gotoAndStop","format/swf/MovieClip.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_ARG(scene,"scene");
		HX_STACK_LINE(116)
		if (((frame != this->currentFrame))){
			HX_STACK_LINE(118)
			if ((::Std_obj::is(frame,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(120)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::format::swf::FrameLabel > _g1 = this->currentLabels;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(120)
				while(((_g < _g1->length))){
					HX_STACK_LINE(120)
					::format::swf::FrameLabel frameLabel = _g1->__get(_g);		HX_STACK_VAR(frameLabel,"frameLabel");
					HX_STACK_LINE(120)
					++(_g);
					HX_STACK_LINE(122)
					if (((frameLabel->name == frame))){
						HX_STACK_LINE(124)
						this->currentFrame = frameLabel->frame;
						HX_STACK_LINE(125)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(131)
				this->currentFrame = frame;
			}
			HX_STACK_LINE(137)
			this->updateObjects();
		}
		HX_STACK_LINE(141)
		this->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		HX_STACK_PUSH("MovieClip::gotoAndPlay","format/swf/MovieClip.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_ARG(scene,"scene");
		HX_STACK_LINE(84)
		if (((frame != this->currentFrame))){
			HX_STACK_LINE(86)
			if ((::Std_obj::is(frame,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(88)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::format::swf::FrameLabel > _g1 = this->currentLabels;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(88)
				while(((_g < _g1->length))){
					HX_STACK_LINE(88)
					::format::swf::FrameLabel frameLabel = _g1->__get(_g);		HX_STACK_VAR(frameLabel,"frameLabel");
					HX_STACK_LINE(88)
					++(_g);
					HX_STACK_LINE(90)
					if (((frameLabel->name == frame))){
						HX_STACK_LINE(92)
						this->currentFrame = frameLabel->frame;
						HX_STACK_LINE(93)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(99)
				this->currentFrame = frame;
			}
			HX_STACK_LINE(105)
			this->updateObjects();
		}
		HX_STACK_LINE(109)
		this->play();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))


MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(swf,"swf");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(objectPool,"objectPool");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(activeObjects,"activeObjects");
	HX_MARK_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(currentLabels,"currentLabels");
	HX_MARK_MEMBER_NAME(currentLabel,"currentLabel");
	HX_MARK_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(swf,"swf");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(objectPool,"objectPool");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(activeObjects,"activeObjects");
	HX_VISIT_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(currentLabels,"currentLabels");
	HX_VISIT_MEMBER_NAME(currentLabel,"currentLabel");
	HX_VISIT_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MovieClip_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { return swf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectPool") ) { return objectPool; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { return trackAsMenu; }
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return totalFrames; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { return framesLoaded; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { return currentLabel; }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return currentFrame; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateObjects") ) { return updateObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return activeObjects; }
		if (HX_FIELD_EQ(inName,"currentLabels") ) { return currentLabels; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return this_onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { return currentFrameLabel; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MovieClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { swf=inValue.Cast< ::format::SWF >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::format::swf::data::Frame > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectPool") ) { objectPool=inValue.Cast< ::IntHash >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { trackAsMenu=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { framesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { activeObjects=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentLabels") ) { currentLabels=inValue.Cast< Array< ::format::swf::FrameLabel > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("swf"));
	outFields->push(HX_CSTRING("playing"));
	outFields->push(HX_CSTRING("objectPool"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("activeObjects"));
	outFields->push(HX_CSTRING("trackAsMenu"));
	outFields->push(HX_CSTRING("totalFrames"));
	outFields->push(HX_CSTRING("framesLoaded"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("currentLabels"));
	outFields->push(HX_CSTRING("currentLabel"));
	outFields->push(HX_CSTRING("currentFrameLabel"));
	outFields->push(HX_CSTRING("currentFrame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("this_onEnterFrame"),
	HX_CSTRING("updateObjects"),
	HX_CSTRING("stop"),
	HX_CSTRING("prevFrame"),
	HX_CSTRING("play"),
	HX_CSTRING("nextFrame"),
	HX_CSTRING("gotoAndStop"),
	HX_CSTRING("gotoAndPlay"),
	HX_CSTRING("swf"),
	HX_CSTRING("playing"),
	HX_CSTRING("objectPool"),
	HX_CSTRING("frames"),
	HX_CSTRING("activeObjects"),
	HX_CSTRING("trackAsMenu"),
	HX_CSTRING("totalFrames"),
	HX_CSTRING("framesLoaded"),
	HX_CSTRING("enabled"),
	HX_CSTRING("currentLabels"),
	HX_CSTRING("currentLabel"),
	HX_CSTRING("currentFrameLabel"),
	HX_CSTRING("currentFrame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

Class MovieClip_obj::__mClass;

void MovieClip_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.MovieClip"), hx::TCanCast< MovieClip_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MovieClip_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
