// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26AttachmentStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26AttachmentStatus() {}
// Cross Module References
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FK26AttachmentStatus();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	THEK26_API UEnum* Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason();
// End Cross Module References
class UScriptStruct* FK26AttachmentStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK26_API uint32 Get_Z_Construct_UScriptStruct_FK26AttachmentStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK26AttachmentStatus, Z_Construct_UPackage__Script_TheK26(), TEXT("K26AttachmentStatus"), sizeof(FK26AttachmentStatus), Get_Z_Construct_UScriptStruct_FK26AttachmentStatus_Hash());
	}
	return Singleton;
}
template<> THEK26_API UScriptStruct* StaticStruct<FK26AttachmentStatus>()
{
	return FK26AttachmentStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK26AttachmentStatus(FK26AttachmentStatus::StaticStruct, TEXT("/Script/TheK26"), TEXT("K26AttachmentStatus"), false, nullptr, nullptr);
static struct FScriptStruct_TheK26_StaticRegisterNativesFK26AttachmentStatus
{
	FScriptStruct_TheK26_StaticRegisterNativesFK26AttachmentStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K26AttachmentStatus")),new UScriptStruct::TCppStructOps<FK26AttachmentStatus>);
	}
} ScriptStruct_TheK26_StaticRegisterNativesFK26AttachmentStatus;
	struct Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttached_MetaData[];
#endif
		static void NewProp_IsAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemovalReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastRemovalReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastRemovalReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K26AttachmentStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK26AttachmentStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_IsAttached_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26AttachmentStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_IsAttached_SetBit(void* Obj)
	{
		((FK26AttachmentStatus*)Obj)->IsAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_IsAttached = { "IsAttached", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK26AttachmentStatus), &Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_IsAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_IsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_IsAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_LastRemovalReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26AttachmentStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_LastRemovalReason = { "LastRemovalReason", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26AttachmentStatus, LastRemovalReason), Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_LastRemovalReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_LastRemovalReason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_LastRemovalReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_IsAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_LastRemovalReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::NewProp_LastRemovalReason_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
		nullptr,
		&NewStructOps,
		"K26AttachmentStatus",
		sizeof(FK26AttachmentStatus),
		alignof(FK26AttachmentStatus),
		Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK26AttachmentStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK26AttachmentStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK26();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K26AttachmentStatus"), sizeof(FK26AttachmentStatus), Get_Z_Construct_UScriptStruct_FK26AttachmentStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK26AttachmentStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK26AttachmentStatus_Hash() { return 1933024052U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
