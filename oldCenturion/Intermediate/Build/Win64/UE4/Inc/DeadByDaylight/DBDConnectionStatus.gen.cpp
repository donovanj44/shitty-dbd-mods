// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDConnectionStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDConnectionStatus() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDConnectionStatus();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
class UScriptStruct* FDBDConnectionStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDConnectionStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDConnectionStatus, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDConnectionStatus"), sizeof(FDBDConnectionStatus), Get_Z_Construct_UScriptStruct_FDBDConnectionStatus_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDConnectionStatus>()
{
	return FDBDConnectionStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDConnectionStatus(FDBDConnectionStatus::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDConnectionStatus"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDConnectionStatus
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDConnectionStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDConnectionStatus")),new UScriptStruct::TCppStructOps<FDBDConnectionStatus>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDConnectionStatus;
	struct Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDConnectionStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDConnectionStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDConnectionStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDConnectionStatus, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::NewProp__gameInstance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDConnectionStatus",
		sizeof(FDBDConnectionStatus),
		alignof(FDBDConnectionStatus),
		Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDConnectionStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDConnectionStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDConnectionStatus"), sizeof(FDBDConnectionStatus), Get_Z_Construct_UScriptStruct_FDBDConnectionStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDConnectionStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDConnectionStatus_Hash() { return 1178391437U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
