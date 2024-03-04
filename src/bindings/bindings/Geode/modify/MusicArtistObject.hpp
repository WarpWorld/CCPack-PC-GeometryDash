#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicArtistObject.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, MusicArtistObject> : ModifyBase<ModifyDerive<Der, MusicArtistObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicArtistObject>>;
		using ModifyBase<ModifyDerive<Der, MusicArtistObject>>::ModifyBase;
		using Base = MusicArtistObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289cb0, Optcall, MusicArtistObject, create, int, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289e20, Membercall, MusicArtistObject, init, int, gd::string, gd::string, gd::string)
		}
	};
}
