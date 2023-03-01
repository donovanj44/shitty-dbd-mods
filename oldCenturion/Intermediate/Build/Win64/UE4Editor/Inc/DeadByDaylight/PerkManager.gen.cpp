// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayModifierSource();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffectCollectionComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkCollectionComponent_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UCompetenceFlagProvider_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPerkManager::execAuthority_EndStatusEffectByID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusEffectId);
		P_GET_UBOOL(Z_Param_bRemoveAllWithID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_EndStatusEffectByID(Z_Param_statusEffectId,Z_Param_bRemoveAllWithID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execAuthority_ImposeDynamicStatusEffect)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusEffectID);
		P_GET_OBJECT(ADBDPlayer,Z_Param_originatingPlayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_customParam);
		P_GET_OBJECT(UGameplayModifierContainer,Z_Param_originatingEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStatusEffect**)Z_Param__Result=P_THIS->Authority_ImposeDynamicStatusEffect(Z_Param_statusEffectID,Z_Param_originatingPlayer,Z_Param_customParam,Z_Param_originatingEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execAuthority_ImposeNewStatusEffectOrChangeLifeTime)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusEffectID);
		P_GET_OBJECT(ADBDPlayer,Z_Param_originatingPlayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifeTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_customParam);
		P_GET_OBJECT(UGameplayModifierContainer,Z_Param_originatingEffect);
		P_GET_UBOOL(Z_Param_shouldDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStatusEffect**)Z_Param__Result=P_THIS->Authority_ImposeNewStatusEffectOrChangeLifeTime(Z_Param_statusEffectID,Z_Param_originatingPlayer,Z_Param_lifeTime,Z_Param_customParam,Z_Param_originatingEffect,Z_Param_shouldDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execAuthority_ImposeStatusEffect)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusEffectID);
		P_GET_OBJECT(ADBDPlayer,Z_Param_originatingPlayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_customParam);
		P_GET_OBJECT(UGameplayModifierContainer,Z_Param_originatingEffect);
		P_GET_UBOOL(Z_Param_shouldDisplay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStatusEffect**)Z_Param__Result=P_THIS->Authority_ImposeStatusEffect(Z_Param_statusEffectID,Z_Param_originatingPlayer,Z_Param_customParam,Z_Param_originatingEffect,Z_Param_shouldDisplay,Z_Param_lifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execAuthority_RemoveStatusEffect)
	{
		P_GET_OBJECT(UStatusEffect,Z_Param_statusEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RemoveStatusEffect(Z_Param_statusEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execAuthority_RemoveStatusEffectByID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusEffectId);
		P_GET_UBOOL(Z_Param_bRemoveAllWithID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RemoveStatusEffectByID(Z_Param_statusEffectId,Z_Param_bRemoveAllWithID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetAllSourcesWithFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGameplayModifierContainer*>*)Z_Param__Result=P_THIS->GetAllSourcesWithFlag(Z_Param_flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetAllSourcesWithModifier)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGameplayModifierContainer*>*)Z_Param__Result=P_THIS->GetAllSourcesWithModifier(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetAllStatusEffects)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStatusEffect*>*)Z_Param__Result=P_THIS->GetAllStatusEffects(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetAllStatusEffectsByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStatusEffect*>*)Z_Param__Result=P_THIS->GetAllStatusEffectsByClass(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetMultiplicativeModifierValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMultiplicativeModifierValue(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetMultiplicativeModifierValueOfContainerWithCompoundNegative)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_container);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMultiplicativeModifierValueOfContainerWithCompoundNegative(Z_Param_container);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetMultiplicativeModifierValueWithCompoundNegative)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMultiplicativeModifierValueWithCompoundNegative(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetPerk)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPerk**)Z_Param__Result=P_THIS->GetPerk(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetPerkModifier)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPerkModifier(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetPerkModifierAdditiveValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_baseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPerkModifierAdditiveValue(Z_Param_type,Z_Param_baseValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetPerkModifierMaxValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPerkModifierMaxValue(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetPerkModifierMaxValueAndSource)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_GET_OBJECT_REF(UGameplayModifierContainer,Z_Param_Out_outSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPerkModifierMaxValueAndSource(Z_Param_type,Z_Param_Out_outSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetPerkModifierMinValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_startValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPerkModifierMinValue(Z_Param_type,Z_Param_startValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetPerkModifierMinValueAndSource)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_startValue);
		P_GET_OBJECT_REF(UGameplayModifierContainer,Z_Param_Out_outSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPerkModifierMinValueAndSource(Z_Param_type,Z_Param_startValue,Z_Param_Out_outSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetSourceWithFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayModifierContainer**)Z_Param__Result=P_THIS->GetSourceWithFlag(Z_Param_flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetSourceWithModifier)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayModifierContainer**)Z_Param__Result=P_THIS->GetSourceWithModifier(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execGetStatusEffect)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStatusEffect**)Z_Param__Result=P_THIS->GetStatusEffect(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execHasAllCharacterPerksEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllCharacterPerksEquipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execHasAnyAddonWithTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyAddonWithTag(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execHasAnyEffectWithID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyEffectWithID(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execHasPerkFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPerkFlag(Z_Param_flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execHasPerkFlagFromSource)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_flag);
		P_GET_ENUM(EGameplayModifierSource,Z_Param_modifierSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPerkFlagFromSource(Z_Param_flag,EGameplayModifierSource(Z_Param_modifierSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execHasPerkModifierOfType)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPerkModifierOfType(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkManager::execHasStatusEffect)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusEffectID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStatusEffect(Z_Param_statusEffectID);
		P_NATIVE_END;
	}
	void UPerkManager::StaticRegisterNativesUPerkManager()
	{
		UClass* Class = UPerkManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_EndStatusEffectByID", &UPerkManager::execAuthority_EndStatusEffectByID },
			{ "Authority_ImposeDynamicStatusEffect", &UPerkManager::execAuthority_ImposeDynamicStatusEffect },
			{ "Authority_ImposeNewStatusEffectOrChangeLifeTime", &UPerkManager::execAuthority_ImposeNewStatusEffectOrChangeLifeTime },
			{ "Authority_ImposeStatusEffect", &UPerkManager::execAuthority_ImposeStatusEffect },
			{ "Authority_RemoveStatusEffect", &UPerkManager::execAuthority_RemoveStatusEffect },
			{ "Authority_RemoveStatusEffectByID", &UPerkManager::execAuthority_RemoveStatusEffectByID },
			{ "GetAllSourcesWithFlag", &UPerkManager::execGetAllSourcesWithFlag },
			{ "GetAllSourcesWithModifier", &UPerkManager::execGetAllSourcesWithModifier },
			{ "GetAllStatusEffects", &UPerkManager::execGetAllStatusEffects },
			{ "GetAllStatusEffectsByClass", &UPerkManager::execGetAllStatusEffectsByClass },
			{ "GetMultiplicativeModifierValue", &UPerkManager::execGetMultiplicativeModifierValue },
			{ "GetMultiplicativeModifierValueOfContainerWithCompoundNegative", &UPerkManager::execGetMultiplicativeModifierValueOfContainerWithCompoundNegative },
			{ "GetMultiplicativeModifierValueWithCompoundNegative", &UPerkManager::execGetMultiplicativeModifierValueWithCompoundNegative },
			{ "GetPerk", &UPerkManager::execGetPerk },
			{ "GetPerkModifier", &UPerkManager::execGetPerkModifier },
			{ "GetPerkModifierAdditiveValue", &UPerkManager::execGetPerkModifierAdditiveValue },
			{ "GetPerkModifierMaxValue", &UPerkManager::execGetPerkModifierMaxValue },
			{ "GetPerkModifierMaxValueAndSource", &UPerkManager::execGetPerkModifierMaxValueAndSource },
			{ "GetPerkModifierMinValue", &UPerkManager::execGetPerkModifierMinValue },
			{ "GetPerkModifierMinValueAndSource", &UPerkManager::execGetPerkModifierMinValueAndSource },
			{ "GetSourceWithFlag", &UPerkManager::execGetSourceWithFlag },
			{ "GetSourceWithModifier", &UPerkManager::execGetSourceWithModifier },
			{ "GetStatusEffect", &UPerkManager::execGetStatusEffect },
			{ "HasAllCharacterPerksEquipped", &UPerkManager::execHasAllCharacterPerksEquipped },
			{ "HasAnyAddonWithTag", &UPerkManager::execHasAnyAddonWithTag },
			{ "HasAnyEffectWithID", &UPerkManager::execHasAnyEffectWithID },
			{ "HasPerkFlag", &UPerkManager::execHasPerkFlag },
			{ "HasPerkFlagFromSource", &UPerkManager::execHasPerkFlagFromSource },
			{ "HasPerkModifierOfType", &UPerkManager::execHasPerkModifierOfType },
			{ "HasStatusEffect", &UPerkManager::execHasStatusEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics
	{
		struct PerkManager_eventAuthority_EndStatusEffectByID_Parms
		{
			FName statusEffectId;
			bool bRemoveAllWithID;
		};
		static void NewProp_bRemoveAllWithID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveAllWithID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffectId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::NewProp_bRemoveAllWithID_SetBit(void* Obj)
	{
		((PerkManager_eventAuthority_EndStatusEffectByID_Parms*)Obj)->bRemoveAllWithID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::NewProp_bRemoveAllWithID = { "bRemoveAllWithID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventAuthority_EndStatusEffectByID_Parms), &Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::NewProp_bRemoveAllWithID_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::NewProp_statusEffectId = { "statusEffectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_EndStatusEffectByID_Parms, statusEffectId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::NewProp_bRemoveAllWithID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::NewProp_statusEffectId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "Authority_EndStatusEffectByID", nullptr, nullptr, sizeof(PerkManager_eventAuthority_EndStatusEffectByID_Parms), Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics
	{
		struct PerkManager_eventAuthority_ImposeDynamicStatusEffect_Parms
		{
			FName statusEffectID;
			ADBDPlayer* originatingPlayer;
			float customParam;
			UGameplayModifierContainer* originatingEffect;
			UStatusEffect* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originatingEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originatingEffect;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_customParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originatingPlayer;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeDynamicStatusEffect_Parms, ReturnValue), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_originatingEffect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_originatingEffect = { "originatingEffect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeDynamicStatusEffect_Parms, originatingEffect), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_originatingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_originatingEffect_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_customParam = { "customParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeDynamicStatusEffect_Parms, customParam), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_originatingPlayer = { "originatingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeDynamicStatusEffect_Parms, originatingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_statusEffectID = { "statusEffectID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeDynamicStatusEffect_Parms, statusEffectID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_originatingEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_customParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_originatingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::NewProp_statusEffectID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "Authority_ImposeDynamicStatusEffect", nullptr, nullptr, sizeof(PerkManager_eventAuthority_ImposeDynamicStatusEffect_Parms), Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics
	{
		struct PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms
		{
			FName statusEffectID;
			ADBDPlayer* originatingPlayer;
			float lifeTime;
			float customParam;
			UGameplayModifierContainer* originatingEffect;
			bool shouldDisplay;
			UStatusEffect* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_shouldDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originatingEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originatingEffect;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_customParam;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originatingPlayer;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms, ReturnValue), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_shouldDisplay_SetBit(void* Obj)
	{
		((PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms*)Obj)->shouldDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_shouldDisplay = { "shouldDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms), &Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_shouldDisplay_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_originatingEffect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_originatingEffect = { "originatingEffect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms, originatingEffect), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_originatingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_originatingEffect_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_customParam = { "customParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms, customParam), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_lifeTime = { "lifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms, lifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_originatingPlayer = { "originatingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms, originatingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_statusEffectID = { "statusEffectID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms, statusEffectID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_shouldDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_originatingEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_customParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_lifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_originatingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::NewProp_statusEffectID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "Authority_ImposeNewStatusEffectOrChangeLifeTime", nullptr, nullptr, sizeof(PerkManager_eventAuthority_ImposeNewStatusEffectOrChangeLifeTime_Parms), Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics
	{
		struct PerkManager_eventAuthority_ImposeStatusEffect_Parms
		{
			FName statusEffectID;
			ADBDPlayer* originatingPlayer;
			float customParam;
			UGameplayModifierContainer* originatingEffect;
			bool shouldDisplay;
			float lifetime;
			UStatusEffect* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifetime;
		static void NewProp_shouldDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originatingEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originatingEffect;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_customParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originatingPlayer;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeStatusEffect_Parms, ReturnValue), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_lifetime = { "lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeStatusEffect_Parms, lifetime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_shouldDisplay_SetBit(void* Obj)
	{
		((PerkManager_eventAuthority_ImposeStatusEffect_Parms*)Obj)->shouldDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_shouldDisplay = { "shouldDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventAuthority_ImposeStatusEffect_Parms), &Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_shouldDisplay_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_originatingEffect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_originatingEffect = { "originatingEffect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeStatusEffect_Parms, originatingEffect), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_originatingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_originatingEffect_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_customParam = { "customParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeStatusEffect_Parms, customParam), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_originatingPlayer = { "originatingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeStatusEffect_Parms, originatingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_statusEffectID = { "statusEffectID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_ImposeStatusEffect_Parms, statusEffectID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_shouldDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_originatingEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_customParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_originatingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::NewProp_statusEffectID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "Authority_ImposeStatusEffect", nullptr, nullptr, sizeof(PerkManager_eventAuthority_ImposeStatusEffect_Parms), Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics
	{
		struct PerkManager_eventAuthority_RemoveStatusEffect_Parms
		{
			UStatusEffect* statusEffect;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_statusEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::NewProp_statusEffect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::NewProp_statusEffect = { "statusEffect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_RemoveStatusEffect_Parms, statusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::NewProp_statusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::NewProp_statusEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::NewProp_statusEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "Authority_RemoveStatusEffect", nullptr, nullptr, sizeof(PerkManager_eventAuthority_RemoveStatusEffect_Parms), Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics
	{
		struct PerkManager_eventAuthority_RemoveStatusEffectByID_Parms
		{
			FName statusEffectId;
			bool bRemoveAllWithID;
		};
		static void NewProp_bRemoveAllWithID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveAllWithID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffectId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::NewProp_bRemoveAllWithID_SetBit(void* Obj)
	{
		((PerkManager_eventAuthority_RemoveStatusEffectByID_Parms*)Obj)->bRemoveAllWithID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::NewProp_bRemoveAllWithID = { "bRemoveAllWithID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventAuthority_RemoveStatusEffectByID_Parms), &Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::NewProp_bRemoveAllWithID_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::NewProp_statusEffectId = { "statusEffectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventAuthority_RemoveStatusEffectByID_Parms, statusEffectId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::NewProp_bRemoveAllWithID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::NewProp_statusEffectId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "Authority_RemoveStatusEffectByID", nullptr, nullptr, sizeof(PerkManager_eventAuthority_RemoveStatusEffectByID_Parms), Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics
	{
		struct PerkManager_eventGetAllSourcesWithFlag_Parms
		{
			FGameplayTag flag;
			TArray<UGameplayModifierContainer*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetAllSourcesWithFlag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetAllSourcesWithFlag_Parms, flag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetAllSourcesWithFlag", nullptr, nullptr, sizeof(PerkManager_eventGetAllSourcesWithFlag_Parms), Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics
	{
		struct PerkManager_eventGetAllSourcesWithModifier_Parms
		{
			FGameplayTag type;
			TArray<UGameplayModifierContainer*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetAllSourcesWithModifier_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetAllSourcesWithModifier_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetAllSourcesWithModifier", nullptr, nullptr, sizeof(PerkManager_eventGetAllSourcesWithModifier_Parms), Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics
	{
		struct PerkManager_eventGetAllStatusEffects_Parms
		{
			FName id;
			TArray<UStatusEffect*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetAllStatusEffects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetAllStatusEffects_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetAllStatusEffects", nullptr, nullptr, sizeof(PerkManager_eventGetAllStatusEffects_Parms), Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetAllStatusEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetAllStatusEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics
	{
		struct PerkManager_eventGetAllStatusEffectsByClass_Parms
		{
			const UClass* type;
			TArray<UStatusEffect*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetAllStatusEffectsByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetAllStatusEffectsByClass_Parms, type), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetAllStatusEffectsByClass", nullptr, nullptr, sizeof(PerkManager_eventGetAllStatusEffectsByClass_Parms), Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics
	{
		struct PerkManager_eventGetMultiplicativeModifierValue_Parms
		{
			FGameplayTag type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetMultiplicativeModifierValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetMultiplicativeModifierValue_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetMultiplicativeModifierValue", nullptr, nullptr, sizeof(PerkManager_eventGetMultiplicativeModifierValue_Parms), Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics
	{
		struct PerkManager_eventGetMultiplicativeModifierValueOfContainerWithCompoundNegative_Parms
		{
			FGameplayTagContainer container;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_container;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetMultiplicativeModifierValueOfContainerWithCompoundNegative_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::NewProp_container = { "container", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetMultiplicativeModifierValueOfContainerWithCompoundNegative_Parms, container), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::NewProp_container,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetMultiplicativeModifierValueOfContainerWithCompoundNegative", nullptr, nullptr, sizeof(PerkManager_eventGetMultiplicativeModifierValueOfContainerWithCompoundNegative_Parms), Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics
	{
		struct PerkManager_eventGetMultiplicativeModifierValueWithCompoundNegative_Parms
		{
			FGameplayTag type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetMultiplicativeModifierValueWithCompoundNegative_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetMultiplicativeModifierValueWithCompoundNegative_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetMultiplicativeModifierValueWithCompoundNegative", nullptr, nullptr, sizeof(PerkManager_eventGetMultiplicativeModifierValueWithCompoundNegative_Parms), Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetPerk_Statics
	{
		struct PerkManager_eventGetPerk_Parms
		{
			FName id;
			UPerk* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerk_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetPerk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerk_Parms, ReturnValue), Z_Construct_UClass_UPerk_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerk_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerk_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_GetPerk_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerk_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerk_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerk_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetPerk", nullptr, nullptr, sizeof(PerkManager_eventGetPerk_Parms), Z_Construct_UFunction_UPerkManager_GetPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics
	{
		struct PerkManager_eventGetPerkModifier_Parms
		{
			FGameplayTag type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifier_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetPerkModifier", nullptr, nullptr, sizeof(PerkManager_eventGetPerkModifier_Parms), Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetPerkModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetPerkModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics
	{
		struct PerkManager_eventGetPerkModifierAdditiveValue_Parms
		{
			FGameplayTag type;
			float baseValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierAdditiveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_baseValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_baseValue = { "baseValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierAdditiveValue_Parms, baseValue), METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_baseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_baseValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierAdditiveValue_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_baseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetPerkModifierAdditiveValue", nullptr, nullptr, sizeof(PerkManager_eventGetPerkModifierAdditiveValue_Parms), Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics
	{
		struct PerkManager_eventGetPerkModifierMaxValue_Parms
		{
			FGameplayTag type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMaxValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMaxValue_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetPerkModifierMaxValue", nullptr, nullptr, sizeof(PerkManager_eventGetPerkModifierMaxValue_Parms), Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics
	{
		struct PerkManager_eventGetPerkModifierMaxValueAndSource_Parms
		{
			FGameplayTag type;
			UGameplayModifierContainer* outSource;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outSource;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMaxValueAndSource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_outSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_outSource = { "outSource", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMaxValueAndSource_Parms, outSource), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_outSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_outSource_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMaxValueAndSource_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_outSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetPerkModifierMaxValueAndSource", nullptr, nullptr, sizeof(PerkManager_eventGetPerkModifierMaxValueAndSource_Parms), Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics
	{
		struct PerkManager_eventGetPerkModifierMinValue_Parms
		{
			FGameplayTag type;
			float startValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_startValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMinValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::NewProp_startValue = { "startValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMinValue_Parms, startValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMinValue_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::NewProp_startValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetPerkModifierMinValue", nullptr, nullptr, sizeof(PerkManager_eventGetPerkModifierMinValue_Parms), Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics
	{
		struct PerkManager_eventGetPerkModifierMinValueAndSource_Parms
		{
			FGameplayTag type;
			float startValue;
			UGameplayModifierContainer* outSource;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outSource;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_startValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMinValueAndSource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_outSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_outSource = { "outSource", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMinValueAndSource_Parms, outSource), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_outSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_outSource_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_startValue = { "startValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMinValueAndSource_Parms, startValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetPerkModifierMinValueAndSource_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_outSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_startValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetPerkModifierMinValueAndSource", nullptr, nullptr, sizeof(PerkManager_eventGetPerkModifierMinValueAndSource_Parms), Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics
	{
		struct PerkManager_eventGetSourceWithFlag_Parms
		{
			FGameplayTag flag;
			UGameplayModifierContainer* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetSourceWithFlag_Parms, ReturnValue), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetSourceWithFlag_Parms, flag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetSourceWithFlag", nullptr, nullptr, sizeof(PerkManager_eventGetSourceWithFlag_Parms), Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetSourceWithFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetSourceWithFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics
	{
		struct PerkManager_eventGetSourceWithModifier_Parms
		{
			FGameplayTag type;
			UGameplayModifierContainer* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetSourceWithModifier_Parms, ReturnValue), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetSourceWithModifier_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetSourceWithModifier", nullptr, nullptr, sizeof(PerkManager_eventGetSourceWithModifier_Parms), Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetSourceWithModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetSourceWithModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics
	{
		struct PerkManager_eventGetStatusEffect_Parms
		{
			FName id;
			UStatusEffect* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetStatusEffect_Parms, ReturnValue), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventGetStatusEffect_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "GetStatusEffect", nullptr, nullptr, sizeof(PerkManager_eventGetStatusEffect_Parms), Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_GetStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_GetStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics
	{
		struct PerkManager_eventHasAllCharacterPerksEquipped_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerkManager_eventHasAllCharacterPerksEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventHasAllCharacterPerksEquipped_Parms), &Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "HasAllCharacterPerksEquipped", nullptr, nullptr, sizeof(PerkManager_eventHasAllCharacterPerksEquipped_Parms), Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics
	{
		struct PerkManager_eventHasAnyAddonWithTag_Parms
		{
			FName tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerkManager_eventHasAnyAddonWithTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventHasAnyAddonWithTag_Parms), &Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventHasAnyAddonWithTag_Parms, tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "HasAnyAddonWithTag", nullptr, nullptr, sizeof(PerkManager_eventHasAnyAddonWithTag_Parms), Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics
	{
		struct PerkManager_eventHasAnyEffectWithID_Parms
		{
			FName id;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerkManager_eventHasAnyEffectWithID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventHasAnyEffectWithID_Parms), &Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventHasAnyEffectWithID_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "HasAnyEffectWithID", nullptr, nullptr, sizeof(PerkManager_eventHasAnyEffectWithID_Parms), Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics
	{
		struct PerkManager_eventHasPerkFlag_Parms
		{
			FGameplayTag flag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerkManager_eventHasPerkFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventHasPerkFlag_Parms), &Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventHasPerkFlag_Parms, flag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "HasPerkFlag", nullptr, nullptr, sizeof(PerkManager_eventHasPerkFlag_Parms), Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_HasPerkFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_HasPerkFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics
	{
		struct PerkManager_eventHasPerkFlagFromSource_Parms
		{
			FGameplayTag flag;
			EGameplayModifierSource modifierSource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_modifierSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_modifierSource_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerkManager_eventHasPerkFlagFromSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventHasPerkFlagFromSource_Parms), &Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_modifierSource = { "modifierSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventHasPerkFlagFromSource_Parms, modifierSource), Z_Construct_UEnum_DeadByDaylight_EGameplayModifierSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_modifierSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventHasPerkFlagFromSource_Parms, flag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_modifierSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_modifierSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "HasPerkFlagFromSource", nullptr, nullptr, sizeof(PerkManager_eventHasPerkFlagFromSource_Parms), Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics
	{
		struct PerkManager_eventHasPerkModifierOfType_Parms
		{
			FGameplayTag type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerkManager_eventHasPerkModifierOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventHasPerkModifierOfType_Parms), &Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventHasPerkModifierOfType_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "HasPerkModifierOfType", nullptr, nullptr, sizeof(PerkManager_eventHasPerkModifierOfType_Parms), Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics
	{
		struct PerkManager_eventHasStatusEffect_Parms
		{
			FName statusEffectID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusEffectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerkManager_eventHasStatusEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkManager_eventHasStatusEffect_Parms), &Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_statusEffectID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_statusEffectID = { "statusEffectID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkManager_eventHasStatusEffect_Parms, statusEffectID), METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_statusEffectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_statusEffectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::NewProp_statusEffectID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkManager, nullptr, "HasStatusEffect", nullptr, nullptr, sizeof(PerkManager_eventHasStatusEffect_Parms), Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkManager_HasStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkManager_HasStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkManager_NoRegister()
	{
		return UPerkManager::StaticClass();
	}
	struct Z_Construct_UClass_UPerkManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perks_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkManager_Authority_EndStatusEffectByID, "Authority_EndStatusEffectByID" }, // 1836930403
		{ &Z_Construct_UFunction_UPerkManager_Authority_ImposeDynamicStatusEffect, "Authority_ImposeDynamicStatusEffect" }, // 2801340983
		{ &Z_Construct_UFunction_UPerkManager_Authority_ImposeNewStatusEffectOrChangeLifeTime, "Authority_ImposeNewStatusEffectOrChangeLifeTime" }, // 3425784594
		{ &Z_Construct_UFunction_UPerkManager_Authority_ImposeStatusEffect, "Authority_ImposeStatusEffect" }, // 2537923081
		{ &Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffect, "Authority_RemoveStatusEffect" }, // 3795939428
		{ &Z_Construct_UFunction_UPerkManager_Authority_RemoveStatusEffectByID, "Authority_RemoveStatusEffectByID" }, // 2894364367
		{ &Z_Construct_UFunction_UPerkManager_GetAllSourcesWithFlag, "GetAllSourcesWithFlag" }, // 2327532373
		{ &Z_Construct_UFunction_UPerkManager_GetAllSourcesWithModifier, "GetAllSourcesWithModifier" }, // 3622971830
		{ &Z_Construct_UFunction_UPerkManager_GetAllStatusEffects, "GetAllStatusEffects" }, // 4181308313
		{ &Z_Construct_UFunction_UPerkManager_GetAllStatusEffectsByClass, "GetAllStatusEffectsByClass" }, // 2686482645
		{ &Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValue, "GetMultiplicativeModifierValue" }, // 4080834415
		{ &Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueOfContainerWithCompoundNegative, "GetMultiplicativeModifierValueOfContainerWithCompoundNegative" }, // 2905546049
		{ &Z_Construct_UFunction_UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative, "GetMultiplicativeModifierValueWithCompoundNegative" }, // 1490582392
		{ &Z_Construct_UFunction_UPerkManager_GetPerk, "GetPerk" }, // 2671536650
		{ &Z_Construct_UFunction_UPerkManager_GetPerkModifier, "GetPerkModifier" }, // 2981979064
		{ &Z_Construct_UFunction_UPerkManager_GetPerkModifierAdditiveValue, "GetPerkModifierAdditiveValue" }, // 584759094
		{ &Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValue, "GetPerkModifierMaxValue" }, // 411258679
		{ &Z_Construct_UFunction_UPerkManager_GetPerkModifierMaxValueAndSource, "GetPerkModifierMaxValueAndSource" }, // 742823676
		{ &Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValue, "GetPerkModifierMinValue" }, // 1569394646
		{ &Z_Construct_UFunction_UPerkManager_GetPerkModifierMinValueAndSource, "GetPerkModifierMinValueAndSource" }, // 36169769
		{ &Z_Construct_UFunction_UPerkManager_GetSourceWithFlag, "GetSourceWithFlag" }, // 875794067
		{ &Z_Construct_UFunction_UPerkManager_GetSourceWithModifier, "GetSourceWithModifier" }, // 3586262610
		{ &Z_Construct_UFunction_UPerkManager_GetStatusEffect, "GetStatusEffect" }, // 25527137
		{ &Z_Construct_UFunction_UPerkManager_HasAllCharacterPerksEquipped, "HasAllCharacterPerksEquipped" }, // 3753298624
		{ &Z_Construct_UFunction_UPerkManager_HasAnyAddonWithTag, "HasAnyAddonWithTag" }, // 217046055
		{ &Z_Construct_UFunction_UPerkManager_HasAnyEffectWithID, "HasAnyEffectWithID" }, // 700617764
		{ &Z_Construct_UFunction_UPerkManager_HasPerkFlag, "HasPerkFlag" }, // 3826092860
		{ &Z_Construct_UFunction_UPerkManager_HasPerkFlagFromSource, "HasPerkFlagFromSource" }, // 2193735793
		{ &Z_Construct_UFunction_UPerkManager_HasPerkModifierOfType, "HasPerkModifierOfType" }, // 2912994171
		{ &Z_Construct_UFunction_UPerkManager_HasStatusEffect, "HasStatusEffect" }, // 3718160170
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PerkManager.h" },
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkManager_Statics::NewProp__statusEffects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkManager_Statics::NewProp__statusEffects = { "_statusEffects", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkManager, _statusEffects), Z_Construct_UClass_UStatusEffectCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkManager_Statics::NewProp__statusEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkManager_Statics::NewProp__statusEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkManager_Statics::NewProp__perks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkManager_Statics::NewProp__perks = { "_perks", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkManager, _perks), Z_Construct_UClass_UPerkCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkManager_Statics::NewProp__perks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkManager_Statics::NewProp__perks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkManager_Statics::NewProp__statusEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkManager_Statics::NewProp__perks,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPerkManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCompetenceFlagProvider_NoRegister, (int32)VTABLE_OFFSET(UPerkManager, ICompetenceFlagProvider), false },
			{ Z_Construct_UClass_UModifierProvider_NoRegister, (int32)VTABLE_OFFSET(UPerkManager, IModifierProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkManager_Statics::ClassParams = {
		&UPerkManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPerkManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerkManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkManager, 1268363009);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkManager>()
	{
		return UPerkManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkManager(Z_Construct_UClass_UPerkManager, &UPerkManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
