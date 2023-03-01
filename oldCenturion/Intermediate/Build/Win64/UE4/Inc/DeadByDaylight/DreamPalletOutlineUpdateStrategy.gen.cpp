// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DreamPalletOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamPalletOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPalletOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UDreamPalletOutlineUpdateStrategy::execInitializeTunableValues)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTunableValues(Z_Param_killer);
		P_NATIVE_END;
	}
	void UDreamPalletOutlineUpdateStrategy::StaticRegisterNativesUDreamPalletOutlineUpdateStrategy()
	{
		UClass* Class = UDreamPalletOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeTunableValues", &UDreamPalletOutlineUpdateStrategy::execInitializeTunableValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics
	{
		struct DreamPalletOutlineUpdateStrategy_eventInitializeTunableValues_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DreamPalletOutlineUpdateStrategy_eventInitializeTunableValues_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DreamPalletOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy, nullptr, "InitializeTunableValues", nullptr, nullptr, sizeof(DreamPalletOutlineUpdateStrategy_eventInitializeTunableValues_Parms), Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_NoRegister()
	{
		return UDreamPalletOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedByMapColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__revealedByMapColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPalletOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamPalletOutlineUpdateStrategy_InitializeTunableValues, "InitializeTunableValues" }, // 4213490663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DreamPalletOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/DreamPalletOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::NewProp__revealedByMapColor_MetaData[] = {
		{ "Category", "DreamPalletOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/DreamPalletOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::NewProp__revealedByMapColor = { "_revealedByMapColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDreamPalletOutlineUpdateStrategy, _revealedByMapColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::NewProp__revealedByMapColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::NewProp__revealedByMapColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::NewProp__revealedByMapColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamPalletOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::ClassParams = {
		&UDreamPalletOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDreamPalletOutlineUpdateStrategy, 992994479);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDreamPalletOutlineUpdateStrategy>()
	{
		return UDreamPalletOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDreamPalletOutlineUpdateStrategy(Z_Construct_UClass_UDreamPalletOutlineUpdateStrategy, &UDreamPalletOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDreamPalletOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamPalletOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
