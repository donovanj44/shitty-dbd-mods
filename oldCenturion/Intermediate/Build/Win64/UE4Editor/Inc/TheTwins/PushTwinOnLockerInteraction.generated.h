// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class AConjoinedTwin;
#ifdef THETWINS_PushTwinOnLockerInteraction_generated_h
#error "PushTwinOnLockerInteraction.generated.h already included, missing '#pragma once' in PushTwinOnLockerInteraction.h"
#endif
#define THETWINS_PushTwinOnLockerInteraction_generated_h

#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorInLockerChanged); \
	DECLARE_FUNCTION(execOnRep_PushTwinOnLockerChargeable); \
	DECLARE_FUNCTION(execOnTwinSet);


#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorInLockerChanged); \
	DECLARE_FUNCTION(execOnRep_PushTwinOnLockerChargeable); \
	DECLARE_FUNCTION(execOnTwinSet);


#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPushTwinOnLockerInteraction(); \
	friend struct Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics; \
public: \
	DECLARE_CLASS(UPushTwinOnLockerInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UPushTwinOnLockerInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_pushTwinOnLockerChargeable=NETFIELD_REP_START, \
		NETFIELD_REP_END=_pushTwinOnLockerChargeable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPushTwinOnLockerInteraction(); \
	friend struct Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics; \
public: \
	DECLARE_CLASS(UPushTwinOnLockerInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UPushTwinOnLockerInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_pushTwinOnLockerChargeable=NETFIELD_REP_START, \
		NETFIELD_REP_END=_pushTwinOnLockerChargeable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPushTwinOnLockerInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPushTwinOnLockerInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPushTwinOnLockerInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPushTwinOnLockerInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPushTwinOnLockerInteraction(UPushTwinOnLockerInteraction&&); \
	NO_API UPushTwinOnLockerInteraction(const UPushTwinOnLockerInteraction&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPushTwinOnLockerInteraction(UPushTwinOnLockerInteraction&&); \
	NO_API UPushTwinOnLockerInteraction(const UPushTwinOnLockerInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPushTwinOnLockerInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPushTwinOnLockerInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPushTwinOnLockerInteraction)


#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___pushTwinOnLockerChargeable() { return STRUCT_OFFSET(UPushTwinOnLockerInteraction, _pushTwinOnLockerChargeable); } \
	FORCEINLINE static uint32 __PPO___pushTwinOnLockerMaxCharge() { return STRUCT_OFFSET(UPushTwinOnLockerInteraction, _pushTwinOnLockerMaxCharge); }


#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_11_PROLOG
#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UPushTwinOnLockerInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_PushTwinOnLockerInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
