// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DailyRewardCalendarData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRewardCalendarData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRewardCalendarData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRewardData();
// End Cross Module References
class UScriptStruct* FDailyRewardCalendarData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDailyRewardCalendarData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyRewardCalendarData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DailyRewardCalendarData"), sizeof(FDailyRewardCalendarData), Get_Z_Construct_UScriptStruct_FDailyRewardCalendarData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDailyRewardCalendarData>()
{
	return FDailyRewardCalendarData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyRewardCalendarData(FDailyRewardCalendarData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DailyRewardCalendarData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRewardCalendarData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRewardCalendarData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DailyRewardCalendarData")),new UScriptStruct::TCppStructOps<FDailyRewardCalendarData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRewardCalendarData;
	struct Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSet_MetaData[];
#endif
		static void NewProp_IsSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalendarExpirationDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalendarExpirationDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalendarStartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalendarStartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyActiveDailyRewardIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentlyActiveDailyRewardIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRewardList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DailyRewardList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DailyRewardList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRewardCalendarData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyRewardCalendarData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_IsSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRewardCalendarData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_IsSet_SetBit(void* Obj)
	{
		((FDailyRewardCalendarData*)Obj)->IsSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_IsSet = { "IsSet", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDailyRewardCalendarData), &Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_IsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_IsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_IsSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarExpirationDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRewardCalendarData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarExpirationDate = { "CalendarExpirationDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRewardCalendarData, CalendarExpirationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarExpirationDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarExpirationDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarStartDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRewardCalendarData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarStartDate = { "CalendarStartDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRewardCalendarData, CalendarStartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarStartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarStartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CurrentlyActiveDailyRewardIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRewardCalendarData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CurrentlyActiveDailyRewardIndex = { "CurrentlyActiveDailyRewardIndex", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRewardCalendarData, CurrentlyActiveDailyRewardIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CurrentlyActiveDailyRewardIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CurrentlyActiveDailyRewardIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_DailyRewardList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRewardCalendarData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_DailyRewardList = { "DailyRewardList", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRewardCalendarData, DailyRewardList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_DailyRewardList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_DailyRewardList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_DailyRewardList_Inner = { "DailyRewardList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDailyRewardData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_IsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarExpirationDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CalendarStartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_CurrentlyActiveDailyRewardIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_DailyRewardList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::NewProp_DailyRewardList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DailyRewardCalendarData",
		sizeof(FDailyRewardCalendarData),
		alignof(FDailyRewardCalendarData),
		Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyRewardCalendarData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyRewardCalendarData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyRewardCalendarData"), sizeof(FDailyRewardCalendarData), Get_Z_Construct_UScriptStruct_FDailyRewardCalendarData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyRewardCalendarData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyRewardCalendarData_Hash() { return 496108925U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
