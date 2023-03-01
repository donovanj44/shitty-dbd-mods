// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlockableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockElement_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBlockableReplicatedDatum();
// End Cross Module References
	DEFINE_FUNCTION(UBlockableComponent::execAuthority_AddBlock)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_GET_TSET_REF(ADBDPlayer*,Z_Param_Out_affectedPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddBlock(Z_Param_source,Z_Param_Out_affectedPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlockableComponent::execAuthority_AddTimedBlock)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_TSET_REF(ADBDPlayer*,Z_Param_Out_affectedPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddTimedBlock(Z_Param_source,Z_Param_duration,Z_Param_Out_affectedPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlockableComponent::execAuthority_RemoveBlock)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RemoveBlock(Z_Param_source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlockableComponent::execOnRep_ReplicatedDatum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedDatum();
		P_NATIVE_END;
	}
	void UBlockableComponent::StaticRegisterNativesUBlockableComponent()
	{
		UClass* Class = UBlockableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddBlock", &UBlockableComponent::execAuthority_AddBlock },
			{ "Authority_AddTimedBlock", &UBlockableComponent::execAuthority_AddTimedBlock },
			{ "Authority_RemoveBlock", &UBlockableComponent::execAuthority_RemoveBlock },
			{ "OnRep_ReplicatedDatum", &UBlockableComponent::execOnRep_ReplicatedDatum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics
	{
		struct BlockableComponent_eventAuthority_AddBlock_Parms
		{
			const UObject* source;
			TSet<ADBDPlayer*> affectedPlayers;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_affectedPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_affectedPlayers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_affectedPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_affectedPlayers = { "affectedPlayers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockableComponent_eventAuthority_AddBlock_Parms, affectedPlayers), METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_affectedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_affectedPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_affectedPlayers_ElementProp = { "affectedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockableComponent_eventAuthority_AddBlock_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_affectedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_affectedPlayers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlockableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockableComponent, nullptr, "Authority_AddBlock", nullptr, nullptr, sizeof(BlockableComponent_eventAuthority_AddBlock_Parms), Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics
	{
		struct BlockableComponent_eventAuthority_AddTimedBlock_Parms
		{
			const UObject* source;
			float duration;
			TSet<ADBDPlayer*> affectedPlayers;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_affectedPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_affectedPlayers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_affectedPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_affectedPlayers = { "affectedPlayers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockableComponent_eventAuthority_AddTimedBlock_Parms, affectedPlayers), METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_affectedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_affectedPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_affectedPlayers_ElementProp = { "affectedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockableComponent_eventAuthority_AddTimedBlock_Parms, duration), METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockableComponent_eventAuthority_AddTimedBlock_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_affectedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_affectedPlayers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlockableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockableComponent, nullptr, "Authority_AddTimedBlock", nullptr, nullptr, sizeof(BlockableComponent_eventAuthority_AddTimedBlock_Parms), Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics
	{
		struct BlockableComponent_eventAuthority_RemoveBlock_Parms
		{
			const UObject* source;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockableComponent_eventAuthority_RemoveBlock_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlockableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockableComponent, nullptr, "Authority_RemoveBlock", nullptr, nullptr, sizeof(BlockableComponent_eventAuthority_RemoveBlock_Parms), Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlockableComponent_OnRep_ReplicatedDatum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockableComponent_OnRep_ReplicatedDatum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlockableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockableComponent_OnRep_ReplicatedDatum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockableComponent, nullptr, "OnRep_ReplicatedDatum", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockableComponent_OnRep_ReplicatedDatum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockableComponent_OnRep_ReplicatedDatum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockableComponent_OnRep_ReplicatedDatum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockableComponent_OnRep_ReplicatedDatum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlockableComponent_NoRegister()
	{
		return UBlockableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlockableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__blockElements;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blockElements_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicatedDatum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__replicatedDatum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlockableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlockableComponent_Authority_AddBlock, "Authority_AddBlock" }, // 852333970
		{ &Z_Construct_UFunction_UBlockableComponent_Authority_AddTimedBlock, "Authority_AddTimedBlock" }, // 2868293494
		{ &Z_Construct_UFunction_UBlockableComponent_Authority_RemoveBlock, "Authority_RemoveBlock" }, // 3405101558
		{ &Z_Construct_UFunction_UBlockableComponent_OnRep_ReplicatedDatum, "OnRep_ReplicatedDatum" }, // 263471120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlockableComponent.h" },
		{ "ModuleRelativePath", "Public/BlockableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockableComponent_Statics::NewProp__blockElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBlockableComponent_Statics::NewProp__blockElements = { "_blockElements", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockableComponent, _blockElements), METADATA_PARAMS(Z_Construct_UClass_UBlockableComponent_Statics::NewProp__blockElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockableComponent_Statics::NewProp__blockElements_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlockableComponent_Statics::NewProp__blockElements_ElementProp = { "_blockElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlockElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockableComponent_Statics::NewProp__replicatedDatum_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockableComponent_Statics::NewProp__replicatedDatum = { "_replicatedDatum", "OnRep_ReplicatedDatum", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockableComponent, _replicatedDatum), Z_Construct_UScriptStruct_FBlockableReplicatedDatum, METADATA_PARAMS(Z_Construct_UClass_UBlockableComponent_Statics::NewProp__replicatedDatum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockableComponent_Statics::NewProp__replicatedDatum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockableComponent_Statics::NewProp__blockElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockableComponent_Statics::NewProp__blockElements_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockableComponent_Statics::NewProp__replicatedDatum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlockableComponent_Statics::ClassParams = {
		&UBlockableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlockableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlockableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlockableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlockableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlockableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlockableComponent, 2458477783);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlockableComponent>()
	{
		return UBlockableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlockableComponent(Z_Construct_UClass_UBlockableComponent, &UBlockableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlockableComponent"), false, nullptr, nullptr, nullptr);

	void UBlockableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__replicatedDatum(TEXT("_replicatedDatum"));

		const bool bIsValid = true
			&& Name__replicatedDatum == ClassReps[(int32)ENetFields_Private::_replicatedDatum].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBlockableComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
