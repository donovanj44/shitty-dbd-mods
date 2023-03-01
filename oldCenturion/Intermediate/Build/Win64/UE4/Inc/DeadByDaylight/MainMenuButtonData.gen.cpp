// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MainMenuButtonData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuButtonData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMainMenuButtonData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EMainMenuButton();
// End Cross Module References
class UScriptStruct* FMainMenuButtonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMainMenuButtonData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMainMenuButtonData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MainMenuButtonData"), sizeof(FMainMenuButtonData), Get_Z_Construct_UScriptStruct_FMainMenuButtonData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMainMenuButtonData>()
{
	return FMainMenuButtonData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMainMenuButtonData(FMainMenuButtonData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MainMenuButtonData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMainMenuButtonData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMainMenuButtonData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MainMenuButtonData")),new UScriptStruct::TCppStructOps<FMainMenuButtonData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMainMenuButtonData;
	struct Z_Construct_UScriptStruct_FMainMenuButtonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHidden_MetaData[];
#endif
		static void NewProp_IsHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDisabled_MetaData[];
#endif
		static void NewProp_IsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedInfoDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LockedInfoDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedInfoTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LockedInfoTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InfoDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InfoTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMainMenuButtonData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsHidden_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsHidden_SetBit(void* Obj)
	{
		((FMainMenuButtonData*)Obj)->IsHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsHidden = { "IsHidden", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMainMenuButtonData), &Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((FMainMenuButtonData*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMainMenuButtonData), &Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsDisabled_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsDisabled_SetBit(void* Obj)
	{
		((FMainMenuButtonData*)Obj)->IsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsDisabled = { "IsDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMainMenuButtonData), &Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoDescription_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoDescription = { "LockedInfoDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuButtonData, LockedInfoDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoTitle_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoTitle = { "LockedInfoTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuButtonData, LockedInfoTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoDescription_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoDescription = { "InfoDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuButtonData, InfoDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoTitle_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoTitle = { "InfoTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuButtonData, InfoTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuButtonData, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_ButtonType_MetaData[] = {
		{ "Category", "MainMenuButtonData" },
		{ "ModuleRelativePath", "Public/MainMenuButtonData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_ButtonType = { "ButtonType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuButtonData, ButtonType), Z_Construct_UEnum_DeadByDaylight_EMainMenuButton, METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_ButtonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_ButtonType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_ButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_IsDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_LockedInfoTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_InfoTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_ButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::NewProp_ButtonType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"MainMenuButtonData",
		sizeof(FMainMenuButtonData),
		alignof(FMainMenuButtonData),
		Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMainMenuButtonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMainMenuButtonData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MainMenuButtonData"), sizeof(FMainMenuButtonData), Get_Z_Construct_UScriptStruct_FMainMenuButtonData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMainMenuButtonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMainMenuButtonData_Hash() { return 1720658930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
