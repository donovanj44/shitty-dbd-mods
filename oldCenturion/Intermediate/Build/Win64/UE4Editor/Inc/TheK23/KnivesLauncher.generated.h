// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AThrowingKnives;
#ifdef THEK23_KnivesLauncher_generated_h
#error "KnivesLauncher.generated.h already included, missing '#pragma once' in KnivesLauncher.h"
#endif
#define THEK23_KnivesLauncher_generated_h

#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocallyPredictedAmmo); \
	DECLARE_FUNCTION(execGetPower);


#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocallyPredictedAmmo); \
	DECLARE_FUNCTION(execGetPower);


#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKnivesLauncher(); \
	friend struct Z_Construct_UClass_UKnivesLauncher_Statics; \
public: \
	DECLARE_CLASS(UKnivesLauncher, UKillerProjectileLauncher, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UKnivesLauncher) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInSuperModeThrow=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInSuperModeThrow	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUKnivesLauncher(); \
	friend struct Z_Construct_UClass_UKnivesLauncher_Statics; \
public: \
	DECLARE_CLASS(UKnivesLauncher, UKillerProjectileLauncher, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UKnivesLauncher) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInSuperModeThrow=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInSuperModeThrow	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKnivesLauncher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKnivesLauncher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKnivesLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKnivesLauncher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKnivesLauncher(UKnivesLauncher&&); \
	NO_API UKnivesLauncher(const UKnivesLauncher&); \
public:


#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKnivesLauncher(UKnivesLauncher&&); \
	NO_API UKnivesLauncher(const UKnivesLauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKnivesLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKnivesLauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKnivesLauncher)


#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___knifeSpawnOffset() { return STRUCT_OFFSET(UKnivesLauncher, _knifeSpawnOffset); } \
	FORCEINLINE static uint32 __PPO___knifeSpawnForwardOffset() { return STRUCT_OFFSET(UKnivesLauncher, _knifeSpawnForwardOffset); } \
	FORCEINLINE static uint32 __PPO___launchSpeed() { return STRUCT_OFFSET(UKnivesLauncher, _launchSpeed); } \
	FORCEINLINE static uint32 __PPO___maxAmmoTunable() { return STRUCT_OFFSET(UKnivesLauncher, _maxAmmoTunable); } \
	FORCEINLINE static uint32 __PPO___isInSuperModeThrow() { return STRUCT_OFFSET(UKnivesLauncher, _isInSuperModeThrow); }


#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_10_PROLOG
#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_INCLASS \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class UKnivesLauncher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_KnivesLauncher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
