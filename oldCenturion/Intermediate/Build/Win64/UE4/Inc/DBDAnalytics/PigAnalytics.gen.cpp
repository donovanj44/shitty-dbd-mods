// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PigAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePigAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UPigAnalytics_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UPigAnalytics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPigAnalytics::execIncrementRBTKilledCount)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_playerKilled);
		P_GET_UBOOL(Z_Param_killedByExecutionZone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPigAnalytics::IncrementRBTKilledCount(Z_Param_playerKilled,Z_Param_killedByExecutionZone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPigAnalytics::execIncrementRBTTimerActived)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_attachedPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPigAnalytics::IncrementRBTTimerActived(Z_Param_attachedPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPigAnalytics::execOnRBTAttached_Analytics)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_attacher);
		P_GET_OBJECT(ACamperPlayer,Z_Param_attachee);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPigAnalytics::OnRBTAttached_Analytics(Z_Param_attacher,Z_Param_attachee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPigAnalytics::execRecordRBTSearch)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_searchingPlayer);
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPigAnalytics::RecordRBTSearch(Z_Param_searchingPlayer,Z_Param_success);
		P_NATIVE_END;
	}
	void UPigAnalytics::StaticRegisterNativesUPigAnalytics()
	{
		UClass* Class = UPigAnalytics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementRBTKilledCount", &UPigAnalytics::execIncrementRBTKilledCount },
			{ "IncrementRBTTimerActived", &UPigAnalytics::execIncrementRBTTimerActived },
			{ "OnRBTAttached_Analytics", &UPigAnalytics::execOnRBTAttached_Analytics },
			{ "RecordRBTSearch", &UPigAnalytics::execRecordRBTSearch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics
	{
		struct PigAnalytics_eventIncrementRBTKilledCount_Parms
		{
			ACamperPlayer* playerKilled;
			bool killedByExecutionZone;
		};
		static void NewProp_killedByExecutionZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_killedByExecutionZone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerKilled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::NewProp_killedByExecutionZone_SetBit(void* Obj)
	{
		((PigAnalytics_eventIncrementRBTKilledCount_Parms*)Obj)->killedByExecutionZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::NewProp_killedByExecutionZone = { "killedByExecutionZone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PigAnalytics_eventIncrementRBTKilledCount_Parms), &Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::NewProp_killedByExecutionZone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::NewProp_playerKilled = { "playerKilled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PigAnalytics_eventIncrementRBTKilledCount_Parms, playerKilled), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::NewProp_killedByExecutionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::NewProp_playerKilled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PigAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPigAnalytics, nullptr, "IncrementRBTKilledCount", nullptr, nullptr, sizeof(PigAnalytics_eventIncrementRBTKilledCount_Parms), Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics
	{
		struct PigAnalytics_eventIncrementRBTTimerActived_Parms
		{
			ACamperPlayer* attachedPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attachedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::NewProp_attachedPlayer = { "attachedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PigAnalytics_eventIncrementRBTTimerActived_Parms, attachedPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::NewProp_attachedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PigAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPigAnalytics, nullptr, "IncrementRBTTimerActived", nullptr, nullptr, sizeof(PigAnalytics_eventIncrementRBTTimerActived_Parms), Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics
	{
		struct PigAnalytics_eventOnRBTAttached_Analytics_Parms
		{
			ASlasherPlayer* attacher;
			ACamperPlayer* attachee;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attachee;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attacher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::NewProp_attachee = { "attachee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PigAnalytics_eventOnRBTAttached_Analytics_Parms, attachee), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::NewProp_attacher = { "attacher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PigAnalytics_eventOnRBTAttached_Analytics_Parms, attacher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::NewProp_attachee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::NewProp_attacher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PigAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPigAnalytics, nullptr, "OnRBTAttached_Analytics", nullptr, nullptr, sizeof(PigAnalytics_eventOnRBTAttached_Analytics_Parms), Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics
	{
		struct PigAnalytics_eventRecordRBTSearch_Parms
		{
			ACamperPlayer* searchingPlayer;
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_searchingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::NewProp_success_SetBit(void* Obj)
	{
		((PigAnalytics_eventRecordRBTSearch_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PigAnalytics_eventRecordRBTSearch_Parms), &Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::NewProp_searchingPlayer = { "searchingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PigAnalytics_eventRecordRBTSearch_Parms, searchingPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::NewProp_searchingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PigAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPigAnalytics, nullptr, "RecordRBTSearch", nullptr, nullptr, sizeof(PigAnalytics_eventRecordRBTSearch_Parms), Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPigAnalytics_NoRegister()
	{
		return UPigAnalytics::StaticClass();
	}
	struct Z_Construct_UClass_UPigAnalytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPigAnalytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPigAnalytics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPigAnalytics_IncrementRBTKilledCount, "IncrementRBTKilledCount" }, // 1161192036
		{ &Z_Construct_UFunction_UPigAnalytics_IncrementRBTTimerActived, "IncrementRBTTimerActived" }, // 2019252514
		{ &Z_Construct_UFunction_UPigAnalytics_OnRBTAttached_Analytics, "OnRBTAttached_Analytics" }, // 2612693265
		{ &Z_Construct_UFunction_UPigAnalytics_RecordRBTSearch, "RecordRBTSearch" }, // 1699486853
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigAnalytics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PigAnalytics.h" },
		{ "ModuleRelativePath", "Public/PigAnalytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPigAnalytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPigAnalytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPigAnalytics_Statics::ClassParams = {
		&UPigAnalytics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPigAnalytics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPigAnalytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPigAnalytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPigAnalytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPigAnalytics, 3602309959);
	template<> DBDANALYTICS_API UClass* StaticClass<UPigAnalytics>()
	{
		return UPigAnalytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPigAnalytics(Z_Construct_UClass_UPigAnalytics, &UPigAnalytics::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UPigAnalytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPigAnalytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
