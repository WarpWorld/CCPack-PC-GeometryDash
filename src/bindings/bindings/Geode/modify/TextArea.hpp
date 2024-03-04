#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextArea.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_colorAllCharactersTo
		#define GEODE_STATICS_colorAllCharactersTo
		GEODE_AS_STATIC_FUNCTION(colorAllCharactersTo) 
	#endif

	#ifndef GEODE_STATICS_colorAllLabels
		#define GEODE_STATICS_colorAllLabels
		GEODE_AS_STATIC_FUNCTION(colorAllLabels) 
	#endif

	#ifndef GEODE_STATICS_fadeIn
		#define GEODE_STATICS_fadeIn
		GEODE_AS_STATIC_FUNCTION(fadeIn) 
	#endif

	#ifndef GEODE_STATICS_fadeInCharacters
		#define GEODE_STATICS_fadeInCharacters
		GEODE_AS_STATIC_FUNCTION(fadeInCharacters) 
	#endif

	#ifndef GEODE_STATICS_fadeOut
		#define GEODE_STATICS_fadeOut
		GEODE_AS_STATIC_FUNCTION(fadeOut) 
	#endif

	#ifndef GEODE_STATICS_fadeOutAndRemove
		#define GEODE_STATICS_fadeOutAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeOutAndRemove) 
	#endif

	#ifndef GEODE_STATICS_finishFade
		#define GEODE_STATICS_finishFade
		GEODE_AS_STATIC_FUNCTION(finishFade) 
	#endif

	#ifndef GEODE_STATICS_hideAll
		#define GEODE_STATICS_hideAll
		GEODE_AS_STATIC_FUNCTION(hideAll) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setIgnoreColorCode
		#define GEODE_STATICS_setIgnoreColorCode
		GEODE_AS_STATIC_FUNCTION(setIgnoreColorCode) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_showAll
		#define GEODE_STATICS_showAll
		GEODE_AS_STATIC_FUNCTION(showAll) 
	#endif

	#ifndef GEODE_STATICS_stopAllCharacterActions
		#define GEODE_STATICS_stopAllCharacterActions
		GEODE_AS_STATIC_FUNCTION(stopAllCharacterActions) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextArea> : ModifyBase<ModifyDerive<Der, TextArea>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextArea>>;
		using ModifyBase<ModifyDerive<Der, TextArea>>::ModifyBase;
		using Base = TextArea;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52250, Optcall, TextArea, create, gd::string, char const*, float, float, cocos2d::CCPoint, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52850, Membercall, TextArea, colorAllCharactersTo, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52350, Membercall, TextArea, init, gd::string, char const*, float, float, cocos2d::CCPoint, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52460, Membercall, TextArea, setString, gd::string)
		}
	};
}
