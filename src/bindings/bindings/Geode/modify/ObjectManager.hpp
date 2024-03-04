#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ObjectManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_animLoaded
		#define GEODE_STATICS_animLoaded
		GEODE_AS_STATIC_FUNCTION(animLoaded) 
	#endif

	#ifndef GEODE_STATICS_getDefinition
		#define GEODE_STATICS_getDefinition
		GEODE_AS_STATIC_FUNCTION(getDefinition) 
	#endif

	#ifndef GEODE_STATICS_getGlobalAnimCopy
		#define GEODE_STATICS_getGlobalAnimCopy
		GEODE_AS_STATIC_FUNCTION(getGlobalAnimCopy) 
	#endif

	#ifndef GEODE_STATICS_instance
		#define GEODE_STATICS_instance
		GEODE_AS_STATIC_FUNCTION(instance) 
	#endif

	#ifndef GEODE_STATICS_loadCopiedAnimations
		#define GEODE_STATICS_loadCopiedAnimations
		GEODE_AS_STATIC_FUNCTION(loadCopiedAnimations) 
	#endif

	#ifndef GEODE_STATICS_loadCopiedSets
		#define GEODE_STATICS_loadCopiedSets
		GEODE_AS_STATIC_FUNCTION(loadCopiedSets) 
	#endif

	#ifndef GEODE_STATICS_purgeObjectManager
		#define GEODE_STATICS_purgeObjectManager
		GEODE_AS_STATIC_FUNCTION(purgeObjectManager) 
	#endif

	#ifndef GEODE_STATICS_replaceAllOccurencesOfString
		#define GEODE_STATICS_replaceAllOccurencesOfString
		GEODE_AS_STATIC_FUNCTION(replaceAllOccurencesOfString) 
	#endif

	#ifndef GEODE_STATICS_setLoaded
		#define GEODE_STATICS_setLoaded
		GEODE_AS_STATIC_FUNCTION(setLoaded) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ObjectManager> : ModifyBase<ModifyDerive<Der, ObjectManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ObjectManager>>;
		using ModifyBase<ModifyDerive<Der, ObjectManager>>::ModifyBase;
		using Base = ObjectManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4bae0, Membercall, ObjectManager, getDefinition, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a7f0, Membercall, ObjectManager, instance, )
		}
	};
}
