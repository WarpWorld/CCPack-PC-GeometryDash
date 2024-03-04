#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithArray
		#define GEODE_STATICS_createWithArray
		GEODE_AS_STATIC_FUNCTION(createWithArray) 
	#endif

	#ifndef GEODE_STATICS_createWithCapacity
		#define GEODE_STATICS_createWithCapacity
		GEODE_AS_STATIC_FUNCTION(createWithCapacity) 
	#endif

	#ifndef GEODE_STATICS_createWithContentsOfFile
		#define GEODE_STATICS_createWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createWithContentsOfFileThreadSafe
		#define GEODE_STATICS_createWithContentsOfFileThreadSafe
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFileThreadSafe) 
	#endif

	#ifndef GEODE_STATICS_createWithObject
		#define GEODE_STATICS_createWithObject
		GEODE_AS_STATIC_FUNCTION(createWithObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_initWithArray
		#define GEODE_STATICS_initWithArray
		GEODE_AS_STATIC_FUNCTION(initWithArray) 
	#endif

	#ifndef GEODE_STATICS_initWithCapacity
		#define GEODE_STATICS_initWithCapacity
		GEODE_AS_STATIC_FUNCTION(initWithCapacity) 
	#endif

	#ifndef GEODE_STATICS_initWithObject
		#define GEODE_STATICS_initWithObject
		GEODE_AS_STATIC_FUNCTION(initWithObject) 
	#endif

	#ifndef GEODE_STATICS_addObject
		#define GEODE_STATICS_addObject
		GEODE_AS_STATIC_FUNCTION(addObject) 
	#endif

	#ifndef GEODE_STATICS_addObjectNew
		#define GEODE_STATICS_addObjectNew
		GEODE_AS_STATIC_FUNCTION(addObjectNew) 
	#endif

	#ifndef GEODE_STATICS_addObjectsFromArray
		#define GEODE_STATICS_addObjectsFromArray
		GEODE_AS_STATIC_FUNCTION(addObjectsFromArray) 
	#endif

	#ifndef GEODE_STATICS_capacity
		#define GEODE_STATICS_capacity
		GEODE_AS_STATIC_FUNCTION(capacity) 
	#endif

	#ifndef GEODE_STATICS_containsObject
		#define GEODE_STATICS_containsObject
		GEODE_AS_STATIC_FUNCTION(containsObject) 
	#endif

	#ifndef GEODE_STATICS_count
		#define GEODE_STATICS_count
		GEODE_AS_STATIC_FUNCTION(count) 
	#endif

	#ifndef GEODE_STATICS_exchangeObject
		#define GEODE_STATICS_exchangeObject
		GEODE_AS_STATIC_FUNCTION(exchangeObject) 
	#endif

	#ifndef GEODE_STATICS_exchangeObjectAtIndex
		#define GEODE_STATICS_exchangeObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(exchangeObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObject
		#define GEODE_STATICS_fastRemoveObject
		GEODE_AS_STATIC_FUNCTION(fastRemoveObject) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndex
		#define GEODE_STATICS_fastRemoveObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndexChild
		#define GEODE_STATICS_fastRemoveObjectAtIndexChild
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndexChild) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndexNew
		#define GEODE_STATICS_fastRemoveObjectAtIndexNew
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndexNew) 
	#endif

	#ifndef GEODE_STATICS_indexOfObject
		#define GEODE_STATICS_indexOfObject
		GEODE_AS_STATIC_FUNCTION(indexOfObject) 
	#endif

	#ifndef GEODE_STATICS_insertObject
		#define GEODE_STATICS_insertObject
		GEODE_AS_STATIC_FUNCTION(insertObject) 
	#endif

	#ifndef GEODE_STATICS_isEqualToArray
		#define GEODE_STATICS_isEqualToArray
		GEODE_AS_STATIC_FUNCTION(isEqualToArray) 
	#endif

	#ifndef GEODE_STATICS_lastObject
		#define GEODE_STATICS_lastObject
		GEODE_AS_STATIC_FUNCTION(lastObject) 
	#endif

	#ifndef GEODE_STATICS_objectAtIndex
		#define GEODE_STATICS_objectAtIndex
		GEODE_AS_STATIC_FUNCTION(objectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_randomObject
		#define GEODE_STATICS_randomObject
		GEODE_AS_STATIC_FUNCTION(randomObject) 
	#endif

	#ifndef GEODE_STATICS_recreateNewIndexes
		#define GEODE_STATICS_recreateNewIndexes
		GEODE_AS_STATIC_FUNCTION(recreateNewIndexes) 
	#endif

	#ifndef GEODE_STATICS_reduceMemoryFootprint
		#define GEODE_STATICS_reduceMemoryFootprint
		GEODE_AS_STATIC_FUNCTION(reduceMemoryFootprint) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeLastObject
		#define GEODE_STATICS_removeLastObject
		GEODE_AS_STATIC_FUNCTION(removeLastObject) 
	#endif

	#ifndef GEODE_STATICS_removeObject
		#define GEODE_STATICS_removeObject
		GEODE_AS_STATIC_FUNCTION(removeObject) 
	#endif

	#ifndef GEODE_STATICS_removeObjectAtIndex
		#define GEODE_STATICS_removeObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(removeObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_removeObjectAtIndexChild
		#define GEODE_STATICS_removeObjectAtIndexChild
		GEODE_AS_STATIC_FUNCTION(removeObjectAtIndexChild) 
	#endif

	#ifndef GEODE_STATICS_removeObjectsInArray
		#define GEODE_STATICS_removeObjectsInArray
		GEODE_AS_STATIC_FUNCTION(removeObjectsInArray) 
	#endif

	#ifndef GEODE_STATICS_replaceObjectAtIndex
		#define GEODE_STATICS_replaceObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(replaceObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_reverseObjects
		#define GEODE_STATICS_reverseObjects
		GEODE_AS_STATIC_FUNCTION(reverseObjects) 
	#endif

	#ifndef GEODE_STATICS_stringAtIndex
		#define GEODE_STATICS_stringAtIndex
		GEODE_AS_STATIC_FUNCTION(stringAtIndex) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_acceptVisitor
		#define GEODE_STATICS_acceptVisitor
		GEODE_AS_STATIC_FUNCTION(acceptVisitor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCArray> : ModifyBase<ModifyDerive<Der, cocos2d::CCArray>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCArray>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCArray>>::ModifyBase;
		using Base = cocos2d::CCArray;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::create)), Cdecl, cocos2d::CCArray, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCArray::createWithArray)), Cdecl, cocos2d::CCArray, createWithArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::createWithCapacity)), Cdecl, cocos2d::CCArray, createWithCapacity, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCArray::createWithContentsOfFile)), Cdecl, cocos2d::CCArray, createWithContentsOfFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCArray::createWithContentsOfFileThreadSafe)), Cdecl, cocos2d::CCArray, createWithContentsOfFileThreadSafe, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::createWithObject)), Cdecl, cocos2d::CCArray, createWithObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::init)), Thiscall, cocos2d::CCArray, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCArray::initWithArray)), Thiscall, cocos2d::CCArray, initWithArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::initWithCapacity)), Thiscall, cocos2d::CCArray, initWithCapacity, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::initWithObject)), Thiscall, cocos2d::CCArray, initWithObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::addObject)), Thiscall, cocos2d::CCArray, addObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::addObjectNew)), Thiscall, cocos2d::CCArray, addObjectNew, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCArray::addObjectsFromArray)), Thiscall, cocos2d::CCArray, addObjectsFromArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::capacity)), Thiscall, cocos2d::CCArray, capacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::containsObject)), Thiscall, cocos2d::CCArray, containsObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::count)), Thiscall, cocos2d::CCArray, count, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::CCObject*>::func(&cocos2d::CCArray::exchangeObject)), Thiscall, cocos2d::CCArray, exchangeObject, cocos2d::CCObject*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, unsigned int>::func(&cocos2d::CCArray::exchangeObjectAtIndex)), Thiscall, cocos2d::CCArray, exchangeObjectAtIndex, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::fastRemoveObject)), Thiscall, cocos2d::CCArray, fastRemoveObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::fastRemoveObjectAtIndex)), Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::fastRemoveObjectAtIndexChild)), Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndexChild, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::fastRemoveObjectAtIndexNew)), Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndexNew, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::indexOfObject)), Thiscall, cocos2d::CCArray, indexOfObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, unsigned int>::func(&cocos2d::CCArray::insertObject)), Thiscall, cocos2d::CCArray, insertObject, cocos2d::CCObject*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCArray::isEqualToArray)), Thiscall, cocos2d::CCArray, isEqualToArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::lastObject)), Thiscall, cocos2d::CCArray, lastObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::objectAtIndex)), Thiscall, cocos2d::CCArray, objectAtIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::randomObject)), Thiscall, cocos2d::CCArray, randomObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::recreateNewIndexes)), Thiscall, cocos2d::CCArray, recreateNewIndexes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::reduceMemoryFootprint)), Thiscall, cocos2d::CCArray, reduceMemoryFootprint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::removeAllObjects)), Thiscall, cocos2d::CCArray, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCArray::removeLastObject)), Thiscall, cocos2d::CCArray, removeLastObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, bool>::func(&cocos2d::CCArray::removeObject)), Thiscall, cocos2d::CCArray, removeObject, cocos2d::CCObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCArray::removeObjectAtIndex)), Thiscall, cocos2d::CCArray, removeObjectAtIndex, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCArray::removeObjectAtIndexChild)), Thiscall, cocos2d::CCArray, removeObjectAtIndexChild, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCArray::removeObjectsInArray)), Thiscall, cocos2d::CCArray, removeObjectsInArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::CCObject*, bool>::func(&cocos2d::CCArray::replaceObjectAtIndex)), Thiscall, cocos2d::CCArray, replaceObjectAtIndex, unsigned int, cocos2d::CCObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::reverseObjects)), Thiscall, cocos2d::CCArray, reverseObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::stringAtIndex)), Thiscall, cocos2d::CCArray, stringAtIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCArray::copyWithZone)), Thiscall, cocos2d::CCArray, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDataVisitor&>::func(&cocos2d::CCArray::acceptVisitor)), Thiscall, cocos2d::CCArray, acceptVisitor, cocos2d::CCDataVisitor&)
		}
	};
}
