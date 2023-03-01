// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/DBDInputManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDInputManager() {}
// Cross Module References
	DBDINPUT_API UClass* Z_Construct_UClass_UDBDInputManager_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UDBDInputManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UVirtualKeyboardManager_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_USwitchDockStateManager_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UControlModeManager_NoRegister();
// End Cross Module References
	void UDBDInputManager::StaticRegisterNativesUDBDInputManager()
	{
	}
	UClass* Z_Construct_UClass_UDBDInputManager_NoRegister()
	{
		return UDBDInputManager::StaticClass();
	}
	struct Z_Construct_UClass_UDBDInputManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__analogCursorDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__analogCursorDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__virtualKeyboardManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__virtualKeyboardManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__switchDockStateManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__switchDockStateManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlModeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__controlModeManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDInputManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInputManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDInputManager.h" },
		{ "ModuleRelativePath", "Public/DBDInputManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInputManager_Statics::NewProp__analogCursorDb_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDInputManager_Statics::NewProp__analogCursorDb = { "_analogCursorDb", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDInputManager, _analogCursorDb), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDInputManager_Statics::NewProp__analogCursorDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInputManager_Statics::NewProp__analogCursorDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInputManager_Statics::NewProp__virtualKeyboardManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDInputManager_Statics::NewProp__virtualKeyboardManager = { "_virtualKeyboardManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDInputManager, _virtualKeyboardManager), Z_Construct_UClass_UVirtualKeyboardManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDInputManager_Statics::NewProp__virtualKeyboardManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInputManager_Statics::NewProp__virtualKeyboardManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInputManager_Statics::NewProp__switchDockStateManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDInputManager_Statics::NewProp__switchDockStateManager = { "_switchDockStateManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDInputManager, _switchDockStateManager), Z_Construct_UClass_USwitchDockStateManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDInputManager_Statics::NewProp__switchDockStateManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInputManager_Statics::NewProp__switchDockStateManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInputManager_Statics::NewProp__controlModeManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDInputManager_Statics::NewProp__controlModeManager = { "_controlModeManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDInputManager, _controlModeManager), Z_Construct_UClass_UControlModeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDInputManager_Statics::NewProp__controlModeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInputManager_Statics::NewProp__controlModeManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDInputManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInputManager_Statics::NewProp__analogCursorDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInputManager_Statics::NewProp__virtualKeyboardManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInputManager_Statics::NewProp__switchDockStateManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInputManager_Statics::NewProp__controlModeManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDInputManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDInputManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDInputManager_Statics::ClassParams = {
		&UDBDInputManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDInputManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInputManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDInputManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInputManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDInputManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDInputManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDInputManager, 744052095);
	template<> DBDINPUT_API UClass* StaticClass<UDBDInputManager>()
	{
		return UDBDInputManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDInputManager(Z_Construct_UClass_UDBDInputManager, &UDBDInputManager::StaticClass, TEXT("/Script/DBDInput"), TEXT("UDBDInputManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDInputManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
