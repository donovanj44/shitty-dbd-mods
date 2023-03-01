// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HarpoonLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarpoonLauncher() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonLauncher_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonLauncher();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileLauncher();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UHarpoonLauncher::StaticRegisterNativesUHarpoonLauncher()
	{
	}
	UClass* Z_Construct_UClass_UHarpoonLauncher_NoRegister()
	{
		return UHarpoonLauncher::StaticClass();
	}
	struct Z_Construct_UClass_UHarpoonLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__launchZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__launchZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__launchDistanceFromCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__launchDistanceFromCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__launchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__launchSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHarpoonLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerProjectileLauncher,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HarpoonLauncher.h" },
		{ "ModuleRelativePath", "Public/HarpoonLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchZOffset_MetaData[] = {
		{ "Category", "HarpoonLauncher" },
		{ "ModuleRelativePath", "Public/HarpoonLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchZOffset = { "_launchZOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonLauncher, _launchZOffset), METADATA_PARAMS(Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchDistanceFromCamera_MetaData[] = {
		{ "Category", "HarpoonLauncher" },
		{ "ModuleRelativePath", "Public/HarpoonLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchDistanceFromCamera = { "_launchDistanceFromCamera", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonLauncher, _launchDistanceFromCamera), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchDistanceFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchDistanceFromCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchSpeed_MetaData[] = {
		{ "Category", "HarpoonLauncher" },
		{ "ModuleRelativePath", "Public/HarpoonLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchSpeed = { "_launchSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonLauncher, _launchSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHarpoonLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchDistanceFromCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonLauncher_Statics::NewProp__launchSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHarpoonLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHarpoonLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHarpoonLauncher_Statics::ClassParams = {
		&UHarpoonLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHarpoonLauncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonLauncher_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHarpoonLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHarpoonLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHarpoonLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHarpoonLauncher, 3389757854);
	template<> THEGUNSLINGER_API UClass* StaticClass<UHarpoonLauncher>()
	{
		return UHarpoonLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHarpoonLauncher(Z_Construct_UClass_UHarpoonLauncher, &UHarpoonLauncher::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UHarpoonLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHarpoonLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
