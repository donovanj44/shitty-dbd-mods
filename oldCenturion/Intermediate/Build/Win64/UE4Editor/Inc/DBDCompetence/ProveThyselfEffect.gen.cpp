// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ProveThyselfEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProveThyselfEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UProveThyselfEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UProveThyselfEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UProveThyselfEffect::execOnInRangeOfOriginatorChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInRangeOfOriginatorChanged(Z_Param_inRange,Z_Param_survivor);
		P_NATIVE_END;
	}
	void UProveThyselfEffect::StaticRegisterNativesUProveThyselfEffect()
	{
		UClass* Class = UProveThyselfEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInRangeOfOriginatorChanged", &UProveThyselfEffect::execOnInRangeOfOriginatorChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics
	{
		struct ProveThyselfEffect_eventOnInRangeOfOriginatorChanged_Parms
		{
			bool inRange;
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProveThyselfEffect_eventOnInRangeOfOriginatorChanged_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((ProveThyselfEffect_eventOnInRangeOfOriginatorChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProveThyselfEffect_eventOnInRangeOfOriginatorChanged_Parms), &Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_survivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProveThyselfEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProveThyselfEffect, nullptr, "OnInRangeOfOriginatorChanged", nullptr, nullptr, sizeof(ProveThyselfEffect_eventOnInRangeOfOriginatorChanged_Parms), Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProveThyselfEffect_NoRegister()
	{
		return UProveThyselfEffect::StaticClass();
	}
	struct Z_Construct_UClass_UProveThyselfEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedPercentageAddedPerSurvivorRepairingInRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__speedPercentageAddedPerSurvivorRepairingInRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__proveThyselfRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__proveThyselfRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProveThyselfEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProveThyselfEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProveThyselfEffect_OnInRangeOfOriginatorChanged, "OnInRangeOfOriginatorChanged" }, // 354880841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProveThyselfEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProveThyselfEffect.h" },
		{ "ModuleRelativePath", "Public/ProveThyselfEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__speedPercentageAddedPerSurvivorRepairingInRange_MetaData[] = {
		{ "Category", "ProveThyselfEffect" },
		{ "ModuleRelativePath", "Public/ProveThyselfEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__speedPercentageAddedPerSurvivorRepairingInRange = { "_speedPercentageAddedPerSurvivorRepairingInRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProveThyselfEffect, _speedPercentageAddedPerSurvivorRepairingInRange), METADATA_PARAMS(Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__speedPercentageAddedPerSurvivorRepairingInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__speedPercentageAddedPerSurvivorRepairingInRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__proveThyselfRange_MetaData[] = {
		{ "Category", "ProveThyselfEffect" },
		{ "ModuleRelativePath", "Public/ProveThyselfEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__proveThyselfRange = { "_proveThyselfRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProveThyselfEffect, _proveThyselfRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__proveThyselfRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__proveThyselfRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProveThyselfEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__speedPercentageAddedPerSurvivorRepairingInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProveThyselfEffect_Statics::NewProp__proveThyselfRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProveThyselfEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProveThyselfEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProveThyselfEffect_Statics::ClassParams = {
		&UProveThyselfEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProveThyselfEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProveThyselfEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProveThyselfEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProveThyselfEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProveThyselfEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProveThyselfEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProveThyselfEffect, 2544580728);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UProveThyselfEffect>()
	{
		return UProveThyselfEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProveThyselfEffect(Z_Construct_UClass_UProveThyselfEffect, &UProveThyselfEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UProveThyselfEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProveThyselfEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
