// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/LoProChainsAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoProChainsAddon() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_ULoProChainsAddon_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_ULoProChainsAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
// End Cross Module References
	void ULoProChainsAddon::StaticRegisterNativesULoProChainsAddon()
	{
	}
	UClass* Z_Construct_UClass_ULoProChainsAddon_NoRegister()
	{
		return ULoProChainsAddon::StaticClass();
	}
	struct Z_Construct_UClass_ULoProChainsAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__doesAddonIncludeBreakableWalls_MetaData[];
#endif
		static void NewProp__doesAddonIncludeBreakableWalls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__doesAddonIncludeBreakableWalls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__halfDamageDurationAfterBreakable_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__halfDamageDurationAfterBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__breakPalletMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__breakPalletMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoProChainsAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoProChainsAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoProChainsAddon.h" },
		{ "ModuleRelativePath", "Public/LoProChainsAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__doesAddonIncludeBreakableWalls_MetaData[] = {
		{ "Category", "LoProChainsAddon" },
		{ "ModuleRelativePath", "Public/LoProChainsAddon.h" },
	};
#endif
	void Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__doesAddonIncludeBreakableWalls_SetBit(void* Obj)
	{
		((ULoProChainsAddon*)Obj)->_doesAddonIncludeBreakableWalls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__doesAddonIncludeBreakableWalls = { "_doesAddonIncludeBreakableWalls", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoProChainsAddon), &Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__doesAddonIncludeBreakableWalls_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__doesAddonIncludeBreakableWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__doesAddonIncludeBreakableWalls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__halfDamageDurationAfterBreakable_MetaData[] = {
		{ "Category", "LoProChainsAddon" },
		{ "ModuleRelativePath", "Public/LoProChainsAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__halfDamageDurationAfterBreakable = { "_halfDamageDurationAfterBreakable", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoProChainsAddon, _halfDamageDurationAfterBreakable), METADATA_PARAMS(Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__halfDamageDurationAfterBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__halfDamageDurationAfterBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__breakPalletMontage_MetaData[] = {
		{ "Category", "LoProChainsAddon" },
		{ "ModuleRelativePath", "Public/LoProChainsAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__breakPalletMontage = { "_breakPalletMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoProChainsAddon, _breakPalletMontage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__breakPalletMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__breakPalletMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoProChainsAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__doesAddonIncludeBreakableWalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__halfDamageDurationAfterBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoProChainsAddon_Statics::NewProp__breakPalletMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoProChainsAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoProChainsAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoProChainsAddon_Statics::ClassParams = {
		&ULoProChainsAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoProChainsAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoProChainsAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULoProChainsAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoProChainsAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoProChainsAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoProChainsAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoProChainsAddon, 3254339950);
	template<> THEHILLBILLY_API UClass* StaticClass<ULoProChainsAddon>()
	{
		return ULoProChainsAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoProChainsAddon(Z_Construct_UClass_ULoProChainsAddon, &ULoProChainsAddon::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("ULoProChainsAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoProChainsAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
