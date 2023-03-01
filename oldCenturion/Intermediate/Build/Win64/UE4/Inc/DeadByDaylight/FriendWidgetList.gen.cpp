// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FriendWidgetList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendWidgetList() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendWidgetList();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FFriendWidgetList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FFriendWidgetList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendWidgetList, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("FriendWidgetList"), sizeof(FFriendWidgetList), Get_Z_Construct_UScriptStruct_FFriendWidgetList_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FFriendWidgetList>()
{
	return FFriendWidgetList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFriendWidgetList(FFriendWidgetList::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("FriendWidgetList"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFFriendWidgetList
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFFriendWidgetList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FriendWidgetList")),new UScriptStruct::TCppStructOps<FFriendWidgetList>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFFriendWidgetList;
	struct Z_Construct_UScriptStruct_FFriendWidgetList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendWidgetList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FriendWidgetList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendWidgetList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendWidgetList>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendWidgetList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"FriendWidgetList",
		sizeof(FFriendWidgetList),
		alignof(FFriendWidgetList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendWidgetList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendWidgetList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendWidgetList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFriendWidgetList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FriendWidgetList"), sizeof(FFriendWidgetList), Get_Z_Construct_UScriptStruct_FFriendWidgetList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFriendWidgetList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFriendWidgetList_Hash() { return 3228370263U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
