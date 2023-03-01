// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/BloodEcho.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodEcho() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBloodEcho_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBloodEcho();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBloodEcho::StaticRegisterNativesUBloodEcho()
	{
	}
	UClass* Z_Construct_UClass_UBloodEcho_NoRegister()
	{
		return UBloodEcho::StaticClass();
	}
	struct Z_Construct_UClass_UBloodEcho_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectDurationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__statusEffectDurationTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodEcho_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodEcho_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodEcho.h" },
		{ "ModuleRelativePath", "Public/BloodEcho.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodEcho_Statics::NewProp__cooldownDuration_MetaData[] = {
		{ "Category", "BloodEcho" },
		{ "ModuleRelativePath", "Public/BloodEcho.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodEcho_Statics::NewProp__cooldownDuration = { "_cooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownDuration, UBloodEcho), STRUCT_OFFSET(UBloodEcho, _cooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UBloodEcho_Statics::NewProp__cooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodEcho_Statics::NewProp__cooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodEcho_Statics::NewProp__statusEffectDurationTag_MetaData[] = {
		{ "Category", "BloodEcho" },
		{ "ModuleRelativePath", "Public/BloodEcho.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBloodEcho_Statics::NewProp__statusEffectDurationTag = { "_statusEffectDurationTag", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodEcho, _statusEffectDurationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBloodEcho_Statics::NewProp__statusEffectDurationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodEcho_Statics::NewProp__statusEffectDurationTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodEcho_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodEcho_Statics::NewProp__cooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodEcho_Statics::NewProp__statusEffectDurationTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodEcho_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodEcho>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodEcho_Statics::ClassParams = {
		&UBloodEcho::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBloodEcho_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodEcho_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodEcho_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodEcho_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodEcho()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodEcho_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodEcho, 2542823033);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UBloodEcho>()
	{
		return UBloodEcho::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodEcho(Z_Construct_UClass_UBloodEcho, &UBloodEcho::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UBloodEcho"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodEcho);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
