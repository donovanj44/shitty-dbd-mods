// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerReadyStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerReadyStatusData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerReadyStatusData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FPlayerReadyStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerReadyStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerReadyStatusData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerReadyStatusData"), sizeof(FPlayerReadyStatusData), Get_Z_Construct_UScriptStruct_FPlayerReadyStatusData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerReadyStatusData>()
{
	return FPlayerReadyStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerReadyStatusData(FPlayerReadyStatusData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerReadyStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerReadyStatusData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerReadyStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerReadyStatusData")),new UScriptStruct::TCppStructOps<FPlayerReadyStatusData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerReadyStatusData;
	struct Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocalPlayer_MetaData[];
#endif
		static void NewProp_IsLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocalPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasher_MetaData[];
#endif
		static void NewProp_IsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReady_MetaData[];
#endif
		static void NewProp_IsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerReadyStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerReadyStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsLocalPlayer_MetaData[] = {
		{ "Category", "PlayerReadyStatusData" },
		{ "ModuleRelativePath", "Public/PlayerReadyStatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsLocalPlayer_SetBit(void* Obj)
	{
		((FPlayerReadyStatusData*)Obj)->IsLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsLocalPlayer = { "IsLocalPlayer", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerReadyStatusData), &Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsSlasher_MetaData[] = {
		{ "Category", "PlayerReadyStatusData" },
		{ "ModuleRelativePath", "Public/PlayerReadyStatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsSlasher_SetBit(void* Obj)
	{
		((FPlayerReadyStatusData*)Obj)->IsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsSlasher = { "IsSlasher", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerReadyStatusData), &Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsSlasher_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsReady_MetaData[] = {
		{ "Category", "PlayerReadyStatusData" },
		{ "ModuleRelativePath", "Public/PlayerReadyStatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsReady_SetBit(void* Obj)
	{
		((FPlayerReadyStatusData*)Obj)->IsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsReady = { "IsReady", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerReadyStatusData), &Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsReady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "PlayerReadyStatusData" },
		{ "ModuleRelativePath", "Public/PlayerReadyStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerReadyStatusData, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsLocalPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_IsReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::NewProp_PlayerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerReadyStatusData",
		sizeof(FPlayerReadyStatusData),
		alignof(FPlayerReadyStatusData),
		Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerReadyStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerReadyStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerReadyStatusData"), sizeof(FPlayerReadyStatusData), Get_Z_Construct_UScriptStruct_FPlayerReadyStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerReadyStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerReadyStatusData_Hash() { return 1801426412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
