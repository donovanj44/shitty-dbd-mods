// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
class UChargeableComponent;
enum class ELeanState : uint8;
#ifdef THEGHOSTFACE_GhostKillerAnalyticsComponent_generated_h
#error "GhostKillerAnalyticsComponent.generated.h already included, missing '#pragma once' in GhostKillerAnalyticsComponent.h"
#endif
#define THEGHOSTFACE_GhostKillerAnalyticsComponent_generated_h

#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnPreAttackSuccess); \
	DECLARE_FUNCTION(execAuthority_OnStalkChargePercentChanged); \
	DECLARE_FUNCTION(execLocal_OnIsStealthChanged); \
	DECLARE_FUNCTION(execLocal_OnLeanStateChanged); \
	DECLARE_FUNCTION(execLocal_OnStalkModeChanged);


#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnPreAttackSuccess); \
	DECLARE_FUNCTION(execAuthority_OnStalkChargePercentChanged); \
	DECLARE_FUNCTION(execLocal_OnIsStealthChanged); \
	DECLARE_FUNCTION(execLocal_OnLeanStateChanged); \
	DECLARE_FUNCTION(execLocal_OnStalkModeChanged);


#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGhostKillerAnalyticsComponent(); \
	friend struct Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics; \
public: \
	DECLARE_CLASS(UGhostKillerAnalyticsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGhostface"), NO_API) \
	DECLARE_SERIALIZER(UGhostKillerAnalyticsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_ghostKillerAnalytics=NETFIELD_REP_START, \
		NETFIELD_REP_END=_ghostKillerAnalytics	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGhostKillerAnalyticsComponent(); \
	friend struct Z_Construct_UClass_UGhostKillerAnalyticsComponent_Statics; \
public: \
	DECLARE_CLASS(UGhostKillerAnalyticsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGhostface"), NO_API) \
	DECLARE_SERIALIZER(UGhostKillerAnalyticsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_ghostKillerAnalytics=NETFIELD_REP_START, \
		NETFIELD_REP_END=_ghostKillerAnalytics	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGhostKillerAnalyticsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGhostKillerAnalyticsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGhostKillerAnalyticsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGhostKillerAnalyticsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGhostKillerAnalyticsComponent(UGhostKillerAnalyticsComponent&&); \
	NO_API UGhostKillerAnalyticsComponent(const UGhostKillerAnalyticsComponent&); \
public:


#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGhostKillerAnalyticsComponent(UGhostKillerAnalyticsComponent&&); \
	NO_API UGhostKillerAnalyticsComponent(const UGhostKillerAnalyticsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGhostKillerAnalyticsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGhostKillerAnalyticsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGhostKillerAnalyticsComponent)


#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___ghostKillerAnalytics() { return STRUCT_OFFSET(UGhostKillerAnalyticsComponent, _ghostKillerAnalytics); }


#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_12_PROLOG
#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_INCLASS \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGHOSTFACE_API UClass* StaticClass<class UGhostKillerAnalyticsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGhostface_Public_GhostKillerAnalyticsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
