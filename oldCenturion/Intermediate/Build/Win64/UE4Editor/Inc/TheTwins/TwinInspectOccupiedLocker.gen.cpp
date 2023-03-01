// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinInspectOccupiedLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinInspectOccupiedLocker() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinInspectOccupiedLocker_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinInspectOccupiedLocker();
	THETWINS_API UClass* Z_Construct_UClass_UBaseTwinInspectLocker();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinInspectOccupiedLocker::StaticRegisterNativesUTwinInspectOccupiedLocker()
	{
	}
	UClass* Z_Construct_UClass_UTwinInspectOccupiedLocker_NoRegister()
	{
		return UTwinInspectOccupiedLocker::StaticClass();
	}
	struct Z_Construct_UClass_UTwinInspectOccupiedLocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinInspectOccupiedLocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTwinInspectLocker,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinInspectOccupiedLocker_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TwinInspectOccupiedLocker.h" },
		{ "ModuleRelativePath", "Public/TwinInspectOccupiedLocker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinInspectOccupiedLocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinInspectOccupiedLocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinInspectOccupiedLocker_Statics::ClassParams = {
		&UTwinInspectOccupiedLocker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTwinInspectOccupiedLocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinInspectOccupiedLocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinInspectOccupiedLocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinInspectOccupiedLocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinInspectOccupiedLocker, 911014662);
	template<> THETWINS_API UClass* StaticClass<UTwinInspectOccupiedLocker>()
	{
		return UTwinInspectOccupiedLocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinInspectOccupiedLocker(Z_Construct_UClass_UTwinInspectOccupiedLocker, &UTwinInspectOccupiedLocker::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinInspectOccupiedLocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinInspectOccupiedLocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
