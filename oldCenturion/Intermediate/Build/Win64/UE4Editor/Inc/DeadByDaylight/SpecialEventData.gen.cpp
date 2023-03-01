// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESpecialEventDependency();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventEntryPopupData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESpecialEventGameMode();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventCinematicData();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventObjectiveData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
class UScriptStruct* FSpecialEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialEventData"), sizeof(FSpecialEventData), Get_Z_Construct_UScriptStruct_FSpecialEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialEventData>()
{
	return FSpecialEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialEventData(FSpecialEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialEventData")),new UScriptStruct::TCppStructOps<FSpecialEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventData;
	struct Z_Construct_UScriptStruct_FSpecialEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventDependency_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventDependency;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventDependency_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventEntryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventEntryData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseEventEntryScreen_MetaData[];
#endif
		static void NewProp_UseEventEntryScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseEventEntryScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cinematics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cinematics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cinematics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayStateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_GameplayStateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayPlayerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_GameplayPlayerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStateSpecialEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioStateSpecialEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShopName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectOutlineColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectOutlineColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objectives;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Objectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSpecialEventLoadingScreen_MetaData[];
#endif
		static void NewProp_UseSpecialEventLoadingScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSpecialEventLoadingScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTrackedOnline_MetaData[];
#endif
		static void NewProp_IsTrackedOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTrackedOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventBannerLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventBannerLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventDependency_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventDependency = { "EventDependency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, EventDependency), Z_Construct_UEnum_DeadByDaylight_ESpecialEventDependency, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventDependency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventDependency_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventDependency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventEntryData_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventEntryData = { "EventEntryData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, EventEntryData), Z_Construct_UScriptStruct_FSpecialEventEntryPopupData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventEntryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventEntryData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseEventEntryScreen_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseEventEntryScreen_SetBit(void* Obj)
	{
		((FSpecialEventData*)Obj)->UseEventEntryScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseEventEntryScreen = { "UseEventEntryScreen", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpecialEventData), &Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseEventEntryScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseEventEntryScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseEventEntryScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, GameMode), Z_Construct_UEnum_DeadByDaylight_ESpecialEventGameMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Cinematics_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Cinematics = { "Cinematics", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, Cinematics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Cinematics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Cinematics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Cinematics_Inner = { "Cinematics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpecialEventCinematicData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayStateComponent_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayStateComponent = { "GameplayStateComponent", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, GameplayStateComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayStateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayStateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayPlayerComponent_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayPlayerComponent = { "GameplayPlayerComponent", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, GameplayPlayerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayPlayerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayPlayerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_AudioStateSpecialEvent_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_AudioStateSpecialEvent = { "AudioStateSpecialEvent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, AudioStateSpecialEvent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_AudioStateSpecialEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_AudioStateSpecialEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ShopName_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ShopName = { "ShopName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, ShopName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ShopName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ShopName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_LobbyName_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_LobbyName = { "LobbyName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, LobbyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_LobbyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_LobbyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ObjectOutlineColour_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ObjectOutlineColour = { "ObjectOutlineColour", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, ObjectOutlineColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ObjectOutlineColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ObjectOutlineColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Objectives_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Objectives_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpecialEventObjectiveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseSpecialEventLoadingScreen_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseSpecialEventLoadingScreen_SetBit(void* Obj)
	{
		((FSpecialEventData*)Obj)->UseSpecialEventLoadingScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseSpecialEventLoadingScreen = { "UseSpecialEventLoadingScreen", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpecialEventData), &Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseSpecialEventLoadingScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseSpecialEventLoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseSpecialEventLoadingScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_IsTrackedOnline_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_IsTrackedOnline_SetBit(void* Obj)
	{
		((FSpecialEventData*)Obj)->IsTrackedOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_IsTrackedOnline = { "IsTrackedOnline", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpecialEventData), &Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_IsTrackedOnline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_IsTrackedOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_IsTrackedOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventBannerLabel_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventBannerLabel = { "EventBannerLabel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, EventBannerLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventBannerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventBannerLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, CurrencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_CurrencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "SpecialEventData" },
		{ "ModuleRelativePath", "Public/SpecialEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventData, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventDependency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventDependency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventEntryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseEventEntryScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Cinematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Cinematics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayStateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_GameplayPlayerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_AudioStateSpecialEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ShopName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_LobbyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_ObjectOutlineColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Objectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_Objectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_UseSpecialEventLoadingScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_IsTrackedOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventBannerLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventData_Statics::NewProp_EventId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"SpecialEventData",
		sizeof(FSpecialEventData),
		alignof(FSpecialEventData),
		Z_Construct_UScriptStruct_FSpecialEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialEventData"), sizeof(FSpecialEventData), Get_Z_Construct_UScriptStruct_FSpecialEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialEventData_Hash() { return 2645620132U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
