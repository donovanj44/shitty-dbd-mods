// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinInspectEmptyLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinInspectEmptyLocker() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinInspectEmptyLocker_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinInspectEmptyLocker();
	THETWINS_API UClass* Z_Construct_UClass_UBaseTwinInspectLocker();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinInspectEmptyLocker::StaticRegisterNativesUTwinInspectEmptyLocker()
	{
	}
	UClass* Z_Construct_UClass_UTwinInspectEmptyLocker_NoRegister()
	{
		return UTwinInspectEmptyLocker::StaticClass();
	}
	struct Z_Construct_UClass_UTwinInspectEmptyLocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinInspectEmptyLocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTwinInspectLocker,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinInspectEmptyLocker_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TwinInspectEmptyLocker.h" },
		{ "ModuleRelativePath", "Public/TwinInspectEmptyLocker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinInspectEmptyLocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinInspectEmptyLocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinInspectEmptyLocker_Statics::ClassParams = {
		&UTwinInspectEmptyLocker::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinInspectEmptyLocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinInspectEmptyLocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinInspectEmptyLocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinInspectEmptyLocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinInspectEmptyLocker, 960777967);
	template<> THETWINS_API UClass* StaticClass<UTwinInspectEmptyLocker>()
	{
		return UTwinInspectEmptyLocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinInspectEmptyLocker(Z_Construct_UClass_UTwinInspectEmptyLocker, &UTwinInspectEmptyLocker::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinInspectEmptyLocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinInspectEmptyLocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
