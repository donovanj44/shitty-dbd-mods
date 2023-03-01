// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieAttackSurvivorBTTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAttackSurvivorBTTask() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieAttackSurvivorBTTask_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieAttackSurvivorBTTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UZombieAttackSurvivorBTTask::StaticRegisterNativesUZombieAttackSurvivorBTTask()
	{
	}
	UClass* Z_Construct_UClass_UZombieAttackSurvivorBTTask_NoRegister()
	{
		return UZombieAttackSurvivorBTTask::StaticClass();
	}
	struct Z_Construct_UClass_UZombieAttackSurvivorBTTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieAttackSurvivorBTTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAttackSurvivorBTTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieAttackSurvivorBTTask.h" },
		{ "ModuleRelativePath", "Public/ZombieAttackSurvivorBTTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieAttackSurvivorBTTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieAttackSurvivorBTTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieAttackSurvivorBTTask_Statics::ClassParams = {
		&UZombieAttackSurvivorBTTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieAttackSurvivorBTTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAttackSurvivorBTTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieAttackSurvivorBTTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieAttackSurvivorBTTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieAttackSurvivorBTTask, 3083678107);
	template<> THEK24_API UClass* StaticClass<UZombieAttackSurvivorBTTask>()
	{
		return UZombieAttackSurvivorBTTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieAttackSurvivorBTTask(Z_Construct_UClass_UZombieAttackSurvivorBTTask, &UZombieAttackSurvivorBTTask::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieAttackSurvivorBTTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieAttackSurvivorBTTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
