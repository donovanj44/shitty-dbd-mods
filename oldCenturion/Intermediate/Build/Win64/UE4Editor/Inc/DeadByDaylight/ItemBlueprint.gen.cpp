// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBlueprint() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AItemBlueprint_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AItemBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void AItemBlueprint::StaticRegisterNativesAItemBlueprint()
	{
	}
	UClass* Z_Construct_UClass_AItemBlueprint_NoRegister()
	{
		return AItemBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_AItemBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBlueprint.h" },
		{ "ModuleRelativePath", "Public/ItemBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemBlueprint_Statics::ClassParams = {
		&AItemBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemBlueprint, 1487522522);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AItemBlueprint>()
	{
		return AItemBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemBlueprint(Z_Construct_UClass_AItemBlueprint, &AItemBlueprint::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AItemBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
