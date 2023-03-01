// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CrossPlatformManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossPlatformManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCrossPlatformManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCrossPlatformManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UCrossPlatformManager::StaticRegisterNativesUCrossPlatformManager()
	{
	}
	UClass* Z_Construct_UClass_UCrossPlatformManager_NoRegister()
	{
		return UCrossPlatformManager::StaticClass();
	}
	struct Z_Construct_UClass_UCrossPlatformManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crossPlayAllowedByKraken_MetaData[];
#endif
		static void NewProp__crossPlayAllowedByKraken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__crossPlayAllowedByKraken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crossPlayAllowedByPlatform_MetaData[];
#endif
		static void NewProp__crossPlayAllowedByPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__crossPlayAllowedByPlatform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrossPlatformManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossPlatformManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrossPlatformManager.h" },
		{ "ModuleRelativePath", "Public/CrossPlatformManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByKraken_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrossPlatformManager.h" },
	};
#endif
	void Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByKraken_SetBit(void* Obj)
	{
		((UCrossPlatformManager*)Obj)->_crossPlayAllowedByKraken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByKraken = { "_crossPlayAllowedByKraken", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCrossPlatformManager), &Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByKraken_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByKraken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByKraken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByPlatform_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrossPlatformManager.h" },
	};
#endif
	void Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByPlatform_SetBit(void* Obj)
	{
		((UCrossPlatformManager*)Obj)->_crossPlayAllowedByPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByPlatform = { "_crossPlayAllowedByPlatform", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCrossPlatformManager), &Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByPlatform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrossPlatformManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByKraken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossPlatformManager_Statics::NewProp__crossPlayAllowedByPlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrossPlatformManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrossPlatformManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrossPlatformManager_Statics::ClassParams = {
		&UCrossPlatformManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrossPlatformManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPlatformManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCrossPlatformManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPlatformManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrossPlatformManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrossPlatformManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrossPlatformManager, 985691614);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCrossPlatformManager>()
	{
		return UCrossPlatformManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrossPlatformManager(Z_Construct_UClass_UCrossPlatformManager, &UCrossPlatformManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCrossPlatformManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrossPlatformManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
