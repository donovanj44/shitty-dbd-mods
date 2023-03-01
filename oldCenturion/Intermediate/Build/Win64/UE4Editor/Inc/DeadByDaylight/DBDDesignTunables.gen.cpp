// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDDesignTunables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDesignTunables() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDesignTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDesignTunables();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaDesignTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDCoreUMGDesignTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTextDesignTunables_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPerkLevelDefinition();
// End Cross Module References
	DEFINE_FUNCTION(UDBDDesignTunables::execGetTunableValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ID);
		P_GET_UBOOL(Z_Param_warnIfRowMissing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTunableValue(Z_Param_ID,Z_Param_warnIfRowMissing);
		P_NATIVE_END;
	}
	void UDBDDesignTunables::StaticRegisterNativesUDBDDesignTunables()
	{
		UClass* Class = UDBDDesignTunables::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTunableValue", &UDBDDesignTunables::execGetTunableValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics
	{
		struct DBDDesignTunables_eventGetTunableValue_Parms
		{
			FName ID;
			bool warnIfRowMissing;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_warnIfRowMissing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_warnIfRowMissing;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDesignTunables_eventGetTunableValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::NewProp_warnIfRowMissing_SetBit(void* Obj)
	{
		((DBDDesignTunables_eventGetTunableValue_Parms*)Obj)->warnIfRowMissing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::NewProp_warnIfRowMissing = { "warnIfRowMissing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDDesignTunables_eventGetTunableValue_Parms), &Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::NewProp_warnIfRowMissing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDDesignTunables_eventGetTunableValue_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::NewProp_warnIfRowMissing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDesignTunables, nullptr, "GetTunableValue", nullptr, nullptr, sizeof(DBDDesignTunables_eventGetTunableValue_Parms), Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDDesignTunables_NoRegister()
	{
		return UDBDDesignTunables::StaticClass();
	}
	struct Z_Construct_UClass_UDBDDesignTunables_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaDesignTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtlantaDesignTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaDesignTunableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AtlantaDesignTunableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreUMGDesignTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoreUMGDesignTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreUMGDesignTunableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CoreUMGDesignTunableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDesignTunableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TextDesignTunableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldUseKillerLobby_MetaData[];
#endif
		static void NewProp_ShouldUseKillerLobby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldUseKillerLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisruptableAuraReadingFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DisruptableAuraReadingFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisruptableAuraReadingFlags_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorRevelatoryAuraPerceptionModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SurvivorRevelatoryAuraPerceptionModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurvivorRevelatoryAuraPerceptionModifiers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedSurvivorAuraPerceptionModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_RangedSurvivorAuraPerceptionModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RangedSurvivorAuraPerceptionModifiers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MetaModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaModifiers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevelDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkLevelDefinitions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerkLevelDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantityOfItemsToBuyBeforeFreeBloodwebRefresh_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuantityOfItemsToBuyBeforeFreeBloodwebRefresh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFearTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxFearTokens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinStreakThresholdSmall_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinStreakThresholdSmall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinStreakThresholdLarge_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinStreakThresholdLarge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDDesignTunables_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDDesignTunables_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDDesignTunables_GetTunableValue, "GetTunableValue" }, // 875878723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDDesignTunables.h" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunables_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunables = { "AtlantaDesignTunables", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, AtlantaDesignTunables), Z_Construct_UClass_UDBDAtlantaDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunableClass_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunableClass = { "AtlantaDesignTunableClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, AtlantaDesignTunableClass), Z_Construct_UClass_UDBDAtlantaDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunables_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunables = { "CoreUMGDesignTunables", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, CoreUMGDesignTunables), Z_Construct_UClass_UDBDCoreUMGDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunableClass_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunableClass = { "CoreUMGDesignTunableClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, CoreUMGDesignTunableClass), Z_Construct_UClass_UDBDCoreUMGDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextTunables_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextTunables = { "TextTunables", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, TextTunables), Z_Construct_UClass_UDBDTextDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextDesignTunableClass_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextDesignTunableClass = { "TextDesignTunableClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, TextDesignTunableClass), Z_Construct_UClass_UDBDTextDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextDesignTunableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextDesignTunableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_ShouldUseKillerLobby_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	void Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_ShouldUseKillerLobby_SetBit(void* Obj)
	{
		((UDBDDesignTunables*)Obj)->ShouldUseKillerLobby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_ShouldUseKillerLobby = { "ShouldUseKillerLobby", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDDesignTunables), &Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_ShouldUseKillerLobby_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_ShouldUseKillerLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_ShouldUseKillerLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_DisruptableAuraReadingFlags_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_DisruptableAuraReadingFlags = { "DisruptableAuraReadingFlags", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, DisruptableAuraReadingFlags), METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_DisruptableAuraReadingFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_DisruptableAuraReadingFlags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_DisruptableAuraReadingFlags_ElementProp = { "DisruptableAuraReadingFlags", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_SurvivorRevelatoryAuraPerceptionModifiers_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_SurvivorRevelatoryAuraPerceptionModifiers = { "SurvivorRevelatoryAuraPerceptionModifiers", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, SurvivorRevelatoryAuraPerceptionModifiers), METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_SurvivorRevelatoryAuraPerceptionModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_SurvivorRevelatoryAuraPerceptionModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_SurvivorRevelatoryAuraPerceptionModifiers_ElementProp = { "SurvivorRevelatoryAuraPerceptionModifiers", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_RangedSurvivorAuraPerceptionModifiers_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_RangedSurvivorAuraPerceptionModifiers = { "RangedSurvivorAuraPerceptionModifiers", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, RangedSurvivorAuraPerceptionModifiers), METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_RangedSurvivorAuraPerceptionModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_RangedSurvivorAuraPerceptionModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_RangedSurvivorAuraPerceptionModifiers_ElementProp = { "RangedSurvivorAuraPerceptionModifiers", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MetaModifiers_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MetaModifiers = { "MetaModifiers", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, MetaModifiers), METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MetaModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MetaModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MetaModifiers_ElementProp = { "MetaModifiers", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_PerkLevelDefinitions_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_PerkLevelDefinitions = { "PerkLevelDefinitions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, PerkLevelDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_PerkLevelDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_PerkLevelDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_PerkLevelDefinitions_Inner = { "PerkLevelDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPerkLevelDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_QuantityOfItemsToBuyBeforeFreeBloodwebRefresh_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_QuantityOfItemsToBuyBeforeFreeBloodwebRefresh = { "QuantityOfItemsToBuyBeforeFreeBloodwebRefresh", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, QuantityOfItemsToBuyBeforeFreeBloodwebRefresh), METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_QuantityOfItemsToBuyBeforeFreeBloodwebRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_QuantityOfItemsToBuyBeforeFreeBloodwebRefresh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MaxFearTokens_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MaxFearTokens = { "MaxFearTokens", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, MaxFearTokens), METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MaxFearTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MaxFearTokens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdSmall_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdSmall = { "WinStreakThresholdSmall", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, WinStreakThresholdSmall), METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdSmall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdLarge_MetaData[] = {
		{ "Category", "DBDDesignTunables" },
		{ "ModuleRelativePath", "Public/DBDDesignTunables.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdLarge = { "WinStreakThresholdLarge", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDesignTunables, WinStreakThresholdLarge), METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdLarge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDDesignTunables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_AtlantaDesignTunableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_CoreUMGDesignTunableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_TextDesignTunableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_ShouldUseKillerLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_DisruptableAuraReadingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_DisruptableAuraReadingFlags_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_SurvivorRevelatoryAuraPerceptionModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_SurvivorRevelatoryAuraPerceptionModifiers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_RangedSurvivorAuraPerceptionModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_RangedSurvivorAuraPerceptionModifiers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MetaModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MetaModifiers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_PerkLevelDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_PerkLevelDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_QuantityOfItemsToBuyBeforeFreeBloodwebRefresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_MaxFearTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDesignTunables_Statics::NewProp_WinStreakThresholdLarge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDDesignTunables_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDDesignTunables>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDDesignTunables_Statics::ClassParams = {
		&UDBDDesignTunables::StaticClass,
		"Design",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDDesignTunables_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDBDDesignTunables_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDesignTunables_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDDesignTunables()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDDesignTunables_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDDesignTunables, 2470970204);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDDesignTunables>()
	{
		return UDBDDesignTunables::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDDesignTunables(Z_Construct_UClass_UDBDDesignTunables, &UDBDDesignTunables::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDDesignTunables"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDDesignTunables);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
