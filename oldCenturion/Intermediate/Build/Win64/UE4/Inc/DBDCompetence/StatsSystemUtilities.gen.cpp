// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/StatsSystemUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsSystemUtilities() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UStatsSystemUtilities_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UStatsSystemUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStatsSystemUtilities::execGetStatValueBP)
	{
		P_GET_STRUCT_REF(FTunableStat,Z_Param_Out_theStat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStatsSystemUtilities::GetStatValueBP(Z_Param_Out_theStat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsSystemUtilities::execInitStatBP)
	{
		P_GET_STRUCT_REF(FTunableStat,Z_Param_Out_theStat);
		P_GET_TINTERFACE(IModifierProvider,Z_Param_modifierProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStatsSystemUtilities::InitStatBP(Z_Param_Out_theStat,Z_Param_modifierProvider);
		P_NATIVE_END;
	}
	void UStatsSystemUtilities::StaticRegisterNativesUStatsSystemUtilities()
	{
		UClass* Class = UStatsSystemUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStatValueBP", &UStatsSystemUtilities::execGetStatValueBP },
			{ "InitStatBP", &UStatsSystemUtilities::execInitStatBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics
	{
		struct StatsSystemUtilities_eventGetStatValueBP_Parms
		{
			FTunableStat theStat;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_theStat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatsSystemUtilities_eventGetStatValueBP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::NewProp_theStat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::NewProp_theStat = { "theStat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatsSystemUtilities_eventGetStatValueBP_Parms, theStat), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::NewProp_theStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::NewProp_theStat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::NewProp_theStat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystemUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsSystemUtilities, nullptr, "GetStatValueBP", nullptr, nullptr, sizeof(StatsSystemUtilities_eventGetStatValueBP_Parms), Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics
	{
		struct StatsSystemUtilities_eventInitStatBP_Parms
		{
			FTunableStat theStat;
			TScriptInterface<IModifierProvider> modifierProvider;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_modifierProvider;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_theStat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::NewProp_modifierProvider = { "modifierProvider", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatsSystemUtilities_eventInitStatBP_Parms, modifierProvider), Z_Construct_UClass_UModifierProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::NewProp_theStat = { "theStat", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatsSystemUtilities_eventInitStatBP_Parms, theStat), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::NewProp_modifierProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::NewProp_theStat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystemUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsSystemUtilities, nullptr, "InitStatBP", nullptr, nullptr, sizeof(StatsSystemUtilities_eventInitStatBP_Parms), Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStatsSystemUtilities_NoRegister()
	{
		return UStatsSystemUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UStatsSystemUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatsSystemUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatsSystemUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsSystemUtilities_GetStatValueBP, "GetStatValueBP" }, // 802360362
		{ &Z_Construct_UFunction_UStatsSystemUtilities_InitStatBP, "InitStatBP" }, // 1855604218
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsSystemUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StatsSystemUtilities.h" },
		{ "ModuleRelativePath", "Public/StatsSystemUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatsSystemUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsSystemUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatsSystemUtilities_Statics::ClassParams = {
		&UStatsSystemUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStatsSystemUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsSystemUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatsSystemUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatsSystemUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatsSystemUtilities, 3563374469);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UStatsSystemUtilities>()
	{
		return UStatsSystemUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatsSystemUtilities(Z_Construct_UClass_UStatsSystemUtilities, &UStatsSystemUtilities::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UStatsSystemUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsSystemUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
