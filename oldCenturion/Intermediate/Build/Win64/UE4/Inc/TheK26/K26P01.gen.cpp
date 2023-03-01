// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26P01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26P01() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26P01_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26P01();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UK26P01::execAuthority_OnBlockTimerDone)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnBlockTimerDone(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26P01::execOnRep_BlockedGenerators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockedGenerators();
		P_NATIVE_END;
	}
	void UK26P01::StaticRegisterNativesUK26P01()
	{
		UClass* Class = UK26P01::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnBlockTimerDone", &UK26P01::execAuthority_OnBlockTimerDone },
			{ "OnRep_BlockedGenerators", &UK26P01::execOnRep_BlockedGenerators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics
	{
		struct K26P01_eventAuthority_OnBlockTimerDone_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26P01_eventAuthority_OnBlockTimerDone_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26P01, nullptr, "Authority_OnBlockTimerDone", nullptr, nullptr, sizeof(K26P01_eventAuthority_OnBlockTimerDone_Parms), Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26P01_OnRep_BlockedGenerators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26P01_OnRep_BlockedGenerators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26P01_OnRep_BlockedGenerators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26P01, nullptr, "OnRep_BlockedGenerators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26P01_OnRep_BlockedGenerators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P01_OnRep_BlockedGenerators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26P01_OnRep_BlockedGenerators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26P01_OnRep_BlockedGenerators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26P01_NoRegister()
	{
		return UK26P01::StaticClass();
	}
	struct Z_Construct_UClass_UK26P01_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorBlockingTimers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__generatorBlockingTimers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__generatorBlockingTimers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__hookedSurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookedSurvivors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__blockedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blockedGenerators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorsToBeHooked_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__survivorsToBeHooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorAuraColorForKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__generatorAuraColorForKiller;
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
	UObject* (*const Z_Construct_UClass_UK26P01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26P01_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26P01_Authority_OnBlockTimerDone, "Authority_OnBlockTimerDone" }, // 3397217149
		{ &Z_Construct_UFunction_UK26P01_OnRep_BlockedGenerators, "OnRep_BlockedGenerators" }, // 727692817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26P01.h" },
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockingTimers_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockingTimers = { "_generatorBlockingTimers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26P01, _generatorBlockingTimers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockingTimers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockingTimers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockingTimers_Inner = { "_generatorBlockingTimers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P01_Statics::NewProp__hookedSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__hookedSurvivors = { "_hookedSurvivors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26P01, _hookedSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK26P01_Statics::NewProp__hookedSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::NewProp__hookedSurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__hookedSurvivors_Inner = { "_hookedSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P01_Statics::NewProp__blockedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__blockedGenerators = { "_blockedGenerators", "OnRep_BlockedGenerators", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26P01, _blockedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK26P01_Statics::NewProp__blockedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::NewProp__blockedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__blockedGenerators_Inner = { "_blockedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P01_Statics::NewProp__survivorsToBeHooked_MetaData[] = {
		{ "Category", "K26P01" },
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__survivorsToBeHooked = { "_survivorsToBeHooked", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26P01, _survivorsToBeHooked), METADATA_PARAMS(Z_Construct_UClass_UK26P01_Statics::NewProp__survivorsToBeHooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::NewProp__survivorsToBeHooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P01_Statics::NewProp__generatorAuraColorForKiller_MetaData[] = {
		{ "Category", "K26P01" },
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__generatorAuraColorForKiller = { "_generatorAuraColorForKiller", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26P01, _generatorAuraColorForKiller), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UK26P01_Statics::NewProp__generatorAuraColorForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::NewProp__generatorAuraColorForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P01_Statics::NewProp__auraRevealDuration_MetaData[] = {
		{ "Category", "K26P01" },
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__auraRevealDuration = { "_auraRevealDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_auraRevealDuration, UK26P01), STRUCT_OFFSET(UK26P01, _auraRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UK26P01_Statics::NewProp__auraRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::NewProp__auraRevealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockDuration_MetaData[] = {
		{ "Category", "K26P01" },
		{ "ModuleRelativePath", "Public/K26P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockDuration = { "_generatorBlockDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_generatorBlockDuration, UK26P01), STRUCT_OFFSET(UK26P01, _generatorBlockDuration), METADATA_PARAMS(Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26P01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockingTimers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockingTimers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__hookedSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__hookedSurvivors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__blockedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__blockedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__survivorsToBeHooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__generatorAuraColorForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__auraRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P01_Statics::NewProp__generatorBlockDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26P01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26P01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26P01_Statics::ClassParams = {
		&UK26P01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26P01_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26P01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26P01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26P01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26P01, 3394440327);
	template<> THEK26_API UClass* StaticClass<UK26P01>()
	{
		return UK26P01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26P01(Z_Construct_UClass_UK26P01, &UK26P01::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26P01"), false, nullptr, nullptr, nullptr);

	void UK26P01::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__blockedGenerators(TEXT("_blockedGenerators"));

		const bool bIsValid = true
			&& Name__blockedGenerators == ClassReps[(int32)ENetFields_Private::_blockedGenerators].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK26P01"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26P01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
