#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadActionPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_closePopup
		#define GEODE_STATICS_closePopup
		GEODE_AS_STATIC_FUNCTION(closePopup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_showFailMessage
		#define GEODE_STATICS_showFailMessage
		GEODE_AS_STATIC_FUNCTION(showFailMessage) 
	#endif

	#ifndef GEODE_STATICS_showSuccessMessage
		#define GEODE_STATICS_showSuccessMessage
		GEODE_AS_STATIC_FUNCTION(showSuccessMessage) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadActionPopup> : ModifyBase<ModifyDerive<Der, UploadActionPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadActionPopup>>;
		using ModifyBase<ModifyDerive<Der, UploadActionPopup>>::ModifyBase;
		using Base = UploadActionPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ac30, Optcall, UploadActionPopup, create, UploadPopupDelegate*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ad00, Membercall, UploadActionPopup, init, UploadPopupDelegate*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20b1e0, Membercall, UploadActionPopup, showFailMessage, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20b0e0, Membercall, UploadActionPopup, showSuccessMessage, gd::string)
		}
	};
}
