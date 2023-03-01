// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScreenshotViewSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshotViewSetting() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotViewSetting();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FScreenshotViewSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FScreenshotViewSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotViewSetting, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ScreenshotViewSetting"), sizeof(FScreenshotViewSetting), Get_Z_Construct_UScriptStruct_FScreenshotViewSetting_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FScreenshotViewSetting>()
{
	return FScreenshotViewSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScreenshotViewSetting(FScreenshotViewSetting::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ScreenshotViewSetting"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFScreenshotViewSetting
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFScreenshotViewSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScreenshotViewSetting")),new UScriptStruct::TCppStructOps<FScreenshotViewSetting>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFScreenshotViewSetting;
	struct Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateralOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateralOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotViewSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "ScreenshotViewSetting" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotViewSetting, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CameraPitch_MetaData[] = {
		{ "Category", "ScreenshotViewSetting" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CameraPitch = { "CameraPitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotViewSetting, CameraPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CameraPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterPitch_MetaData[] = {
		{ "Category", "ScreenshotViewSetting" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterPitch = { "CharacterPitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotViewSetting, CharacterPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterRoll_MetaData[] = {
		{ "Category", "ScreenshotViewSetting" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterRoll = { "CharacterRoll", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotViewSetting, CharacterRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterYaw_MetaData[] = {
		{ "Category", "ScreenshotViewSetting" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterYaw = { "CharacterYaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotViewSetting, CharacterYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_HeightOffset_MetaData[] = {
		{ "Category", "ScreenshotViewSetting" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotViewSetting, HeightOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_HeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_HeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_LateralOffset_MetaData[] = {
		{ "Category", "ScreenshotViewSetting" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_LateralOffset = { "LateralOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotViewSetting, LateralOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_LateralOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_LateralOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "ScreenshotViewSetting" },
		{ "ModuleRelativePath", "Public/ScreenshotViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotViewSetting, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_CharacterYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_HeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_LateralOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::NewProp_Distance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ScreenshotViewSetting",
		sizeof(FScreenshotViewSetting),
		alignof(FScreenshotViewSetting),
		Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenshotViewSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScreenshotViewSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScreenshotViewSetting"), sizeof(FScreenshotViewSetting), Get_Z_Construct_UScriptStruct_FScreenshotViewSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScreenshotViewSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScreenshotViewSetting_Hash() { return 4068108480U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
