#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, FLAlertLayerProtocol> : ModifyBase<ModifyDerive<Der, FLAlertLayerProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FLAlertLayerProtocol>>;
		using ModifyBase<ModifyDerive<Der, FLAlertLayerProtocol>>::ModifyBase;
		using Base = FLAlertLayerProtocol;
        using Derived = Der;
		void apply() override {

		}
	};
}
