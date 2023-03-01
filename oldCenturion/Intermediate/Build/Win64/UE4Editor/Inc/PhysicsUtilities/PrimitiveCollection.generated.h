// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef PHYSICSUTILITIES_PrimitiveCollection_generated_h
#error "PrimitiveCollection.generated.h already included, missing '#pragma once' in PrimitiveCollection.h"
#endif
#define PHYSICSUTILITIES_PrimitiveCollection_generated_h

#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_SPARSE_DATA
#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execRemove);


#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execRemove);


#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveCollection(); \
	friend struct Z_Construct_UClass_UPrimitiveCollection_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsUtilities"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveCollection)


#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPrimitiveCollection(); \
	friend struct Z_Construct_UClass_UPrimitiveCollection_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsUtilities"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveCollection)


#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrimitiveCollection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimitiveCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveCollection(UPrimitiveCollection&&); \
	NO_API UPrimitiveCollection(const UPrimitiveCollection&); \
public:


#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveCollection(UPrimitiveCollection&&); \
	NO_API UPrimitiveCollection(const UPrimitiveCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimitiveCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPrimitiveCollection)


#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___primitives() { return STRUCT_OFFSET(UPrimitiveCollection, _primitives); }


#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_8_PROLOG
#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_SPARSE_DATA \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_INCLASS \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_SPARSE_DATA \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSUTILITIES_API UClass* StaticClass<class UPrimitiveCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_PhysicsUtilities_Public_PrimitiveCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
