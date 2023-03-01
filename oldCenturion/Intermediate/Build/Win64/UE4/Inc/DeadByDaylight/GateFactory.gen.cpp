// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GateFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGateFactory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGateFactory_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGateFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGate_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGateType();
// End Cross Module References
	DEFINE_FUNCTION(AGateFactory::execGetGate)
	{
		P_GET_ENUM(EGateType,Z_Param_gateType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGate**)Z_Param__Result=P_THIS->GetGate(EGateType(Z_Param_gateType));
		P_NATIVE_END;
	}
	void AGateFactory::StaticRegisterNativesAGateFactory()
	{
		UClass* Class = AGateFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGate", &AGateFactory::execGetGate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGateFactory_GetGate_Statics
	{
		struct GateFactory_eventGetGate_Parms
		{
			EGateType gateType;
			AGate* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gateType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gateType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGateFactory_GetGate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GateFactory_eventGetGate_Parms, ReturnValue), Z_Construct_UClass_AGate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGateFactory_GetGate_Statics::NewProp_gateType = { "gateType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GateFactory_eventGetGate_Parms, gateType), Z_Construct_UEnum_DeadByDaylight_EGateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGateFactory_GetGate_Statics::NewProp_gateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGateFactory_GetGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGateFactory_GetGate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGateFactory_GetGate_Statics::NewProp_gateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGateFactory_GetGate_Statics::NewProp_gateType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGateFactory_GetGate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GateFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGateFactory_GetGate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGateFactory, nullptr, "GetGate", nullptr, nullptr, sizeof(GateFactory_eventGetGate_Parms), Z_Construct_UFunction_AGateFactory_GetGate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGateFactory_GetGate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGateFactory_GetGate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGateFactory_GetGate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGateFactory_GetGate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGateFactory_GetGate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGateFactory_NoRegister()
	{
		return AGateFactory::StaticClass();
	}
	struct Z_Construct_UClass_AGateFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGateFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGateFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGateFactory_GetGate, "GetGate" }, // 1039288827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGateFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GateFactory.h" },
		{ "ModuleRelativePath", "Public/GateFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGateFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGateFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGateFactory_Statics::ClassParams = {
		&AGateFactory::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGateFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGateFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGateFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGateFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGateFactory, 1385393186);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AGateFactory>()
	{
		return AGateFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGateFactory(Z_Construct_UClass_AGateFactory, &AGateFactory::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AGateFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGateFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
