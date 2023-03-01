// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScreenController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EScreenType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxMoviePlayer_NoRegister();
	SCALEFORMUI_API UClass* Z_Construct_UClass_UGFxObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	void UScreenController::StaticRegisterNativesUScreenController()
	{
	}
	UClass* Z_Construct_UClass_UScreenController_NoRegister()
	{
		return UScreenController::StaticClass();
	}
	struct Z_Construct_UClass_UScreenController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedUMGScreens_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__cachedUMGScreens;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__cachedUMGScreens_Key_KeyProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__cachedUMGScreens_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screenTypeDictionary_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__screenTypeDictionary;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__screenTypeDictionary_Key_KeyProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__screenTypeDictionary_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__screenTypeDictionary_ValueProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screenDictionary_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__screenDictionary;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__screenDictionary_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__screenDictionary_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__moviePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__moviePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screenControllerObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__screenControllerObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenController.h" },
		{ "ModuleRelativePath", "Public/ScreenController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens = { "_cachedUMGScreens", nullptr, (EPropertyFlags)0x0044008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenController, _cachedUMGScreens), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens_Key_KeyProp = { "_cachedUMGScreens_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens_ValueProp = { "_cachedUMGScreens", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary = { "_screenTypeDictionary", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenController, _screenTypeDictionary), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_Key_KeyProp = { "_screenTypeDictionary_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_ValueProp = { "_screenTypeDictionary", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_DeadByDaylight_EScreenType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary = { "_screenDictionary", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenController, _screenDictionary), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary_Key_KeyProp = { "_screenDictionary_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary_ValueProp = { "_screenDictionary", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UScreenBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenController_Statics::NewProp__moviePlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__moviePlayer = { "_moviePlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenController, _moviePlayer), Z_Construct_UClass_UGFxMoviePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenController_Statics::NewProp__moviePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenController_Statics::NewProp__moviePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenController_Statics::NewProp__screenControllerObj_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__screenControllerObj = { "_screenControllerObj", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenController, _screenControllerObj), Z_Construct_UClass_UGFxObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenController_Statics::NewProp__screenControllerObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenController_Statics::NewProp__screenControllerObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenController_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenController_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenController, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenController_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenController_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__cachedUMGScreens_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__screenTypeDictionary_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__screenDictionary_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__moviePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__screenControllerObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenController_Statics::NewProp__gameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenController_Statics::ClassParams = {
		&UScreenController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScreenController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenController, 672003689);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UScreenController>()
	{
		return UScreenController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenController(Z_Construct_UClass_UScreenController, &UScreenController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UScreenController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
