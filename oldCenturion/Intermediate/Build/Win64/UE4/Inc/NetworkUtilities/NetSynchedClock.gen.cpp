// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/NetSynchedClock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetSynchedClock() {}
// Cross Module References
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UNetSynchedClock_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UNetSynchedClock();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UNetSynchedClock::execClient_ReportServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_serverTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ReportServerTime_Implementation(Z_Param_serverTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetSynchedClock::execServer_RequestServerTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RequestServerTime_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_RequestServerTime_Validate"));
			return;
		}
		P_THIS->Server_RequestServerTime_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UNetSynchedClock_Client_ReportServerTime = FName(TEXT("Client_ReportServerTime"));
	void UNetSynchedClock::Client_ReportServerTime(float serverTime)
	{
		NetSynchedClock_eventClient_ReportServerTime_Parms Parms;
		Parms.serverTime=serverTime;
		ProcessEvent(FindFunctionChecked(NAME_UNetSynchedClock_Client_ReportServerTime),&Parms);
	}
	static FName NAME_UNetSynchedClock_Server_RequestServerTime = FName(TEXT("Server_RequestServerTime"));
	void UNetSynchedClock::Server_RequestServerTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNetSynchedClock_Server_RequestServerTime),NULL);
	}
	void UNetSynchedClock::StaticRegisterNativesUNetSynchedClock()
	{
		UClass* Class = UNetSynchedClock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_ReportServerTime", &UNetSynchedClock::execClient_ReportServerTime },
			{ "Server_RequestServerTime", &UNetSynchedClock::execServer_RequestServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_serverTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::NewProp_serverTime = { "serverTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetSynchedClock_eventClient_ReportServerTime_Parms, serverTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::NewProp_serverTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetSynchedClock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetSynchedClock, nullptr, "Client_ReportServerTime", nullptr, nullptr, sizeof(NetSynchedClock_eventClient_ReportServerTime_Parms), Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetSynchedClock_Server_RequestServerTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetSynchedClock_Server_RequestServerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetSynchedClock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetSynchedClock_Server_RequestServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetSynchedClock, nullptr, "Server_RequestServerTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetSynchedClock_Server_RequestServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetSynchedClock_Server_RequestServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetSynchedClock_Server_RequestServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetSynchedClock_Server_RequestServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNetSynchedClock_NoRegister()
	{
		return UNetSynchedClock::StaticClass();
	}
	struct Z_Construct_UClass_UNetSynchedClock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__serverTimeUpdateDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__serverTimeUpdateDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetSynchedClock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetSynchedClock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetSynchedClock_Client_ReportServerTime, "Client_ReportServerTime" }, // 3393095120
		{ &Z_Construct_UFunction_UNetSynchedClock_Server_RequestServerTime, "Server_RequestServerTime" }, // 2735450165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetSynchedClock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetSynchedClock.h" },
		{ "ModuleRelativePath", "Public/NetSynchedClock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetSynchedClock_Statics::NewProp__serverTimeUpdateDelay_MetaData[] = {
		{ "Category", "NetSynchedClock" },
		{ "ModuleRelativePath", "Public/NetSynchedClock.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetSynchedClock_Statics::NewProp__serverTimeUpdateDelay = { "_serverTimeUpdateDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetSynchedClock, _serverTimeUpdateDelay), METADATA_PARAMS(Z_Construct_UClass_UNetSynchedClock_Statics::NewProp__serverTimeUpdateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetSynchedClock_Statics::NewProp__serverTimeUpdateDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetSynchedClock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetSynchedClock_Statics::NewProp__serverTimeUpdateDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetSynchedClock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetSynchedClock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetSynchedClock_Statics::ClassParams = {
		&UNetSynchedClock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNetSynchedClock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetSynchedClock_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNetSynchedClock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetSynchedClock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetSynchedClock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetSynchedClock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetSynchedClock, 4227211705);
	template<> NETWORKUTILITIES_API UClass* StaticClass<UNetSynchedClock>()
	{
		return UNetSynchedClock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetSynchedClock(Z_Construct_UClass_UNetSynchedClock, &UNetSynchedClock::StaticClass, TEXT("/Script/NetworkUtilities"), TEXT("UNetSynchedClock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetSynchedClock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
