// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InboxMessageElapsedTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInboxMessageElapsedTime() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageElapsedTime();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInboxMessageTimeUnit();
// End Cross Module References
class UScriptStruct* FInboxMessageElapsedTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInboxMessageElapsedTime, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InboxMessageElapsedTime"), sizeof(FInboxMessageElapsedTime), Get_Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInboxMessageElapsedTime>()
{
	return FInboxMessageElapsedTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInboxMessageElapsedTime(FInboxMessageElapsedTime::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InboxMessageElapsedTime"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInboxMessageElapsedTime
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInboxMessageElapsedTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InboxMessageElapsedTime")),new UScriptStruct::TCppStructOps<FInboxMessageElapsedTime>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInboxMessageElapsedTime;
	struct Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElapsedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InboxMessageElapsedTime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInboxMessageElapsedTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_TimeUnit_MetaData[] = {
		{ "Category", "InboxMessageElapsedTime" },
		{ "ModuleRelativePath", "Public/InboxMessageElapsedTime.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageElapsedTime, TimeUnit), Z_Construct_UEnum_DeadByDaylight_EInboxMessageTimeUnit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_TimeUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_TimeUnit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "InboxMessageElapsedTime" },
		{ "ModuleRelativePath", "Public/InboxMessageElapsedTime.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInboxMessageElapsedTime, ElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_ElapsedTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_TimeUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_TimeUnit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::NewProp_ElapsedTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"InboxMessageElapsedTime",
		sizeof(FInboxMessageElapsedTime),
		alignof(FInboxMessageElapsedTime),
		Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageElapsedTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InboxMessageElapsedTime"), sizeof(FInboxMessageElapsedTime), Get_Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInboxMessageElapsedTime_Hash() { return 3124807505U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
