// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/LaunchInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchInfo() {}
// Cross Module References
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo();
	UPackage* Z_Construct_UPackage__Script_Projectile();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
// End Cross Module References
class UScriptStruct* FLaunchInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECTILE_API uint32 Get_Z_Construct_UScriptStruct_FLaunchInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchInfo, Z_Construct_UPackage__Script_Projectile(), TEXT("LaunchInfo"), sizeof(FLaunchInfo), Get_Z_Construct_UScriptStruct_FLaunchInfo_Hash());
	}
	return Singleton;
}
template<> PROJECTILE_API UScriptStruct* StaticStruct<FLaunchInfo>()
{
	return FLaunchInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLaunchInfo(FLaunchInfo::StaticStruct, TEXT("/Script/Projectile"), TEXT("LaunchInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Projectile_StaticRegisterNativesFLaunchInfo
{
	FScriptStruct_Projectile_StaticRegisterNativesFLaunchInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LaunchInfo")),new UScriptStruct::TCppStructOps<FLaunchInfo>);
	}
} ScriptStruct_Projectile_StaticRegisterNativesFLaunchInfo;
	struct Z_Construct_UScriptStruct_FLaunchInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LaunchInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "LaunchInfo" },
		{ "ModuleRelativePath", "Public/LaunchInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchInfo, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "LaunchInfo" },
		{ "ModuleRelativePath", "Public/LaunchInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchInfo, Direction), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "LaunchInfo" },
		{ "ModuleRelativePath", "Public/LaunchInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchInfo, StartPosition), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_StartPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchInfo_Statics::NewProp_StartPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
		nullptr,
		&NewStructOps,
		"LaunchInfo",
		sizeof(FLaunchInfo),
		alignof(FLaunchInfo),
		Z_Construct_UScriptStruct_FLaunchInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLaunchInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Projectile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LaunchInfo"), sizeof(FLaunchInfo), Get_Z_Construct_UScriptStruct_FLaunchInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLaunchInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLaunchInfo_Hash() { return 2988840587U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
