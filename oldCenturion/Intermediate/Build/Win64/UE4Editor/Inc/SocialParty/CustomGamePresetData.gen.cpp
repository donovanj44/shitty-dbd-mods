// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/CustomGamePresetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGamePresetData() {}
// Cross Module References
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FCustomGamePresetData();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FCustomGameBotsData();
// End Cross Module References
class UScriptStruct* FCustomGamePresetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALPARTY_API uint32 Get_Z_Construct_UScriptStruct_FCustomGamePresetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomGamePresetData, Z_Construct_UPackage__Script_SocialParty(), TEXT("CustomGamePresetData"), sizeof(FCustomGamePresetData), Get_Z_Construct_UScriptStruct_FCustomGamePresetData_Hash());
	}
	return Singleton;
}
template<> SOCIALPARTY_API UScriptStruct* StaticStruct<FCustomGamePresetData>()
{
	return FCustomGamePresetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomGamePresetData(FCustomGamePresetData::StaticStruct, TEXT("/Script/SocialParty"), TEXT("CustomGamePresetData"), false, nullptr, nullptr);
static struct FScriptStruct_SocialParty_StaticRegisterNativesFCustomGamePresetData
{
	FScriptStruct_SocialParty_StaticRegisterNativesFCustomGamePresetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomGamePresetData")),new UScriptStruct::TCppStructOps<FCustomGamePresetData>);
	}
} ScriptStruct_SocialParty_StaticRegisterNativesFCustomGamePresetData;
	struct Z_Construct_UScriptStruct_FCustomGamePresetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__botsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__botsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPrivateMatch_MetaData[];
#endif
		static void NewProp__isPrivateMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPrivateMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__areDlcContentAllowed_MetaData[];
#endif
		static void NewProp__areDlcContentAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__areDlcContentAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__areItemAddonAvailable_MetaData[];
#endif
		static void NewProp__areItemAddonAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__areItemAddonAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__areItemAvailable_MetaData[];
#endif
		static void NewProp__areItemAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__areItemAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__areOfferingAvailable_MetaData[];
#endif
		static void NewProp__areOfferingAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__areOfferingAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__arePerkAvailable_MetaData[];
#endif
		static void NewProp__arePerkAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__arePerkAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mapAvailabilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__mapAvailabilities;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__mapAvailabilities_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomGamePresetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__botsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__botsData = { "_botsData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomGamePresetData, _botsData), Z_Construct_UScriptStruct_FCustomGameBotsData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__botsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__botsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__isPrivateMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__isPrivateMatch_SetBit(void* Obj)
	{
		((FCustomGamePresetData*)Obj)->_isPrivateMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__isPrivateMatch = { "_isPrivateMatch", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomGamePresetData), &Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__isPrivateMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__isPrivateMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__isPrivateMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areDlcContentAllowed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areDlcContentAllowed_SetBit(void* Obj)
	{
		((FCustomGamePresetData*)Obj)->_areDlcContentAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areDlcContentAllowed = { "_areDlcContentAllowed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomGamePresetData), &Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areDlcContentAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areDlcContentAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areDlcContentAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAddonAvailable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAddonAvailable_SetBit(void* Obj)
	{
		((FCustomGamePresetData*)Obj)->_areItemAddonAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAddonAvailable = { "_areItemAddonAvailable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomGamePresetData), &Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAddonAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAddonAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAddonAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAvailable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAvailable_SetBit(void* Obj)
	{
		((FCustomGamePresetData*)Obj)->_areItemAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAvailable = { "_areItemAvailable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomGamePresetData), &Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areOfferingAvailable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areOfferingAvailable_SetBit(void* Obj)
	{
		((FCustomGamePresetData*)Obj)->_areOfferingAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areOfferingAvailable = { "_areOfferingAvailable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomGamePresetData), &Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areOfferingAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areOfferingAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areOfferingAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__arePerkAvailable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__arePerkAvailable_SetBit(void* Obj)
	{
		((FCustomGamePresetData*)Obj)->_arePerkAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__arePerkAvailable = { "_arePerkAvailable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomGamePresetData), &Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__arePerkAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__arePerkAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__arePerkAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__mapAvailabilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__mapAvailabilities = { "_mapAvailabilities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomGamePresetData, _mapAvailabilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__mapAvailabilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__mapAvailabilities_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__mapAvailabilities_Inner = { "_mapAvailabilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__botsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__isPrivateMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areDlcContentAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAddonAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areItemAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__areOfferingAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__arePerkAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__mapAvailabilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::NewProp__mapAvailabilities_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialParty,
		nullptr,
		&NewStructOps,
		"CustomGamePresetData",
		sizeof(FCustomGamePresetData),
		alignof(FCustomGamePresetData),
		Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomGamePresetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomGamePresetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomGamePresetData"), sizeof(FCustomGamePresetData), Get_Z_Construct_UScriptStruct_FCustomGamePresetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomGamePresetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomGamePresetData_Hash() { return 2304898184U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
