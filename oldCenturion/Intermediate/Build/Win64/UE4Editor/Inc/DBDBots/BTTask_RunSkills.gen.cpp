// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_RunSkills.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunSkills() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_RunSkills_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_RunSkills();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBTTask_RunSkills::StaticRegisterNativesUBTTask_RunSkills()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RunSkills_NoRegister()
	{
		return UBTTask_RunSkills::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RunSkills_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RunSkills_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunSkills_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_RunSkills.h" },
		{ "ModuleRelativePath", "Public/BTTask_RunSkills.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunSkills_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "BTTask_RunSkills" },
		{ "ModuleRelativePath", "Public/BTTask_RunSkills.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunSkills_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RunSkills, Context), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunSkills_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunSkills_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunSkills_Statics::NewProp_Context,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RunSkills_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunSkills>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunSkills_Statics::ClassParams = {
		&UBTTask_RunSkills::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RunSkills_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunSkills_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunSkills_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunSkills_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RunSkills()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_RunSkills_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_RunSkills, 1689195804);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_RunSkills>()
	{
		return UBTTask_RunSkills::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RunSkills(Z_Construct_UClass_UBTTask_RunSkills, &UBTTask_RunSkills::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_RunSkills"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunSkills);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
