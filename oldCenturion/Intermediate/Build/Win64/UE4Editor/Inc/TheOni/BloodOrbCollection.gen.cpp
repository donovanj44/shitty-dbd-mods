// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbCollection() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbCollection_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbCollection();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
// End Cross Module References
	void UBloodOrbCollection::StaticRegisterNativesUBloodOrbCollection()
	{
	}
	UClass* Z_Construct_UClass_UBloodOrbCollection_NoRegister()
	{
		return UBloodOrbCollection::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodOrbs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__bloodOrbs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodOrbs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodOrbCollection.h" },
		{ "ModuleRelativePath", "Public/BloodOrbCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbCollection_Statics::NewProp__bloodOrbs_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodOrbCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodOrbCollection_Statics::NewProp__bloodOrbs = { "_bloodOrbs", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbCollection, _bloodOrbs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbCollection_Statics::NewProp__bloodOrbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbCollection_Statics::NewProp__bloodOrbs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodOrbCollection_Statics::NewProp__bloodOrbs_Inner = { "_bloodOrbs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodOrbCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbCollection_Statics::NewProp__bloodOrbs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbCollection_Statics::NewProp__bloodOrbs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbCollection_Statics::ClassParams = {
		&UBloodOrbCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBloodOrbCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbCollection_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbCollection, 1378004045);
	template<> THEONI_API UClass* StaticClass<UBloodOrbCollection>()
	{
		return UBloodOrbCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbCollection(Z_Construct_UClass_UBloodOrbCollection, &UBloodOrbCollection::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
