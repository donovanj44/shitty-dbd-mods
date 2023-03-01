// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StartupInitializer/Public/ClientStartupInitializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientStartupInitializer() {}
// Cross Module References
	STARTUPINITIALIZER_API UClass* Z_Construct_UClass_UClientStartupInitializer_NoRegister();
	STARTUPINITIALIZER_API UClass* Z_Construct_UClass_UClientStartupInitializer();
	STARTUPINITIALIZER_API UClass* Z_Construct_UClass_UStartupInitializer();
	UPackage* Z_Construct_UPackage__Script_StartupInitializer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UClientStartupInitializerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UClientStartupInitializer::execOnHealthCheckTriggered)
	{
		P_GET_UBOOL(Z_Param_requestSuccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_providerError);
		P_GET_UBOOL(Z_Param_datetimeIsSet);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_utcTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthCheckTriggered(Z_Param_requestSuccess,Z_Param_providerError,Z_Param_datetimeIsSet,Z_Param_Out_utcTime);
		P_NATIVE_END;
	}
	void UClientStartupInitializer::StaticRegisterNativesUClientStartupInitializer()
	{
		UClass* Class = UClientStartupInitializer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthCheckTriggered", &UClientStartupInitializer::execOnHealthCheckTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics
	{
		struct ClientStartupInitializer_eventOnHealthCheckTriggered_Parms
		{
			bool requestSuccess;
			int32 providerError;
			bool datetimeIsSet;
			FDateTime utcTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_utcTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_utcTime;
		static void NewProp_datetimeIsSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_datetimeIsSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_providerError;
		static void NewProp_requestSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_requestSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_utcTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_utcTime = { "utcTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClientStartupInitializer_eventOnHealthCheckTriggered_Parms, utcTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_utcTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_utcTime_MetaData)) };
	void Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_datetimeIsSet_SetBit(void* Obj)
	{
		((ClientStartupInitializer_eventOnHealthCheckTriggered_Parms*)Obj)->datetimeIsSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_datetimeIsSet = { "datetimeIsSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ClientStartupInitializer_eventOnHealthCheckTriggered_Parms), &Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_datetimeIsSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_providerError = { "providerError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClientStartupInitializer_eventOnHealthCheckTriggered_Parms, providerError), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_requestSuccess_SetBit(void* Obj)
	{
		((ClientStartupInitializer_eventOnHealthCheckTriggered_Parms*)Obj)->requestSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_requestSuccess = { "requestSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ClientStartupInitializer_eventOnHealthCheckTriggered_Parms), &Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_requestSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_utcTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_datetimeIsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_providerError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::NewProp_requestSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClientStartupInitializer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientStartupInitializer, nullptr, "OnHealthCheckTriggered", nullptr, nullptr, sizeof(ClientStartupInitializer_eventOnHealthCheckTriggered_Parms), Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClientStartupInitializer_NoRegister()
	{
		return UClientStartupInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UClientStartupInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientStartupInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStartupInitializer,
		(UObject* (*)())Z_Construct_UPackage__Script_StartupInitializer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClientStartupInitializer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClientStartupInitializer_OnHealthCheckTriggered, "OnHealthCheckTriggered" }, // 2576984048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientStartupInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClientStartupInitializer.h" },
		{ "ModuleRelativePath", "Public/ClientStartupInitializer.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UClientStartupInitializer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UClientStartupInitializerInterface_NoRegister, (int32)VTABLE_OFFSET(UClientStartupInitializer, IClientStartupInitializerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientStartupInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClientStartupInitializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClientStartupInitializer_Statics::ClassParams = {
		&UClientStartupInitializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClientStartupInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientStartupInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientStartupInitializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClientStartupInitializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClientStartupInitializer, 420922993);
	template<> STARTUPINITIALIZER_API UClass* StaticClass<UClientStartupInitializer>()
	{
		return UClientStartupInitializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClientStartupInitializer(Z_Construct_UClass_UClientStartupInitializer, &UClientStartupInitializer::StaticClass, TEXT("/Script/StartupInitializer"), TEXT("UClientStartupInitializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientStartupInitializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
