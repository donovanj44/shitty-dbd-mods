// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25SurvivorChainAttachmentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25SurvivorChainAttachmentData() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainAttachmentLimbType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection();
// End Cross Module References
class UScriptStruct* FK25SurvivorChainAttachmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData, Z_Construct_UPackage__Script_TheK25(), TEXT("K25SurvivorChainAttachmentData"), sizeof(FK25SurvivorChainAttachmentData), Get_Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FK25SurvivorChainAttachmentData>()
{
	return FK25SurvivorChainAttachmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK25SurvivorChainAttachmentData(FK25SurvivorChainAttachmentData::StaticStruct, TEXT("/Script/TheK25"), TEXT("K25SurvivorChainAttachmentData"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFK25SurvivorChainAttachmentData
{
	FScriptStruct_TheK25_StaticRegisterNativesFK25SurvivorChainAttachmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K25SurvivorChainAttachmentData")),new UScriptStruct::TCppStructOps<FK25SurvivorChainAttachmentData>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFK25SurvivorChainAttachmentData;
	struct Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachedSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attachedSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimbType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LimbType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LimbType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFlexibleLimb_MetaData[];
#endif
		static void NewProp_IsFlexibleLimb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFlexibleLimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnchorName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK25SurvivorChainAttachmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp__attachedSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp__attachedSurvivor = { "_attachedSurvivor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25SurvivorChainAttachmentData, _attachedSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp__attachedSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp__attachedSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_LimbType_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentData" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_LimbType = { "LimbType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25SurvivorChainAttachmentData, LimbType), Z_Construct_UEnum_TheK25_EK25ChainAttachmentLimbType, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_LimbType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_LimbType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_LimbType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_IsFlexibleLimb_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentData" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_IsFlexibleLimb_SetBit(void* Obj)
	{
		((FK25SurvivorChainAttachmentData*)Obj)->IsFlexibleLimb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_IsFlexibleLimb = { "IsFlexibleLimb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK25SurvivorChainAttachmentData), &Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_IsFlexibleLimb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_IsFlexibleLimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_IsFlexibleLimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentData" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25SurvivorChainAttachmentData, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentData" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25SurvivorChainAttachmentData, Direction), Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_AnchorName_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentData" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_AnchorName = { "AnchorName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25SurvivorChainAttachmentData, AnchorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_AnchorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_AnchorName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp__attachedSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_LimbType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_LimbType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_IsFlexibleLimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_RelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::NewProp_AnchorName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"K25SurvivorChainAttachmentData",
		sizeof(FK25SurvivorChainAttachmentData),
		alignof(FK25SurvivorChainAttachmentData),
		Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K25SurvivorChainAttachmentData"), sizeof(FK25SurvivorChainAttachmentData), Get_Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData_Hash() { return 2646421913U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
