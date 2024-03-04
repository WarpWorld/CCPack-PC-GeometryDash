#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MultilineBitmapFont.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithFont
		#define GEODE_STATICS_createWithFont
		GEODE_AS_STATIC_FUNCTION(createWithFont) 
	#endif

	#ifndef GEODE_STATICS_initWithFont
		#define GEODE_STATICS_initWithFont
		GEODE_AS_STATIC_FUNCTION(initWithFont) 
	#endif

	#ifndef GEODE_STATICS_moveSpecialDescriptors
		#define GEODE_STATICS_moveSpecialDescriptors
		GEODE_AS_STATIC_FUNCTION(moveSpecialDescriptors) 
	#endif

	#ifndef GEODE_STATICS_readColorInfo
		#define GEODE_STATICS_readColorInfo
		GEODE_AS_STATIC_FUNCTION(readColorInfo) 
	#endif

	#ifndef GEODE_STATICS_stringWithMaxWidth
		#define GEODE_STATICS_stringWithMaxWidth
		GEODE_AS_STATIC_FUNCTION(stringWithMaxWidth) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MultilineBitmapFont> : ModifyBase<ModifyDerive<Der, MultilineBitmapFont>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MultilineBitmapFont>>;
		using ModifyBase<ModifyDerive<Der, MultilineBitmapFont>>::ModifyBase;
		using Base = MultilineBitmapFont;
        using Derived = Der;
		void apply() override {

		}
	};
}
