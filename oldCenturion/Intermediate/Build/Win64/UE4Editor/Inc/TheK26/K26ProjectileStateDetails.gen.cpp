// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26ProjectileStateDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26ProjectileStateDetails() {}
// Cross Module References
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FK26ProjectileStateDetails();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
class UScriptStruct* FK26ProjectileStateDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK26_API uint32 Get_Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK26ProjectileStateDetails, Z_Construct_UPackage__Script_TheK26(), TEXT("K26ProjectileStateDetails"), sizeof(FK26ProjectileStateDetails), Get_Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Hash());
	}
	return Singleton;
}
template<> THEK26_API UScriptStruct* StaticStruct<FK26ProjectileStateDetails>()
{
	return FK26ProjectileStateDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK26ProjectileStateDetails(FK26ProjectileStateDetails::StaticStruct, TEXT("/Script/TheK26"), TEXT("K26ProjectileStateDetails"), false, nullptr, nullptr);
static struct FScriptStruct_TheK26_StaticRegisterNativesFK26ProjectileStateDetails
{
	FScriptStruct_TheK26_StaticRegisterNativesFK26ProjectileStateDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K26ProjectileStateDetails")),new UScriptStruct::TCppStructOps<FK26ProjectileStateDetails>);
	}
} ScriptStruct_TheK26_StaticRegisterNativesFK26ProjectileStateDetails;
	struct Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBoxStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitBoxStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitboxScaleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitboxScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitboxScaleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitboxScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitboxScaleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitboxScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualScaleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualScaleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualScaleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualScaleX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK26ProjectileStateDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "K26ProjectileStateDetails" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26ProjectileStateDetails, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitBoxStaticMesh_MetaData[] = {
		{ "Category", "K26ProjectileStateDetails" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitBoxStaticMesh = { "HitBoxStaticMesh", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26ProjectileStateDetails, HitBoxStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitBoxStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitBoxStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleZ_MetaData[] = {
		{ "Category", "K26ProjectileStateDetails" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleZ = { "HitboxScaleZ", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26ProjectileStateDetails, HitboxScaleZ), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleY_MetaData[] = {
		{ "Category", "K26ProjectileStateDetails" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleY = { "HitboxScaleY", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26ProjectileStateDetails, HitboxScaleY), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleX_MetaData[] = {
		{ "Category", "K26ProjectileStateDetails" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleX = { "HitboxScaleX", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26ProjectileStateDetails, HitboxScaleX), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleZ_MetaData[] = {
		{ "Category", "K26ProjectileStateDetails" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleZ = { "VisualScaleZ", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26ProjectileStateDetails, VisualScaleZ), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleY_MetaData[] = {
		{ "Category", "K26ProjectileStateDetails" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleY = { "VisualScaleY", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26ProjectileStateDetails, VisualScaleY), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleX_MetaData[] = {
		{ "Category", "K26ProjectileStateDetails" },
		{ "ModuleRelativePath", "Public/K26ProjectileStateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleX = { "VisualScaleX", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26ProjectileStateDetails, VisualScaleX), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_DebugColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitBoxStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_HitboxScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::NewProp_VisualScaleX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
		nullptr,
		&NewStructOps,
		"K26ProjectileStateDetails",
		sizeof(FK26ProjectileStateDetails),
		alignof(FK26ProjectileStateDetails),
		Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK26ProjectileStateDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK26();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K26ProjectileStateDetails"), sizeof(FK26ProjectileStateDetails), Get_Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK26ProjectileStateDetails_Hash() { return 2927135421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
