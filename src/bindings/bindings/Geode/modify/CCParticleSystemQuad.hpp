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

	#ifndef GEODE_STATICS_createWithTotalParticles
		#define GEODE_STATICS_createWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(createWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_initIndices
		#define GEODE_STATICS_initIndices
		GEODE_AS_STATIC_FUNCTION(initIndices) 
	#endif

	#ifndef GEODE_STATICS_initTexCoordsWithRect
		#define GEODE_STATICS_initTexCoordsWithRect
		GEODE_AS_STATIC_FUNCTION(initTexCoordsWithRect) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setDisplayFrame
		#define GEODE_STATICS_setDisplayFrame
		GEODE_AS_STATIC_FUNCTION(setDisplayFrame) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setTextureWithRect
		#define GEODE_STATICS_setTextureWithRect
		GEODE_AS_STATIC_FUNCTION(setTextureWithRect) 
	#endif

	#ifndef GEODE_STATICS_allocMemory
		#define GEODE_STATICS_allocMemory
		GEODE_AS_STATIC_FUNCTION(allocMemory) 
	#endif

	#ifndef GEODE_STATICS_listenBackToForeground
		#define GEODE_STATICS_listenBackToForeground
		GEODE_AS_STATIC_FUNCTION(listenBackToForeground) 
	#endif

	#ifndef GEODE_STATICS_setupVBO
		#define GEODE_STATICS_setupVBO
		GEODE_AS_STATIC_FUNCTION(setupVBO) 
	#endif

	#ifndef GEODE_STATICS_updateTexCoords
		#define GEODE_STATICS_updateTexCoords
		GEODE_AS_STATIC_FUNCTION(updateTexCoords) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_setBatchNode
		#define GEODE_STATICS_setBatchNode
		GEODE_AS_STATIC_FUNCTION(setBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setTotalParticles
		#define GEODE_STATICS_setTotalParticles
		GEODE_AS_STATIC_FUNCTION(setTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_initWithTotalParticles
		#define GEODE_STATICS_initWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(initWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_updateQuadWithParticle
		#define GEODE_STATICS_updateQuadWithParticle
		GEODE_AS_STATIC_FUNCTION(updateQuadWithParticle) 
	#endif

	#ifndef GEODE_STATICS_postStep
		#define GEODE_STATICS_postStep
		GEODE_AS_STATIC_FUNCTION(postStep) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCParticleSystemQuad> : ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>>::ModifyBase;
		using Base = cocos2d::CCParticleSystemQuad;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCParticleSystemQuad::create)), Cdecl, cocos2d::CCParticleSystemQuad, create, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::create)), Cdecl, cocos2d::CCParticleSystemQuad, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCParticleSystemQuad::createWithTotalParticles)), Cdecl, cocos2d::CCParticleSystemQuad, createWithTotalParticles, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::initIndices)), Thiscall, cocos2d::CCParticleSystemQuad, initIndices, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCParticleSystemQuad::initTexCoordsWithRect)), Thiscall, cocos2d::CCParticleSystemQuad, initTexCoordsWithRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::getOpacity)), Thiscall, cocos2d::CCParticleSystemQuad, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCParticleSystemQuad::setDisplayFrame)), Thiscall, cocos2d::CCParticleSystemQuad, setDisplayFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned char>::func(&cocos2d::CCParticleSystemQuad::setOpacity)), Thiscall, cocos2d::CCParticleSystemQuad, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCParticleSystemQuad::setTextureWithRect)), Thiscall, cocos2d::CCParticleSystemQuad, setTextureWithRect, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::allocMemory)), Thiscall, cocos2d::CCParticleSystemQuad, allocMemory, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCParticleSystemQuad::listenBackToForeground)), Thiscall, cocos2d::CCParticleSystemQuad, listenBackToForeground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::setupVBO)), Thiscall, cocos2d::CCParticleSystemQuad, setupVBO, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::updateTexCoords)), Thiscall, cocos2d::CCParticleSystemQuad, updateTexCoords, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::draw)), Thiscall, cocos2d::CCParticleSystemQuad, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCParticleBatchNode*>::func(&cocos2d::CCParticleSystemQuad::setBatchNode)), Thiscall, cocos2d::CCParticleSystemQuad, setBatchNode, cocos2d::CCParticleBatchNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleSystemQuad::setTotalParticles)), Thiscall, cocos2d::CCParticleSystemQuad, setTotalParticles, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCParticleSystemQuad::initWithTotalParticles)), Thiscall, cocos2d::CCParticleSystemQuad, initWithTotalParticles, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::sCCParticle*, cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystemQuad::updateQuadWithParticle)), Thiscall, cocos2d::CCParticleSystemQuad, updateQuadWithParticle, cocos2d::sCCParticle*, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::postStep)), Thiscall, cocos2d::CCParticleSystemQuad, postStep, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCParticleSystemQuad::setTexture)), Thiscall, cocos2d::CCParticleSystemQuad, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
