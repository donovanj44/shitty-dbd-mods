// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTimer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTimer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFloat_NetQuantize8();
// End Cross Module References
class UScriptStruct* FDBDTimer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDTimer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDTimer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDTimer"), sizeof(FDBDTimer), Get_Z_Construct_UScriptStruct_FDBDTimer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDTimer>()
{
	return FDBDTimer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDTimer(FDBDTimer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDTimer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDTimer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDTimer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDTimer")),new UScriptStruct::TCppStructOps<FDBDTimer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDTimer;
	struct Z_Construct_UScriptStruct_FDBDTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__interpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicateTimeLeft_MetaData[];
#endif
		static void NewProp__replicateTimeLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__replicateTimeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startTimeDirty_MetaData[];
#endif
		static void NewProp__startTimeDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__startTimeDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__startTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTimer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDTimer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDTimer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__interpSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__interpSpeed = { "_interpSpeed", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDTimer, _interpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__interpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__interpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__replicateTimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDTimer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__replicateTimeLeft_SetBit(void* Obj)
	{
		((FDBDTimer*)Obj)->_replicateTimeLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__replicateTimeLeft = { "_replicateTimeLeft", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDBDTimer), &Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__replicateTimeLeft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__replicateTimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__replicateTimeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__timeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__timeLeft = { "_timeLeft", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDTimer, _timeLeft), Z_Construct_UScriptStruct_FFloat_NetQuantize8, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__timeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__timeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTimeDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDTimer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTimeDirty_SetBit(void* Obj)
	{
		((FDBDTimer*)Obj)->_startTimeDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTimeDirty = { "_startTimeDirty", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDBDTimer), &Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTimeDirty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTimeDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTimeDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTime = { "_startTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDTimer, _startTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__interpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__replicateTimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__timeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTimeDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDTimer_Statics::NewProp__startTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDTimer",
		sizeof(FDBDTimer),
		alignof(FDBDTimer),
		Z_Construct_UScriptStruct_FDBDTimer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTimer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDTimer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDTimer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDTimer"), sizeof(FDBDTimer), Get_Z_Construct_UScriptStruct_FDBDTimer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDTimer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDTimer_Hash() { return 3201638152U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
