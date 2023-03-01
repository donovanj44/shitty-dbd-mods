// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDoctor/Public/Overcharge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOvercharge() {}
// Cross Module References
	THEDOCTOR_API UClass* Z_Construct_UClass_UOvercharge_NoRegister();
	THEDOCTOR_API UClass* Z_Construct_UClass_UOvercharge();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheDoctor();
// End Cross Module References
	void UOvercharge::StaticRegisterNativesUOvercharge()
	{
	}
	UClass* Z_Construct_UClass_UOvercharge_NoRegister()
	{
		return UOvercharge::StaticClass();
	}
	struct Z_Construct_UClass_UOvercharge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckFailurePenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skillCheckFailurePenalty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOvercharge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDoctor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOvercharge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Overcharge.h" },
		{ "ModuleRelativePath", "Public/Overcharge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOvercharge_Statics::NewProp__skillCheckFailurePenalty_MetaData[] = {
		{ "Category", "Overcharge" },
		{ "ModuleRelativePath", "Public/Overcharge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOvercharge_Statics::NewProp__skillCheckFailurePenalty = { "_skillCheckFailurePenalty", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_skillCheckFailurePenalty, UOvercharge), STRUCT_OFFSET(UOvercharge, _skillCheckFailurePenalty), METADATA_PARAMS(Z_Construct_UClass_UOvercharge_Statics::NewProp__skillCheckFailurePenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOvercharge_Statics::NewProp__skillCheckFailurePenalty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOvercharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOvercharge_Statics::NewProp__skillCheckFailurePenalty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOvercharge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOvercharge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOvercharge_Statics::ClassParams = {
		&UOvercharge::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOvercharge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOvercharge_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOvercharge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOvercharge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOvercharge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOvercharge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOvercharge, 987891798);
	template<> THEDOCTOR_API UClass* StaticClass<UOvercharge>()
	{
		return UOvercharge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOvercharge(Z_Construct_UClass_UOvercharge, &UOvercharge::StaticClass, TEXT("/Script/TheDoctor"), TEXT("UOvercharge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOvercharge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
