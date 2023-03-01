// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TileBank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBank() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileBank_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileBank();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATile_NoRegister();
// End Cross Module References
	void UTileBank::StaticRegisterNativesUTileBank()
	{
	}
	UClass* Z_Construct_UClass_UTileBank_NoRegister()
	{
		return UTileBank::StaticClass();
	}
	struct Z_Construct_UClass_UTileBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allTileBlueprints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__allTileBlueprints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__allTileBlueprints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBank_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TileBank.h" },
		{ "ModuleRelativePath", "Public/TileBank.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBank_Statics::NewProp__allTileBlueprints_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileBank.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileBank_Statics::NewProp__allTileBlueprints = { "_allTileBlueprints", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBank, _allTileBlueprints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileBank_Statics::NewProp__allTileBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBank_Statics::NewProp__allTileBlueprints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileBank_Statics::NewProp__allTileBlueprints_Inner = { "_allTileBlueprints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBank_Statics::NewProp__allTileBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBank_Statics::NewProp__allTileBlueprints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileBank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileBank_Statics::ClassParams = {
		&UTileBank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileBank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileBank_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileBank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileBank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileBank, 422139196);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTileBank>()
	{
		return UTileBank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileBank(Z_Construct_UClass_UTileBank, &UTileBank::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTileBank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileBank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
