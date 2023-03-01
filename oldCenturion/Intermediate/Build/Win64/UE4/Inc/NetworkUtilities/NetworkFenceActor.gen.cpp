// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/NetworkFenceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkFenceActor() {}
// Cross Module References
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_ANetworkFenceActor_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_ANetworkFenceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(ANetworkFenceActor::execClient_AllPassedFence)
	{
		P_GET_TARRAY(FGuid,Z_Param_Fences);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Client_AllPassedFence_Validate(Z_Param_Fences))
		{
			RPC_ValidateFailed(TEXT("Client_AllPassedFence_Validate"));
			return;
		}
		P_THIS->Client_AllPassedFence_Implementation(Z_Param_Fences);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkFenceActor::execServer_ClientPassedFence)
	{
		P_GET_TARRAY(FGuid,Z_Param_Fences);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ClientPassedFence_Validate(Z_Param_Fences))
		{
			RPC_ValidateFailed(TEXT("Server_ClientPassedFence_Validate"));
			return;
		}
		P_THIS->Server_ClientPassedFence_Implementation(Z_Param_Fences);
		P_NATIVE_END;
	}
	static FName NAME_ANetworkFenceActor_Client_AllPassedFence = FName(TEXT("Client_AllPassedFence"));
	void ANetworkFenceActor::Client_AllPassedFence(TArray<FGuid> const& Fences)
	{
		NetworkFenceActor_eventClient_AllPassedFence_Parms Parms;
		Parms.Fences=Fences;
		ProcessEvent(FindFunctionChecked(NAME_ANetworkFenceActor_Client_AllPassedFence),&Parms);
	}
	static FName NAME_ANetworkFenceActor_Server_ClientPassedFence = FName(TEXT("Server_ClientPassedFence"));
	void ANetworkFenceActor::Server_ClientPassedFence(TArray<FGuid> const& Fences)
	{
		NetworkFenceActor_eventServer_ClientPassedFence_Parms Parms;
		Parms.Fences=Fences;
		ProcessEvent(FindFunctionChecked(NAME_ANetworkFenceActor_Server_ClientPassedFence),&Parms);
	}
	void ANetworkFenceActor::StaticRegisterNativesANetworkFenceActor()
	{
		UClass* Class = ANetworkFenceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_AllPassedFence", &ANetworkFenceActor::execClient_AllPassedFence },
			{ "Server_ClientPassedFence", &ANetworkFenceActor::execServer_ClientPassedFence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fences_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::NewProp_Fences_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::NewProp_Fences = { "Fences", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkFenceActor_eventClient_AllPassedFence_Parms, Fences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::NewProp_Fences_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::NewProp_Fences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::NewProp_Fences_Inner = { "Fences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::NewProp_Fences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::NewProp_Fences_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkFenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkFenceActor, nullptr, "Client_AllPassedFence", nullptr, nullptr, sizeof(NetworkFenceActor_eventClient_AllPassedFence_Parms), Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fences_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::NewProp_Fences_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::NewProp_Fences = { "Fences", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkFenceActor_eventServer_ClientPassedFence_Parms, Fences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::NewProp_Fences_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::NewProp_Fences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::NewProp_Fences_Inner = { "Fences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::NewProp_Fences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::NewProp_Fences_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkFenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkFenceActor, nullptr, "Server_ClientPassedFence", nullptr, nullptr, sizeof(NetworkFenceActor_eventServer_ClientPassedFence_Parms), Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANetworkFenceActor_NoRegister()
	{
		return ANetworkFenceActor::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkFenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkFenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetworkFenceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetworkFenceActor_Client_AllPassedFence, "Client_AllPassedFence" }, // 4255501132
		{ &Z_Construct_UFunction_ANetworkFenceActor_Server_ClientPassedFence, "Server_ClientPassedFence" }, // 3508697235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkFenceActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetworkFenceActor.h" },
		{ "ModuleRelativePath", "Public/NetworkFenceActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkFenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkFenceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetworkFenceActor_Statics::ClassParams = {
		&ANetworkFenceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetworkFenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkFenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkFenceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetworkFenceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetworkFenceActor, 2956665630);
	template<> NETWORKUTILITIES_API UClass* StaticClass<ANetworkFenceActor>()
	{
		return ANetworkFenceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetworkFenceActor(Z_Construct_UClass_ANetworkFenceActor, &ANetworkFenceActor::StaticClass, TEXT("/Script/NetworkUtilities"), TEXT("ANetworkFenceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkFenceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
