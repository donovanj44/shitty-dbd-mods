// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Toast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToast() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FToast();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EToastInputType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FToastButton();
// End Cross Module References
class UScriptStruct* FToast::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FToast_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToast, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("Toast"), sizeof(FToast), Get_Z_Construct_UScriptStruct_FToast_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FToast>()
{
	return FToast::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToast(FToast::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("Toast"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFToast
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFToast()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Toast")),new UScriptStruct::TCppStructOps<FToast>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFToast;
	struct Z_Construct_UScriptStruct_FToast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToastIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ToastIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ButtonsData;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonsData_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ButtonsData_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonsData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToastText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ToastText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToast_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Toast.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToast_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToast>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastIcon_MetaData[] = {
		{ "Category", "Toast" },
		{ "ModuleRelativePath", "Public/Toast.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastIcon = { "ToastIcon", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToast, ToastIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToast_Statics::NewProp_DelayBeforeInteraction_MetaData[] = {
		{ "Category", "Toast" },
		{ "ModuleRelativePath", "Public/Toast.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_DelayBeforeInteraction = { "DelayBeforeInteraction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToast, DelayBeforeInteraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FToast_Statics::NewProp_DelayBeforeInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToast_Statics::NewProp_DelayBeforeInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_MetaData[] = {
		{ "Category", "Toast" },
		{ "ModuleRelativePath", "Public/Toast.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData = { "ButtonsData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToast, ButtonsData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_Key_KeyProp = { "ButtonsData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EToastInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_ValueProp = { "ButtonsData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FToastButton, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastText_MetaData[] = {
		{ "Category", "Toast" },
		{ "ModuleRelativePath", "Public/Toast.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastText = { "ToastText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToast, ToastText), METADATA_PARAMS(Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToast_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "Toast" },
		{ "ModuleRelativePath", "Public/Toast.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToast, Lifetime), METADATA_PARAMS(Z_Construct_UScriptStruct_FToast_Statics::NewProp_Lifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToast_Statics::NewProp_Lifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToast_Statics::NewProp_DisplayDuration_MetaData[] = {
		{ "Category", "Toast" },
		{ "ModuleRelativePath", "Public/Toast.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToast_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToast, DisplayDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FToast_Statics::NewProp_DisplayDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToast_Statics::NewProp_DisplayDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_DelayBeforeInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_ButtonsData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_ToastText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToast_Statics::NewProp_DisplayDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToast_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"Toast",
		sizeof(FToast),
		alignof(FToast),
		Z_Construct_UScriptStruct_FToast_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToast_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToast_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToast_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToast()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToast_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Toast"), sizeof(FToast), Get_Z_Construct_UScriptStruct_FToast_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToast_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToast_Hash() { return 1361100246U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
