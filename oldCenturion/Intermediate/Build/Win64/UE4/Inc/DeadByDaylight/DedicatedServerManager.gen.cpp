// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DedicatedServerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDedicatedServerManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDedicatedServerManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDedicatedServerManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOnlineSystemHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDedicatedServerStartupInitializerInterface_NoRegister();
// End Cross Module References
	void UDedicatedServerManager::StaticRegisterNativesUDedicatedServerManager()
	{
	}
	UClass* Z_Construct_UClass_UDedicatedServerManager_NoRegister()
	{
		return UDedicatedServerManager::StaticClass();
	}
	struct Z_Construct_UClass_UDedicatedServerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onlineSystemHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onlineSystemHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startupInitializer_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__startupInitializer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDedicatedServerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDedicatedServerManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DedicatedServerManager.h" },
		{ "ModuleRelativePath", "Public/DedicatedServerManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__onlineSystemHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__onlineSystemHandler = { "_onlineSystemHandler", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDedicatedServerManager, _onlineSystemHandler), Z_Construct_UClass_UOnlineSystemHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__onlineSystemHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__onlineSystemHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDedicatedServerManager, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__gameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__startupInitializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__startupInitializer = { "_startupInitializer", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDedicatedServerManager, _startupInitializer), Z_Construct_UClass_UDedicatedServerStartupInitializerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__startupInitializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__startupInitializer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDedicatedServerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__onlineSystemHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__gameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDedicatedServerManager_Statics::NewProp__startupInitializer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDedicatedServerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDedicatedServerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDedicatedServerManager_Statics::ClassParams = {
		&UDedicatedServerManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDedicatedServerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDedicatedServerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDedicatedServerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDedicatedServerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDedicatedServerManager, 2897458296);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDedicatedServerManager>()
	{
		return UDedicatedServerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDedicatedServerManager(Z_Construct_UClass_UDedicatedServerManager, &UDedicatedServerManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDedicatedServerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDedicatedServerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
