// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25P01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25P01() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25P01_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25P01();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UK25P01::execAuthority_OnBlockTimerDone)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnBlockTimerDone(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25P01::execOnRep_GeneratorsBlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GeneratorsBlocked();
		P_NATIVE_END;
	}
	void UK25P01::StaticRegisterNativesUK25P01()
	{
		UClass* Class = UK25P01::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnBlockTimerDone", &UK25P01::execAuthority_OnBlockTimerDone },
			{ "OnRep_GeneratorsBlocked", &UK25P01::execOnRep_GeneratorsBlocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics
	{
		struct K25P01_eventAuthority_OnBlockTimerDone_Parms
		{
			AGenerator* generator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25P01_eventAuthority_OnBlockTimerDone_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25P01, nullptr, "Authority_OnBlockTimerDone", nullptr, nullptr, sizeof(K25P01_eventAuthority_OnBlockTimerDone_Parms), Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25P01_OnRep_GeneratorsBlocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P01_OnRep_GeneratorsBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25P01_OnRep_GeneratorsBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25P01, nullptr, "OnRep_GeneratorsBlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25P01_OnRep_GeneratorsBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P01_OnRep_GeneratorsBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25P01_OnRep_GeneratorsBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25P01_OnRep_GeneratorsBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25P01_NoRegister()
	{
		return UK25P01::StaticClass();
	}
	struct Z_Construct_UClass_UK25P01_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__local_generatorsBlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__local_generatorsBlocked;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__local_generatorsBlocked_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorsBlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__generatorsBlocked;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__generatorsBlocked_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorBlockingTimers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__generatorBlockingTimers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__generatorBlockingTimers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorAuraColorForKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__generatorAuraColorForKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowPerkToBlockZeroProgressionGenerators_MetaData[];
#endif
		static void NewProp__allowPerkToBlockZeroProgressionGenerators_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowPerkToBlockZeroProgressionGenerators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraRevealDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorBlockDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__generatorBlockDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25P01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25P01_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25P01_Authority_OnBlockTimerDone, "Authority_OnBlockTimerDone" }, // 3878677382
		{ &Z_Construct_UFunction_UK25P01_OnRep_GeneratorsBlocked, "OnRep_GeneratorsBlocked" }, // 1064326791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25P01.h" },
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P01_Statics::NewProp__local_generatorsBlocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__local_generatorsBlocked = { "_local_generatorsBlocked", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P01, _local_generatorsBlocked), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25P01_Statics::NewProp__local_generatorsBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::NewProp__local_generatorsBlocked_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__local_generatorsBlocked_Inner = { "_local_generatorsBlocked", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P01_Statics::NewProp__generatorsBlocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__generatorsBlocked = { "_generatorsBlocked", "OnRep_GeneratorsBlocked", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P01, _generatorsBlocked), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25P01_Statics::NewProp__generatorsBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::NewProp__generatorsBlocked_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__generatorsBlocked_Inner = { "_generatorsBlocked", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockingTimers_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockingTimers = { "_generatorBlockingTimers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P01, _generatorBlockingTimers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockingTimers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockingTimers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockingTimers_Inner = { "_generatorBlockingTimers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P01_Statics::NewProp__generatorAuraColorForKiller_MetaData[] = {
		{ "Category", "K25P01" },
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__generatorAuraColorForKiller = { "_generatorAuraColorForKiller", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P01, _generatorAuraColorForKiller), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UK25P01_Statics::NewProp__generatorAuraColorForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::NewProp__generatorAuraColorForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P01_Statics::NewProp__allowPerkToBlockZeroProgressionGenerators_MetaData[] = {
		{ "Category", "K25P01" },
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	void Z_Construct_UClass_UK25P01_Statics::NewProp__allowPerkToBlockZeroProgressionGenerators_SetBit(void* Obj)
	{
		((UK25P01*)Obj)->_allowPerkToBlockZeroProgressionGenerators = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__allowPerkToBlockZeroProgressionGenerators = { "_allowPerkToBlockZeroProgressionGenerators", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25P01), &Z_Construct_UClass_UK25P01_Statics::NewProp__allowPerkToBlockZeroProgressionGenerators_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25P01_Statics::NewProp__allowPerkToBlockZeroProgressionGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::NewProp__allowPerkToBlockZeroProgressionGenerators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P01_Statics::NewProp__auraRevealDuration_MetaData[] = {
		{ "Category", "K25P01" },
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__auraRevealDuration = { "_auraRevealDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_auraRevealDuration, UK25P01), STRUCT_OFFSET(UK25P01, _auraRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UK25P01_Statics::NewProp__auraRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::NewProp__auraRevealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockDuration_MetaData[] = {
		{ "Category", "K25P01" },
		{ "ModuleRelativePath", "Public/K25P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockDuration = { "_generatorBlockDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_generatorBlockDuration, UK25P01), STRUCT_OFFSET(UK25P01, _generatorBlockDuration), METADATA_PARAMS(Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25P01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__local_generatorsBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__local_generatorsBlocked_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__generatorsBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__generatorsBlocked_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockingTimers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockingTimers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__generatorAuraColorForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__allowPerkToBlockZeroProgressionGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__auraRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P01_Statics::NewProp__generatorBlockDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25P01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25P01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25P01_Statics::ClassParams = {
		&UK25P01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25P01_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25P01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25P01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25P01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25P01, 3123850425);
	template<> THEK25_API UClass* StaticClass<UK25P01>()
	{
		return UK25P01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25P01(Z_Construct_UClass_UK25P01, &UK25P01::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25P01"), false, nullptr, nullptr, nullptr);

	void UK25P01::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__generatorsBlocked(TEXT("_generatorsBlocked"));

		const bool bIsValid = true
			&& Name__generatorsBlocked == ClassReps[(int32)ENetFields_Private::_generatorsBlocked].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK25P01"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25P01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
