// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBD_SoundEventSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBD_SoundEventSpawner() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBD_SoundEventSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBD_SoundEventSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBD_SoundSpawnerData();
// End Cross Module References
	DEFINE_FUNCTION(ADBD_SoundEventSpawner::execAssetsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBD_SoundEventSpawner::execOnLoudNoiseTriggered)
	{
		P_GET_OBJECT(AActor,Z_Param_originator);
		P_GET_OBJECT(AActor,Z_Param_instigatingActor);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_UBOOL(Z_Param_shouldTrack);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_audibleRange);
		P_GET_UBOOL(Z_Param_isQuickAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoudNoiseTriggered(Z_Param_originator,Z_Param_instigatingActor,Z_Param_location,Z_Param_shouldTrack,Z_Param_Out_audibleRange,Z_Param_isQuickAction);
		P_NATIVE_END;
	}
	void ADBD_SoundEventSpawner::StaticRegisterNativesADBD_SoundEventSpawner()
	{
		UClass* Class = ADBD_SoundEventSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssetsLoaded", &ADBD_SoundEventSpawner::execAssetsLoaded },
			{ "OnLoudNoiseTriggered", &ADBD_SoundEventSpawner::execOnLoudNoiseTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBD_SoundEventSpawner_AssetsLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBD_SoundEventSpawner_AssetsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundEventSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBD_SoundEventSpawner_AssetsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBD_SoundEventSpawner, nullptr, "AssetsLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBD_SoundEventSpawner_AssetsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBD_SoundEventSpawner_AssetsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBD_SoundEventSpawner_AssetsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBD_SoundEventSpawner_AssetsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics
	{
		struct DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms
		{
			AActor* originator;
			AActor* instigatingActor;
			FVector location;
			bool shouldTrack;
			float audibleRange;
			bool isQuickAction;
		};
		static void NewProp_isQuickAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isQuickAction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_audibleRange;
		static void NewProp_shouldTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatingActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction_SetBit(void* Obj)
	{
		((DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms*)Obj)->isQuickAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction = { "isQuickAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms), &Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_audibleRange = { "audibleRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms, audibleRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack_SetBit(void* Obj)
	{
		((DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms*)Obj)->shouldTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack = { "shouldTrack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms), &Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_instigatingActor = { "instigatingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms, instigatingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_originator = { "originator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms, originator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_audibleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_instigatingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::NewProp_originator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundEventSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBD_SoundEventSpawner, nullptr, "OnLoudNoiseTriggered", nullptr, nullptr, sizeof(DBD_SoundEventSpawner_eventOnLoudNoiseTriggered_Parms), Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBD_SoundEventSpawner_NoRegister()
	{
		return ADBD_SoundEventSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ADBD_SoundEventSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadedSoundAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__loadedSoundAssets;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__loadedSoundAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundDescriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundDescriptor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundDescriptor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaSoundDescriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AtlantaSoundDescriptor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtlantaSoundDescriptor_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBD_SoundEventSpawner_AssetsLoaded, "AssetsLoaded" }, // 2658803550
		{ &Z_Construct_UFunction_ADBD_SoundEventSpawner_OnLoudNoiseTriggered, "OnLoudNoiseTriggered" }, // 2296825759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBD_SoundEventSpawner.h" },
		{ "ModuleRelativePath", "Public/DBD_SoundEventSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp__loadedSoundAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundEventSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp__loadedSoundAssets = { "_loadedSoundAssets", nullptr, (EPropertyFlags)0x0024080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBD_SoundEventSpawner, _loadedSoundAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp__loadedSoundAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp__loadedSoundAssets_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp__loadedSoundAssets_Inner = { "_loadedSoundAssets", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_SoundDescriptor_MetaData[] = {
		{ "Category", "DBD_SoundEventSpawner" },
		{ "ModuleRelativePath", "Public/DBD_SoundEventSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_SoundDescriptor = { "SoundDescriptor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBD_SoundEventSpawner, SoundDescriptor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_SoundDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_SoundDescriptor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_SoundDescriptor_Inner = { "SoundDescriptor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDBD_SoundSpawnerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_AtlantaSoundDescriptor_MetaData[] = {
		{ "Category", "DBD_SoundEventSpawner" },
		{ "ModuleRelativePath", "Public/DBD_SoundEventSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_AtlantaSoundDescriptor = { "AtlantaSoundDescriptor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBD_SoundEventSpawner, AtlantaSoundDescriptor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_AtlantaSoundDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_AtlantaSoundDescriptor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_AtlantaSoundDescriptor_Inner = { "AtlantaSoundDescriptor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDBD_SoundSpawnerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp__loadedSoundAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp__loadedSoundAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_SoundDescriptor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_SoundDescriptor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_AtlantaSoundDescriptor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::NewProp_AtlantaSoundDescriptor_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBD_SoundEventSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::ClassParams = {
		&ADBD_SoundEventSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBD_SoundEventSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBD_SoundEventSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBD_SoundEventSpawner, 2348406892);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBD_SoundEventSpawner>()
	{
		return ADBD_SoundEventSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBD_SoundEventSpawner(Z_Construct_UClass_ADBD_SoundEventSpawner, &ADBD_SoundEventSpawner::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBD_SoundEventSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBD_SoundEventSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
