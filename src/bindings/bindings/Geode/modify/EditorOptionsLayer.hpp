#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onButtonRows
		#define GEODE_STATICS_onButtonRows
		GEODE_AS_STATIC_FUNCTION(onButtonRows) 
	#endif

	#ifndef GEODE_STATICS_onButtonsPerRow
		#define GEODE_STATICS_onButtonsPerRow
		GEODE_AS_STATIC_FUNCTION(onButtonsPerRow) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_setupOptions
		#define GEODE_STATICS_setupOptions
		GEODE_AS_STATIC_FUNCTION(setupOptions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorOptionsLayer> : ModifyBase<ModifyDerive<Der, EditorOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorOptionsLayer>>::ModifyBase;
		using Base = EditorOptionsLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
