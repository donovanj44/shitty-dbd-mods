// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/HasFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHasFlag() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHasFlag_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHasFlag();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UHasFlag::StaticRegisterNativesUHasFlag()
	{
	}
	UClass* Z_Construct_UClass_UHasFlag_NoRegister()
	{
		return UHasFlag::StaticClass();
	}
	struct Z_Construct_UClass_UHasFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasFlag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HasFlag.h" },
		{ "ModuleRelativePath", "Public/HasFlag.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasFlag_Statics::NewProp__flag_MetaData[] = {
		{ "Category", "HasFlag" },
		{ "ModuleRelativePath", "Public/HasFlag.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHasFlag_Statics::NewProp__flag = { "_flag", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHasFlag, _flag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UHasFlag_Statics::NewProp__flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasFlag_Statics::NewProp__flag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasFlag_Statics::NewProp__flag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasFlag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHasFlag_Statics::ClassParams = {
		&UHasFlag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHasFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasFlag_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHasFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasFlag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHasFlag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHasFlag, 1153448770);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UHasFlag>()
	{
		return UHasFlag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHasFlag(Z_Construct_UClass_UHasFlag, &UHasFlag::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UHasFlag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasFlag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
