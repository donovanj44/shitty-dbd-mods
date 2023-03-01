// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/SisterBlindFlashlightableLightingStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSisterBlindFlashlightableLightingStrategy() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UBlindFlashlightableLightingStrategy();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USisterBlindFlashlightableLightingStrategy::execOnTwinSet)
	{
		P_GET_OBJECT(AConjoinedTwin,Z_Param_twin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTwinSet(Z_Param_twin);
		P_NATIVE_END;
	}
	void USisterBlindFlashlightableLightingStrategy::StaticRegisterNativesUSisterBlindFlashlightableLightingStrategy()
	{
		UClass* Class = USisterBlindFlashlightableLightingStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTwinSet", &USisterBlindFlashlightableLightingStrategy::execOnTwinSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics
	{
		struct SisterBlindFlashlightableLightingStrategy_eventOnTwinSet_Parms
		{
			AConjoinedTwin* twin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SisterBlindFlashlightableLightingStrategy_eventOnTwinSet_Parms, twin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::NewProp_twin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SisterBlindFlashlightableLightingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy, nullptr, "OnTwinSet", nullptr, nullptr, sizeof(SisterBlindFlashlightableLightingStrategy_eventOnTwinSet_Parms), Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_NoRegister()
	{
		return USisterBlindFlashlightableLightingStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlindFlashlightableLightingStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USisterBlindFlashlightableLightingStrategy_OnTwinSet, "OnTwinSet" }, // 1275120338
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SisterBlindFlashlightableLightingStrategy.h" },
		{ "ModuleRelativePath", "Public/SisterBlindFlashlightableLightingStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USisterBlindFlashlightableLightingStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics::ClassParams = {
		&USisterBlindFlashlightableLightingStrategy::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USisterBlindFlashlightableLightingStrategy, 3066715168);
	template<> THETWINS_API UClass* StaticClass<USisterBlindFlashlightableLightingStrategy>()
	{
		return USisterBlindFlashlightableLightingStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USisterBlindFlashlightableLightingStrategy(Z_Construct_UClass_USisterBlindFlashlightableLightingStrategy, &USisterBlindFlashlightableLightingStrategy::StaticClass, TEXT("/Script/TheTwins"), TEXT("USisterBlindFlashlightableLightingStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USisterBlindFlashlightableLightingStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
