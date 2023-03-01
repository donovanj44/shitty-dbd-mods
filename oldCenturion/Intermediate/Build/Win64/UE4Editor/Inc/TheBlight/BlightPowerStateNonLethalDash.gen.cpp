// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPowerStateNonLethalDash.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPowerStateNonLethalDash() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateNonLethalDash_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateNonLethalDash();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateDash();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightPowerStateNonLethalDash::StaticRegisterNativesUBlightPowerStateNonLethalDash()
	{
	}
	UClass* Z_Construct_UClass_UBlightPowerStateNonLethalDash_NoRegister()
	{
		return UBlightPowerStateNonLethalDash::StaticClass();
	}
	struct Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlightPowerStateDash,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightPowerStateNonLethalDash.h" },
		{ "ModuleRelativePath", "Public/BlightPowerStateNonLethalDash.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::NewProp__smashBreakables_MetaData[] = {
		{ "Category", "BlightPowerStateNonLethalDash" },
		{ "ModuleRelativePath", "Public/BlightPowerStateNonLethalDash.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::NewProp__smashBreakables_SetBit(void* Obj)
	{
		((UBlightPowerStateNonLethalDash*)Obj)->_smashBreakables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::NewProp__smashBreakables = { "_smashBreakables", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerStateNonLethalDash), &Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::NewProp__smashBreakables_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::NewProp__smashBreakables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::NewProp__smashBreakables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::NewProp__smashBreakables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightPowerStateNonLethalDash>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::ClassParams = {
		&UBlightPowerStateNonLethalDash::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightPowerStateNonLethalDash()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightPowerStateNonLethalDash_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightPowerStateNonLethalDash, 3026602555);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightPowerStateNonLethalDash>()
	{
		return UBlightPowerStateNonLethalDash::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightPowerStateNonLethalDash(Z_Construct_UClass_UBlightPowerStateNonLethalDash, &UBlightPowerStateNonLethalDash::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightPowerStateNonLethalDash"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightPowerStateNonLethalDash);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
