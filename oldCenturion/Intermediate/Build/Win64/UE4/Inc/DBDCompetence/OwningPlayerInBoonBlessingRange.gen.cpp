// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/OwningPlayerInBoonBlessingRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwningPlayerInBoonBlessingRange() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningPlayerInBoonBlessingRange();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
// End Cross Module References
	void UOwningPlayerInBoonBlessingRange::StaticRegisterNativesUOwningPlayerInBoonBlessingRange()
	{
	}
	UClass* Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_NoRegister()
	{
		return UOwningPlayerInBoonBlessingRange::StaticClass();
	}
	struct Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boundTotem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__boundTotem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OwningPlayerInBoonBlessingRange.h" },
		{ "ModuleRelativePath", "Public/OwningPlayerInBoonBlessingRange.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::NewProp__boundTotem_MetaData[] = {
		{ "ModuleRelativePath", "Public/OwningPlayerInBoonBlessingRange.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::NewProp__boundTotem = { "_boundTotem", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOwningPlayerInBoonBlessingRange, _boundTotem), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::NewProp__boundTotem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::NewProp__boundTotem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::NewProp__boundTotem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOwningPlayerInBoonBlessingRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::ClassParams = {
		&UOwningPlayerInBoonBlessingRange::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOwningPlayerInBoonBlessingRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOwningPlayerInBoonBlessingRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOwningPlayerInBoonBlessingRange, 1218534128);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UOwningPlayerInBoonBlessingRange>()
	{
		return UOwningPlayerInBoonBlessingRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOwningPlayerInBoonBlessingRange(Z_Construct_UClass_UOwningPlayerInBoonBlessingRange, &UOwningPlayerInBoonBlessingRange::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UOwningPlayerInBoonBlessingRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOwningPlayerInBoonBlessingRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
