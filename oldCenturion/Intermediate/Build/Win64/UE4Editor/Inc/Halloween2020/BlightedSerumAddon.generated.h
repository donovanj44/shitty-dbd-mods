// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HALLOWEEN2020_BlightedSerumAddon_generated_h
#error "BlightedSerumAddon.generated.h already included, missing '#pragma once' in BlightedSerumAddon.h"
#endif
#define HALLOWEEN2020_BlightedSerumAddon_generated_h

#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_SPARSE_DATA
#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_DashInteraction);


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_DashInteraction);


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_EVENT_PARMS
#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlightedSerumAddon(); \
	friend struct Z_Construct_UClass_UBlightedSerumAddon_Statics; \
public: \
	DECLARE_CLASS(UBlightedSerumAddon, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Halloween2020"), NO_API) \
	DECLARE_SERIALIZER(UBlightedSerumAddon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_dashInteraction=NETFIELD_REP_START, \
		NETFIELD_REP_END=_dashInteraction	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBlightedSerumAddon(); \
	friend struct Z_Construct_UClass_UBlightedSerumAddon_Statics; \
public: \
	DECLARE_CLASS(UBlightedSerumAddon, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Halloween2020"), NO_API) \
	DECLARE_SERIALIZER(UBlightedSerumAddon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_dashInteraction=NETFIELD_REP_START, \
		NETFIELD_REP_END=_dashInteraction	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlightedSerumAddon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlightedSerumAddon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightedSerumAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightedSerumAddon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightedSerumAddon(UBlightedSerumAddon&&); \
	NO_API UBlightedSerumAddon(const UBlightedSerumAddon&); \
public:


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightedSerumAddon(UBlightedSerumAddon&&); \
	NO_API UBlightedSerumAddon(const UBlightedSerumAddon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightedSerumAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightedSerumAddon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlightedSerumAddon)


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___blightedSerumCollectable() { return STRUCT_OFFSET(UBlightedSerumAddon, _blightedSerumCollectable); } \
	FORCEINLINE static uint32 __PPO___dashInteraction() { return STRUCT_OFFSET(UBlightedSerumAddon, _dashInteraction); } \
	FORCEINLINE static uint32 __PPO___theBlightExtraTokens() { return STRUCT_OFFSET(UBlightedSerumAddon, _theBlightExtraTokens); } \
	FORCEINLINE static uint32 __PPO___numberOfDashesPerEvent() { return STRUCT_OFFSET(UBlightedSerumAddon, _numberOfDashesPerEvent); }


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_10_PROLOG \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_EVENT_PARMS


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_INCLASS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALLOWEEN2020_API UClass* StaticClass<class UBlightedSerumAddon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Halloween2020_Public_BlightedSerumAddon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
