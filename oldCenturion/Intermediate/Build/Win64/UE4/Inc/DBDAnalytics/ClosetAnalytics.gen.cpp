// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ClosetAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClosetAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UClosetAnalytics_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UClosetAnalytics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UClosetAnalytics::execIncrementClosetEnter)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UClosetAnalytics::IncrementClosetEnter(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClosetAnalytics::execRecordClosetSearchFail)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UClosetAnalytics::RecordClosetSearchFail(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClosetAnalytics::execRecordClosetSearchSuccess)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UClosetAnalytics::RecordClosetSearchSuccess(Z_Param_killer);
		P_NATIVE_END;
	}
	void UClosetAnalytics::StaticRegisterNativesUClosetAnalytics()
	{
		UClass* Class = UClosetAnalytics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementClosetEnter", &UClosetAnalytics::execIncrementClosetEnter },
			{ "RecordClosetSearchFail", &UClosetAnalytics::execRecordClosetSearchFail },
			{ "RecordClosetSearchSuccess", &UClosetAnalytics::execRecordClosetSearchSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics
	{
		struct ClosetAnalytics_eventIncrementClosetEnter_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClosetAnalytics_eventIncrementClosetEnter_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClosetAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClosetAnalytics, nullptr, "IncrementClosetEnter", nullptr, nullptr, sizeof(ClosetAnalytics_eventIncrementClosetEnter_Parms), Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics
	{
		struct ClosetAnalytics_eventRecordClosetSearchFail_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClosetAnalytics_eventRecordClosetSearchFail_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClosetAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClosetAnalytics, nullptr, "RecordClosetSearchFail", nullptr, nullptr, sizeof(ClosetAnalytics_eventRecordClosetSearchFail_Parms), Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics
	{
		struct ClosetAnalytics_eventRecordClosetSearchSuccess_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClosetAnalytics_eventRecordClosetSearchSuccess_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClosetAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClosetAnalytics, nullptr, "RecordClosetSearchSuccess", nullptr, nullptr, sizeof(ClosetAnalytics_eventRecordClosetSearchSuccess_Parms), Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClosetAnalytics_NoRegister()
	{
		return UClosetAnalytics::StaticClass();
	}
	struct Z_Construct_UClass_UClosetAnalytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClosetAnalytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClosetAnalytics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClosetAnalytics_IncrementClosetEnter, "IncrementClosetEnter" }, // 2329883785
		{ &Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchFail, "RecordClosetSearchFail" }, // 1046214591
		{ &Z_Construct_UFunction_UClosetAnalytics_RecordClosetSearchSuccess, "RecordClosetSearchSuccess" }, // 4285176374
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClosetAnalytics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClosetAnalytics.h" },
		{ "ModuleRelativePath", "Public/ClosetAnalytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClosetAnalytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClosetAnalytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClosetAnalytics_Statics::ClassParams = {
		&UClosetAnalytics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClosetAnalytics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClosetAnalytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClosetAnalytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClosetAnalytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClosetAnalytics, 61668368);
	template<> DBDANALYTICS_API UClass* StaticClass<UClosetAnalytics>()
	{
		return UClosetAnalytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClosetAnalytics(Z_Construct_UClass_UClosetAnalytics, &UClosetAnalytics::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UClosetAnalytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClosetAnalytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
