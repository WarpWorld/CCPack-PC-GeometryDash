#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NumberInputLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_deleteLast
		#define GEODE_STATICS_deleteLast
		GEODE_AS_STATIC_FUNCTION(deleteLast) 
	#endif

	#ifndef GEODE_STATICS_inputNumber
		#define GEODE_STATICS_inputNumber
		GEODE_AS_STATIC_FUNCTION(inputNumber) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDone
		#define GEODE_STATICS_onDone
		GEODE_AS_STATIC_FUNCTION(onDone) 
	#endif

	#ifndef GEODE_STATICS_onNumber
		#define GEODE_STATICS_onNumber
		GEODE_AS_STATIC_FUNCTION(onNumber) 
	#endif

	#ifndef GEODE_STATICS_updateNumberState
		#define GEODE_STATICS_updateNumberState
		GEODE_AS_STATIC_FUNCTION(updateNumberState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NumberInputLayer> : ModifyBase<ModifyDerive<Der, NumberInputLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NumberInputLayer>>;
		using ModifyBase<ModifyDerive<Der, NumberInputLayer>>::ModifyBase;
		using Base = NumberInputLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28ab70, Optcall, NumberInputLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28ac10, Thiscall, NumberInputLayer, init, )
		}
	};
}
