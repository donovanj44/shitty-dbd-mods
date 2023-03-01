// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharmSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharmSlot() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharmSlot();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharmAttacher_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharmAttacherAnimationTweak();
// End Cross Module References
class UScriptStruct* FCharmSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharmSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharmSlot, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharmSlot"), sizeof(FCharmSlot), Get_Z_Construct_UScriptStruct_FCharmSlot_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharmSlot>()
{
	return FCharmSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharmSlot(FCharmSlot::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharmSlot"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharmSlot
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharmSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharmSlot")),new UScriptStruct::TCppStructOps<FCharmSlot>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharmSlot;
	struct Z_Construct_UScriptStruct_FCharmSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmAttacherSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharmAttacherSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTweakByTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationTweakByTag;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationTweakByTag_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTweakByTag_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimationTweak_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAnimationTweak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmAttacherClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CharmAttacherClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharmSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharmSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharmSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharmSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherSpawned = { "CharmAttacherSpawned", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharmSlot, CharmAttacherSpawned), Z_Construct_UClass_ACharmAttacher_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag_MetaData[] = {
		{ "Category", "CharmSlot" },
		{ "ModuleRelativePath", "Public/CharmSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag = { "AnimationTweakByTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharmSlot, AnimationTweakByTag), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag_Key_KeyProp = { "AnimationTweakByTag_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag_ValueProp = { "AnimationTweakByTag", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCharmAttacherAnimationTweak, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_DefaultAnimationTweak_MetaData[] = {
		{ "Category", "CharmSlot" },
		{ "ModuleRelativePath", "Public/CharmSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_DefaultAnimationTweak = { "DefaultAnimationTweak", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharmSlot, DefaultAnimationTweak), Z_Construct_UScriptStruct_FCharmAttacherAnimationTweak, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_DefaultAnimationTweak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_DefaultAnimationTweak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherClass_MetaData[] = {
		{ "Category", "CharmSlot" },
		{ "ModuleRelativePath", "Public/CharmSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherClass = { "CharmAttacherClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharmSlot, CharmAttacherClass), Z_Construct_UClass_ACharmAttacher_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "Category", "CharmSlot" },
		{ "ModuleRelativePath", "Public/CharmSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharmSlot, SlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharmSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_AnimationTweakByTag_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_DefaultAnimationTweak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_CharmAttacherClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmSlot_Statics::NewProp_SlotIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharmSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharmSlot",
		sizeof(FCharmSlot),
		alignof(FCharmSlot),
		Z_Construct_UScriptStruct_FCharmSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharmSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharmSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharmSlot"), sizeof(FCharmSlot), Get_Z_Construct_UScriptStruct_FCharmSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharmSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharmSlot_Hash() { return 2828682119U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
