// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TotemOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTotemOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTotemOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTotemOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTotemOutlineUpdateStrategy::execGetRevealColorToSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetRevealColorToSurvivor();
		P_NATIVE_END;
	}
	void UTotemOutlineUpdateStrategy::StaticRegisterNativesUTotemOutlineUpdateStrategy()
	{
		UClass* Class = UTotemOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRevealColorToSurvivor", &UTotemOutlineUpdateStrategy::execGetRevealColorToSurvivor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics
	{
		struct TotemOutlineUpdateStrategy_eventGetRevealColorToSurvivor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TotemOutlineUpdateStrategy_eventGetRevealColorToSurvivor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TotemOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTotemOutlineUpdateStrategy, nullptr, "GetRevealColorToSurvivor", nullptr, nullptr, sizeof(TotemOutlineUpdateStrategy_eventGetRevealColorToSurvivor_Parms), Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTotemOutlineUpdateStrategy_NoRegister()
	{
		return UTotemOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedColorToKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealedColorToKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boonTotemRevealedColorToSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__boonTotemRevealedColorToSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedColorToSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__revealedColorToSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTotemOutlineUpdateStrategy_GetRevealColorToSurvivor, "GetRevealColorToSurvivor" }, // 1644287151
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TotemOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/TotemOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller_MetaData[] = {
		{ "Category", "TotemOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/TotemOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller = { "_revealedColorToKiller", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTotemOutlineUpdateStrategy, _revealedColorToKiller), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__boonTotemRevealedColorToSurvivor_MetaData[] = {
		{ "Category", "TotemOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/TotemOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__boonTotemRevealedColorToSurvivor = { "_boonTotemRevealedColorToSurvivor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTotemOutlineUpdateStrategy, _boonTotemRevealedColorToSurvivor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__boonTotemRevealedColorToSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__boonTotemRevealedColorToSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor_MetaData[] = {
		{ "Category", "TotemOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/TotemOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor = { "_revealedColorToSurvivor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTotemOutlineUpdateStrategy, _revealedColorToSurvivor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__boonTotemRevealedColorToSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTotemOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::ClassParams = {
		&UTotemOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTotemOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTotemOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTotemOutlineUpdateStrategy, 443875954);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTotemOutlineUpdateStrategy>()
	{
		return UTotemOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTotemOutlineUpdateStrategy(Z_Construct_UClass_UTotemOutlineUpdateStrategy, &UTotemOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTotemOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTotemOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
