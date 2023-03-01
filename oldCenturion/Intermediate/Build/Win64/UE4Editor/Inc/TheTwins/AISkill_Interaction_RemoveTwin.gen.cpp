// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/AISkill_Interaction_RemoveTwin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Interaction_RemoveTwin() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UAISkill_Interaction_RemoveTwin();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UAISkill_Interaction_RemoveTwin::StaticRegisterNativesUAISkill_Interaction_RemoveTwin()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_NoRegister()
	{
		return UAISkill_Interaction_RemoveTwin::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__removeTwinMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__removeTwinMaxCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Interaction_RemoveTwin.h" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction_RemoveTwin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::NewProp__removeTwinMaxCharge_MetaData[] = {
		{ "Category", "AISkill_Interaction_RemoveTwin" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction_RemoveTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::NewProp__removeTwinMaxCharge = { "_removeTwinMaxCharge", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction_RemoveTwin, _removeTwinMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::NewProp__removeTwinMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::NewProp__removeTwinMaxCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::NewProp__removeTwinMaxCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Interaction_RemoveTwin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::ClassParams = {
		&UAISkill_Interaction_RemoveTwin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Interaction_RemoveTwin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Interaction_RemoveTwin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Interaction_RemoveTwin, 524596431);
	template<> THETWINS_API UClass* StaticClass<UAISkill_Interaction_RemoveTwin>()
	{
		return UAISkill_Interaction_RemoveTwin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Interaction_RemoveTwin(Z_Construct_UClass_UAISkill_Interaction_RemoveTwin, &UAISkill_Interaction_RemoveTwin::StaticClass, TEXT("/Script/TheTwins"), TEXT("UAISkill_Interaction_RemoveTwin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Interaction_RemoveTwin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
