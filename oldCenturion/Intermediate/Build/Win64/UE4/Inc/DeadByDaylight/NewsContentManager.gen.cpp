// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NewsContentManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewsContentManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNewsContentManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNewsContentManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	void UNewsContentManager::StaticRegisterNativesUNewsContentManager()
	{
	}
	UClass* Z_Construct_UClass_UNewsContentManager_NoRegister()
	{
		return UNewsContentManager::StaticClass();
	}
	struct Z_Construct_UClass_UNewsContentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewsContentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewsContentManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NewsContentManager.h" },
		{ "ModuleRelativePath", "Public/NewsContentManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewsContentManager_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewsContentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNewsContentManager_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewsContentManager, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewsContentManager_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewsContentManager_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewsContentManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewsContentManager_Statics::NewProp__gameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewsContentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewsContentManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewsContentManager_Statics::ClassParams = {
		&UNewsContentManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNewsContentManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewsContentManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNewsContentManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewsContentManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewsContentManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewsContentManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewsContentManager, 3844668039);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNewsContentManager>()
	{
		return UNewsContentManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewsContentManager(Z_Construct_UClass_UNewsContentManager, &UNewsContentManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNewsContentManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewsContentManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
