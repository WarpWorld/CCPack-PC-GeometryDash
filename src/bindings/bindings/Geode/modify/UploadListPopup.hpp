#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadListPopup.hpp>
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

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onReturnToList
		#define GEODE_STATICS_onReturnToList
		GEODE_AS_STATIC_FUNCTION(onReturnToList) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_listUploadFinished
		#define GEODE_STATICS_listUploadFinished
		GEODE_AS_STATIC_FUNCTION(listUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_listUploadFailed
		#define GEODE_STATICS_listUploadFailed
		GEODE_AS_STATIC_FUNCTION(listUploadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadListPopup> : ModifyBase<ModifyDerive<Der, UploadListPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadListPopup>>;
		using ModifyBase<ModifyDerive<Der, UploadListPopup>>::ModifyBase;
		using Base = UploadListPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
