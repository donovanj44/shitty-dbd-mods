// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SurvivorInteractionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorInteractionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_USurvivorInteractionAnalytics_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_USurvivorInteractionAnalytics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorInteractionAnalytics::execIncrementHealCount)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		USurvivorInteractionAnalytics::IncrementHealCount(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorInteractionAnalytics::execRecordHatchEscape)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		USurvivorInteractionAnalytics::RecordHatchEscape(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorInteractionAnalytics::execRecordHealSuccess)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		USurvivorInteractionAnalytics::RecordHealSuccess(Z_Param_survivor);
		P_NATIVE_END;
	}
	void USurvivorInteractionAnalytics::StaticRegisterNativesUSurvivorInteractionAnalytics()
	{
		UClass* Class = USurvivorInteractionAnalytics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementHealCount", &USurvivorInteractionAnalytics::execIncrementHealCount },
			{ "RecordHatchEscape", &USurvivorInteractionAnalytics::execRecordHatchEscape },
			{ "RecordHealSuccess", &USurvivorInteractionAnalytics::execRecordHealSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics
	{
		struct SurvivorInteractionAnalytics_eventIncrementHealCount_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorInteractionAnalytics_eventIncrementHealCount_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorInteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorInteractionAnalytics, nullptr, "IncrementHealCount", nullptr, nullptr, sizeof(SurvivorInteractionAnalytics_eventIncrementHealCount_Parms), Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics
	{
		struct SurvivorInteractionAnalytics_eventRecordHatchEscape_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorInteractionAnalytics_eventRecordHatchEscape_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorInteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorInteractionAnalytics, nullptr, "RecordHatchEscape", nullptr, nullptr, sizeof(SurvivorInteractionAnalytics_eventRecordHatchEscape_Parms), Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics
	{
		struct SurvivorInteractionAnalytics_eventRecordHealSuccess_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorInteractionAnalytics_eventRecordHealSuccess_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorInteractionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorInteractionAnalytics, nullptr, "RecordHealSuccess", nullptr, nullptr, sizeof(SurvivorInteractionAnalytics_eventRecordHealSuccess_Parms), Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorInteractionAnalytics_NoRegister()
	{
		return USurvivorInteractionAnalytics::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorInteractionAnalytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorInteractionAnalytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorInteractionAnalytics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorInteractionAnalytics_IncrementHealCount, "IncrementHealCount" }, // 4128508261
		{ &Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHatchEscape, "RecordHatchEscape" }, // 3220242819
		{ &Z_Construct_UFunction_USurvivorInteractionAnalytics_RecordHealSuccess, "RecordHealSuccess" }, // 422013162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorInteractionAnalytics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SurvivorInteractionAnalytics.h" },
		{ "ModuleRelativePath", "Public/SurvivorInteractionAnalytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorInteractionAnalytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorInteractionAnalytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorInteractionAnalytics_Statics::ClassParams = {
		&USurvivorInteractionAnalytics::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorInteractionAnalytics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorInteractionAnalytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorInteractionAnalytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorInteractionAnalytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorInteractionAnalytics, 2801202684);
	template<> DBDANALYTICS_API UClass* StaticClass<USurvivorInteractionAnalytics>()
	{
		return USurvivorInteractionAnalytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorInteractionAnalytics(Z_Construct_UClass_USurvivorInteractionAnalytics, &USurvivorInteractionAnalytics::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("USurvivorInteractionAnalytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorInteractionAnalytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
