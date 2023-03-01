// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/OffTheRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffTheRecord() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UOffTheRecord_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UOffTheRecord();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
// End Cross Module References
	void UOffTheRecord::StaticRegisterNativesUOffTheRecord()
	{
	}
	UClass* Z_Construct_UClass_UOffTheRecord_NoRegister()
	{
		return UOffTheRecord::StaticClass();
	}
	struct Z_Construct_UClass_UOffTheRecord_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationDurationLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__activationDurationLevels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOffTheRecord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffTheRecord_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OffTheRecord.h" },
		{ "ModuleRelativePath", "Public/OffTheRecord.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffTheRecord_Statics::NewProp__activationDurationLevels_MetaData[] = {
		{ "Category", "OffTheRecord" },
		{ "ModuleRelativePath", "Public/OffTheRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOffTheRecord_Statics::NewProp__activationDurationLevels = { "_activationDurationLevels", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_activationDurationLevels, UOffTheRecord), STRUCT_OFFSET(UOffTheRecord, _activationDurationLevels), METADATA_PARAMS(Z_Construct_UClass_UOffTheRecord_Statics::NewProp__activationDurationLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffTheRecord_Statics::NewProp__activationDurationLevels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffTheRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffTheRecord_Statics::NewProp__activationDurationLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOffTheRecord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffTheRecord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOffTheRecord_Statics::ClassParams = {
		&UOffTheRecord::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOffTheRecord_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOffTheRecord_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOffTheRecord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOffTheRecord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOffTheRecord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOffTheRecord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOffTheRecord, 4274885408);
	template<> THEGUNSLINGER_API UClass* StaticClass<UOffTheRecord>()
	{
		return UOffTheRecord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOffTheRecord(Z_Construct_UClass_UOffTheRecord, &UOffTheRecord::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UOffTheRecord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOffTheRecord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
