// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_LamentConfigurationChainHuntComponent_generated_h
#error "LamentConfigurationChainHuntComponent.generated.h already included, missing '#pragma once' in LamentConfigurationChainHuntComponent.h"
#endif
#define THEK25_LamentConfigurationChainHuntComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChainHuntProgressPercentage); \
	DECLARE_FUNCTION(execOnRep_ChainHuntStateData);


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChainHuntProgressPercentage); \
	DECLARE_FUNCTION(execOnRep_ChainHuntStateData);


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULamentConfigurationChainHuntComponent(); \
	friend struct Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics; \
public: \
	DECLARE_CLASS(ULamentConfigurationChainHuntComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(ULamentConfigurationChainHuntComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chainHuntEffectsComponents=NETFIELD_REP_START, \
		_chainHuntStateData, \
		NETFIELD_REP_END=_chainHuntStateData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULamentConfigurationChainHuntComponent(); \
	friend struct Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics; \
public: \
	DECLARE_CLASS(ULamentConfigurationChainHuntComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(ULamentConfigurationChainHuntComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chainHuntEffectsComponents=NETFIELD_REP_START, \
		_chainHuntStateData, \
		NETFIELD_REP_END=_chainHuntStateData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULamentConfigurationChainHuntComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULamentConfigurationChainHuntComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULamentConfigurationChainHuntComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULamentConfigurationChainHuntComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULamentConfigurationChainHuntComponent(ULamentConfigurationChainHuntComponent&&); \
	NO_API ULamentConfigurationChainHuntComponent(const ULamentConfigurationChainHuntComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULamentConfigurationChainHuntComponent(ULamentConfigurationChainHuntComponent&&); \
	NO_API ULamentConfigurationChainHuntComponent(const ULamentConfigurationChainHuntComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULamentConfigurationChainHuntComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULamentConfigurationChainHuntComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULamentConfigurationChainHuntComponent)


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___floorChainHuntTimeBetweenChainStrikes() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _floorChainHuntTimeBetweenChainStrikes); } \
	FORCEINLINE static uint32 __PPO___chainHuntChargeTime() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _chainHuntChargeTime); } \
	FORCEINLINE static uint32 __PPO___chainNumberPerChainHuntCluster() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _chainNumberPerChainHuntCluster); } \
	FORCEINLINE static uint32 __PPO___timeBetweenChainHuntClusterStrikes() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _timeBetweenChainHuntClusterStrikes); } \
	FORCEINLINE static uint32 __PPO___killerChainHuntEffectsComponentClass() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _killerChainHuntEffectsComponentClass); } \
	FORCEINLINE static uint32 __PPO___survivorChainHuntEffectsComponentClass() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _survivorChainHuntEffectsComponentClass); } \
	FORCEINLINE static uint32 __PPO___killerChainHuntEffectsComponent() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _killerChainHuntEffectsComponent); } \
	FORCEINLINE static uint32 __PPO___chainHuntEffectsComponents() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _chainHuntEffectsComponents); } \
	FORCEINLINE static uint32 __PPO___cachedAdditiveChainStrikeDelayTime() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _cachedAdditiveChainStrikeDelayTime); } \
	FORCEINLINE static uint32 __PPO___chainHuntStateData() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _chainHuntStateData); } \
	FORCEINLINE static uint32 __PPO___oldChainHuntState() { return STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _oldChainHuntState); }


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_14_PROLOG
#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_INCLASS \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class ULamentConfigurationChainHuntComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_LamentConfigurationChainHuntComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
