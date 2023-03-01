// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UK26AmmoHandlerComponent;
class UK26CrowPlacementValidatorComponent;
#ifdef THEK26_K26PathHandlerComponent_generated_h
#error "K26PathHandlerComponent.generated.h already included, missing '#pragma once' in K26PathHandlerComponent.h"
#endif
#define THEK26_K26PathHandlerComponent_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_RPC_WRAPPERS \
	virtual void Multicast_FillAvailablePathArray_Implementation(const int32 maxAmmo); \
 \
	DECLARE_FUNCTION(execAuthority_OnMaxAmmoSet); \
	DECLARE_FUNCTION(execMulticast_FillAvailablePathArray); \
	DECLARE_FUNCTION(execOnIterativeAvailablePathUpdate); \
	DECLARE_FUNCTION(execOnRep_AvailablePathData); \
	DECLARE_FUNCTION(execSetDependencies);


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_FillAvailablePathArray_Implementation(const int32 maxAmmo); \
 \
	DECLARE_FUNCTION(execAuthority_OnMaxAmmoSet); \
	DECLARE_FUNCTION(execMulticast_FillAvailablePathArray); \
	DECLARE_FUNCTION(execOnIterativeAvailablePathUpdate); \
	DECLARE_FUNCTION(execOnRep_AvailablePathData); \
	DECLARE_FUNCTION(execSetDependencies);


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_EVENT_PARMS \
	struct K26PathHandlerComponent_eventMulticast_FillAvailablePathArray_Parms \
	{ \
		int32 maxAmmo; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK26PathHandlerComponent(); \
	friend struct Z_Construct_UClass_UK26PathHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UK26PathHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26PathHandlerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_availablePathData=NETFIELD_REP_START, \
		NETFIELD_REP_END=_availablePathData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUK26PathHandlerComponent(); \
	friend struct Z_Construct_UClass_UK26PathHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UK26PathHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26PathHandlerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_availablePathData=NETFIELD_REP_START, \
		NETFIELD_REP_END=_availablePathData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK26PathHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK26PathHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26PathHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26PathHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26PathHandlerComponent(UK26PathHandlerComponent&&); \
	NO_API UK26PathHandlerComponent(const UK26PathHandlerComponent&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26PathHandlerComponent(UK26PathHandlerComponent&&); \
	NO_API UK26PathHandlerComponent(const UK26PathHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26PathHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26PathHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK26PathHandlerComponent)


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___maxPathDistance() { return STRUCT_OFFSET(UK26PathHandlerComponent, _maxPathDistance); } \
	FORCEINLINE static uint32 __PPO___survivorPathVisibilityTimeOnFire() { return STRUCT_OFFSET(UK26PathHandlerComponent, _survivorPathVisibilityTimeOnFire); } \
	FORCEINLINE static uint32 __PPO___defaultProjectileDistanceFromFloor() { return STRUCT_OFFSET(UK26PathHandlerComponent, _defaultProjectileDistanceFromFloor); } \
	FORCEINLINE static uint32 __PPO___maxPathIterations() { return STRUCT_OFFSET(UK26PathHandlerComponent, _maxPathIterations); } \
	FORCEINLINE static uint32 __PPO___maxGroundSearchingDistance() { return STRUCT_OFFSET(UK26PathHandlerComponent, _maxGroundSearchingDistance); } \
	FORCEINLINE static uint32 __PPO___visualPathPart() { return STRUCT_OFFSET(UK26PathHandlerComponent, _visualPathPart); } \
	FORCEINLINE static uint32 __PPO___visualPathEndArrow() { return STRUCT_OFFSET(UK26PathHandlerComponent, _visualPathEndArrow); } \
	FORCEINLINE static uint32 __PPO___projectileSummonDistance() { return STRUCT_OFFSET(UK26PathHandlerComponent, _projectileSummonDistance); } \
	FORCEINLINE static uint32 __PPO___ammoHandler() { return STRUCT_OFFSET(UK26PathHandlerComponent, _ammoHandler); } \
	FORCEINLINE static uint32 __PPO___placementValidator() { return STRUCT_OFFSET(UK26PathHandlerComponent, _placementValidator); } \
	FORCEINLINE static uint32 __PPO___availablePathData() { return STRUCT_OFFSET(UK26PathHandlerComponent, _availablePathData); } \
	FORCEINLINE static uint32 __PPO___availablePaths() { return STRUCT_OFFSET(UK26PathHandlerComponent, _availablePaths); }


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_14_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class UK26PathHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26PathHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
