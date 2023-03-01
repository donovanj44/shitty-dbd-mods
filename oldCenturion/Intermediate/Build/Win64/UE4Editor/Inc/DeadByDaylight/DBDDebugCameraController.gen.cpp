// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDDebugCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDebugCameraController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDDebugCameraController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDDebugCameraController();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ADBDDebugCameraController::StaticRegisterNativesADBDDebugCameraController()
	{
	}
	UClass* Z_Construct_UClass_ADBDDebugCameraController_NoRegister()
	{
		return ADBDDebugCameraController::StaticClass();
	}
	struct Z_Construct_UClass_ADBDDebugCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDDebugCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugCameraController,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDDebugCameraController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDDebugCameraController.h" },
		{ "ModuleRelativePath", "Public/DBDDebugCameraController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDDebugCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDDebugCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDDebugCameraController_Statics::ClassParams = {
		&ADBDDebugCameraController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDDebugCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDDebugCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDDebugCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDDebugCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDDebugCameraController, 2201714509);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDDebugCameraController>()
	{
		return ADBDDebugCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDDebugCameraController(Z_Construct_UClass_ADBDDebugCameraController, &ADBDDebugCameraController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDDebugCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDDebugCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
