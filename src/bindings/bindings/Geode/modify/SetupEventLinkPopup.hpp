#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupEventLinkPopup.hpp>
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

	#ifndef GEODE_STATICS_onSelectEvent
		#define GEODE_STATICS_onSelectEvent
		GEODE_AS_STATIC_FUNCTION(onSelectEvent) 
	#endif

	#ifndef GEODE_STATICS_updateEventIDs
		#define GEODE_STATICS_updateEventIDs
		GEODE_AS_STATIC_FUNCTION(updateEventIDs) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupEventLinkPopup> : ModifyBase<ModifyDerive<Der, SetupEventLinkPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupEventLinkPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupEventLinkPopup>>::ModifyBase;
		using Base = SetupEventLinkPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
