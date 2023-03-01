// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/ASDisplayInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASDisplayInfo() {}
// Cross Module References
	SCALEFORMUI_API UScriptStruct* Z_Construct_UScriptStruct_FASDisplayInfo();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FASDisplayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCALEFORMUI_API uint32 Get_Z_Construct_UScriptStruct_FASDisplayInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASDisplayInfo, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("ASDisplayInfo"), sizeof(FASDisplayInfo), Get_Z_Construct_UScriptStruct_FASDisplayInfo_Hash());
	}
	return Singleton;
}
template<> SCALEFORMUI_API UScriptStruct* StaticStruct<FASDisplayInfo>()
{
	return FASDisplayInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASDisplayInfo(FASDisplayInfo::StaticStruct, TEXT("/Script/ScaleformUI"), TEXT("ASDisplayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ScaleformUI_StaticRegisterNativesFASDisplayInfo
{
	FScriptStruct_ScaleformUI_StaticRegisterNativesFASDisplayInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASDisplayInfo")),new UScriptStruct::TCppStructOps<FASDisplayInfo>);
	}
} ScriptStruct_ScaleformUI_StaticRegisterNativesFASDisplayInfo;
	struct Z_Construct_UScriptStruct_FASDisplayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDisplayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASDisplayInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASDisplayInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Visible_MetaData[] = {
		{ "Category", "ASDisplayInfo" },
		{ "ModuleRelativePath", "Public/ASDisplayInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((FASDisplayInfo*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FASDisplayInfo), &Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Visible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "ASDisplayInfo" },
		{ "ModuleRelativePath", "Public/ASDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDisplayInfo, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_YRotation_MetaData[] = {
		{ "Category", "ASDisplayInfo" },
		{ "ModuleRelativePath", "Public/ASDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_YRotation = { "YRotation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDisplayInfo, YRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_YRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_YRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_XRotation_MetaData[] = {
		{ "Category", "ASDisplayInfo" },
		{ "ModuleRelativePath", "Public/ASDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_XRotation = { "XRotation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDisplayInfo, XRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_XRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_XRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "ASDisplayInfo" },
		{ "ModuleRelativePath", "Public/ASDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDisplayInfo, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "ASDisplayInfo" },
		{ "ModuleRelativePath", "Public/ASDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDisplayInfo, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "ASDisplayInfo" },
		{ "ModuleRelativePath", "Public/ASDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDisplayInfo, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASDisplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_YRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_XRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDisplayInfo_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASDisplayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleformUI,
		nullptr,
		&NewStructOps,
		"ASDisplayInfo",
		sizeof(FASDisplayInfo),
		alignof(FASDisplayInfo),
		Z_Construct_UScriptStruct_FASDisplayInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDisplayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASDisplayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASDisplayInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASDisplayInfo"), sizeof(FASDisplayInfo), Get_Z_Construct_UScriptStruct_FASDisplayInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASDisplayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASDisplayInfo_Hash() { return 65924475U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
