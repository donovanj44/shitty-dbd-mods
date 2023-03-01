// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BaseTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTrap() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseTrap_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseTrap();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(ABaseTrap::execIsTrapSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTrapSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseTrap::execSetIsTrapSet)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsTrapSet(Z_Param_value);
		P_NATIVE_END;
	}
	void ABaseTrap::StaticRegisterNativesABaseTrap()
	{
		UClass* Class = ABaseTrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTrapSet", &ABaseTrap::execIsTrapSet },
			{ "SetIsTrapSet", &ABaseTrap::execSetIsTrapSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics
	{
		struct BaseTrap_eventIsTrapSet_Parms
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
	void Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseTrap_eventIsTrapSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTrap_eventIsTrapSet_Parms), &Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTrap, nullptr, "IsTrapSet", nullptr, nullptr, sizeof(BaseTrap_eventIsTrapSet_Parms), Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseTrap_IsTrapSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseTrap_IsTrapSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics
	{
		struct BaseTrap_eventSetIsTrapSet_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::NewProp_value_SetBit(void* Obj)
	{
		((BaseTrap_eventSetIsTrapSet_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTrap_eventSetIsTrapSet_Parms), &Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTrap, nullptr, "SetIsTrapSet", nullptr, nullptr, sizeof(BaseTrap_eventSetIsTrapSet_Parms), Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseTrap_SetIsTrapSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseTrap_SetIsTrapSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseTrap_NoRegister()
	{
		return ABaseTrap::StaticClass();
	}
	struct Z_Construct_UClass_ABaseTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTrapSet_MetaData[];
#endif
		static void NewProp__isTrapSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTrapSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseTrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseTrap_IsTrapSet, "IsTrapSet" }, // 2923360934
		{ &Z_Construct_UFunction_ABaseTrap_SetIsTrapSet, "SetIsTrapSet" }, // 2478677966
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTrap.h" },
		{ "ModuleRelativePath", "Public/BaseTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTrap_Statics::NewProp__isTrapSet_MetaData[] = {
		{ "Category", "BaseTrap" },
		{ "ModuleRelativePath", "Public/BaseTrap.h" },
	};
#endif
	void Z_Construct_UClass_ABaseTrap_Statics::NewProp__isTrapSet_SetBit(void* Obj)
	{
		((ABaseTrap*)Obj)->_isTrapSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseTrap_Statics::NewProp__isTrapSet = { "_isTrapSet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseTrap), &Z_Construct_UClass_ABaseTrap_Statics::NewProp__isTrapSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseTrap_Statics::NewProp__isTrapSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTrap_Statics::NewProp__isTrapSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTrap_Statics::NewProp__isTrapSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseTrap_Statics::ClassParams = {
		&ABaseTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTrap_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseTrap, 4096368887);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ABaseTrap>()
	{
		return ABaseTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseTrap(Z_Construct_UClass_ABaseTrap, &ABaseTrap::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ABaseTrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
