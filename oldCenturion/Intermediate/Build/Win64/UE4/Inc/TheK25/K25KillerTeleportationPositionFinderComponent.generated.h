// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_K25KillerTeleportationPositionFinderComponent_generated_h
#error "K25KillerTeleportationPositionFinderComponent.generated.h already included, missing '#pragma once' in K25KillerTeleportationPositionFinderComponent.h"
#endif
#define THEK25_K25KillerTeleportationPositionFinderComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_RPC_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25KillerTeleportationPositionFinderComponent(); \
	friend struct Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics; \
public: \
	DECLARE_CLASS(UK25KillerTeleportationPositionFinderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25KillerTeleportationPositionFinderComponent)


#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUK25KillerTeleportationPositionFinderComponent(); \
	friend struct Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics; \
public: \
	DECLARE_CLASS(UK25KillerTeleportationPositionFinderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25KillerTeleportationPositionFinderComponent)


#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25KillerTeleportationPositionFinderComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25KillerTeleportationPositionFinderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25KillerTeleportationPositionFinderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25KillerTeleportationPositionFinderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25KillerTeleportationPositionFinderComponent(UK25KillerTeleportationPositionFinderComponent&&); \
	NO_API UK25KillerTeleportationPositionFinderComponent(const UK25KillerTeleportationPositionFinderComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25KillerTeleportationPositionFinderComponent(UK25KillerTeleportationPositionFinderComponent&&); \
	NO_API UK25KillerTeleportationPositionFinderComponent(const UK25KillerTeleportationPositionFinderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25KillerTeleportationPositionFinderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25KillerTeleportationPositionFinderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25KillerTeleportationPositionFinderComponent)


#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___rayCastZOffet() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _rayCastZOffet); } \
	FORCEINLINE static uint32 __PPO___rayCastLength() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _rayCastLength); } \
	FORCEINLINE static uint32 __PPO___killerInRangeMinimumDistanceCheck() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _killerInRangeMinimumDistanceCheck); } \
	FORCEINLINE static uint32 __PPO___killerInRangeMaxRangePercentage() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _killerInRangeMaxRangePercentage); } \
	FORCEINLINE static uint32 __PPO___deltaHeightThreshold() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _deltaHeightThreshold); } \
	FORCEINLINE static uint32 __PPO___minDistanceFromLamentConfiguration() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _minDistanceFromLamentConfiguration); } \
	FORCEINLINE static uint32 __PPO___maxDistanceFromLamentConfiguration() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _maxDistanceFromLamentConfiguration); } \
	FORCEINLINE static uint32 __PPO___timeBetweenFailsafeChecks() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _timeBetweenFailsafeChecks); } \
	FORCEINLINE static uint32 __PPO___teleportLocationStatus() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _teleportLocationStatus); } \
	FORCEINLINE static uint32 __PPO___bestTeleportLocation() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _bestTeleportLocation); } \
	FORCEINLINE static uint32 __PPO___escapeDoors() { return STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _escapeDoors); }


#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_11_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25KillerTeleportationPositionFinderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25KillerTeleportationPositionFinderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
