// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoadingInfoData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingInfoData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingInfoData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FLoadingInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLoadingInfoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingInfoData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LoadingInfoData"), sizeof(FLoadingInfoData), Get_Z_Construct_UScriptStruct_FLoadingInfoData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLoadingInfoData>()
{
	return FLoadingInfoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingInfoData(FLoadingInfoData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LoadingInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadingInfoData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadingInfoData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadingInfoData")),new UScriptStruct::TCppStructOps<FLoadingInfoData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLoadingInfoData;
	struct Z_Construct_UScriptStruct_FLoadingInfoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableForSurvivor_MetaData[];
#endif
		static void NewProp_IsAvailableForSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableForSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableForKiller_MetaData[];
#endif
		static void NewProp_IsAvailableForKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableForKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingInfoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingInfoData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingInfoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForSurvivor_MetaData[] = {
		{ "Category", "LoadingInfoData" },
		{ "ModuleRelativePath", "Public/LoadingInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForSurvivor_SetBit(void* Obj)
	{
		((FLoadingInfoData*)Obj)->IsAvailableForSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForSurvivor = { "IsAvailableForSurvivor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingInfoData), &Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForKiller_MetaData[] = {
		{ "Category", "LoadingInfoData" },
		{ "ModuleRelativePath", "Public/LoadingInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForKiller_SetBit(void* Obj)
	{
		((FLoadingInfoData*)Obj)->IsAvailableForKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForKiller = { "IsAvailableForKiller", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingInfoData), &Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "LoadingInfoData" },
		{ "ModuleRelativePath", "Public/LoadingInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingInfoData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "LoadingInfoData" },
		{ "ModuleRelativePath", "Public/LoadingInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingInfoData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "LoadingInfoData" },
		{ "ModuleRelativePath", "Public/LoadingInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingInfoData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingInfoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_IsAvailableForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingInfoData_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LoadingInfoData",
		sizeof(FLoadingInfoData),
		alignof(FLoadingInfoData),
		Z_Construct_UScriptStruct_FLoadingInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingInfoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingInfoData"), sizeof(FLoadingInfoData), Get_Z_Construct_UScriptStruct_FLoadingInfoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingInfoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingInfoData_Hash() { return 990857128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
