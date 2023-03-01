// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialBehaviourObjectsInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialBehaviourObjectsInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSpecialBehaviourObjectsInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialBehaviourObjectsInfo"), sizeof(FSpecialBehaviourObjectsInfo), Get_Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialBehaviourObjectsInfo>()
{
	return FSpecialBehaviourObjectsInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialBehaviourObjectsInfo(FSpecialBehaviourObjectsInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialBehaviourObjectsInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialBehaviourObjectsInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialBehaviourObjectsInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialBehaviourObjectsInfo")),new UScriptStruct::TCppStructOps<FSpecialBehaviourObjectsInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialBehaviourObjectsInfo;
	struct Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimesInteractedWith_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimesInteractedWith;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialBehaviourId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpecialBehaviourId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialBehaviourObjectsInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialBehaviourObjectsInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_TimesInteractedWith_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpecialBehaviourObjectsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_TimesInteractedWith = { "TimesInteractedWith", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialBehaviourObjectsInfo, TimesInteractedWith), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_TimesInteractedWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_TimesInteractedWith_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_AmountRequired_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpecialBehaviourObjectsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_AmountRequired = { "AmountRequired", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialBehaviourObjectsInfo, AmountRequired), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_AmountRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_AmountRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_SpecialBehaviourId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpecialBehaviourObjectsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_SpecialBehaviourId = { "SpecialBehaviourId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialBehaviourObjectsInfo, SpecialBehaviourId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_SpecialBehaviourId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_SpecialBehaviourId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_TimesInteractedWith,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_AmountRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::NewProp_SpecialBehaviourId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SpecialBehaviourObjectsInfo",
		sizeof(FSpecialBehaviourObjectsInfo),
		alignof(FSpecialBehaviourObjectsInfo),
		Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialBehaviourObjectsInfo"), sizeof(FSpecialBehaviourObjectsInfo), Get_Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo_Hash() { return 3705378613U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
