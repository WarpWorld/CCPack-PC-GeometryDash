#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSmartBlockLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAllowFlipping
		#define GEODE_STATICS_onAllowFlipping
		GEODE_AS_STATIC_FUNCTION(onAllowFlipping) 
	#endif

	#ifndef GEODE_STATICS_onAllowRotation
		#define GEODE_STATICS_onAllowRotation
		GEODE_AS_STATIC_FUNCTION(onAllowRotation) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCreate
		#define GEODE_STATICS_onCreate
		GEODE_AS_STATIC_FUNCTION(onCreate) 
	#endif

	#ifndef GEODE_STATICS_onCreateAll
		#define GEODE_STATICS_onCreateAll
		GEODE_AS_STATIC_FUNCTION(onCreateAll) 
	#endif

	#ifndef GEODE_STATICS_onCreateTemplate
		#define GEODE_STATICS_onCreateTemplate
		GEODE_AS_STATIC_FUNCTION(onCreateTemplate) 
	#endif

	#ifndef GEODE_STATICS_onDontDelete
		#define GEODE_STATICS_onDontDelete
		GEODE_AS_STATIC_FUNCTION(onDontDelete) 
	#endif

	#ifndef GEODE_STATICS_onIgnoreCorners
		#define GEODE_STATICS_onIgnoreCorners
		GEODE_AS_STATIC_FUNCTION(onIgnoreCorners) 
	#endif

	#ifndef GEODE_STATICS_onNearbyReference
		#define GEODE_STATICS_onNearbyReference
		GEODE_AS_STATIC_FUNCTION(onNearbyReference) 
	#endif

	#ifndef GEODE_STATICS_onPasteTemplate
		#define GEODE_STATICS_onPasteTemplate
		GEODE_AS_STATIC_FUNCTION(onPasteTemplate) 
	#endif

	#ifndef GEODE_STATICS_onReferenceOnly
		#define GEODE_STATICS_onReferenceOnly
		GEODE_AS_STATIC_FUNCTION(onReferenceOnly) 
	#endif

	#ifndef GEODE_STATICS_onSelectPremade
		#define GEODE_STATICS_onSelectPremade
		GEODE_AS_STATIC_FUNCTION(onSelectPremade) 
	#endif

	#ifndef GEODE_STATICS_onSelectTemplate
		#define GEODE_STATICS_onSelectTemplate
		GEODE_AS_STATIC_FUNCTION(onSelectTemplate) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSmartBlockLayer> : ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>>;
		using ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>>::ModifyBase;
		using Base = SetupSmartBlockLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
