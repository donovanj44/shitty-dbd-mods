// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieResurrector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieResurrector() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieResurrector_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieResurrector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UZombieResurrector::execAuthority_OnKillerPowerLevelChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_powerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnKillerPowerLevelChanged(Z_Param_powerLevel);
		P_NATIVE_END;
	}
	void UZombieResurrector::StaticRegisterNativesUZombieResurrector()
	{
		UClass* Class = UZombieResurrector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnKillerPowerLevelChanged", &UZombieResurrector::execAuthority_OnKillerPowerLevelChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics
	{
		struct ZombieResurrector_eventAuthority_OnKillerPowerLevelChanged_Parms
		{
			int32 powerLevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_powerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::NewProp_powerLevel = { "powerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieResurrector_eventAuthority_OnKillerPowerLevelChanged_Parms, powerLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::NewProp_powerLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieResurrector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZombieResurrector, nullptr, "Authority_OnKillerPowerLevelChanged", nullptr, nullptr, sizeof(ZombieResurrector_eventAuthority_OnKillerPowerLevelChanged_Parms), Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZombieResurrector_NoRegister()
	{
		return UZombieResurrector::StaticClass();
	}
	struct Z_Construct_UClass_UZombieResurrector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__delayedSpawnZombies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__delayedSpawnZombies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__delayedSpawnZombies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerLevelToSpawnZombie_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerLevelToSpawnZombie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieResurrector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZombieResurrector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZombieResurrector_Authority_OnKillerPowerLevelChanged, "Authority_OnKillerPowerLevelChanged" }, // 2967067846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieResurrector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieResurrector.h" },
		{ "ModuleRelativePath", "Public/ZombieResurrector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieResurrector_Statics::NewProp__delayedSpawnZombies_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieResurrector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZombieResurrector_Statics::NewProp__delayedSpawnZombies = { "_delayedSpawnZombies", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieResurrector, _delayedSpawnZombies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZombieResurrector_Statics::NewProp__delayedSpawnZombies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieResurrector_Statics::NewProp__delayedSpawnZombies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZombieResurrector_Statics::NewProp__delayedSpawnZombies_Inner = { "_delayedSpawnZombies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AZombieCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieResurrector_Statics::NewProp__powerLevelToSpawnZombie_MetaData[] = {
		{ "Category", "ZombieResurrector" },
		{ "ModuleRelativePath", "Public/ZombieResurrector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZombieResurrector_Statics::NewProp__powerLevelToSpawnZombie = { "_powerLevelToSpawnZombie", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieResurrector, _powerLevelToSpawnZombie), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UZombieResurrector_Statics::NewProp__powerLevelToSpawnZombie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieResurrector_Statics::NewProp__powerLevelToSpawnZombie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombieResurrector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieResurrector_Statics::NewProp__delayedSpawnZombies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieResurrector_Statics::NewProp__delayedSpawnZombies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieResurrector_Statics::NewProp__powerLevelToSpawnZombie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieResurrector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieResurrector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieResurrector_Statics::ClassParams = {
		&UZombieResurrector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZombieResurrector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombieResurrector_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieResurrector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieResurrector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieResurrector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieResurrector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieResurrector, 2380196942);
	template<> THEK24_API UClass* StaticClass<UZombieResurrector>()
	{
		return UZombieResurrector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieResurrector(Z_Construct_UClass_UZombieResurrector, &UZombieResurrector::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieResurrector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieResurrector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
