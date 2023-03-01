// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/SocketOrBoneCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketOrBoneCache() {}
// Cross Module References
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSocketOrBoneCache();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FSocketOrBoneCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FSocketOrBoneCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketOrBoneCache, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("SocketOrBoneCache"), sizeof(FSocketOrBoneCache), Get_Z_Construct_UScriptStruct_FSocketOrBoneCache_Hash());
	}
	return Singleton;
}
template<> ANIMATIONUTILITIES_API UScriptStruct* StaticStruct<FSocketOrBoneCache>()
{
	return FSocketOrBoneCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocketOrBoneCache(FSocketOrBoneCache::StaticStruct, TEXT("/Script/AnimationUtilities"), TEXT("SocketOrBoneCache"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationUtilities_StaticRegisterNativesFSocketOrBoneCache
{
	FScriptStruct_AnimationUtilities_StaticRegisterNativesFSocketOrBoneCache()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocketOrBoneCache")),new UScriptStruct::TCppStructOps<FSocketOrBoneCache>);
	}
} ScriptStruct_AnimationUtilities_StaticRegisterNativesFSocketOrBoneCache;
	struct Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__notifyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__notifyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__socketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__socketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sourceAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__sourceAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocketOrBoneCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketOrBoneCache>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocketOrBoneCache" },
		{ "ModuleRelativePath", "Public/SocketOrBoneCache.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__rotation = { "_rotation", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketOrBoneCache, _rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocketOrBoneCache" },
		{ "ModuleRelativePath", "Public/SocketOrBoneCache.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__location = { "_location", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketOrBoneCache, _location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__notifyName_MetaData[] = {
		{ "Category", "SocketOrBoneCache" },
		{ "ModuleRelativePath", "Public/SocketOrBoneCache.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__notifyName = { "_notifyName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketOrBoneCache, _notifyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__notifyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__notifyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__socketName_MetaData[] = {
		{ "Category", "SocketOrBoneCache" },
		{ "ModuleRelativePath", "Public/SocketOrBoneCache.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__socketName = { "_socketName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketOrBoneCache, _socketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__socketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__socketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__sourceAnimation_MetaData[] = {
		{ "Category", "SocketOrBoneCache" },
		{ "ModuleRelativePath", "Public/SocketOrBoneCache.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__sourceAnimation = { "_sourceAnimation", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketOrBoneCache, _sourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__sourceAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__sourceAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__notifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__socketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::NewProp__sourceAnimation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
		nullptr,
		&NewStructOps,
		"SocketOrBoneCache",
		sizeof(FSocketOrBoneCache),
		alignof(FSocketOrBoneCache),
		Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocketOrBoneCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocketOrBoneCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocketOrBoneCache"), sizeof(FSocketOrBoneCache), Get_Z_Construct_UScriptStruct_FSocketOrBoneCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocketOrBoneCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocketOrBoneCache_Hash() { return 4166836799U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
