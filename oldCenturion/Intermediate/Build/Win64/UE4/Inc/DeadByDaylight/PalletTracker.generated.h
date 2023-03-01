// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
#ifdef DEADBYDAYLIGHT_PalletTracker_generated_h
#error "PalletTracker.generated.h already included, missing '#pragma once' in PalletTracker.h"
#endif
#define DEADBYDAYLIGHT_PalletTracker_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanSpawnDreamPalletAtLocation); \
	DECLARE_FUNCTION(execInitializeTunableValues);


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanSpawnDreamPalletAtLocation); \
	DECLARE_FUNCTION(execInitializeTunableValues);


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_EVENT_PARMS \
	struct PalletTracker_eventEnableSelectedEffectToLocalPlayer_Parms \
	{ \
		bool activated; \
	}; \
	struct PalletTracker_eventRevealToLocalPlayerBP_Parms \
	{ \
		bool shown; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPalletTracker(); \
	friend struct Z_Construct_UClass_APalletTracker_Statics; \
public: \
	DECLARE_CLASS(APalletTracker, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(APalletTracker) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_procedurallySpawnedPallet=NETFIELD_REP_START, \
		_dreamPallet, \
		NETFIELD_REP_END=_dreamPallet	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPalletTracker(); \
	friend struct Z_Construct_UClass_APalletTracker_Statics; \
public: \
	DECLARE_CLASS(APalletTracker, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(APalletTracker) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_procedurallySpawnedPallet=NETFIELD_REP_START, \
		_dreamPallet, \
		NETFIELD_REP_END=_dreamPallet	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APalletTracker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APalletTracker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APalletTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APalletTracker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APalletTracker(APalletTracker&&); \
	NO_API APalletTracker(const APalletTracker&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APalletTracker(APalletTracker&&); \
	NO_API APalletTracker(const APalletTracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APalletTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APalletTracker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APalletTracker)


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___indicatorLocation() { return STRUCT_OFFSET(APalletTracker, _indicatorLocation); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class APalletTracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PalletTracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
