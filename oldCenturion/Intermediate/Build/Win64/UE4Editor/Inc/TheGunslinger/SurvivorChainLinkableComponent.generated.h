// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_SurvivorChainLinkableComponent_generated_h
#error "SurvivorChainLinkableComponent.generated.h already included, missing '#pragma once' in SurvivorChainLinkableComponent.h"
#endif
#define THEGUNSLINGER_SurvivorChainLinkableComponent_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_VelocityAdditiveStrategy);


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_VelocityAdditiveStrategy);


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvivorChainLinkableComponent(); \
	friend struct Z_Construct_UClass_USurvivorChainLinkableComponent_Statics; \
public: \
	DECLARE_CLASS(USurvivorChainLinkableComponent, UChainLinkableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(USurvivorChainLinkableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_linkedMoveInput=NETFIELD_REP_START, \
		_velocityAdditiveStrategy, \
		NETFIELD_REP_END=_velocityAdditiveStrategy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSurvivorChainLinkableComponent(); \
	friend struct Z_Construct_UClass_USurvivorChainLinkableComponent_Statics; \
public: \
	DECLARE_CLASS(USurvivorChainLinkableComponent, UChainLinkableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(USurvivorChainLinkableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_linkedMoveInput=NETFIELD_REP_START, \
		_velocityAdditiveStrategy, \
		NETFIELD_REP_END=_velocityAdditiveStrategy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurvivorChainLinkableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivorChainLinkableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorChainLinkableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorChainLinkableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorChainLinkableComponent(USurvivorChainLinkableComponent&&); \
	NO_API USurvivorChainLinkableComponent(const USurvivorChainLinkableComponent&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorChainLinkableComponent(USurvivorChainLinkableComponent&&); \
	NO_API USurvivorChainLinkableComponent(const USurvivorChainLinkableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorChainLinkableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorChainLinkableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvivorChainLinkableComponent)


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___pullbackAngle() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _pullbackAngle); } \
	FORCEINLINE static uint32 __PPO___immobilizationDuration() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _immobilizationDuration); } \
	FORCEINLINE static uint32 __PPO___linkableInteractionTags() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _linkableInteractionTags); } \
	FORCEINLINE static uint32 __PPO___cancelableInteractionTags() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _cancelableInteractionTags); } \
	FORCEINLINE static uint32 __PPO___velocityAdditiveStrategyClass() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _velocityAdditiveStrategyClass); } \
	FORCEINLINE static uint32 __PPO___immobilizationEffectName() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _immobilizationEffectName); } \
	FORCEINLINE static uint32 __PPO___linkedMoveInput() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _linkedMoveInput); } \
	FORCEINLINE static uint32 __PPO___immobilizationEffect() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _immobilizationEffect); } \
	FORCEINLINE static uint32 __PPO___velocityAdditiveStrategy() { return STRUCT_OFFSET(USurvivorChainLinkableComponent, _velocityAdditiveStrategy); }


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_13_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class USurvivorChainLinkableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_SurvivorChainLinkableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
