#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextStyleSection.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createColoredSection
		#define GEODE_STATICS_createColoredSection
		GEODE_AS_STATIC_FUNCTION(createColoredSection) 
	#endif

	#ifndef GEODE_STATICS_createDelaySection
		#define GEODE_STATICS_createDelaySection
		GEODE_AS_STATIC_FUNCTION(createDelaySection) 
	#endif

	#ifndef GEODE_STATICS_createInstantSection
		#define GEODE_STATICS_createInstantSection
		GEODE_AS_STATIC_FUNCTION(createInstantSection) 
	#endif

	#ifndef GEODE_STATICS_createShakeSection
		#define GEODE_STATICS_createShakeSection
		GEODE_AS_STATIC_FUNCTION(createShakeSection) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextStyleSection> : ModifyBase<ModifyDerive<Der, TextStyleSection>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextStyleSection>>;
		using ModifyBase<ModifyDerive<Der, TextStyleSection>>::ModifyBase;
		using Base = TextStyleSection;
        using Derived = Der;
		void apply() override {

		}
	};
}
