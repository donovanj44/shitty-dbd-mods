// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractButtonInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractButtonInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractButtonInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EButtonType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FInteractButtonInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInteractButtonInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractButtonInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InteractButtonInfo"), sizeof(FInteractButtonInfo), Get_Z_Construct_UScriptStruct_FInteractButtonInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInteractButtonInfo>()
{
	return FInteractButtonInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractButtonInfo(FInteractButtonInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InteractButtonInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractButtonInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractButtonInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractButtonInfo")),new UScriptStruct::TCppStructOps<FInteractButtonInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractButtonInfo;
	struct Z_Construct_UScriptStruct_FInteractButtonInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbJoystickPressedIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbJoystickPressedIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbJoystickUnpressedIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbJoystickUnpressedIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryActionButtonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryActionButtonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryActionButtonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelButtonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CancelButtonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CancelButtonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InteractionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractButtonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InteractButtonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractButtonInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickPressedIcon_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickPressedIcon = { "ThumbJoystickPressedIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, ThumbJoystickPressedIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickPressedIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickPressedIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickUnpressedIcon_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickUnpressedIcon = { "ThumbJoystickUnpressedIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, ThumbJoystickUnpressedIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickUnpressedIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickUnpressedIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AbilityIcon_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AbilityIcon = { "AbilityIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, AbilityIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AbilityIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AbilityIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AttackIcon_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AttackIcon = { "AttackIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, AttackIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AttackIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AttackIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_SecondaryActionButtonType_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_SecondaryActionButtonType = { "SecondaryActionButtonType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, SecondaryActionButtonType), Z_Construct_UEnum_DeadByDaylight_EButtonType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_SecondaryActionButtonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_SecondaryActionButtonType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_SecondaryActionButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_CancelButtonType_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_CancelButtonType = { "CancelButtonType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, CancelButtonType), Z_Construct_UEnum_DeadByDaylight_EButtonType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_CancelButtonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_CancelButtonType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_CancelButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, Icon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionInputType_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionInputType = { "InteractionInputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, InteractionInputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_PlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionID_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionID = { "InteractionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, InteractionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractButtonID_MetaData[] = {
		{ "Category", "InteractButtonInfo" },
		{ "ModuleRelativePath", "Public/InteractButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractButtonID = { "InteractButtonID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractButtonInfo, InteractButtonID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractButtonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractButtonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickPressedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_ThumbJoystickUnpressedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AbilityIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_AttackIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_SecondaryActionButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_SecondaryActionButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_CancelButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_CancelButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_PlayerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::NewProp_InteractButtonID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InteractButtonInfo",
		sizeof(FInteractButtonInfo),
		alignof(FInteractButtonInfo),
		Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractButtonInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractButtonInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractButtonInfo"), sizeof(FInteractButtonInfo), Get_Z_Construct_UScriptStruct_FInteractButtonInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractButtonInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractButtonInfo_Hash() { return 2369974016U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
