// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_ChainLinkableComponent_generated_h
#error "ChainLinkableComponent.generated.h already included, missing '#pragma once' in ChainLinkableComponent.h"
#endif
#define THEGUNSLINGER_ChainLinkableComponent_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_RPC_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChainLinkableComponent(); \
	friend struct Z_Construct_UClass_UChainLinkableComponent_Statics; \
public: \
	DECLARE_CLASS(UChainLinkableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UChainLinkableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChainLinkableComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isLinkedLingering=NETFIELD_REP_START, \
		_movementStatusEffect, \
		NETFIELD_REP_END=_movementStatusEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUChainLinkableComponent(); \
	friend struct Z_Construct_UClass_UChainLinkableComponent_Statics; \
public: \
	DECLARE_CLASS(UChainLinkableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UChainLinkableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChainLinkableComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isLinkedLingering=NETFIELD_REP_START, \
		_movementStatusEffect, \
		NETFIELD_REP_END=_movementStatusEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChainLinkableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChainLinkableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChainLinkableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChainLinkableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChainLinkableComponent(UChainLinkableComponent&&); \
	NO_API UChainLinkableComponent(const UChainLinkableComponent&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChainLinkableComponent(UChainLinkableComponent&&); \
	NO_API UChainLinkableComponent(const UChainLinkableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChainLinkableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChainLinkableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChainLinkableComponent)


#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cameraTargetingStrategyClass() { return STRUCT_OFFSET(UChainLinkableComponent, _cameraTargetingStrategyClass); } \
	FORCEINLINE static uint32 __PPO___movementStatusEffectName() { return STRUCT_OFFSET(UChainLinkableComponent, _movementStatusEffectName); } \
	FORCEINLINE static uint32 __PPO___linkedStatusEffectName() { return STRUCT_OFFSET(UChainLinkableComponent, _linkedStatusEffectName); } \
	FORCEINLINE static uint32 __PPO___inputAccelerationStrategy() { return STRUCT_OFFSET(UChainLinkableComponent, _inputAccelerationStrategy); } \
	FORCEINLINE static uint32 __PPO___chainLink() { return STRUCT_OFFSET(UChainLinkableComponent, _chainLink); } \
	FORCEINLINE static uint32 __PPO___isLinkedLingering() { return STRUCT_OFFSET(UChainLinkableComponent, _isLinkedLingering); } \
	FORCEINLINE static uint32 __PPO___movementStatusEffect() { return STRUCT_OFFSET(UChainLinkableComponent, _movementStatusEffect); } \
	FORCEINLINE static uint32 __PPO___cameraStrategy() { return STRUCT_OFFSET(UChainLinkableComponent, _cameraStrategy); }


#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_14_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class UChainLinkableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_ChainLinkableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
