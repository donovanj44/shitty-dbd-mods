// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDNetworkUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDNetworkUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNetworkUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNetworkUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDNetworkUtilities::execIsOnDedicatedServerNetwork)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDNetworkUtilities::IsOnDedicatedServerNetwork(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDNetworkUtilities::execIsRunningDedicatedServerFlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDNetworkUtilities::IsRunningDedicatedServerFlow();
		P_NATIVE_END;
	}
	void UDBDNetworkUtilities::StaticRegisterNativesUDBDNetworkUtilities()
	{
		UClass* Class = UDBDNetworkUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsOnDedicatedServerNetwork", &UDBDNetworkUtilities::execIsOnDedicatedServerNetwork },
			{ "IsRunningDedicatedServerFlow", &UDBDNetworkUtilities::execIsRunningDedicatedServerFlow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics
	{
		struct DBDNetworkUtilities_eventIsOnDedicatedServerNetwork_Parms
		{
			const UObject* worldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDNetworkUtilities_eventIsOnDedicatedServerNetwork_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDNetworkUtilities_eventIsOnDedicatedServerNetwork_Parms), &Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDNetworkUtilities_eventIsOnDedicatedServerNetwork_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDNetworkUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDNetworkUtilities, nullptr, "IsOnDedicatedServerNetwork", nullptr, nullptr, sizeof(DBDNetworkUtilities_eventIsOnDedicatedServerNetwork_Parms), Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics
	{
		struct DBDNetworkUtilities_eventIsRunningDedicatedServerFlow_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDNetworkUtilities_eventIsRunningDedicatedServerFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDNetworkUtilities_eventIsRunningDedicatedServerFlow_Parms), &Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDNetworkUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDNetworkUtilities, nullptr, "IsRunningDedicatedServerFlow", nullptr, nullptr, sizeof(DBDNetworkUtilities_eventIsRunningDedicatedServerFlow_Parms), Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDNetworkUtilities_NoRegister()
	{
		return UDBDNetworkUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDNetworkUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDNetworkUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDNetworkUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDNetworkUtilities_IsOnDedicatedServerNetwork, "IsOnDedicatedServerNetwork" }, // 1611581355
		{ &Z_Construct_UFunction_UDBDNetworkUtilities_IsRunningDedicatedServerFlow, "IsRunningDedicatedServerFlow" }, // 214756418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNetworkUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDNetworkUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDNetworkUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDNetworkUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDNetworkUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDNetworkUtilities_Statics::ClassParams = {
		&UDBDNetworkUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDNetworkUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNetworkUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDNetworkUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDNetworkUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDNetworkUtilities, 3035901114);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDNetworkUtilities>()
	{
		return UDBDNetworkUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDNetworkUtilities(Z_Construct_UClass_UDBDNetworkUtilities, &UDBDNetworkUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDNetworkUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDNetworkUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
