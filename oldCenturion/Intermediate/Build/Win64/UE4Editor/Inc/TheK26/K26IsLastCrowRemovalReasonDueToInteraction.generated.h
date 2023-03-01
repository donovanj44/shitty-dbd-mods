// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
class ACamperPlayer;
class AK26AttachedCrow;
enum class FK26AttachedCrowRemovalReason : uint8;
#ifdef THEK26_K26IsLastCrowRemovalReasonDueToInteraction_generated_h
#error "K26IsLastCrowRemovalReasonDueToInteraction.generated.h already included, missing '#pragma once' in K26IsLastCrowRemovalReasonDueToInteraction.h"
#endif
#define THEK26_K26IsLastCrowRemovalReasonDueToInteraction_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnKillerSet); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorStatusIndicatorSet); \
	DECLARE_FUNCTION(execOnLastRemovalReasonSet); \
	DECLARE_FUNCTION(execOnRep_OwningAttachedCrow); \
	DECLARE_FUNCTION(execOnSurvivorStatusIndicatorSet);


#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnKillerSet); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorStatusIndicatorSet); \
	DECLARE_FUNCTION(execOnLastRemovalReasonSet); \
	DECLARE_FUNCTION(execOnRep_OwningAttachedCrow); \
	DECLARE_FUNCTION(execOnSurvivorStatusIndicatorSet);


#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK26IsLastCrowRemovalReasonDueToInteraction(); \
	friend struct Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics; \
public: \
	DECLARE_CLASS(UK26IsLastCrowRemovalReasonDueToInteraction, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26IsLastCrowRemovalReasonDueToInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_owningAttachedCrow=NETFIELD_REP_START, \
		NETFIELD_REP_END=_owningAttachedCrow	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUK26IsLastCrowRemovalReasonDueToInteraction(); \
	friend struct Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics; \
public: \
	DECLARE_CLASS(UK26IsLastCrowRemovalReasonDueToInteraction, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26IsLastCrowRemovalReasonDueToInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_owningAttachedCrow=NETFIELD_REP_START, \
		NETFIELD_REP_END=_owningAttachedCrow	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK26IsLastCrowRemovalReasonDueToInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK26IsLastCrowRemovalReasonDueToInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26IsLastCrowRemovalReasonDueToInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26IsLastCrowRemovalReasonDueToInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26IsLastCrowRemovalReasonDueToInteraction(UK26IsLastCrowRemovalReasonDueToInteraction&&); \
	NO_API UK26IsLastCrowRemovalReasonDueToInteraction(const UK26IsLastCrowRemovalReasonDueToInteraction&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26IsLastCrowRemovalReasonDueToInteraction(UK26IsLastCrowRemovalReasonDueToInteraction&&); \
	NO_API UK26IsLastCrowRemovalReasonDueToInteraction(const UK26IsLastCrowRemovalReasonDueToInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26IsLastCrowRemovalReasonDueToInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26IsLastCrowRemovalReasonDueToInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK26IsLastCrowRemovalReasonDueToInteraction)


#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___owningAttachedCrow() { return STRUCT_OFFSET(UK26IsLastCrowRemovalReasonDueToInteraction, _owningAttachedCrow); } \
	FORCEINLINE static uint32 __PPO___statusHandlerComponent() { return STRUCT_OFFSET(UK26IsLastCrowRemovalReasonDueToInteraction, _statusHandlerComponent); }


#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_12_PROLOG
#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class UK26IsLastCrowRemovalReasonDueToInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26IsLastCrowRemovalReasonDueToInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
