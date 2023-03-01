// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DBDAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UDBDAnalytics_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UDBDAnalytics();
	BHVRANALYTICS_API UClass* Z_Construct_UClass_UBHVRAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
	DEFINE_FUNCTION(UDBDAnalytics::execRecordGameProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InProgressType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDAnalytics::RecordGameProgress(Z_Param_InProgressType);
		P_NATIVE_END;
	}
	void UDBDAnalytics::StaticRegisterNativesUDBDAnalytics()
	{
		UClass* Class = UDBDAnalytics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RecordGameProgress", &UDBDAnalytics::execRecordGameProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics
	{
		struct DBDAnalytics_eventRecordGameProgress_Parms
		{
			FString InProgressType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProgressType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InProgressType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::NewProp_InProgressType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::NewProp_InProgressType = { "InProgressType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAnalytics_eventRecordGameProgress_Parms, InProgressType), METADATA_PARAMS(Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::NewProp_InProgressType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::NewProp_InProgressType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::NewProp_InProgressType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAnalytics, nullptr, "RecordGameProgress", nullptr, nullptr, sizeof(DBDAnalytics_eventRecordGameProgress_Parms), Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDAnalytics_NoRegister()
	{
		return UDBDAnalytics::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAnalytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAnalytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBHVRAnalytics,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDAnalytics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDAnalytics_RecordGameProgress, "RecordGameProgress" }, // 1747342466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAnalytics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDAnalytics.h" },
		{ "ModuleRelativePath", "Public/DBDAnalytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAnalytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAnalytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAnalytics_Statics::ClassParams = {
		&UDBDAnalytics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDAnalytics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAnalytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAnalytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAnalytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAnalytics, 3917355622);
	template<> DBDANALYTICS_API UClass* StaticClass<UDBDAnalytics>()
	{
		return UDBDAnalytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAnalytics(Z_Construct_UClass_UDBDAnalytics, &UDBDAnalytics::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UDBDAnalytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAnalytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
