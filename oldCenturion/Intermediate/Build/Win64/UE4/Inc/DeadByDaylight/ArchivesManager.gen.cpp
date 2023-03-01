// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchivesManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchivesManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchivesManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URewardTrackContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveVignettesContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveStoriesContainer_NoRegister();
// End Cross Module References
	void UArchivesManager::StaticRegisterNativesUArchivesManager()
	{
	}
	UClass* Z_Construct_UClass_UArchivesManager_NoRegister()
	{
		return UArchivesManager::StaticClass();
	}
	struct Z_Construct_UClass_UArchivesManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardTrackContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rewardTrackContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignettesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__vignettesContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storiesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storiesContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchivesManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchivesManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchivesManager.h" },
		{ "ModuleRelativePath", "Public/ArchivesManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchivesManager_Statics::NewProp__rewardTrackContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchivesManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchivesManager_Statics::NewProp__rewardTrackContainer = { "_rewardTrackContainer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchivesManager, _rewardTrackContainer), Z_Construct_UClass_URewardTrackContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchivesManager_Statics::NewProp__rewardTrackContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchivesManager_Statics::NewProp__rewardTrackContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchivesManager_Statics::NewProp__vignettesContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchivesManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchivesManager_Statics::NewProp__vignettesContainer = { "_vignettesContainer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchivesManager, _vignettesContainer), Z_Construct_UClass_UArchiveVignettesContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchivesManager_Statics::NewProp__vignettesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchivesManager_Statics::NewProp__vignettesContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchivesManager_Statics::NewProp__storiesContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchivesManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchivesManager_Statics::NewProp__storiesContainer = { "_storiesContainer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchivesManager, _storiesContainer), Z_Construct_UClass_UArchiveStoriesContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArchivesManager_Statics::NewProp__storiesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchivesManager_Statics::NewProp__storiesContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchivesManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivesManager_Statics::NewProp__rewardTrackContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivesManager_Statics::NewProp__vignettesContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivesManager_Statics::NewProp__storiesContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchivesManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivesManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchivesManager_Statics::ClassParams = {
		&UArchivesManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchivesManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchivesManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchivesManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchivesManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchivesManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchivesManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchivesManager, 4153005851);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchivesManager>()
	{
		return UArchivesManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchivesManager(Z_Construct_UClass_UArchivesManager, &UArchivesManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchivesManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivesManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
