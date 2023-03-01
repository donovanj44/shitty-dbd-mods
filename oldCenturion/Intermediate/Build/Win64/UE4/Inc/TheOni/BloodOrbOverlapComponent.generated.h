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
struct FHitResult;
enum class EBloodOrbVisibilityMode : uint8;
#ifdef THEONI_BloodOrbOverlapComponent_generated_h
#error "BloodOrbOverlapComponent.generated.h already included, missing '#pragma once' in BloodOrbOverlapComponent.h"
#endif
#define THEONI_BloodOrbOverlapComponent_generated_h

#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnBloodOrbBeginOverlap); \
	DECLARE_FUNCTION(execAuthority_OnBloodOrbEndOverlap); \
	DECLARE_FUNCTION(execAuthority_OnBloodOrbVisibilityModeChanged); \
	DECLARE_FUNCTION(execAuthority_OnDestroyedBloodOrb); \
	DECLARE_FUNCTION(execOnRep_CurrentOverlappingOrbs);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnBloodOrbBeginOverlap); \
	DECLARE_FUNCTION(execAuthority_OnBloodOrbEndOverlap); \
	DECLARE_FUNCTION(execAuthority_OnBloodOrbVisibilityModeChanged); \
	DECLARE_FUNCTION(execAuthority_OnDestroyedBloodOrb); \
	DECLARE_FUNCTION(execOnRep_CurrentOverlappingOrbs);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBloodOrbOverlapComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbOverlapComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbOverlapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbOverlapComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentOverlappingOrbs=NETFIELD_REP_START, \
		NETFIELD_REP_END=_currentOverlappingOrbs	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBloodOrbOverlapComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbOverlapComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbOverlapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbOverlapComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentOverlappingOrbs=NETFIELD_REP_START, \
		NETFIELD_REP_END=_currentOverlappingOrbs	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBloodOrbOverlapComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBloodOrbOverlapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbOverlapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbOverlapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbOverlapComponent(UBloodOrbOverlapComponent&&); \
	NO_API UBloodOrbOverlapComponent(const UBloodOrbOverlapComponent&); \
public:


#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbOverlapComponent(UBloodOrbOverlapComponent&&); \
	NO_API UBloodOrbOverlapComponent(const UBloodOrbOverlapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbOverlapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbOverlapComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBloodOrbOverlapComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentOverlappingOrbs() { return STRUCT_OFFSET(UBloodOrbOverlapComponent, _currentOverlappingOrbs); }


#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_11_PROLOG
#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_INCLASS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class UBloodOrbOverlapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_BloodOrbOverlapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
