// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef THEGUNSLINGER_RifleChainTensionComponent_generated_h
#error "RifleChainTensionComponent.generated.h already included, missing '#pragma once' in RifleChainTensionComponent.h"
#endif
#define THEGUNSLINGER_RifleChainTensionComponent_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_15_DELEGATE \
struct _Script_TheGunslinger_eventRifleChainTensionComponentOnIsBuildingTensionChanged_Parms \
{ \
	bool isBuildingTension; \
}; \
static inline void FRifleChainTensionComponentOnIsBuildingTensionChanged_DelegateWrapper(const FMulticastScriptDelegate& RifleChainTensionComponentOnIsBuildingTensionChanged, bool isBuildingTension) \
{ \
	_Script_TheGunslinger_eventRifleChainTensionComponentOnIsBuildingTensionChanged_Parms Parms; \
	Parms.isBuildingTension=isBuildingTension ? true : false; \
	RifleChainTensionComponentOnIsBuildingTensionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execIsBuildingTension); \
	DECLARE_FUNCTION(execOnRep_IsBuildingTension); \
	DECLARE_FUNCTION(execOnTensionChargeableCompletionChanged);


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execIsBuildingTension); \
	DECLARE_FUNCTION(execOnRep_IsBuildingTension); \
	DECLARE_FUNCTION(execOnTensionChargeableCompletionChanged);


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURifleChainTensionComponent(); \
	friend struct Z_Construct_UClass_URifleChainTensionComponent_Statics; \
public: \
	DECLARE_CLASS(URifleChainTensionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(URifleChainTensionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URifleChainTensionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBuildingTension=NETFIELD_REP_START, \
		_progressModifierForSurvivors, \
		NETFIELD_REP_END=_progressModifierForSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURifleChainTensionComponent(); \
	friend struct Z_Construct_UClass_URifleChainTensionComponent_Statics; \
public: \
	DECLARE_CLASS(URifleChainTensionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(URifleChainTensionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URifleChainTensionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBuildingTension=NETFIELD_REP_START, \
		_progressModifierForSurvivors, \
		NETFIELD_REP_END=_progressModifierForSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URifleChainTensionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URifleChainTensionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URifleChainTensionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URifleChainTensionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URifleChainTensionComponent(URifleChainTensionComponent&&); \
	NO_API URifleChainTensionComponent(const URifleChainTensionComponent&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URifleChainTensionComponent(URifleChainTensionComponent&&); \
	NO_API URifleChainTensionComponent(const URifleChainTensionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URifleChainTensionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URifleChainTensionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URifleChainTensionComponent)


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isBuildingTension() { return STRUCT_OFFSET(URifleChainTensionComponent, _isBuildingTension); } \
	FORCEINLINE static uint32 __PPO___targetlinkable() { return STRUCT_OFFSET(URifleChainTensionComponent, _targetlinkable); } \
	FORCEINLINE static uint32 __PPO___maxTensionCharge() { return STRUCT_OFFSET(URifleChainTensionComponent, _maxTensionCharge); } \
	FORCEINLINE static uint32 __PPO___baseTensionRate() { return STRUCT_OFFSET(URifleChainTensionComponent, _baseTensionRate); } \
	FORCEINLINE static uint32 __PPO___collisionTensionRate() { return STRUCT_OFFSET(URifleChainTensionComponent, _collisionTensionRate); } \
	FORCEINLINE static uint32 __PPO___survivorPullingTensionRate() { return STRUCT_OFFSET(URifleChainTensionComponent, _survivorPullingTensionRate); } \
	FORCEINLINE static uint32 __PPO___currentTensionRate() { return STRUCT_OFFSET(URifleChainTensionComponent, _currentTensionRate); } \
	FORCEINLINE static uint32 __PPO___progressModifierForSurvivors() { return STRUCT_OFFSET(URifleChainTensionComponent, _progressModifierForSurvivors); } \
	FORCEINLINE static uint32 __PPO___chargeProgressDescriptionText() { return STRUCT_OFFSET(URifleChainTensionComponent, _chargeProgressDescriptionText); } \
	FORCEINLINE static uint32 __PPO___chain() { return STRUCT_OFFSET(URifleChainTensionComponent, _chain); }


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_17_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class URifleChainTensionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_RifleChainTensionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
