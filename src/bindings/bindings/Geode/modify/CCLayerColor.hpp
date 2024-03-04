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

	#ifndef GEODE_STATICS_setVertices
		#define GEODE_STATICS_setVertices
		GEODE_AS_STATIC_FUNCTION(setVertices) 
	#endif

	#ifndef GEODE_STATICS_addToVertices
		#define GEODE_STATICS_addToVertices
		GEODE_AS_STATIC_FUNCTION(addToVertices) 
	#endif

	#ifndef GEODE_STATICS_changeHeight
		#define GEODE_STATICS_changeHeight
		GEODE_AS_STATIC_FUNCTION(changeHeight) 
	#endif

	#ifndef GEODE_STATICS_changeWidth
		#define GEODE_STATICS_changeWidth
		GEODE_AS_STATIC_FUNCTION(changeWidth) 
	#endif

	#ifndef GEODE_STATICS_changeWidthAndHeight
		#define GEODE_STATICS_changeWidthAndHeight
		GEODE_AS_STATIC_FUNCTION(changeWidthAndHeight) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setContentSize
		#define GEODE_STATICS_setContentSize
		GEODE_AS_STATIC_FUNCTION(setContentSize) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_initWithColor
		#define GEODE_STATICS_initWithColor
		GEODE_AS_STATIC_FUNCTION(initWithColor) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLayerColor> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayerColor>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayerColor>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayerColor>>::ModifyBase;
		using Base = cocos2d::CCLayerColor;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::_ccColor4B const&>::func(&cocos2d::CCLayerColor::create)), Cdecl, cocos2d::CCLayerColor, create, cocos2d::_ccColor4B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::_ccColor4B const&, float, float>::func(&cocos2d::CCLayerColor::create)), Cdecl, cocos2d::CCLayerColor, create, cocos2d::_ccColor4B const&, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLayerColor::create)), Cdecl, cocos2d::CCLayerColor, create, )
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress(GetModuleHandleA("libcocos2d.dll"), "??0CCLayerColor@cocos2d@@QAE@XZ")), Thiscall, cocos2d::CCLayerColor, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress(GetModuleHandleA("libcocos2d.dll"), "??1CCLayerColor@cocos2d@@UAE@XZ")), Thiscall, cocos2d::CCLayerColor)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint>::func(&cocos2d::CCLayerColor::setVertices)), Thiscall, cocos2d::CCLayerColor, setVertices, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint>::func(&cocos2d::CCLayerColor::addToVertices)), Thiscall, cocos2d::CCLayerColor, addToVertices, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCLayerColor::changeHeight)), Thiscall, cocos2d::CCLayerColor, changeHeight, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCLayerColor::changeWidth)), Thiscall, cocos2d::CCLayerColor, changeWidth, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&cocos2d::CCLayerColor::changeWidthAndHeight)), Thiscall, cocos2d::CCLayerColor, changeWidthAndHeight, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerColor::init)), Thiscall, cocos2d::CCLayerColor, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCLayerColor::setContentSize)), Thiscall, cocos2d::CCLayerColor, setContentSize, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerColor::draw)), Thiscall, cocos2d::CCLayerColor, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor4B const&, float, float>::func(&cocos2d::CCLayerColor::initWithColor)), Thiscall, cocos2d::CCLayerColor, initWithColor, cocos2d::_ccColor4B const&, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor4B const&>::func(&cocos2d::CCLayerColor::initWithColor)), Thiscall, cocos2d::CCLayerColor, initWithColor, cocos2d::_ccColor4B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerColor::updateColor)), Thiscall, cocos2d::CCLayerColor, updateColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor3B const&>::func(&cocos2d::CCLayerColor::setColor)), Thiscall, cocos2d::CCLayerColor, setColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCLayerColor::setOpacity)), Thiscall, cocos2d::CCLayerColor, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccBlendFunc>::func(&cocos2d::CCLayerColor::setBlendFunc)), Thiscall, cocos2d::CCLayerColor, setBlendFunc, cocos2d::_ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerColor::getBlendFunc)), Thiscall, cocos2d::CCLayerColor, getBlendFunc, )
		}
	};
}
