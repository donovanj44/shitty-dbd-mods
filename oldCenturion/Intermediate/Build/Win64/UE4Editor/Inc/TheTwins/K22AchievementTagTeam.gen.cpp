// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/K22AchievementTagTeam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK22AchievementTagTeam() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UK22AchievementTagTeam_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UK22AchievementTagTeam();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UK22AchievementTagTeam::StaticRegisterNativesUK22AchievementTagTeam()
	{
	}
	UClass* Z_Construct_UClass_UK22AchievementTagTeam_NoRegister()
	{
		return UK22AchievementTagTeam::StaticClass();
	}
	struct Z_Construct_UClass_UK22AchievementTagTeam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK22AchievementTagTeam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK22AchievementTagTeam_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K22AchievementTagTeam.h" },
		{ "ModuleRelativePath", "Public/K22AchievementTagTeam.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK22AchievementTagTeam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK22AchievementTagTeam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK22AchievementTagTeam_Statics::ClassParams = {
		&UK22AchievementTagTeam::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK22AchievementTagTeam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK22AchievementTagTeam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK22AchievementTagTeam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK22AchievementTagTeam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK22AchievementTagTeam, 1472023655);
	template<> THETWINS_API UClass* StaticClass<UK22AchievementTagTeam>()
	{
		return UK22AchievementTagTeam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK22AchievementTagTeam(Z_Construct_UClass_UK22AchievementTagTeam, &UK22AchievementTagTeam::StaticClass, TEXT("/Script/TheTwins"), TEXT("UK22AchievementTagTeam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK22AchievementTagTeam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
