// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SkillCheckResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillCheckResponse() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckResponse();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
// End Cross Module References
class UScriptStruct* FSkillCheckResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSkillCheckResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillCheckResponse, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SkillCheckResponse"), sizeof(FSkillCheckResponse), Get_Z_Construct_UScriptStruct_FSkillCheckResponse_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSkillCheckResponse>()
{
	return FSkillCheckResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkillCheckResponse(FSkillCheckResponse::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SkillCheckResponse"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSkillCheckResponse
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSkillCheckResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkillCheckResponse")),new UScriptStruct::TCppStructOps<FSkillCheckResponse>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSkillCheckResponse;
	struct Z_Construct_UScriptStruct_FSkillCheckResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedCountedAsGood_MetaData[];
#endif
		static void NewProp_FailedCountedAsGood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FailedCountedAsGood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTriggeringLoudNoise_MetaData[];
#endif
		static void NewProp_IsTriggeringLoudNoise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTriggeringLoudNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInsane_MetaData[];
#endif
		static void NewProp_IsInsane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInsane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBonus_MetaData[];
#endif
		static void NewProp_IsBonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSuccessful_MetaData[];
#endif
		static void NewProp_IsSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTriggeredByInput_MetaData[];
#endif
		static void NewProp_IsTriggeredByInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTriggeredByInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargeChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillCheckResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckResponse, Interaction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Interaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckResponse, Type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_FailedCountedAsGood_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_FailedCountedAsGood_SetBit(void* Obj)
	{
		((FSkillCheckResponse*)Obj)->FailedCountedAsGood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_FailedCountedAsGood = { "FailedCountedAsGood", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckResponse), &Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_FailedCountedAsGood_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_FailedCountedAsGood_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_FailedCountedAsGood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeringLoudNoise_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeringLoudNoise_SetBit(void* Obj)
	{
		((FSkillCheckResponse*)Obj)->IsTriggeringLoudNoise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeringLoudNoise = { "IsTriggeringLoudNoise", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckResponse), &Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeringLoudNoise_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeringLoudNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeringLoudNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsInsane_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsInsane_SetBit(void* Obj)
	{
		((FSkillCheckResponse*)Obj)->IsInsane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsInsane = { "IsInsane", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckResponse), &Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsInsane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsInsane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsInsane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsBonus_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsBonus_SetBit(void* Obj)
	{
		((FSkillCheckResponse*)Obj)->IsBonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsBonus = { "IsBonus", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckResponse), &Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsBonus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsSuccessful_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsSuccessful_SetBit(void* Obj)
	{
		((FSkillCheckResponse*)Obj)->IsSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsSuccessful = { "IsSuccessful", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckResponse), &Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeredByInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeredByInput_SetBit(void* Obj)
	{
		((FSkillCheckResponse*)Obj)->IsTriggeredByInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeredByInput = { "IsTriggeredByInput", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckResponse), &Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeredByInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeredByInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeredByInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_ChargeChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_ChargeChange = { "ChargeChange", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckResponse, ChargeChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_ChargeChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_ChargeChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_FailedCountedAsGood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeringLoudNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsInsane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_IsTriggeredByInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::NewProp_ChargeChange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SkillCheckResponse",
		sizeof(FSkillCheckResponse),
		alignof(FSkillCheckResponse),
		Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkillCheckResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkillCheckResponse"), sizeof(FSkillCheckResponse), Get_Z_Construct_UScriptStruct_FSkillCheckResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkillCheckResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkillCheckResponse_Hash() { return 2424590484U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
