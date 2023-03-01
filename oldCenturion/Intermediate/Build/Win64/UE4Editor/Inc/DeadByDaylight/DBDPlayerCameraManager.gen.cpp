// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerCameraManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerCameraManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UViewRotationStrategy_NoRegister();
// End Cross Module References
	void ADBDPlayerCameraManager::StaticRegisterNativesADBDPlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_ADBDPlayerCameraManager_NoRegister()
	{
		return ADBDPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ADBDPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__viewRotationStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__viewRotationStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalFOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerCameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp__viewRotationStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp__viewRotationStrategy = { "_viewRotationStrategy", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerCameraManager, _viewRotationStrategy), Z_Construct_UClass_UViewRotationStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp__viewRotationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp__viewRotationStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_TargetingFOV_MetaData[] = {
		{ "Category", "DBDPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/DBDPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_TargetingFOV = { "TargetingFOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerCameraManager, TargetingFOV), METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_TargetingFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_TargetingFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_NormalFOV_MetaData[] = {
		{ "Category", "DBDPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/DBDPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_NormalFOV = { "NormalFOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerCameraManager, NormalFOV), METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_NormalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_NormalFOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDPlayerCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp__viewRotationStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_TargetingFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerCameraManager_Statics::NewProp_NormalFOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDPlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDPlayerCameraManager_Statics::ClassParams = {
		&ADBDPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBDPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDPlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDPlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDPlayerCameraManager, 2490253034);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDPlayerCameraManager>()
	{
		return ADBDPlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDPlayerCameraManager(Z_Construct_UClass_ADBDPlayerCameraManager, &ADBDPlayerCameraManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
