// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/GeneratorToolboxRepairInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorToolboxRepairInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGeneratorToolboxRepairInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGeneratorToolboxRepairInteraction();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGeneratorRepairInteraction();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UGeneratorToolboxRepairInteraction::execGetInteractionTextWhenEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInteractionTextWhenEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorToolboxRepairInteraction::execHasChargedToolBox)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasChargedToolBox(Z_Param_player);
		P_NATIVE_END;
	}
	void UGeneratorToolboxRepairInteraction::StaticRegisterNativesUGeneratorToolboxRepairInteraction()
	{
		UClass* Class = UGeneratorToolboxRepairInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInteractionTextWhenEmpty", &UGeneratorToolboxRepairInteraction::execGetInteractionTextWhenEmpty },
			{ "HasChargedToolBox", &UGeneratorToolboxRepairInteraction::execHasChargedToolBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics
	{
		struct GeneratorToolboxRepairInteraction_eventGetInteractionTextWhenEmpty_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorToolboxRepairInteraction_eventGetInteractionTextWhenEmpty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorToolboxRepairInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorToolboxRepairInteraction, nullptr, "GetInteractionTextWhenEmpty", nullptr, nullptr, sizeof(GeneratorToolboxRepairInteraction_eventGetInteractionTextWhenEmpty_Parms), Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics
	{
		struct GeneratorToolboxRepairInteraction_eventHasChargedToolBox_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneratorToolboxRepairInteraction_eventHasChargedToolBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorToolboxRepairInteraction_eventHasChargedToolBox_Parms), &Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorToolboxRepairInteraction_eventHasChargedToolBox_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorToolboxRepairInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorToolboxRepairInteraction, nullptr, "HasChargedToolBox", nullptr, nullptr, sizeof(GeneratorToolboxRepairInteraction_eventHasChargedToolBox_Parms), Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeneratorToolboxRepairInteraction_NoRegister()
	{
		return UGeneratorToolboxRepairInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repairSkillCheckChanceWhenEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__repairSkillCheckChanceWhenEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repairSkillCheckDurationWhenEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__repairSkillCheckDurationWhenEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionTextWhenEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__interactionTextWhenEmpty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeneratorRepairInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty, "GetInteractionTextWhenEmpty" }, // 2140410317
		{ &Z_Construct_UFunction_UGeneratorToolboxRepairInteraction_HasChargedToolBox, "HasChargedToolBox" }, // 2249933527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GeneratorToolboxRepairInteraction.h" },
		{ "ModuleRelativePath", "Public/GeneratorToolboxRepairInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckChanceWhenEmpty_MetaData[] = {
		{ "Category", "GeneratorToolboxRepairInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorToolboxRepairInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckChanceWhenEmpty = { "_repairSkillCheckChanceWhenEmpty", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorToolboxRepairInteraction, _repairSkillCheckChanceWhenEmpty), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckChanceWhenEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckChanceWhenEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckDurationWhenEmpty_MetaData[] = {
		{ "Category", "GeneratorToolboxRepairInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorToolboxRepairInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckDurationWhenEmpty = { "_repairSkillCheckDurationWhenEmpty", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorToolboxRepairInteraction, _repairSkillCheckDurationWhenEmpty), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckDurationWhenEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckDurationWhenEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__interactionTextWhenEmpty_MetaData[] = {
		{ "Category", "GeneratorToolboxRepairInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorToolboxRepairInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__interactionTextWhenEmpty = { "_interactionTextWhenEmpty", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorToolboxRepairInteraction, _interactionTextWhenEmpty), METADATA_PARAMS(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__interactionTextWhenEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__interactionTextWhenEmpty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckChanceWhenEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__repairSkillCheckDurationWhenEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::NewProp__interactionTextWhenEmpty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorToolboxRepairInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::ClassParams = {
		&UGeneratorToolboxRepairInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorToolboxRepairInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorToolboxRepairInteraction, 1982798595);
	template<> DBDINTERACTION_API UClass* StaticClass<UGeneratorToolboxRepairInteraction>()
	{
		return UGeneratorToolboxRepairInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorToolboxRepairInteraction(Z_Construct_UClass_UGeneratorToolboxRepairInteraction, &UGeneratorToolboxRepairInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UGeneratorToolboxRepairInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorToolboxRepairInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
