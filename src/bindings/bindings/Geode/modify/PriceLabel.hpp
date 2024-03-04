#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PriceLabel.hpp>
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

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setPrice
		#define GEODE_STATICS_setPrice
		GEODE_AS_STATIC_FUNCTION(setPrice) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PriceLabel> : ModifyBase<ModifyDerive<Der, PriceLabel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PriceLabel>>;
		using ModifyBase<ModifyDerive<Der, PriceLabel>>::ModifyBase;
		using Base = PriceLabel;
        using Derived = Der;
		void apply() override {

		}
	};
}
