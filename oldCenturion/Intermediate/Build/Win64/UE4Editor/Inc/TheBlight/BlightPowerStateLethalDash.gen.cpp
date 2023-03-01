// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPowerStateLethalDash.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPowerStateLethalDash() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateLethalDash_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateLethalDash();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateDash();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryInteractionProperties();
// End Cross Module References
	void UBlightPowerStateLethalDash::StaticRegisterNativesUBlightPowerStateLethalDash()
	{
	}
	UClass* Z_Construct_UClass_UBlightPowerStateLethalDash_NoRegister()
	{
		return UBlightPowerStateLethalDash::StaticClass();
	}
	struct Z_Construct_UClass_UBlightPowerStateLethalDash_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__smashBreakables_MetaData[];
#endif
		static void NewProp__smashBreakables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__smashBreakables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryInteractionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__secondaryInteractionProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlightPowerStateDash,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightPowerStateLethalDash.h" },
		{ "ModuleRelativePath", "Public/BlightPowerStateLethalDash.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__smashBreakables_MetaData[] = {
		{ "Category", "BlightPowerStateLethalDash" },
		{ "ModuleRelativePath", "Public/BlightPowerStateLethalDash.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__smashBreakables_SetBit(void* Obj)
	{
		((UBlightPowerStateLethalDash*)Obj)->_smashBreakables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__smashBreakables = { "_smashBreakables", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerStateLethalDash), &Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__smashBreakables_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__smashBreakables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__smashBreakables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__secondaryInteractionProperties_MetaData[] = {
		{ "Category", "BlightPowerStateLethalDash" },
		{ "ModuleRelativePath", "Public/BlightPowerStateLethalDash.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__secondaryInteractionProperties = { "_secondaryInteractionProperties", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateLethalDash, _secondaryInteractionProperties), Z_Construct_UScriptStruct_FSecondaryInteractionProperties, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__secondaryInteractionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__secondaryInteractionProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__smashBreakables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::NewProp__secondaryInteractionProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightPowerStateLethalDash>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::ClassParams = {
		&UBlightPowerStateLethalDash::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightPowerStateLethalDash()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightPowerStateLethalDash_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightPowerStateLethalDash, 4174968199);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightPowerStateLethalDash>()
	{
		return UBlightPowerStateLethalDash::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightPowerStateLethalDash(Z_Construct_UClass_UBlightPowerStateLethalDash, &UBlightPowerStateLethalDash::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightPowerStateLethalDash"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightPowerStateLethalDash);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
