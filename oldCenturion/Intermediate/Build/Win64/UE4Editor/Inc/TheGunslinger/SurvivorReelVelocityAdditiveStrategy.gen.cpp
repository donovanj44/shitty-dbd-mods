// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/SurvivorReelVelocityAdditiveStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorReelVelocityAdditiveStrategy() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBaseCharacterVelocityAdditiveStrategy();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorReelVelocityAdditiveStrategy::execOnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	void USurvivorReelVelocityAdditiveStrategy::StaticRegisterNativesUSurvivorReelVelocityAdditiveStrategy()
	{
		UClass* Class = USurvivorReelVelocityAdditiveStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerSet", &USurvivorReelVelocityAdditiveStrategy::execOnKillerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics
	{
		struct SurvivorReelVelocityAdditiveStrategy_eventOnKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorReelVelocityAdditiveStrategy_eventOnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorReelVelocityAdditiveStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy, nullptr, "OnKillerSet", nullptr, nullptr, sizeof(SurvivorReelVelocityAdditiveStrategy_eventOnKillerSet_Parms), Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_NoRegister()
	{
		return USurvivorReelVelocityAdditiveStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingPulled_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isBeingPulled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingReeled_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isBeingReeled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumVelocityAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maximumVelocityAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumLinkLengthDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumLinkLengthDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reelSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCharacterVelocityAdditiveStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorReelVelocityAdditiveStrategy_OnKillerSet, "OnKillerSet" }, // 3489617014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorReelVelocityAdditiveStrategy.h" },
		{ "ModuleRelativePath", "Public/SurvivorReelVelocityAdditiveStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingPulled_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorReelVelocityAdditiveStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingPulled = { "_isBeingPulled", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _isBeingPulled), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingPulled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingPulled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingReeled_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorReelVelocityAdditiveStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingReeled = { "_isBeingReeled", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _isBeingReeled), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingReeled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingReeled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__maximumVelocityAdditive_MetaData[] = {
		{ "Category", "SurvivorReelVelocityAdditiveStrategy" },
		{ "ModuleRelativePath", "Public/SurvivorReelVelocityAdditiveStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__maximumVelocityAdditive = { "_maximumVelocityAdditive", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _maximumVelocityAdditive), METADATA_PARAMS(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__maximumVelocityAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__maximumVelocityAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__minimumLinkLengthDelta_MetaData[] = {
		{ "Category", "SurvivorReelVelocityAdditiveStrategy" },
		{ "ModuleRelativePath", "Public/SurvivorReelVelocityAdditiveStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__minimumLinkLengthDelta = { "_minimumLinkLengthDelta", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _minimumLinkLengthDelta), METADATA_PARAMS(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__minimumLinkLengthDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__minimumLinkLengthDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__reelSpeed_MetaData[] = {
		{ "Category", "SurvivorReelVelocityAdditiveStrategy" },
		{ "ModuleRelativePath", "Public/SurvivorReelVelocityAdditiveStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__reelSpeed = { "_reelSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _reelSpeed), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__reelSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__reelSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingPulled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__isBeingReeled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__maximumVelocityAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__minimumLinkLengthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::NewProp__reelSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorReelVelocityAdditiveStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::ClassParams = {
		&USurvivorReelVelocityAdditiveStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorReelVelocityAdditiveStrategy, 800111302);
	template<> THEGUNSLINGER_API UClass* StaticClass<USurvivorReelVelocityAdditiveStrategy>()
	{
		return USurvivorReelVelocityAdditiveStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorReelVelocityAdditiveStrategy(Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy, &USurvivorReelVelocityAdditiveStrategy::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("USurvivorReelVelocityAdditiveStrategy"), false, nullptr, nullptr, nullptr);

	void USurvivorReelVelocityAdditiveStrategy::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isBeingReeled(TEXT("_isBeingReeled"));
		static const FName Name__isBeingPulled(TEXT("_isBeingPulled"));

		const bool bIsValid = true
			&& Name__isBeingReeled == ClassReps[(int32)ENetFields_Private::_isBeingReeled].Property->GetFName()
			&& Name__isBeingPulled == ClassReps[(int32)ENetFields_Private::_isBeingPulled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USurvivorReelVelocityAdditiveStrategy"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorReelVelocityAdditiveStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
