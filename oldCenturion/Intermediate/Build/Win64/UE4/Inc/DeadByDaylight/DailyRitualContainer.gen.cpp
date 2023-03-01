// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DailyRitualContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualContainer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualContainer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FDailyRitualContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDailyRitualContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyRitualContainer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DailyRitualContainer"), sizeof(FDailyRitualContainer), Get_Z_Construct_UScriptStruct_FDailyRitualContainer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDailyRitualContainer>()
{
	return FDailyRitualContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyRitualContainer(FDailyRitualContainer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DailyRitualContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualContainer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DailyRitualContainer")),new UScriptStruct::TCppStructOps<FDailyRitualContainer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualContainer;
	struct Z_Construct_UScriptStruct_FDailyRitualContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rituals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rituals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRitualDismissedDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRitualDismissedDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRitualPopupDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRitualPopupDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRitualReceivedDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRitualReceivedDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyRitualContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_Rituals_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_Rituals = { "Rituals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualContainer, Rituals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_Rituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_Rituals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_Rituals_Inner = { "Rituals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDailyRitualInstance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualDismissedDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualDismissedDate = { "LastRitualDismissedDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualContainer, LastRitualDismissedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualDismissedDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualDismissedDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualPopupDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualPopupDate = { "LastRitualPopupDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualContainer, LastRitualPopupDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualPopupDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualPopupDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualReceivedDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualReceivedDate = { "LastRitualReceivedDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualContainer, LastRitualReceivedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualReceivedDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualReceivedDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_Rituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_Rituals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualDismissedDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualPopupDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::NewProp_LastRitualReceivedDate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DailyRitualContainer",
		sizeof(FDailyRitualContainer),
		alignof(FDailyRitualContainer),
		Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyRitualContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyRitualContainer"), sizeof(FDailyRitualContainer), Get_Z_Construct_UScriptStruct_FDailyRitualContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyRitualContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyRitualContainer_Hash() { return 1233112669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
