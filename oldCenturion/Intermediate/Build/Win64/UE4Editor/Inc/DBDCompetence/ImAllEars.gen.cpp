// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ImAllEars.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImAllEars() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UImAllEars_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UImAllEars();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UImAllEars::execServer_OnCamperLoudNoise)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameplayTag);
		P_GET_STRUCT(FGameEventData,Z_Param_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnCamperLoudNoise_Validate(Z_Param_gameplayTag,Z_Param_gameEventData))
		{
			RPC_ValidateFailed(TEXT("Server_OnCamperLoudNoise_Validate"));
			return;
		}
		P_THIS->Server_OnCamperLoudNoise_Implementation(Z_Param_gameplayTag,Z_Param_gameEventData);
		P_NATIVE_END;
	}
	static FName NAME_UImAllEars_Server_OnCamperLoudNoise = FName(TEXT("Server_OnCamperLoudNoise"));
	void UImAllEars::Server_OnCamperLoudNoise(const FGameplayTag gameplayTag, FGameEventData const& gameEventData)
	{
		ImAllEars_eventServer_OnCamperLoudNoise_Parms Parms;
		Parms.gameplayTag=gameplayTag;
		Parms.gameEventData=gameEventData;
		ProcessEvent(FindFunctionChecked(NAME_UImAllEars_Server_OnCamperLoudNoise),&Parms);
	}
	void UImAllEars::StaticRegisterNativesUImAllEars()
	{
		UClass* Class = UImAllEars::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_OnCamperLoudNoise", &UImAllEars::execServer_OnCamperLoudNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameplayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImAllEars_eventServer_OnCamperLoudNoise_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameplayTag = { "gameplayTag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImAllEars_eventServer_OnCamperLoudNoise_Parms, gameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameplayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::NewProp_gameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImAllEars.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImAllEars, nullptr, "Server_OnCamperLoudNoise", nullptr, nullptr, sizeof(ImAllEars_eventServer_OnCamperLoudNoise_Parms), Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImAllEars_NoRegister()
	{
		return UImAllEars::StaticClass();
	}
	struct Z_Construct_UClass_UImAllEars_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__triggerOutsideRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__triggerOutsideRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useTerrorRadius_MetaData[];
#endif
		static void NewProp__useTerrorRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useTerrorRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__durationByLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__durationByLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownByLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__cooldownByLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImAllEars_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImAllEars_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImAllEars_Server_OnCamperLoudNoise, "Server_OnCamperLoudNoise" }, // 4139383513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImAllEars_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImAllEars.h" },
		{ "ModuleRelativePath", "Public/ImAllEars.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImAllEars_Statics::NewProp__triggerOutsideRadius_MetaData[] = {
		{ "Category", "ImAllEars" },
		{ "ModuleRelativePath", "Public/ImAllEars.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImAllEars_Statics::NewProp__triggerOutsideRadius = { "_triggerOutsideRadius", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImAllEars, _triggerOutsideRadius), METADATA_PARAMS(Z_Construct_UClass_UImAllEars_Statics::NewProp__triggerOutsideRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImAllEars_Statics::NewProp__triggerOutsideRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImAllEars_Statics::NewProp__useTerrorRadius_MetaData[] = {
		{ "Category", "ImAllEars" },
		{ "ModuleRelativePath", "Public/ImAllEars.h" },
	};
#endif
	void Z_Construct_UClass_UImAllEars_Statics::NewProp__useTerrorRadius_SetBit(void* Obj)
	{
		((UImAllEars*)Obj)->_useTerrorRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImAllEars_Statics::NewProp__useTerrorRadius = { "_useTerrorRadius", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UImAllEars), &Z_Construct_UClass_UImAllEars_Statics::NewProp__useTerrorRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImAllEars_Statics::NewProp__useTerrorRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImAllEars_Statics::NewProp__useTerrorRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImAllEars_Statics::NewProp__durationByLevel_MetaData[] = {
		{ "Category", "ImAllEars" },
		{ "ModuleRelativePath", "Public/ImAllEars.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImAllEars_Statics::NewProp__durationByLevel = { "_durationByLevel", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_durationByLevel, UImAllEars), STRUCT_OFFSET(UImAllEars, _durationByLevel), METADATA_PARAMS(Z_Construct_UClass_UImAllEars_Statics::NewProp__durationByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImAllEars_Statics::NewProp__durationByLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImAllEars_Statics::NewProp__cooldownByLevel_MetaData[] = {
		{ "Category", "ImAllEars" },
		{ "ModuleRelativePath", "Public/ImAllEars.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImAllEars_Statics::NewProp__cooldownByLevel = { "_cooldownByLevel", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownByLevel, UImAllEars), STRUCT_OFFSET(UImAllEars, _cooldownByLevel), METADATA_PARAMS(Z_Construct_UClass_UImAllEars_Statics::NewProp__cooldownByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImAllEars_Statics::NewProp__cooldownByLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImAllEars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImAllEars_Statics::NewProp__triggerOutsideRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImAllEars_Statics::NewProp__useTerrorRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImAllEars_Statics::NewProp__durationByLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImAllEars_Statics::NewProp__cooldownByLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImAllEars_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImAllEars>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImAllEars_Statics::ClassParams = {
		&UImAllEars::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImAllEars_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImAllEars_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImAllEars_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImAllEars_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImAllEars()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImAllEars_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImAllEars, 2224820681);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UImAllEars>()
	{
		return UImAllEars::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImAllEars(Z_Construct_UClass_UImAllEars, &UImAllEars::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UImAllEars"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImAllEars);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
