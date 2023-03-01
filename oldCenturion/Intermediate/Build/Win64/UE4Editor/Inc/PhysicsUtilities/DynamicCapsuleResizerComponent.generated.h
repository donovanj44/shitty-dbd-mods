// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PHYSICSUTILITIES_DynamicCapsuleResizerComponent_generated_h
#error "DynamicCapsuleResizerComponent.generated.h already included, missing '#pragma once' in DynamicCapsuleResizerComponent.h"
#endif
#define PHYSICSUTILITIES_DynamicCapsuleResizerComponent_generated_h

#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnRep_IsShrinkingAlwaysEnabled); \
	DECLARE_FUNCTION(execSetShrinkingEnabled);


#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnRep_IsShrinkingAlwaysEnabled); \
	DECLARE_FUNCTION(execSetShrinkingEnabled);


#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicCapsuleResizerComponent(); \
	friend struct Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics; \
public: \
	DECLARE_CLASS(UDynamicCapsuleResizerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsUtilities"), NO_API) \
	DECLARE_SERIALIZER(UDynamicCapsuleResizerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isShrinkingAlwaysEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isShrinkingAlwaysEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicCapsuleResizerComponent(); \
	friend struct Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics; \
public: \
	DECLARE_CLASS(UDynamicCapsuleResizerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsUtilities"), NO_API) \
	DECLARE_SERIALIZER(UDynamicCapsuleResizerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isShrinkingAlwaysEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isShrinkingAlwaysEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicCapsuleResizerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicCapsuleResizerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicCapsuleResizerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicCapsuleResizerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicCapsuleResizerComponent(UDynamicCapsuleResizerComponent&&); \
	NO_API UDynamicCapsuleResizerComponent(const UDynamicCapsuleResizerComponent&); \
public:


#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicCapsuleResizerComponent(UDynamicCapsuleResizerComponent&&); \
	NO_API UDynamicCapsuleResizerComponent(const UDynamicCapsuleResizerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicCapsuleResizerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicCapsuleResizerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicCapsuleResizerComponent)


#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___capsule() { return STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _capsule); } \
	FORCEINLINE static uint32 __PPO___shrinkPercent() { return STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _shrinkPercent); } \
	FORCEINLINE static uint32 __PPO___shrinkDuration() { return STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _shrinkDuration); } \
	FORCEINLINE static uint32 __PPO___expandDuration() { return STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _expandDuration); } \
	FORCEINLINE static uint32 __PPO___stayShrunkenDuration() { return STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _stayShrunkenDuration); } \
	FORCEINLINE static uint32 __PPO___expandOverlapTestMinDeltaTime() { return STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _expandOverlapTestMinDeltaTime); } \
	FORCEINLINE static uint32 __PPO___isShrinkingEnabled() { return STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _isShrinkingEnabled); } \
	FORCEINLINE static uint32 __PPO___isShrinkingAlwaysEnabled() { return STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _isShrinkingAlwaysEnabled); }


#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_12_PROLOG
#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_INCLASS \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSUTILITIES_API UClass* StaticClass<class UDynamicCapsuleResizerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_PhysicsUtilities_Public_DynamicCapsuleResizerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
