// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/VirtualKeyboardManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualKeyboardManager() {}
// Cross Module References
	DBDINPUT_API UClass* Z_Construct_UClass_UVirtualKeyboardManager_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UVirtualKeyboardManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UVirtualKeyboard_NoRegister();
// End Cross Module References
	void UVirtualKeyboardManager::StaticRegisterNativesUVirtualKeyboardManager()
	{
	}
	UClass* Z_Construct_UClass_UVirtualKeyboardManager_NoRegister()
	{
		return UVirtualKeyboardManager::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualKeyboardManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__virtualKeyboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__virtualKeyboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualKeyboardManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualKeyboardManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualKeyboardManager.h" },
		{ "ModuleRelativePath", "Public/VirtualKeyboardManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualKeyboardManager_Statics::NewProp__virtualKeyboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualKeyboardManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualKeyboardManager_Statics::NewProp__virtualKeyboard = { "_virtualKeyboard", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualKeyboardManager, _virtualKeyboard), Z_Construct_UClass_UVirtualKeyboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualKeyboardManager_Statics::NewProp__virtualKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualKeyboardManager_Statics::NewProp__virtualKeyboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualKeyboardManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualKeyboardManager_Statics::NewProp__virtualKeyboard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualKeyboardManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualKeyboardManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualKeyboardManager_Statics::ClassParams = {
		&UVirtualKeyboardManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualKeyboardManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualKeyboardManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualKeyboardManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualKeyboardManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualKeyboardManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualKeyboardManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualKeyboardManager, 2434681105);
	template<> DBDINPUT_API UClass* StaticClass<UVirtualKeyboardManager>()
	{
		return UVirtualKeyboardManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualKeyboardManager(Z_Construct_UClass_UVirtualKeyboardManager, &UVirtualKeyboardManager::StaticClass, TEXT("/Script/DBDInput"), TEXT("UVirtualKeyboardManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualKeyboardManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
