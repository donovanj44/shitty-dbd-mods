// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LobbyLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALobbyLevel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALobbyLevel();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADisplayStand_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALobbyLevel::execOnLobbySubLevelLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLobbySubLevelLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyLevel::execOnShopSubLevelLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShopSubLevelLoaded();
		P_NATIVE_END;
	}
	void ALobbyLevel::StaticRegisterNativesALobbyLevel()
	{
		UClass* Class = ALobbyLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLobbySubLevelLoaded", &ALobbyLevel::execOnLobbySubLevelLoaded },
			{ "OnShopSubLevelLoaded", &ALobbyLevel::execOnShopSubLevelLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyLevel_OnLobbySubLevelLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyLevel_OnLobbySubLevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyLevel_OnLobbySubLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyLevel, nullptr, "OnLobbySubLevelLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyLevel_OnLobbySubLevelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyLevel_OnLobbySubLevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyLevel_OnLobbySubLevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyLevel_OnLobbySubLevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyLevel_OnShopSubLevelLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyLevel_OnShopSubLevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyLevel_OnShopSubLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyLevel, nullptr, "OnShopSubLevelLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyLevel_OnShopSubLevelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyLevel_OnShopSubLevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyLevel_OnShopSubLevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyLevel_OnShopSubLevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALobbyLevel_NoRegister()
	{
		return ALobbyLevel::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyLoadedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LobbyLoadedEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LobbyLoadedEvent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__registeredDisplayStands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__registeredDisplayStands;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__registeredDisplayStands_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyLevel_OnLobbySubLevelLoaded, "OnLobbySubLevelLoaded" }, // 2838593326
		{ &Z_Construct_UFunction_ALobbyLevel_OnShopSubLevelLoaded, "OnShopSubLevelLoaded" }, // 2101850086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LobbyLevel.h" },
		{ "ModuleRelativePath", "Public/LobbyLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyLevel_Statics::NewProp_LobbyLoadedEvent_MetaData[] = {
		{ "Category", "LobbyLevel" },
		{ "ModuleRelativePath", "Public/LobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALobbyLevel_Statics::NewProp_LobbyLoadedEvent = { "LobbyLoadedEvent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALobbyLevel, LobbyLoadedEvent), Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent, METADATA_PARAMS(Z_Construct_UClass_ALobbyLevel_Statics::NewProp_LobbyLoadedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyLevel_Statics::NewProp_LobbyLoadedEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALobbyLevel_Statics::NewProp_LobbyLoadedEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyLevel_Statics::NewProp__registeredDisplayStands_MetaData[] = {
		{ "ModuleRelativePath", "Public/LobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALobbyLevel_Statics::NewProp__registeredDisplayStands = { "_registeredDisplayStands", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALobbyLevel, _registeredDisplayStands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALobbyLevel_Statics::NewProp__registeredDisplayStands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyLevel_Statics::NewProp__registeredDisplayStands_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALobbyLevel_Statics::NewProp__registeredDisplayStands_Inner = { "_registeredDisplayStands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADisplayStand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyLevel_Statics::NewProp_LobbyLoadedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyLevel_Statics::NewProp_LobbyLoadedEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyLevel_Statics::NewProp__registeredDisplayStands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyLevel_Statics::NewProp__registeredDisplayStands_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALobbyLevel_Statics::ClassParams = {
		&ALobbyLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALobbyLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyLevel_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALobbyLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALobbyLevel, 1892245372);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ALobbyLevel>()
	{
		return ALobbyLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALobbyLevel(Z_Construct_UClass_ALobbyLevel, &ALobbyLevel::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ALobbyLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
