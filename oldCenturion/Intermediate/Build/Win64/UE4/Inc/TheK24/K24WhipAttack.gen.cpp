// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24WhipAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24WhipAttack() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24WhipAttack_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24WhipAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK24WhipAttack::execClient_ContaminationResult)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_GET_UBOOL(Z_Param_isValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ContaminationResult_Implementation(Z_Param_target,Z_Param_isValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24WhipAttack::execServer_ContaminatePlayer)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetLocationTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ContaminatePlayer_Implementation(Z_Param_target,Z_Param_targetLocationTimestamp);
		P_NATIVE_END;
	}
	static FName NAME_UK24WhipAttack_Client_ContaminationResult = FName(TEXT("Client_ContaminationResult"));
	void UK24WhipAttack::Client_ContaminationResult(ADBDPlayer* target, bool isValid)
	{
		K24WhipAttack_eventClient_ContaminationResult_Parms Parms;
		Parms.target=target;
		Parms.isValid=isValid ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UK24WhipAttack_Client_ContaminationResult),&Parms);
	}
	static FName NAME_UK24WhipAttack_Server_ContaminatePlayer = FName(TEXT("Server_ContaminatePlayer"));
	void UK24WhipAttack::Server_ContaminatePlayer(ACamperPlayer* target, const float targetLocationTimestamp)
	{
		K24WhipAttack_eventServer_ContaminatePlayer_Parms Parms;
		Parms.target=target;
		Parms.targetLocationTimestamp=targetLocationTimestamp;
		ProcessEvent(FindFunctionChecked(NAME_UK24WhipAttack_Server_ContaminatePlayer),&Parms);
	}
	void UK24WhipAttack::StaticRegisterNativesUK24WhipAttack()
	{
		UClass* Class = UK24WhipAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_ContaminationResult", &UK24WhipAttack::execClient_ContaminationResult },
			{ "Server_ContaminatePlayer", &UK24WhipAttack::execServer_ContaminatePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics
	{
		static void NewProp_isValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isValid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::NewProp_isValid_SetBit(void* Obj)
	{
		((K24WhipAttack_eventClient_ContaminationResult_Parms*)Obj)->isValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::NewProp_isValid = { "isValid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K24WhipAttack_eventClient_ContaminationResult_Parms), &Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::NewProp_isValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24WhipAttack_eventClient_ContaminationResult_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::NewProp_isValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24WhipAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24WhipAttack, nullptr, "Client_ContaminationResult", nullptr, nullptr, sizeof(K24WhipAttack_eventClient_ContaminationResult_Parms), Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetLocationTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_targetLocationTimestamp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::NewProp_targetLocationTimestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::NewProp_targetLocationTimestamp = { "targetLocationTimestamp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24WhipAttack_eventServer_ContaminatePlayer_Parms, targetLocationTimestamp), METADATA_PARAMS(Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::NewProp_targetLocationTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::NewProp_targetLocationTimestamp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24WhipAttack_eventServer_ContaminatePlayer_Parms, target), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::NewProp_targetLocationTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24WhipAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24WhipAttack, nullptr, "Server_ContaminatePlayer", nullptr, nullptr, sizeof(K24WhipAttack_eventServer_ContaminatePlayer_Parms), Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK24WhipAttack_NoRegister()
	{
		return UK24WhipAttack::StaticClass();
	}
	struct Z_Construct_UClass_UK24WhipAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24WhipAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK24WhipAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK24WhipAttack_Client_ContaminationResult, "Client_ContaminationResult" }, // 2822321742
		{ &Z_Construct_UFunction_UK24WhipAttack_Server_ContaminatePlayer, "Server_ContaminatePlayer" }, // 3421237551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24WhipAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K24WhipAttack.h" },
		{ "ModuleRelativePath", "Public/K24WhipAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24WhipAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24WhipAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24WhipAttack_Statics::ClassParams = {
		&UK24WhipAttack::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK24WhipAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24WhipAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24WhipAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24WhipAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24WhipAttack, 869461853);
	template<> THEK24_API UClass* StaticClass<UK24WhipAttack>()
	{
		return UK24WhipAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24WhipAttack(Z_Construct_UClass_UK24WhipAttack, &UK24WhipAttack::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24WhipAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24WhipAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
