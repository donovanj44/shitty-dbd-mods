// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfflineLobbyLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfflineLobbyLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AOfflineLobbyLevel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AOfflineLobbyLevel();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALobbyLevel();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfflineLobbyState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMenuPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADisplayStand_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMenuSilhouette_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharm_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMenuMeatHook_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOfflineLobbyLevel::execCheckDestroyingPawns)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckDestroyingPawns(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	static FName NAME_AOfflineLobbyLevel_OnStateChanged = FName(TEXT("OnStateChanged"));
	void AOfflineLobbyLevel::OnStateChanged(EOfflineLobbyState lobbyState)
	{
		OfflineLobbyLevel_eventOnStateChanged_Parms Parms;
		Parms.lobbyState=lobbyState;
		ProcessEvent(FindFunctionChecked(NAME_AOfflineLobbyLevel_OnStateChanged),&Parms);
	}
	void AOfflineLobbyLevel::StaticRegisterNativesAOfflineLobbyLevel()
	{
		UClass* Class = AOfflineLobbyLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckDestroyingPawns", &AOfflineLobbyLevel::execCheckDestroyingPawns },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics
	{
		struct OfflineLobbyLevel_eventCheckDestroyingPawns_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfflineLobbyLevel_eventCheckDestroyingPawns_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOfflineLobbyLevel, nullptr, "CheckDestroyingPawns", nullptr, nullptr, sizeof(OfflineLobbyLevel_eventCheckDestroyingPawns_Parms), Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lobbyState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lobbyState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::NewProp_lobbyState = { "lobbyState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfflineLobbyLevel_eventOnStateChanged_Parms, lobbyState), Z_Construct_UEnum_DeadByDaylight_EOfflineLobbyState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::NewProp_lobbyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::NewProp_lobbyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::NewProp_lobbyState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOfflineLobbyLevel, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(OfflineLobbyLevel_eventOnStateChanged_Parms), Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOfflineLobbyLevel_NoRegister()
	{
		return AOfflineLobbyLevel::StaticClass();
	}
	struct Z_Construct_UClass_AOfflineLobbyLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__destroyingPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__destroyingPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__destroyingPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyLobbyEmptySlotPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__partyLobbyEmptySlotPawns;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__partyLobbyEmptySlotPawns_Key_KeyProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__partyLobbyEmptySlotPawns_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slasherCharmSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__slasherCharmSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperCharmSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__camperCharmSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charmForCustomizationZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__charmForCustomizationZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meatHookSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__meatHookSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meatHookForCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__meatHookForCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyLobbyCamperDisplayStands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__partyLobbyCamperDisplayStands;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__partyLobbyCamperDisplayStands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyLobbySlasherDisplayStands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__partyLobbySlasherDisplayStands;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__partyLobbySlasherDisplayStands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyLobbyEmptySlotSilhouette_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__partyLobbyEmptySlotSilhouette;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyLobbySlasherPOVTrackerOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__partyLobbySlasherPOVTrackerOffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__partyLobbySlasherPOVTrackerOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offlineLobbyLocalCamperSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__offlineLobbyLocalCamperSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyLobbyEmptySlotFxOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__partyLobbyEmptySlotFxOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offlineLobbyLocalSlasherSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__offlineLobbyLocalSlasherSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__roleSelectionSlasherSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__roleSelectionSlasherSpawns;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__roleSelectionSlasherSpawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__roleSelectionCamperSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__roleSelectionCamperSpawns;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__roleSelectionCamperSpawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyLobbyInviteButtonOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__partyLobbyInviteButtonOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOfflineLobbyLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALobbyLevel,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOfflineLobbyLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOfflineLobbyLevel_CheckDestroyingPawns, "CheckDestroyingPawns" }, // 2047343741
		{ &Z_Construct_UFunction_AOfflineLobbyLevel_OnStateChanged, "OnStateChanged" }, // 2261381335
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OfflineLobbyLevel.h" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__destroyingPawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__destroyingPawns = { "_destroyingPawns", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _destroyingPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__destroyingPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__destroyingPawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__destroyingPawns_Inner = { "_destroyingPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDMenuPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns = { "_partyLobbyEmptySlotPawns", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyEmptySlotPawns), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns_Key_KeyProp = { "_partyLobbyEmptySlotPawns_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADisplayStand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns_ValueProp = { "_partyLobbyEmptySlotPawns", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ADBDMenuSilhouette_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__slasherCharmSpawn_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__slasherCharmSpawn = { "_slasherCharmSpawn", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _slasherCharmSpawn), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__slasherCharmSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__slasherCharmSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__camperCharmSpawn_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__camperCharmSpawn = { "_camperCharmSpawn", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _camperCharmSpawn), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__camperCharmSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__camperCharmSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__charmForCustomizationZoom_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__charmForCustomizationZoom = { "_charmForCustomizationZoom", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _charmForCustomizationZoom), Z_Construct_UClass_ACharm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__charmForCustomizationZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__charmForCustomizationZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookSpawn_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookSpawn = { "_meatHookSpawn", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _meatHookSpawn), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookForCustomization_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookForCustomization = { "_meatHookForCustomization", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _meatHookForCustomization), Z_Construct_UClass_AMenuMeatHook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookForCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookForCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyCamperDisplayStands_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyCamperDisplayStands = { "_partyLobbyCamperDisplayStands", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyCamperDisplayStands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyCamperDisplayStands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyCamperDisplayStands_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyCamperDisplayStands_Inner = { "_partyLobbyCamperDisplayStands", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADisplayStand_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherDisplayStands_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherDisplayStands = { "_partyLobbySlasherDisplayStands", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbySlasherDisplayStands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherDisplayStands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherDisplayStands_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherDisplayStands_Inner = { "_partyLobbySlasherDisplayStands", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADisplayStand_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotSilhouette_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotSilhouette = { "_partyLobbyEmptySlotSilhouette", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyEmptySlotSilhouette), Z_Construct_UClass_ADBDMenuSilhouette_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotSilhouette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotSilhouette_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherPOVTrackerOffsets_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherPOVTrackerOffsets = { "_partyLobbySlasherPOVTrackerOffsets", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbySlasherPOVTrackerOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherPOVTrackerOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherPOVTrackerOffsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherPOVTrackerOffsets_Inner = { "_partyLobbySlasherPOVTrackerOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalCamperSpawn_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalCamperSpawn = { "_offlineLobbyLocalCamperSpawn", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _offlineLobbyLocalCamperSpawn), Z_Construct_UClass_ADisplayStand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalCamperSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalCamperSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotFxOffset_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotFxOffset = { "_partyLobbyEmptySlotFxOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyEmptySlotFxOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotFxOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotFxOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalSlasherSpawn_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalSlasherSpawn = { "_offlineLobbyLocalSlasherSpawn", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _offlineLobbyLocalSlasherSpawn), Z_Construct_UClass_ADisplayStand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalSlasherSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalSlasherSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionSlasherSpawns_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionSlasherSpawns = { "_roleSelectionSlasherSpawns", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _roleSelectionSlasherSpawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionSlasherSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionSlasherSpawns_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionSlasherSpawns_Inner = { "_roleSelectionSlasherSpawns", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionCamperSpawns_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionCamperSpawns = { "_roleSelectionCamperSpawns", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _roleSelectionCamperSpawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionCamperSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionCamperSpawns_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionCamperSpawns_Inner = { "_roleSelectionCamperSpawns", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyInviteButtonOffset_MetaData[] = {
		{ "Category", "OfflineLobbyLevel" },
		{ "ModuleRelativePath", "Public/OfflineLobbyLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyInviteButtonOffset = { "_partyLobbyInviteButtonOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyInviteButtonOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyInviteButtonOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyInviteButtonOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOfflineLobbyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__destroyingPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__destroyingPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotPawns_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__slasherCharmSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__camperCharmSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__charmForCustomizationZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__meatHookForCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyCamperDisplayStands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyCamperDisplayStands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherDisplayStands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherDisplayStands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotSilhouette,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherPOVTrackerOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbySlasherPOVTrackerOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalCamperSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyEmptySlotFxOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__offlineLobbyLocalSlasherSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionSlasherSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionSlasherSpawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionCamperSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__roleSelectionCamperSpawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfflineLobbyLevel_Statics::NewProp__partyLobbyInviteButtonOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOfflineLobbyLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOfflineLobbyLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOfflineLobbyLevel_Statics::ClassParams = {
		&AOfflineLobbyLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOfflineLobbyLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOfflineLobbyLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOfflineLobbyLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOfflineLobbyLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOfflineLobbyLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOfflineLobbyLevel, 3743197287);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AOfflineLobbyLevel>()
	{
		return AOfflineLobbyLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOfflineLobbyLevel(Z_Construct_UClass_AOfflineLobbyLevel, &AOfflineLobbyLevel::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AOfflineLobbyLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOfflineLobbyLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
