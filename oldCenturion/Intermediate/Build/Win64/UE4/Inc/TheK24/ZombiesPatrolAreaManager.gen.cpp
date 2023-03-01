// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombiesPatrolAreaManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombiesPatrolAreaManager() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombiesPatrolAreaManager_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombiesPatrolAreaManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMeatHook_NoRegister();
// End Cross Module References
	void UZombiesPatrolAreaManager::StaticRegisterNativesUZombiesPatrolAreaManager()
	{
	}
	UClass* Z_Construct_UClass_UZombiesPatrolAreaManager_NoRegister()
	{
		return UZombiesPatrolAreaManager::StaticClass();
	}
	struct Z_Construct_UClass_UZombiesPatrolAreaManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistanceBetweenMeatHookAndPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxDistanceBetweenMeatHookAndPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__usedPatrolAreas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__usedPatrolAreas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__usedPatrolAreas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availablePatrolAreas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__availablePatrolAreas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__availablePatrolAreas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombiesPatrolAreaManager.h" },
		{ "ModuleRelativePath", "Public/ZombiesPatrolAreaManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__maxDistanceBetweenMeatHookAndPlayers_MetaData[] = {
		{ "Category", "ZombiesPatrolAreaManager" },
		{ "ModuleRelativePath", "Public/ZombiesPatrolAreaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__maxDistanceBetweenMeatHookAndPlayers = { "_maxDistanceBetweenMeatHookAndPlayers", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombiesPatrolAreaManager, _maxDistanceBetweenMeatHookAndPlayers), METADATA_PARAMS(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__maxDistanceBetweenMeatHookAndPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__maxDistanceBetweenMeatHookAndPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__usedPatrolAreas_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombiesPatrolAreaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__usedPatrolAreas = { "_usedPatrolAreas", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombiesPatrolAreaManager, _usedPatrolAreas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__usedPatrolAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__usedPatrolAreas_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__usedPatrolAreas_Inner = { "_usedPatrolAreas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__availablePatrolAreas_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombiesPatrolAreaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__availablePatrolAreas = { "_availablePatrolAreas", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombiesPatrolAreaManager, _availablePatrolAreas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__availablePatrolAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__availablePatrolAreas_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__availablePatrolAreas_Inner = { "_availablePatrolAreas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__maxDistanceBetweenMeatHookAndPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__usedPatrolAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__usedPatrolAreas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__availablePatrolAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::NewProp__availablePatrolAreas_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombiesPatrolAreaManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::ClassParams = {
		&UZombiesPatrolAreaManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombiesPatrolAreaManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombiesPatrolAreaManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombiesPatrolAreaManager, 3832076553);
	template<> THEK24_API UClass* StaticClass<UZombiesPatrolAreaManager>()
	{
		return UZombiesPatrolAreaManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombiesPatrolAreaManager(Z_Construct_UClass_UZombiesPatrolAreaManager, &UZombiesPatrolAreaManager::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombiesPatrolAreaManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombiesPatrolAreaManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
