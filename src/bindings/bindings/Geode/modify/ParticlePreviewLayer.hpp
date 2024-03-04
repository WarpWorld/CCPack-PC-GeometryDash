#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ParticlePreviewLayer.hpp>
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

	#ifndef GEODE_STATICS_postVisit
		#define GEODE_STATICS_postVisit
		GEODE_AS_STATIC_FUNCTION(postVisit) 
	#endif

	#ifndef GEODE_STATICS_preVisitWithClippingRect
		#define GEODE_STATICS_preVisitWithClippingRect
		GEODE_AS_STATIC_FUNCTION(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ParticlePreviewLayer> : ModifyBase<ModifyDerive<Der, ParticlePreviewLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ParticlePreviewLayer>>;
		using ModifyBase<ModifyDerive<Der, ParticlePreviewLayer>>::ModifyBase;
		using Base = ParticlePreviewLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
