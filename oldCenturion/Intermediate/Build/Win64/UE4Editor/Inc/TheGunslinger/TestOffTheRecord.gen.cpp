// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/TestOffTheRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestOffTheRecord() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UTestOffTheRecord_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UTestOffTheRecord();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UOffTheRecord();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
// End Cross Module References
	void UTestOffTheRecord::StaticRegisterNativesUTestOffTheRecord()
	{
	}
	UClass* Z_Construct_UClass_UTestOffTheRecord_NoRegister()
	{
		return UTestOffTheRecord::StaticClass();
	}
	struct Z_Construct_UClass_UTestOffTheRecord_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestOffTheRecord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOffTheRecord,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestOffTheRecord_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestOffTheRecord.h" },
		{ "ModuleRelativePath", "Public/TestOffTheRecord.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestOffTheRecord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestOffTheRecord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestOffTheRecord_Statics::ClassParams = {
		&UTestOffTheRecord::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestOffTheRecord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestOffTheRecord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestOffTheRecord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestOffTheRecord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestOffTheRecord, 1656871578);
	template<> THEGUNSLINGER_API UClass* StaticClass<UTestOffTheRecord>()
	{
		return UTestOffTheRecord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestOffTheRecord(Z_Construct_UClass_UTestOffTheRecord, &UTestOffTheRecord::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UTestOffTheRecord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestOffTheRecord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
