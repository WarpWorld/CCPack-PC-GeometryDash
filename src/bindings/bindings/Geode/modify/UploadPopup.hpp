#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadPopup.hpp>
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

	#ifndef GEODE_STATICS_onReturnToLevel
		#define GEODE_STATICS_onReturnToLevel
		GEODE_AS_STATIC_FUNCTION(onReturnToLevel) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_levelUploadFinished
		#define GEODE_STATICS_levelUploadFinished
		GEODE_AS_STATIC_FUNCTION(levelUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_levelUploadFailed
		#define GEODE_STATICS_levelUploadFailed
		GEODE_AS_STATIC_FUNCTION(levelUploadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadPopup> : ModifyBase<ModifyDerive<Der, UploadPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadPopup>>;
		using ModifyBase<ModifyDerive<Der, UploadPopup>>::ModifyBase;
		using Base = UploadPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3890f0, Optcall, UploadPopup, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x389190, Membercall, UploadPopup, init, GJGameLevel*)
		}
	};
}
