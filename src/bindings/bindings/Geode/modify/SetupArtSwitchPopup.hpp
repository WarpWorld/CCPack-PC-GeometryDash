#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupArtSwitchPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onArt
		#define GEODE_STATICS_onArt
		GEODE_AS_STATIC_FUNCTION(onArt) 
	#endif

	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupArtSwitchPopup> : ModifyBase<ModifyDerive<Der, SetupArtSwitchPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupArtSwitchPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupArtSwitchPopup>>::ModifyBase;
		using Base = SetupArtSwitchPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
