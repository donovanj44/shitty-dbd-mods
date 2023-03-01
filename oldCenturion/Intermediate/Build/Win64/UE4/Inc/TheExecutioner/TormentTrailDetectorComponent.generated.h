// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEEXECUTIONER_TormentTrailDetectorComponent_generated_h
#error "TormentTrailDetectorComponent.generated.h already included, missing '#pragma once' in TormentTrailDetectorComponent.h"
#endif
#define THEEXECUTIONER_TormentTrailDetectorComponent_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_RPC_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTormentTrailDetectorComponent(); \
	friend struct Z_Construct_UClass_UTormentTrailDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UTormentTrailDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UTormentTrailDetectorComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInTormentTrail=NETFIELD_REP_START, \
		_isInTormentTrailEffect, \
		NETFIELD_REP_END=_isInTormentTrailEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTormentTrailDetectorComponent(); \
	friend struct Z_Construct_UClass_UTormentTrailDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UTormentTrailDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UTormentTrailDetectorComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInTormentTrail=NETFIELD_REP_START, \
		_isInTormentTrailEffect, \
		NETFIELD_REP_END=_isInTormentTrailEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTormentTrailDetectorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTormentTrailDetectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTormentTrailDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTormentTrailDetectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTormentTrailDetectorComponent(UTormentTrailDetectorComponent&&); \
	NO_API UTormentTrailDetectorComponent(const UTormentTrailDetectorComponent&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTormentTrailDetectorComponent(UTormentTrailDetectorComponent&&); \
	NO_API UTormentTrailDetectorComponent(const UTormentTrailDetectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTormentTrailDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTormentTrailDetectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTormentTrailDetectorComponent)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___overlappedTrailPoints() { return STRUCT_OFFSET(UTormentTrailDetectorComponent, _overlappedTrailPoints); } \
	FORCEINLINE static uint32 __PPO___isInTormentTrail() { return STRUCT_OFFSET(UTormentTrailDetectorComponent, _isInTormentTrail); } \
	FORCEINLINE static uint32 __PPO___isInTormentTrailEffect() { return STRUCT_OFFSET(UTormentTrailDetectorComponent, _isInTormentTrailEffect); } \
	FORCEINLINE static uint32 __PPO___inTormentTrailLastingEffectTime() { return STRUCT_OFFSET(UTormentTrailDetectorComponent, _inTormentTrailLastingEffectTime); }


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_10_PROLOG
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UTormentTrailDetectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_TormentTrailDetectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
