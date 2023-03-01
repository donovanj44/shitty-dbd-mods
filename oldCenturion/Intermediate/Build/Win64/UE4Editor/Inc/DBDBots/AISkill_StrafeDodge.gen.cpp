// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_StrafeDodge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_StrafeDodge() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_StrafeDodge_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_StrafeDodge();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Strafe();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIRoll();
// End Cross Module References
	void UAISkill_StrafeDodge::StaticRegisterNativesUAISkill_StrafeDodge()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_StrafeDodge_NoRegister()
	{
		return UAISkill_StrafeDodge::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_StrafeDodge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_StrafeDodge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Strafe,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_StrafeDodge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_StrafeDodge.h" },
		{ "ModuleRelativePath", "Public/AISkill_StrafeDodge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_StrafeDodge_Statics::NewProp_StartRoll_MetaData[] = {
		{ "Category", "AISkill_StrafeDodge" },
		{ "ModuleRelativePath", "Public/AISkill_StrafeDodge.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_StrafeDodge_Statics::NewProp_StartRoll = { "StartRoll", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_StrafeDodge, StartRoll), Z_Construct_UScriptStruct_FAIRoll, METADATA_PARAMS(Z_Construct_UClass_UAISkill_StrafeDodge_Statics::NewProp_StartRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_StrafeDodge_Statics::NewProp_StartRoll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_StrafeDodge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_StrafeDodge_Statics::NewProp_StartRoll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_StrafeDodge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_StrafeDodge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_StrafeDodge_Statics::ClassParams = {
		&UAISkill_StrafeDodge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_StrafeDodge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_StrafeDodge_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_StrafeDodge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_StrafeDodge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_StrafeDodge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_StrafeDodge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_StrafeDodge, 330830654);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_StrafeDodge>()
	{
		return UAISkill_StrafeDodge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_StrafeDodge(Z_Construct_UClass_UAISkill_StrafeDodge, &UAISkill_StrafeDodge::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_StrafeDodge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_StrafeDodge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
