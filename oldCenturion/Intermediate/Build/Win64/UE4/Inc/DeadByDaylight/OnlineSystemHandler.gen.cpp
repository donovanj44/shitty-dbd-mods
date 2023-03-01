// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OnlineSystemHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSystemHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOnlineSystemHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOnlineSystemHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCrossPlatformManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDServerInstance_NoRegister();
	GAMESESSIONDS_API UClass* Z_Construct_UClass_UGameSessionDS_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
// End Cross Module References
	void UOnlineSystemHandler::StaticRegisterNativesUOnlineSystemHandler()
	{
	}
	UClass* Z_Construct_UClass_UOnlineSystemHandler_NoRegister()
	{
		return UOnlineSystemHandler::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSystemHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crossPlatformManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crossPlatformManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__serverInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__serverInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameSessionDS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameSessionDS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedLocalPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cachedLocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSystemHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSystemHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineSystemHandler.h" },
		{ "ModuleRelativePath", "Public/OnlineSystemHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__crossPlatformManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnlineSystemHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__crossPlatformManager = { "_crossPlatformManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineSystemHandler, _crossPlatformManager), Z_Construct_UClass_UCrossPlatformManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__crossPlatformManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__crossPlatformManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__serverInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnlineSystemHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__serverInstance = { "_serverInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineSystemHandler, _serverInstance), Z_Construct_UClass_UDBDServerInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__serverInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__serverInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameSessionDS_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnlineSystemHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameSessionDS = { "_gameSessionDS", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineSystemHandler, _gameSessionDS), Z_Construct_UClass_UGameSessionDS_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameSessionDS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameSessionDS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnlineSystemHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineSystemHandler, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__cachedLocalPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnlineSystemHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__cachedLocalPlayer = { "_cachedLocalPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineSystemHandler, _cachedLocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__cachedLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__cachedLocalPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSystemHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__crossPlatformManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__serverInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameSessionDS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__gameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSystemHandler_Statics::NewProp__cachedLocalPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSystemHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSystemHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSystemHandler_Statics::ClassParams = {
		&UOnlineSystemHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnlineSystemHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSystemHandler_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSystemHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSystemHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSystemHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineSystemHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineSystemHandler, 2511490094);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOnlineSystemHandler>()
	{
		return UOnlineSystemHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineSystemHandler(Z_Construct_UClass_UOnlineSystemHandler, &UOnlineSystemHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOnlineSystemHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSystemHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
