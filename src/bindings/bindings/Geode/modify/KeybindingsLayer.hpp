#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addKeyPair
		#define GEODE_STATICS_addKeyPair
		GEODE_AS_STATIC_FUNCTION(addKeyPair) 
	#endif

	#ifndef GEODE_STATICS_countForPage
		#define GEODE_STATICS_countForPage
		GEODE_AS_STATIC_FUNCTION(countForPage) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_incrementCountForPage
		#define GEODE_STATICS_incrementCountForPage
		GEODE_AS_STATIC_FUNCTION(incrementCountForPage) 
	#endif

	#ifndef GEODE_STATICS_infoKey
		#define GEODE_STATICS_infoKey
		GEODE_AS_STATIC_FUNCTION(infoKey) 
	#endif

	#ifndef GEODE_STATICS_layerForPage
		#define GEODE_STATICS_layerForPage
		GEODE_AS_STATIC_FUNCTION(layerForPage) 
	#endif

	#ifndef GEODE_STATICS_layerKey
		#define GEODE_STATICS_layerKey
		GEODE_AS_STATIC_FUNCTION(layerKey) 
	#endif

	#ifndef GEODE_STATICS_nextPosition
		#define GEODE_STATICS_nextPosition
		GEODE_AS_STATIC_FUNCTION(nextPosition) 
	#endif

	#ifndef GEODE_STATICS_objectKey
		#define GEODE_STATICS_objectKey
		GEODE_AS_STATIC_FUNCTION(objectKey) 
	#endif

	#ifndef GEODE_STATICS_objectsForPage
		#define GEODE_STATICS_objectsForPage
		GEODE_AS_STATIC_FUNCTION(objectsForPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_pageKey
		#define GEODE_STATICS_pageKey
		GEODE_AS_STATIC_FUNCTION(pageKey) 
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
	struct ModifyDerive<Der, KeybindingsLayer> : ModifyBase<ModifyDerive<Der, KeybindingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindingsLayer>>;
		using ModifyBase<ModifyDerive<Der, KeybindingsLayer>>::ModifyBase;
		using Base = KeybindingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c1c0, Optcall, KeybindingsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c9d0, Membercall, KeybindingsLayer, addKeyPair, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22ccd0, Membercall, KeybindingsLayer, countForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22d010, Membercall, KeybindingsLayer, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22cda0, Membercall, KeybindingsLayer, incrementCountForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22ce80, Membercall, KeybindingsLayer, layerForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c260, Thiscall, KeybindingsLayer, init, )
		}
	};
}
