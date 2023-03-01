// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombiesManagement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombiesManagement() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_AZombiesManagement_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_AZombiesManagement();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_AZombieEscapeDoorPointsActor_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	THEK24_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombiesPatrolAreaManager_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AZombiesManagement::execAuthority_OnIntroComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIntroComplete();
		P_NATIVE_END;
	}
	void AZombiesManagement::StaticRegisterNativesAZombiesManagement()
	{
		UClass* Class = AZombiesManagement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnIntroComplete", &AZombiesManagement::execAuthority_OnIntroComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombiesManagement_Authority_OnIntroComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombiesManagement_Authority_OnIntroComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombiesManagement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombiesManagement_Authority_OnIntroComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombiesManagement, nullptr, "Authority_OnIntroComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombiesManagement_Authority_OnIntroComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombiesManagement_Authority_OnIntroComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombiesManagement_Authority_OnIntroComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombiesManagement_Authority_OnIntroComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombiesManagement_NoRegister()
	{
		return AZombiesManagement::StaticClass();
	}
	struct Z_Construct_UClass_AZombiesManagement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieEscapeDoorPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__zombieEscapeDoorPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__zombieEscapeDoorPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfZombieToSpawnAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__numberOfZombieToSpawnAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstZombieSpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__firstZombieSpawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnedZombiesArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spawnedZombiesArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spawnedZombiesArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombiesPatrolAreaManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__zombiesPatrolAreaManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombiePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__zombiePool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombiesManagement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombiesManagement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombiesManagement_Authority_OnIntroComplete, "Authority_OnIntroComplete" }, // 1261741353
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiesManagement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombiesManagement.h" },
		{ "ModuleRelativePath", "Public/ZombiesManagement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombieEscapeDoorPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombiesManagement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombieEscapeDoorPoints = { "_zombieEscapeDoorPoints", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombiesManagement, _zombieEscapeDoorPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombieEscapeDoorPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombieEscapeDoorPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombieEscapeDoorPoints_Inner = { "_zombieEscapeDoorPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AZombieEscapeDoorPointsActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiesManagement_Statics::NewProp__numberOfZombieToSpawnAtStart_MetaData[] = {
		{ "Category", "ZombiesManagement" },
		{ "ModuleRelativePath", "Public/ZombiesManagement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombiesManagement_Statics::NewProp__numberOfZombieToSpawnAtStart = { "_numberOfZombieToSpawnAtStart", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombiesManagement, _numberOfZombieToSpawnAtStart), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__numberOfZombieToSpawnAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__numberOfZombieToSpawnAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiesManagement_Statics::NewProp__firstZombieSpawnTime_MetaData[] = {
		{ "Category", "ZombiesManagement" },
		{ "ModuleRelativePath", "Public/ZombiesManagement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombiesManagement_Statics::NewProp__firstZombieSpawnTime = { "_firstZombieSpawnTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombiesManagement, _firstZombieSpawnTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__firstZombieSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__firstZombieSpawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiesManagement_Statics::NewProp__spawnedZombiesArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombiesManagement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZombiesManagement_Statics::NewProp__spawnedZombiesArray = { "_spawnedZombiesArray", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombiesManagement, _spawnedZombiesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__spawnedZombiesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__spawnedZombiesArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombiesManagement_Statics::NewProp__spawnedZombiesArray_Inner = { "_spawnedZombiesArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AZombieCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiesPatrolAreaManager_MetaData[] = {
		{ "Category", "ZombiesManagement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombiesManagement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiesPatrolAreaManager = { "_zombiesPatrolAreaManager", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombiesManagement, _zombiesPatrolAreaManager), Z_Construct_UClass_UZombiesPatrolAreaManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiesPatrolAreaManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiesPatrolAreaManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiePool_MetaData[] = {
		{ "Category", "ZombiesManagement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombiesManagement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiePool = { "_zombiePool", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombiesManagement, _zombiePool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiePool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombiesManagement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombieEscapeDoorPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombieEscapeDoorPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombiesManagement_Statics::NewProp__numberOfZombieToSpawnAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombiesManagement_Statics::NewProp__firstZombieSpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombiesManagement_Statics::NewProp__spawnedZombiesArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombiesManagement_Statics::NewProp__spawnedZombiesArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiesPatrolAreaManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombiesManagement_Statics::NewProp__zombiePool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombiesManagement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombiesManagement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombiesManagement_Statics::ClassParams = {
		&AZombiesManagement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZombiesManagement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesManagement_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombiesManagement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesManagement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombiesManagement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombiesManagement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombiesManagement, 1069873777);
	template<> THEK24_API UClass* StaticClass<AZombiesManagement>()
	{
		return AZombiesManagement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombiesManagement(Z_Construct_UClass_AZombiesManagement, &AZombiesManagement::StaticClass, TEXT("/Script/TheK24"), TEXT("AZombiesManagement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombiesManagement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
