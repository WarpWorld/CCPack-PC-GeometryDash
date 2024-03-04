#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCounterLabel.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_calculateStepSize
		#define GEODE_STATICS_calculateStepSize
		GEODE_AS_STATIC_FUNCTION(calculateStepSize) 
	#endif

	#ifndef GEODE_STATICS_disableCounter
		#define GEODE_STATICS_disableCounter
		GEODE_AS_STATIC_FUNCTION(disableCounter) 
	#endif

	#ifndef GEODE_STATICS_enableCounter
		#define GEODE_STATICS_enableCounter
		GEODE_AS_STATIC_FUNCTION(enableCounter) 
	#endif

	#ifndef GEODE_STATICS_fastUpdateCounter
		#define GEODE_STATICS_fastUpdateCounter
		GEODE_AS_STATIC_FUNCTION(fastUpdateCounter) 
	#endif

	#ifndef GEODE_STATICS_getTargetCount
		#define GEODE_STATICS_getTargetCount
		GEODE_AS_STATIC_FUNCTION(getTargetCount) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setTargetCount
		#define GEODE_STATICS_setTargetCount
		GEODE_AS_STATIC_FUNCTION(setTargetCount) 
	#endif

	#ifndef GEODE_STATICS_updateCounter
		#define GEODE_STATICS_updateCounter
		GEODE_AS_STATIC_FUNCTION(updateCounter) 
	#endif

	#ifndef GEODE_STATICS_updateString
		#define GEODE_STATICS_updateString
		GEODE_AS_STATIC_FUNCTION(updateString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCounterLabel> : ModifyBase<ModifyDerive<Der, CCCounterLabel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCounterLabel>>;
		using ModifyBase<ModifyDerive<Der, CCCounterLabel>>::ModifyBase;
		using Base = CCCounterLabel;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23e20, Membercall, CCCounterLabel, setTargetCount, int)
		}
	};
}
