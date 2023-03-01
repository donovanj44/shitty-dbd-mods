// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QueryService/Public/ActorsInRangeBool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorsInRangeBool() {}
// Cross Module References
	QUERYSERVICE_API UScriptStruct* Z_Construct_UScriptStruct_FActorsInRangeBool();
	UPackage* Z_Construct_UPackage__Script_QueryService();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUERYSERVICE_API UClass* Z_Construct_UClass_UActorPairQueryEvaluatorComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FActorsInRangeBool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUERYSERVICE_API uint32 Get_Z_Construct_UScriptStruct_FActorsInRangeBool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorsInRangeBool, Z_Construct_UPackage__Script_QueryService(), TEXT("ActorsInRangeBool"), sizeof(FActorsInRangeBool), Get_Z_Construct_UScriptStruct_FActorsInRangeBool_Hash());
	}
	return Singleton;
}
template<> QUERYSERVICE_API UScriptStruct* StaticStruct<FActorsInRangeBool>()
{
	return FActorsInRangeBool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorsInRangeBool(FActorsInRangeBool::StaticStruct, TEXT("/Script/QueryService"), TEXT("ActorsInRangeBool"), false, nullptr, nullptr);
static struct FScriptStruct_QueryService_StaticRegisterNativesFActorsInRangeBool
{
	FScriptStruct_QueryService_StaticRegisterNativesFActorsInRangeBool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorsInRangeBool")),new UScriptStruct::TCppStructOps<FActorsInRangeBool>);
	}
} ScriptStruct_QueryService_StaticRegisterNativesFActorsInRangeBool;
	struct Z_Construct_UScriptStruct_FActorsInRangeBool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inRange_MetaData[];
#endif
		static void NewProp__inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__otherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorPairQueryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__actorPairQueryComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorsInRangeBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorsInRangeBool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__inRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorsInRangeBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__inRange_SetBit(void* Obj)
	{
		((FActorsInRangeBool*)Obj)->_inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__inRange = { "_inRange", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActorsInRangeBool), &Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__inRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__inRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__range_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorsInRangeBool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsInRangeBool, _range), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__otherActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorsInRangeBool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__otherActor = { "_otherActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsInRangeBool, _otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__otherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__otherActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__sourceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorsInRangeBool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__sourceActor = { "_sourceActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsInRangeBool, _sourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__sourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__sourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__actorPairQueryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorsInRangeBool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__actorPairQueryComponent = { "_actorPairQueryComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsInRangeBool, _actorPairQueryComponent), Z_Construct_UClass_UActorPairQueryEvaluatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__actorPairQueryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__actorPairQueryComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__inRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__sourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::NewProp__actorPairQueryComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QueryService,
		nullptr,
		&NewStructOps,
		"ActorsInRangeBool",
		sizeof(FActorsInRangeBool),
		alignof(FActorsInRangeBool),
		Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorsInRangeBool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorsInRangeBool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QueryService();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorsInRangeBool"), sizeof(FActorsInRangeBool), Get_Z_Construct_UScriptStruct_FActorsInRangeBool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorsInRangeBool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorsInRangeBool_Hash() { return 1382264708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
