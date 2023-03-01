// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BuiltToLast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuiltToLast() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBuiltToLast_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBuiltToLast();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	static FName NAME_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic = FName(TEXT("OnBuiltToLastTrigger_Cosmetic"));
	void UBuiltToLast::OnBuiltToLastTrigger_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic),NULL);
	}
	void UBuiltToLast::StaticRegisterNativesUBuiltToLast()
	{
	}
	struct Z_Construct_UFunction_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuiltToLast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuiltToLast, nullptr, "OnBuiltToLastTrigger_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBuiltToLast_NoRegister()
	{
		return UBuiltToLast::StaticClass();
	}
	struct Z_Construct_UClass_UBuiltToLast_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfTimesPerkTriggered_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__numberOfTimesPerkTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hideDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hideDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__refillPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__refillPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuiltToLast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBuiltToLast_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuiltToLast_OnBuiltToLastTrigger_Cosmetic, "OnBuiltToLastTrigger_Cosmetic" }, // 876404602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuiltToLast_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuiltToLast.h" },
		{ "ModuleRelativePath", "Public/BuiltToLast.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuiltToLast_Statics::NewProp__numberOfTimesPerkTriggered_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltToLast.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBuiltToLast_Statics::NewProp__numberOfTimesPerkTriggered = { "_numberOfTimesPerkTriggered", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBuiltToLast, _numberOfTimesPerkTriggered), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBuiltToLast_Statics::NewProp__numberOfTimesPerkTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltToLast_Statics::NewProp__numberOfTimesPerkTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuiltToLast_Statics::NewProp__hideDuration_MetaData[] = {
		{ "Category", "BuiltToLast" },
		{ "ModuleRelativePath", "Public/BuiltToLast.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuiltToLast_Statics::NewProp__hideDuration = { "_hideDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_hideDuration, UBuiltToLast), STRUCT_OFFSET(UBuiltToLast, _hideDuration), METADATA_PARAMS(Z_Construct_UClass_UBuiltToLast_Statics::NewProp__hideDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltToLast_Statics::NewProp__hideDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuiltToLast_Statics::NewProp__refillPercentage_MetaData[] = {
		{ "Category", "BuiltToLast" },
		{ "ModuleRelativePath", "Public/BuiltToLast.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuiltToLast_Statics::NewProp__refillPercentage = { "_refillPercentage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_refillPercentage, UBuiltToLast), STRUCT_OFFSET(UBuiltToLast, _refillPercentage), METADATA_PARAMS(Z_Construct_UClass_UBuiltToLast_Statics::NewProp__refillPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltToLast_Statics::NewProp__refillPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuiltToLast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuiltToLast_Statics::NewProp__numberOfTimesPerkTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuiltToLast_Statics::NewProp__hideDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuiltToLast_Statics::NewProp__refillPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuiltToLast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuiltToLast>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuiltToLast_Statics::ClassParams = {
		&UBuiltToLast::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBuiltToLast_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltToLast_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBuiltToLast_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltToLast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuiltToLast()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuiltToLast_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuiltToLast, 844228151);
	template<> THEBLIGHT_API UClass* StaticClass<UBuiltToLast>()
	{
		return UBuiltToLast::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuiltToLast(Z_Construct_UClass_UBuiltToLast, &UBuiltToLast::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBuiltToLast"), false, nullptr, nullptr, nullptr);

	void UBuiltToLast::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__numberOfTimesPerkTriggered(TEXT("_numberOfTimesPerkTriggered"));

		const bool bIsValid = true
			&& Name__numberOfTimesPerkTriggered == ClassReps[(int32)ENetFields_Private::_numberOfTimesPerkTriggered].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBuiltToLast"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuiltToLast);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
