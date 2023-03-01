// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieRotateTowardsTargetBTTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieRotateTowardsTargetBTTask() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieRotateTowardsTargetBTTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UZombieRotateTowardsTargetBTTask::StaticRegisterNativesUZombieRotateTowardsTargetBTTask()
	{
	}
	UClass* Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_NoRegister()
	{
		return UZombieRotateTowardsTargetBTTask::StaticClass();
	}
	struct Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieRotateTowardsTargetBTTask.h" },
		{ "ModuleRelativePath", "Public/ZombieRotateTowardsTargetBTTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieRotateTowardsTargetBTTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_Statics::ClassParams = {
		&UZombieRotateTowardsTargetBTTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieRotateTowardsTargetBTTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieRotateTowardsTargetBTTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieRotateTowardsTargetBTTask, 293412247);
	template<> THEK24_API UClass* StaticClass<UZombieRotateTowardsTargetBTTask>()
	{
		return UZombieRotateTowardsTargetBTTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieRotateTowardsTargetBTTask(Z_Construct_UClass_UZombieRotateTowardsTargetBTTask, &UZombieRotateTowardsTargetBTTask::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieRotateTowardsTargetBTTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieRotateTowardsTargetBTTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
