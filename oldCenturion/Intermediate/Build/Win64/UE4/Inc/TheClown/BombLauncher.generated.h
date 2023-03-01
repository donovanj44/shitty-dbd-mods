// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBombType : uint8;
class UCurveFloat;
#ifdef THECLOWN_BombLauncher_generated_h
#error "BombLauncher.generated.h already included, missing '#pragma once' in BombLauncher.h"
#endif
#define THECLOWN_BombLauncher_generated_h

#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_RPC_WRAPPERS \
	virtual bool Server_SwitchBombType_Validate(); \
	virtual void Server_SwitchBombType_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentBombType); \
	DECLARE_FUNCTION(execGetPercentThrowStrenght); \
	DECLARE_FUNCTION(execIsBombFullyCharged); \
	DECLARE_FUNCTION(execLocalLaunch); \
	DECLARE_FUNCTION(execServer_SwitchBombType); \
	DECLARE_FUNCTION(execSetPercentThrowStrength); \
	DECLARE_FUNCTION(execSetProjectilePitchCurve); \
	DECLARE_FUNCTION(execSetProjectileSpeedCurve);


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SwitchBombType_Validate(); \
	virtual void Server_SwitchBombType_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentBombType); \
	DECLARE_FUNCTION(execGetPercentThrowStrenght); \
	DECLARE_FUNCTION(execIsBombFullyCharged); \
	DECLARE_FUNCTION(execLocalLaunch); \
	DECLARE_FUNCTION(execServer_SwitchBombType); \
	DECLARE_FUNCTION(execSetPercentThrowStrength); \
	DECLARE_FUNCTION(execSetProjectilePitchCurve); \
	DECLARE_FUNCTION(execSetProjectileSpeedCurve);


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_EVENT_PARMS
#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBombLauncher(); \
	friend struct Z_Construct_UClass_UBombLauncher_Statics; \
public: \
	DECLARE_CLASS(UBombLauncher, UKillerProjectileLauncher, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheClown"), NO_API) \
	DECLARE_SERIALIZER(UBombLauncher) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentBombType=NETFIELD_REP_START, \
		NETFIELD_REP_END=_currentBombType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBombLauncher(); \
	friend struct Z_Construct_UClass_UBombLauncher_Statics; \
public: \
	DECLARE_CLASS(UBombLauncher, UKillerProjectileLauncher, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheClown"), NO_API) \
	DECLARE_SERIALIZER(UBombLauncher) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentBombType=NETFIELD_REP_START, \
		NETFIELD_REP_END=_currentBombType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBombLauncher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBombLauncher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBombLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBombLauncher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBombLauncher(UBombLauncher&&); \
	NO_API UBombLauncher(const UBombLauncher&); \
public:


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBombLauncher(UBombLauncher&&); \
	NO_API UBombLauncher(const UBombLauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBombLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBombLauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBombLauncher)


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___speedCurve() { return STRUCT_OFFSET(UBombLauncher, _speedCurve); } \
	FORCEINLINE static uint32 __PPO___pitchCurve() { return STRUCT_OFFSET(UBombLauncher, _pitchCurve); } \
	FORCEINLINE static uint32 __PPO___currentBombType() { return STRUCT_OFFSET(UBombLauncher, _currentBombType); }


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_9_PROLOG \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_INCLASS \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheClown_Public_BombLauncher_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THECLOWN_API UClass* StaticClass<class UBombLauncher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheClown_Public_BombLauncher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
