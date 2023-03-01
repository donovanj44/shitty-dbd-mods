// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/SpiritFury.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiritFury() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritFury_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritFury();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
// End Cross Module References
	void USpiritFury::StaticRegisterNativesUSpiritFury()
	{
	}
	UClass* Z_Construct_UClass_USpiritFury_NoRegister()
	{
		return USpiritFury::StaticClass();
	}
	struct Z_Construct_UClass_USpiritFury_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__palletToBreakCountPerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__palletToBreakCountPerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiritFury_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritFury_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpiritFury.h" },
		{ "ModuleRelativePath", "Public/SpiritFury.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritFury_Statics::NewProp__palletToBreakCountPerLevel_MetaData[] = {
		{ "Category", "SpiritFury" },
		{ "ModuleRelativePath", "Public/SpiritFury.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiritFury_Statics::NewProp__palletToBreakCountPerLevel = { "_palletToBreakCountPerLevel", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_palletToBreakCountPerLevel, USpiritFury), STRUCT_OFFSET(USpiritFury, _palletToBreakCountPerLevel), METADATA_PARAMS(Z_Construct_UClass_USpiritFury_Statics::NewProp__palletToBreakCountPerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritFury_Statics::NewProp__palletToBreakCountPerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiritFury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiritFury_Statics::NewProp__palletToBreakCountPerLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiritFury_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiritFury>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiritFury_Statics::ClassParams = {
		&USpiritFury::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiritFury_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpiritFury_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpiritFury_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritFury_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiritFury()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiritFury_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiritFury, 2480027798);
	template<> THESPIRIT_API UClass* StaticClass<USpiritFury>()
	{
		return USpiritFury::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiritFury(Z_Construct_UClass_USpiritFury, &USpiritFury::StaticClass, TEXT("/Script/TheSpirit"), TEXT("USpiritFury"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiritFury);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
