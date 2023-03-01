// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/AISkill_Interaction_DismissCrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Interaction_DismissCrow() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UAISkill_Interaction_DismissCrow_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UAISkill_Interaction_DismissCrow();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UAISkill_Interaction_DismissCrow::StaticRegisterNativesUAISkill_Interaction_DismissCrow()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Interaction_DismissCrow_NoRegister()
	{
		return UAISkill_Interaction_DismissCrow::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dismissCrowMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dismissCrowMaxCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Interaction_DismissCrow.h" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction_DismissCrow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::NewProp__dismissCrowMaxCharge_MetaData[] = {
		{ "Category", "AISkill_Interaction_DismissCrow" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction_DismissCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::NewProp__dismissCrowMaxCharge = { "_dismissCrowMaxCharge", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction_DismissCrow, _dismissCrowMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::NewProp__dismissCrowMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::NewProp__dismissCrowMaxCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::NewProp__dismissCrowMaxCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Interaction_DismissCrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::ClassParams = {
		&UAISkill_Interaction_DismissCrow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Interaction_DismissCrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Interaction_DismissCrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Interaction_DismissCrow, 3991088523);
	template<> THEK26_API UClass* StaticClass<UAISkill_Interaction_DismissCrow>()
	{
		return UAISkill_Interaction_DismissCrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Interaction_DismissCrow(Z_Construct_UClass_UAISkill_Interaction_DismissCrow, &UAISkill_Interaction_DismissCrow::StaticClass, TEXT("/Script/TheK26"), TEXT("UAISkill_Interaction_DismissCrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Interaction_DismissCrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
