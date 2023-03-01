// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAttackTargetTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAttackTargetTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDAttackTargetTracker();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatProperty();
// End Cross Module References
class UScriptStruct* FDBDAttackTargetTracker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDAttackTargetTracker, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDAttackTargetTracker"), sizeof(FDBDAttackTargetTracker), Get_Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDAttackTargetTracker>()
{
	return FDBDAttackTargetTracker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDAttackTargetTracker(FDBDAttackTargetTracker::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDAttackTargetTracker"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDAttackTargetTracker
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDAttackTargetTracker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDAttackTargetTracker")),new UScriptStruct::TCppStructOps<FDBDAttackTargetTracker>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDAttackTargetTracker;
	struct Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__owningPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trackedTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__trackedTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__targetBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ownerEyeSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__ownerEyeSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetSnapDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetSnapDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useTargetTracking_MetaData[];
#endif
		static void NewProp__useTargetTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useTargetTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDAttackTargetTracker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDAttackTargetTracker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__owningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttackTargetTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__owningPlayer = { "_owningPlayer", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDAttackTargetTracker, _owningPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__owningPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__owningPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__trackedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttackTargetTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__trackedTarget = { "_trackedTarget", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDAttackTargetTracker, _trackedTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__trackedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__trackedTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetBoneName_MetaData[] = {
		{ "Category", "DBDAttackTargetTracker" },
		{ "ModuleRelativePath", "Public/DBDAttackTargetTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetBoneName = { "_targetBoneName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDAttackTargetTracker, _targetBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__ownerEyeSocketName_MetaData[] = {
		{ "Category", "DBDAttackTargetTracker" },
		{ "ModuleRelativePath", "Public/DBDAttackTargetTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__ownerEyeSocketName = { "_ownerEyeSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDAttackTargetTracker, _ownerEyeSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__ownerEyeSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__ownerEyeSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetSnapDistance_MetaData[] = {
		{ "Category", "DBDAttackTargetTracker" },
		{ "ModuleRelativePath", "Public/DBDAttackTargetTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetSnapDistance = { "_targetSnapDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDAttackTargetTracker, _targetSnapDistance), Z_Construct_UScriptStruct_FStatProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetSnapDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetSnapDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__useTargetTracking_MetaData[] = {
		{ "Category", "DBDAttackTargetTracker" },
		{ "ModuleRelativePath", "Public/DBDAttackTargetTracker.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__useTargetTracking_SetBit(void* Obj)
	{
		((FDBDAttackTargetTracker*)Obj)->_useTargetTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__useTargetTracking = { "_useTargetTracking", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDBDAttackTargetTracker), &Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__useTargetTracking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__useTargetTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__useTargetTracking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__owningPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__trackedTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__ownerEyeSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__targetSnapDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::NewProp__useTargetTracking,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDAttackTargetTracker",
		sizeof(FDBDAttackTargetTracker),
		alignof(FDBDAttackTargetTracker),
		Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDAttackTargetTracker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDAttackTargetTracker"), sizeof(FDBDAttackTargetTracker), Get_Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDAttackTargetTracker_Hash() { return 1060658646U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
