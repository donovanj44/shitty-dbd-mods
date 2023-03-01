// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PortalRestrictedLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalRestrictedLocation() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPortalRestrictedLocation();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FPortalRestrictedLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPortalRestrictedLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalRestrictedLocation, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PortalRestrictedLocation"), sizeof(FPortalRestrictedLocation), Get_Z_Construct_UScriptStruct_FPortalRestrictedLocation_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPortalRestrictedLocation>()
{
	return FPortalRestrictedLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalRestrictedLocation(FPortalRestrictedLocation::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PortalRestrictedLocation"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPortalRestrictedLocation
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPortalRestrictedLocation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalRestrictedLocation")),new UScriptStruct::TCppStructOps<FPortalRestrictedLocation>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPortalRestrictedLocation;
	struct Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceSquared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PortalRestrictedLocation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalRestrictedLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_DistanceSquared_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalRestrictedLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_DistanceSquared = { "DistanceSquared", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalRestrictedLocation, DistanceSquared), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_DistanceSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_DistanceSquared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalRestrictedLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalRestrictedLocation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_DistanceSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PortalRestrictedLocation",
		sizeof(FPortalRestrictedLocation),
		alignof(FPortalRestrictedLocation),
		Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalRestrictedLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalRestrictedLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalRestrictedLocation"), sizeof(FPortalRestrictedLocation), Get_Z_Construct_UScriptStruct_FPortalRestrictedLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalRestrictedLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalRestrictedLocation_Hash() { return 1449918786U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
