// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingSequenceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingSequenceManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AOfferingSequenceManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AOfferingSequenceManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDLobbyHud_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AOfferingSequenceAssets_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOfferingHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOfferingSequenceManager::execFadeInScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeInScreen();
		P_NATIVE_END;
	}
	void AOfferingSequenceManager::StaticRegisterNativesAOfferingSequenceManager()
	{
		UClass* Class = AOfferingSequenceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FadeInScreen", &AOfferingSequenceManager::execFadeInScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOfferingSequenceManager_FadeInScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOfferingSequenceManager_FadeInScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOfferingSequenceManager_FadeInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOfferingSequenceManager, nullptr, "FadeInScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOfferingSequenceManager_FadeInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOfferingSequenceManager_FadeInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOfferingSequenceManager_FadeInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOfferingSequenceManager_FadeInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOfferingSequenceManager_NoRegister()
	{
		return AOfferingSequenceManager::StaticClass();
	}
	struct Z_Construct_UClass_AOfferingSequenceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offeringCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__offeringCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sequenceAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sequenceAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offeringHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__offeringHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__localPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOfferingSequenceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOfferingSequenceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOfferingSequenceManager_FadeInScreen, "FadeInScreen" }, // 883142028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingSequenceManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OfferingSequenceManager.h" },
		{ "ModuleRelativePath", "Public/OfferingSequenceManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringCamera = { "_offeringCamera", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfferingSequenceManager, _offeringCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__hud_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__hud = { "_hud", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfferingSequenceManager, _hud), Z_Construct_UClass_ADBDLobbyHud_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__hud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__hud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__sequenceAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__sequenceAssets = { "_sequenceAssets", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfferingSequenceManager, _sequenceAssets), Z_Construct_UClass_AOfferingSequenceAssets_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__sequenceAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__sequenceAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringHandler = { "_offeringHandler", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfferingSequenceManager, _offeringHandler), Z_Construct_UClass_UOfferingHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__localPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__localPlayerController = { "_localPlayerController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfferingSequenceManager, _localPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__localPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__localPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfferingSequenceManager, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOfferingSequenceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__hud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__sequenceAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__offeringHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__localPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingSequenceManager_Statics::NewProp__gameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOfferingSequenceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOfferingSequenceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOfferingSequenceManager_Statics::ClassParams = {
		&AOfferingSequenceManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOfferingSequenceManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingSequenceManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOfferingSequenceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingSequenceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOfferingSequenceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOfferingSequenceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOfferingSequenceManager, 1181755612);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AOfferingSequenceManager>()
	{
		return AOfferingSequenceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOfferingSequenceManager(Z_Construct_UClass_AOfferingSequenceManager, &AOfferingSequenceManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AOfferingSequenceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOfferingSequenceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
