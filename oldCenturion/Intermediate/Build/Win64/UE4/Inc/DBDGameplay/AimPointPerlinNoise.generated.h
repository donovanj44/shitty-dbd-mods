// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDGAMEPLAY_AimPointPerlinNoise_generated_h
#error "AimPointPerlinNoise.generated.h already included, missing '#pragma once' in AimPointPerlinNoise.h"
#endif
#define DBDGAMEPLAY_AimPointPerlinNoise_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBaseInaccuracyNoiseAmplitude); \
	DECLARE_FUNCTION(execSetBaseInaccuracyNoiseFrequency); \
	DECLARE_FUNCTION(execSetBaseInaccuracyNoiseOctaveCount); \
	DECLARE_FUNCTION(execSetBaseInaccuracyNoisePersistence); \
	DECLARE_FUNCTION(execSetNoiseAmplitudeMultiplier); \
	DECLARE_FUNCTION(execSetNoiseFrequencyMultiplier);


#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBaseInaccuracyNoiseAmplitude); \
	DECLARE_FUNCTION(execSetBaseInaccuracyNoiseFrequency); \
	DECLARE_FUNCTION(execSetBaseInaccuracyNoiseOctaveCount); \
	DECLARE_FUNCTION(execSetBaseInaccuracyNoisePersistence); \
	DECLARE_FUNCTION(execSetNoiseAmplitudeMultiplier); \
	DECLARE_FUNCTION(execSetNoiseFrequencyMultiplier);


#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAimPointPerlinNoise(); \
	friend struct Z_Construct_UClass_UAimPointPerlinNoise_Statics; \
public: \
	DECLARE_CLASS(UAimPointPerlinNoise, UAimPointProcessor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAimPointPerlinNoise) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_timeOffset=NETFIELD_REP_START, \
		NETFIELD_REP_END=_timeOffset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUAimPointPerlinNoise(); \
	friend struct Z_Construct_UClass_UAimPointPerlinNoise_Statics; \
public: \
	DECLARE_CLASS(UAimPointPerlinNoise, UAimPointProcessor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAimPointPerlinNoise) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_timeOffset=NETFIELD_REP_START, \
		NETFIELD_REP_END=_timeOffset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimPointPerlinNoise(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimPointPerlinNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimPointPerlinNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimPointPerlinNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimPointPerlinNoise(UAimPointPerlinNoise&&); \
	NO_API UAimPointPerlinNoise(const UAimPointPerlinNoise&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimPointPerlinNoise(UAimPointPerlinNoise&&); \
	NO_API UAimPointPerlinNoise(const UAimPointPerlinNoise&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimPointPerlinNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimPointPerlinNoise); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAimPointPerlinNoise)


#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___baseInaccuracyNoisePersistence() { return STRUCT_OFFSET(UAimPointPerlinNoise, _baseInaccuracyNoisePersistence); } \
	FORCEINLINE static uint32 __PPO___baseInaccuracyNoiseOctaveCount() { return STRUCT_OFFSET(UAimPointPerlinNoise, _baseInaccuracyNoiseOctaveCount); } \
	FORCEINLINE static uint32 __PPO___baseInaccuracyNoiseAmplitude() { return STRUCT_OFFSET(UAimPointPerlinNoise, _baseInaccuracyNoiseAmplitude); } \
	FORCEINLINE static uint32 __PPO___baseInaccuracyNoiseFrequency() { return STRUCT_OFFSET(UAimPointPerlinNoise, _baseInaccuracyNoiseFrequency); } \
	FORCEINLINE static uint32 __PPO___timeOffset() { return STRUCT_OFFSET(UAimPointPerlinNoise, _timeOffset); }


#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_6_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UAimPointPerlinNoise>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_AimPointPerlinNoise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
