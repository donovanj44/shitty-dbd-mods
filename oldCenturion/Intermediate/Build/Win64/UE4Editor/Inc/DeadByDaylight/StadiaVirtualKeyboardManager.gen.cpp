// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StadiaVirtualKeyboardManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStadiaVirtualKeyboardManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStadiaVirtualKeyboardManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStadiaVirtualKeyboardManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UStadiaVirtualKeyboardManager::StaticRegisterNativesUStadiaVirtualKeyboardManager()
	{
	}
	UClass* Z_Construct_UClass_UStadiaVirtualKeyboardManager_NoRegister()
	{
		return UStadiaVirtualKeyboardManager::StaticClass();
	}
	struct Z_Construct_UClass_UStadiaVirtualKeyboardManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStadiaVirtualKeyboardManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStadiaVirtualKeyboardManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StadiaVirtualKeyboardManager.h" },
		{ "ModuleRelativePath", "Public/StadiaVirtualKeyboardManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStadiaVirtualKeyboardManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStadiaVirtualKeyboardManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStadiaVirtualKeyboardManager_Statics::ClassParams = {
		&UStadiaVirtualKeyboardManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStadiaVirtualKeyboardManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStadiaVirtualKeyboardManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStadiaVirtualKeyboardManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStadiaVirtualKeyboardManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStadiaVirtualKeyboardManager, 289545823);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStadiaVirtualKeyboardManager>()
	{
		return UStadiaVirtualKeyboardManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStadiaVirtualKeyboardManager(Z_Construct_UClass_UStadiaVirtualKeyboardManager, &UStadiaVirtualKeyboardManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStadiaVirtualKeyboardManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStadiaVirtualKeyboardManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
