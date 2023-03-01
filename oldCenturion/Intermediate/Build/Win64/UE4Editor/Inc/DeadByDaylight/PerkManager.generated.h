// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UGameplayModifierContainer;
class UStatusEffect;
struct FGameplayTag;
class UObject;
struct FGameplayTagContainer;
class UPerk;
enum class EGameplayModifierSource : uint8;
#ifdef DEADBYDAYLIGHT_PerkManager_generated_h
#error "PerkManager.generated.h already included, missing '#pragma once' in PerkManager.h"
#endif
#define DEADBYDAYLIGHT_PerkManager_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_EndStatusEffectByID); \
	DECLARE_FUNCTION(execAuthority_ImposeDynamicStatusEffect); \
	DECLARE_FUNCTION(execAuthority_ImposeNewStatusEffectOrChangeLifeTime); \
	DECLARE_FUNCTION(execAuthority_ImposeStatusEffect); \
	DECLARE_FUNCTION(execAuthority_RemoveStatusEffect); \
	DECLARE_FUNCTION(execAuthority_RemoveStatusEffectByID); \
	DECLARE_FUNCTION(execGetAllSourcesWithFlag); \
	DECLARE_FUNCTION(execGetAllSourcesWithModifier); \
	DECLARE_FUNCTION(execGetAllStatusEffects); \
	DECLARE_FUNCTION(execGetAllStatusEffectsByClass); \
	DECLARE_FUNCTION(execGetMultiplicativeModifierValue); \
	DECLARE_FUNCTION(execGetMultiplicativeModifierValueOfContainerWithCompoundNegative); \
	DECLARE_FUNCTION(execGetMultiplicativeModifierValueWithCompoundNegative); \
	DECLARE_FUNCTION(execGetPerk); \
	DECLARE_FUNCTION(execGetPerkModifier); \
	DECLARE_FUNCTION(execGetPerkModifierAdditiveValue); \
	DECLARE_FUNCTION(execGetPerkModifierMaxValue); \
	DECLARE_FUNCTION(execGetPerkModifierMaxValueAndSource); \
	DECLARE_FUNCTION(execGetPerkModifierMinValue); \
	DECLARE_FUNCTION(execGetPerkModifierMinValueAndSource); \
	DECLARE_FUNCTION(execGetSourceWithFlag); \
	DECLARE_FUNCTION(execGetSourceWithModifier); \
	DECLARE_FUNCTION(execGetStatusEffect); \
	DECLARE_FUNCTION(execHasAllCharacterPerksEquipped); \
	DECLARE_FUNCTION(execHasAnyAddonWithTag); \
	DECLARE_FUNCTION(execHasAnyEffectWithID); \
	DECLARE_FUNCTION(execHasPerkFlag); \
	DECLARE_FUNCTION(execHasPerkFlagFromSource); \
	DECLARE_FUNCTION(execHasPerkModifierOfType); \
	DECLARE_FUNCTION(execHasStatusEffect);


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_EndStatusEffectByID); \
	DECLARE_FUNCTION(execAuthority_ImposeDynamicStatusEffect); \
	DECLARE_FUNCTION(execAuthority_ImposeNewStatusEffectOrChangeLifeTime); \
	DECLARE_FUNCTION(execAuthority_ImposeStatusEffect); \
	DECLARE_FUNCTION(execAuthority_RemoveStatusEffect); \
	DECLARE_FUNCTION(execAuthority_RemoveStatusEffectByID); \
	DECLARE_FUNCTION(execGetAllSourcesWithFlag); \
	DECLARE_FUNCTION(execGetAllSourcesWithModifier); \
	DECLARE_FUNCTION(execGetAllStatusEffects); \
	DECLARE_FUNCTION(execGetAllStatusEffectsByClass); \
	DECLARE_FUNCTION(execGetMultiplicativeModifierValue); \
	DECLARE_FUNCTION(execGetMultiplicativeModifierValueOfContainerWithCompoundNegative); \
	DECLARE_FUNCTION(execGetMultiplicativeModifierValueWithCompoundNegative); \
	DECLARE_FUNCTION(execGetPerk); \
	DECLARE_FUNCTION(execGetPerkModifier); \
	DECLARE_FUNCTION(execGetPerkModifierAdditiveValue); \
	DECLARE_FUNCTION(execGetPerkModifierMaxValue); \
	DECLARE_FUNCTION(execGetPerkModifierMaxValueAndSource); \
	DECLARE_FUNCTION(execGetPerkModifierMinValue); \
	DECLARE_FUNCTION(execGetPerkModifierMinValueAndSource); \
	DECLARE_FUNCTION(execGetSourceWithFlag); \
	DECLARE_FUNCTION(execGetSourceWithModifier); \
	DECLARE_FUNCTION(execGetStatusEffect); \
	DECLARE_FUNCTION(execHasAllCharacterPerksEquipped); \
	DECLARE_FUNCTION(execHasAnyAddonWithTag); \
	DECLARE_FUNCTION(execHasAnyEffectWithID); \
	DECLARE_FUNCTION(execHasPerkFlag); \
	DECLARE_FUNCTION(execHasPerkFlagFromSource); \
	DECLARE_FUNCTION(execHasPerkModifierOfType); \
	DECLARE_FUNCTION(execHasStatusEffect);


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerkManager(); \
	friend struct Z_Construct_UClass_UPerkManager_Statics; \
public: \
	DECLARE_CLASS(UPerkManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerkManager) \
	virtual UObject* _getUObject() const override { return const_cast<UPerkManager*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPerkManager(); \
	friend struct Z_Construct_UClass_UPerkManager_Statics; \
public: \
	DECLARE_CLASS(UPerkManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerkManager) \
	virtual UObject* _getUObject() const override { return const_cast<UPerkManager*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerkManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerkManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkManager(UPerkManager&&); \
	NO_API UPerkManager(const UPerkManager&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkManager(UPerkManager&&); \
	NO_API UPerkManager(const UPerkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerkManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___perks() { return STRUCT_OFFSET(UPerkManager, _perks); } \
	FORCEINLINE static uint32 __PPO___statusEffects() { return STRUCT_OFFSET(UPerkManager, _statusEffects); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_18_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPerkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PerkManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
