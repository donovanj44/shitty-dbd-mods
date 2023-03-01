// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ChangeZombieStateBTTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeZombieStateBTTask() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UChangeZombieStateBTTask_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UChangeZombieStateBTTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UEnum* Z_Construct_UEnum_TheK24_EZombieState();
// End Cross Module References
	void UChangeZombieStateBTTask::StaticRegisterNativesUChangeZombieStateBTTask()
	{
	}
	UClass* Z_Construct_UClass_UChangeZombieStateBTTask_NoRegister()
	{
		return UChangeZombieStateBTTask::StaticClass();
	}
	struct Z_Construct_UClass_UChangeZombieStateBTTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__zombieState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__zombieState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChangeZombieStateBTTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeZombieStateBTTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChangeZombieStateBTTask.h" },
		{ "ModuleRelativePath", "Public/ChangeZombieStateBTTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeZombieStateBTTask_Statics::NewProp__zombieState_MetaData[] = {
		{ "Category", "ChangeZombieStateBTTask" },
		{ "ModuleRelativePath", "Public/ChangeZombieStateBTTask.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChangeZombieStateBTTask_Statics::NewProp__zombieState = { "_zombieState", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChangeZombieStateBTTask, _zombieState), Z_Construct_UEnum_TheK24_EZombieState, METADATA_PARAMS(Z_Construct_UClass_UChangeZombieStateBTTask_Statics::NewProp__zombieState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeZombieStateBTTask_Statics::NewProp__zombieState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChangeZombieStateBTTask_Statics::NewProp__zombieState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChangeZombieStateBTTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeZombieStateBTTask_Statics::NewProp__zombieState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeZombieStateBTTask_Statics::NewProp__zombieState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChangeZombieStateBTTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChangeZombieStateBTTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChangeZombieStateBTTask_Statics::ClassParams = {
		&UChangeZombieStateBTTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChangeZombieStateBTTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChangeZombieStateBTTask_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChangeZombieStateBTTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeZombieStateBTTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChangeZombieStateBTTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChangeZombieStateBTTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChangeZombieStateBTTask, 2922064220);
	template<> THEK24_API UClass* StaticClass<UChangeZombieStateBTTask>()
	{
		return UChangeZombieStateBTTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChangeZombieStateBTTask(Z_Construct_UClass_UChangeZombieStateBTTask, &UChangeZombieStateBTTask::StaticClass, TEXT("/Script/TheK24"), TEXT("UChangeZombieStateBTTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChangeZombieStateBTTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
