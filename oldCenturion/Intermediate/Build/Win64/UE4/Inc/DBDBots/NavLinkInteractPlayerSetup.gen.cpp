// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavLinkInteractPlayerSetup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkInteractPlayerSetup() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes();
// End Cross Module References
class UScriptStruct* FNavLinkInteractPlayerSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup, Z_Construct_UPackage__Script_DBDBots(), TEXT("NavLinkInteractPlayerSetup"), sizeof(FNavLinkInteractPlayerSetup), Get_Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FNavLinkInteractPlayerSetup>()
{
	return FNavLinkInteractPlayerSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavLinkInteractPlayerSetup(FNavLinkInteractPlayerSetup::StaticStruct, TEXT("/Script/DBDBots"), TEXT("NavLinkInteractPlayerSetup"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFNavLinkInteractPlayerSetup
{
	FScriptStruct_DBDBots_StaticRegisterNativesFNavLinkInteractPlayerSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavLinkInteractPlayerSetup")),new UScriptStruct::TCppStructOps<FNavLinkInteractPlayerSetup>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFNavLinkInteractPlayerSetup;
	struct Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTimeDeviationInChase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputTimeDeviationInChase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractionIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractionIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NavLinkInteractPlayerSetup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavLinkInteractPlayerSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InputTimeDeviationInChase_MetaData[] = {
		{ "Category", "NavLinkInteractPlayerSetup" },
		{ "ModuleRelativePath", "Public/NavLinkInteractPlayerSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InputTimeDeviationInChase = { "InputTimeDeviationInChase", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavLinkInteractPlayerSetup, InputTimeDeviationInChase), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InputTimeDeviationInChase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InputTimeDeviationInChase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InteractionIds_MetaData[] = {
		{ "Category", "NavLinkInteractPlayerSetup" },
		{ "ModuleRelativePath", "Public/NavLinkInteractPlayerSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InteractionIds = { "InteractionIds", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavLinkInteractPlayerSetup, InteractionIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InteractionIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InteractionIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InteractionIds_Inner = { "InteractionIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "NavLinkInteractPlayerSetup" },
		{ "ModuleRelativePath", "Public/NavLinkInteractPlayerSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavLinkInteractPlayerSetup, Input), Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InputTimeDeviationInChase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InteractionIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_InteractionIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::NewProp_Input_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"NavLinkInteractPlayerSetup",
		sizeof(FNavLinkInteractPlayerSetup),
		alignof(FNavLinkInteractPlayerSetup),
		Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavLinkInteractPlayerSetup"), sizeof(FNavLinkInteractPlayerSetup), Get_Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup_Hash() { return 2210964114U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
