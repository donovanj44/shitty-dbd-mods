// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaLobbyLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaLobbyLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaLobbyLevel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaLobbyLevel();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALobbyLevel();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaOfflineLobbyCamera_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
// End Cross Module References
	DEFINE_FUNCTION(AAtlantaLobbyLevel::execOnBackPawnSpawned)
	{
		P_GET_OBJECT(AActor,Z_Param_backgroundPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackPawnSpawned(Z_Param_backgroundPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtlantaLobbyLevel::execOnFrontPawnSpawned)
	{
		P_GET_OBJECT(AActor,Z_Param_forefrontPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFrontPawnSpawned(Z_Param_forefrontPawn);
		P_NATIVE_END;
	}
	void AAtlantaLobbyLevel::StaticRegisterNativesAAtlantaLobbyLevel()
	{
		UClass* Class = AAtlantaLobbyLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackPawnSpawned", &AAtlantaLobbyLevel::execOnBackPawnSpawned },
			{ "OnFrontPawnSpawned", &AAtlantaLobbyLevel::execOnFrontPawnSpawned },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics
	{
		struct AtlantaLobbyLevel_eventOnBackPawnSpawned_Parms
		{
			AActor* backgroundPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_backgroundPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::NewProp_backgroundPawn = { "backgroundPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaLobbyLevel_eventOnBackPawnSpawned_Parms, backgroundPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::NewProp_backgroundPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaLobbyLevel, nullptr, "OnBackPawnSpawned", nullptr, nullptr, sizeof(AtlantaLobbyLevel_eventOnBackPawnSpawned_Parms), Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics
	{
		struct AtlantaLobbyLevel_eventOnFrontPawnSpawned_Parms
		{
			AActor* forefrontPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_forefrontPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::NewProp_forefrontPawn = { "forefrontPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaLobbyLevel_eventOnFrontPawnSpawned_Parms, forefrontPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::NewProp_forefrontPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaLobbyLevel, nullptr, "OnFrontPawnSpawned", nullptr, nullptr, sizeof(AtlantaLobbyLevel_eventOnFrontPawnSpawned_Parms), Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtlantaLobbyLevel_NoRegister()
	{
		return AAtlantaLobbyLevel::StaticClass();
	}
	struct Z_Construct_UClass_AAtlantaLobbyLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadoutSelectionLobbyCameraPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__loadoutSelectionLobbyCameraPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterSelectionLobbyCameraPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterSelectionLobbyCameraPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__roleSelectionLobbyCameraPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__roleSelectionLobbyCameraPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offlineLobbyCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__offlineLobbyCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundLightingChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundLightingChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForefrontLightingChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForefrontLightingChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtlantaLobbyLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALobbyLevel,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtlantaLobbyLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtlantaLobbyLevel_OnBackPawnSpawned, "OnBackPawnSpawned" }, // 3483437738
		{ &Z_Construct_UFunction_AAtlantaLobbyLevel_OnFrontPawnSpawned, "OnFrontPawnSpawned" }, // 2071896227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaLobbyLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AtlantaLobbyLevel.h" },
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__loadoutSelectionLobbyCameraPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__loadoutSelectionLobbyCameraPosition = { "_loadoutSelectionLobbyCameraPosition", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaLobbyLevel, _loadoutSelectionLobbyCameraPosition), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__loadoutSelectionLobbyCameraPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__loadoutSelectionLobbyCameraPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__characterSelectionLobbyCameraPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__characterSelectionLobbyCameraPosition = { "_characterSelectionLobbyCameraPosition", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaLobbyLevel, _characterSelectionLobbyCameraPosition), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__characterSelectionLobbyCameraPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__characterSelectionLobbyCameraPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__roleSelectionLobbyCameraPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__roleSelectionLobbyCameraPosition = { "_roleSelectionLobbyCameraPosition", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaLobbyLevel, _roleSelectionLobbyCameraPosition), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__roleSelectionLobbyCameraPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__roleSelectionLobbyCameraPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__offlineLobbyCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__offlineLobbyCamera = { "_offlineLobbyCamera", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaLobbyLevel, _offlineLobbyCamera), Z_Construct_UClass_AAtlantaOfflineLobbyCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__offlineLobbyCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__offlineLobbyCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_BackgroundLightingChannel_MetaData[] = {
		{ "Category", "AtlantaLobbyLevel" },
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_BackgroundLightingChannel = { "BackgroundLightingChannel", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaLobbyLevel, BackgroundLightingChannel), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_BackgroundLightingChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_BackgroundLightingChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_ForefrontLightingChannel_MetaData[] = {
		{ "Category", "AtlantaLobbyLevel" },
		{ "ModuleRelativePath", "Public/AtlantaLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_ForefrontLightingChannel = { "ForefrontLightingChannel", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaLobbyLevel, ForefrontLightingChannel), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_ForefrontLightingChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_ForefrontLightingChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtlantaLobbyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__loadoutSelectionLobbyCameraPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__characterSelectionLobbyCameraPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__roleSelectionLobbyCameraPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp__offlineLobbyCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_BackgroundLightingChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaLobbyLevel_Statics::NewProp_ForefrontLightingChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtlantaLobbyLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtlantaLobbyLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtlantaLobbyLevel_Statics::ClassParams = {
		&AAtlantaLobbyLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtlantaLobbyLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaLobbyLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtlantaLobbyLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtlantaLobbyLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtlantaLobbyLevel, 2419402402);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AAtlantaLobbyLevel>()
	{
		return AAtlantaLobbyLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtlantaLobbyLevel(Z_Construct_UClass_AAtlantaLobbyLevel, &AAtlantaLobbyLevel::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AAtlantaLobbyLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtlantaLobbyLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
