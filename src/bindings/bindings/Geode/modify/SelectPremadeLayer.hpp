#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectPremadeLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSelectPremade
		#define GEODE_STATICS_onSelectPremade
		GEODE_AS_STATIC_FUNCTION(onSelectPremade) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectPremadeLayer> : ModifyBase<ModifyDerive<Der, SelectPremadeLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectPremadeLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectPremadeLayer>>::ModifyBase;
		using Base = SelectPremadeLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
