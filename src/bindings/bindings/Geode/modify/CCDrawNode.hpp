#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_clear
		#define GEODE_STATICS_clear
		GEODE_AS_STATIC_FUNCTION(clear) 
	#endif

	#ifndef GEODE_STATICS_drawCircle
		#define GEODE_STATICS_drawCircle
		GEODE_AS_STATIC_FUNCTION(drawCircle) 
	#endif

	#ifndef GEODE_STATICS_drawCubicBezier
		#define GEODE_STATICS_drawCubicBezier
		GEODE_AS_STATIC_FUNCTION(drawCubicBezier) 
	#endif

	#ifndef GEODE_STATICS_drawDot
		#define GEODE_STATICS_drawDot
		GEODE_AS_STATIC_FUNCTION(drawDot) 
	#endif

	#ifndef GEODE_STATICS_drawLines
		#define GEODE_STATICS_drawLines
		GEODE_AS_STATIC_FUNCTION(drawLines) 
	#endif

	#ifndef GEODE_STATICS_drawPolygon
		#define GEODE_STATICS_drawPolygon
		GEODE_AS_STATIC_FUNCTION(drawPolygon) 
	#endif

	#ifndef GEODE_STATICS_drawPreciseCubicBezier
		#define GEODE_STATICS_drawPreciseCubicBezier
		GEODE_AS_STATIC_FUNCTION(drawPreciseCubicBezier) 
	#endif

	#ifndef GEODE_STATICS_drawRect
		#define GEODE_STATICS_drawRect
		GEODE_AS_STATIC_FUNCTION(drawRect) 
	#endif

	#ifndef GEODE_STATICS_drawSegment
		#define GEODE_STATICS_drawSegment
		GEODE_AS_STATIC_FUNCTION(drawSegment) 
	#endif

	#ifndef GEODE_STATICS_ensureCapacity
		#define GEODE_STATICS_ensureCapacity
		GEODE_AS_STATIC_FUNCTION(ensureCapacity) 
	#endif

	#ifndef GEODE_STATICS_listenBackToForeground
		#define GEODE_STATICS_listenBackToForeground
		GEODE_AS_STATIC_FUNCTION(listenBackToForeground) 
	#endif

	#ifndef GEODE_STATICS_render
		#define GEODE_STATICS_render
		GEODE_AS_STATIC_FUNCTION(render) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDrawNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCDrawNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDrawNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDrawNode>>::ModifyBase;
		using Base = cocos2d::CCDrawNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::create)), Cdecl, cocos2d::CCDrawNode, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::getBlendFunc)), Thiscall, cocos2d::CCDrawNode, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::_ccBlendFunc const&>::func(&cocos2d::CCDrawNode::setBlendFunc)), Thiscall, cocos2d::CCDrawNode, setBlendFunc, cocos2d::_ccBlendFunc const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::clear)), Thiscall, cocos2d::CCDrawNode, clear, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, unsigned int>::func(&cocos2d::CCDrawNode::drawCircle)), Thiscall, cocos2d::CCDrawNode, drawCircle, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&>::func(&cocos2d::CCDrawNode::drawCubicBezier)), Thiscall, cocos2d::CCDrawNode, drawCubicBezier, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&>::func(&cocos2d::CCDrawNode::drawDot)), Thiscall, cocos2d::CCDrawNode, drawDot, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint*, unsigned int, float, cocos2d::_ccColor4F const&>::func(&cocos2d::CCDrawNode::drawLines)), Thiscall, cocos2d::CCDrawNode, drawLines, cocos2d::CCPoint*, unsigned int, float, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint *, unsigned int, const cocos2d::ccColor4F &, float, const cocos2d::ccColor4F &>::func(&cocos2d::CCDrawNode::drawPolygon)), Thiscall, cocos2d::CCDrawNode, drawPolygon, cocos2d::CCPoint *, unsigned int, const cocos2d::ccColor4F &, float, const cocos2d::ccColor4F &)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&>::func(&cocos2d::CCDrawNode::drawPreciseCubicBezier)), Thiscall, cocos2d::CCDrawNode, drawPreciseCubicBezier, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&>::func(&cocos2d::CCDrawNode::drawRect)), Thiscall, cocos2d::CCDrawNode, drawRect, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&>::func(&cocos2d::CCDrawNode::drawSegment)), Thiscall, cocos2d::CCDrawNode, drawSegment, cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCDrawNode::ensureCapacity)), Thiscall, cocos2d::CCDrawNode, ensureCapacity, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCDrawNode::listenBackToForeground)), Thiscall, cocos2d::CCDrawNode, listenBackToForeground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::render)), Thiscall, cocos2d::CCDrawNode, render, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDrawNode::init)), Thiscall, cocos2d::CCDrawNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDrawNode::draw)), Thiscall, cocos2d::CCDrawNode, draw, )
		}
	};
}
