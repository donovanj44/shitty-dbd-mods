// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Breakout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakout() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBreakout_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBreakout();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBreakout::execAuthority_ImposeWiggleStatusEffect)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ImposeWiggleStatusEffect(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBreakout::execAuthority_OnRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBreakout::execOnRep_IsPerkActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsPerkActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBreakout::execOnSlasherSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlasherSet(Z_Param_slasher);
		P_NATIVE_END;
	}
	void UBreakout::StaticRegisterNativesUBreakout()
	{
		UClass* Class = UBreakout::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ImposeWiggleStatusEffect", &UBreakout::execAuthority_ImposeWiggleStatusEffect },
			{ "Authority_OnRangeChanged", &UBreakout::execAuthority_OnRangeChanged },
			{ "OnRep_IsPerkActive", &UBreakout::execOnRep_IsPerkActive },
			{ "OnSlasherSet", &UBreakout::execOnSlasherSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics
	{
		struct Breakout_eventAuthority_ImposeWiggleStatusEffect_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Breakout_eventAuthority_ImposeWiggleStatusEffect_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBreakout, nullptr, "Authority_ImposeWiggleStatusEffect", nullptr, nullptr, sizeof(Breakout_eventAuthority_ImposeWiggleStatusEffect_Parms), Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics
	{
		struct Breakout_eventAuthority_OnRangeChanged_Parms
		{
			bool inRange;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((Breakout_eventAuthority_OnRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Breakout_eventAuthority_OnRangeChanged_Parms), &Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBreakout, nullptr, "Authority_OnRangeChanged", nullptr, nullptr, sizeof(Breakout_eventAuthority_OnRangeChanged_Parms), Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBreakout_OnRep_IsPerkActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreakout_OnRep_IsPerkActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBreakout_OnRep_IsPerkActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBreakout, nullptr, "OnRep_IsPerkActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBreakout_OnRep_IsPerkActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreakout_OnRep_IsPerkActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBreakout_OnRep_IsPerkActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBreakout_OnRep_IsPerkActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics
	{
		struct Breakout_eventOnSlasherSet_Parms
		{
			ASlasherPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Breakout_eventOnSlasherSet_Parms, slasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::NewProp_slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBreakout, nullptr, "OnSlasherSet", nullptr, nullptr, sizeof(Breakout_eventOnSlasherSet_Parms), Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBreakout_OnSlasherSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBreakout_OnSlasherSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBreakout_NoRegister()
	{
		return UBreakout::StaticClass();
	}
	struct Z_Construct_UClass_UBreakout_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPerkActive_MetaData[];
#endif
		static void NewProp__isPerkActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPerkActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorDistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__survivorDistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wiggleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wiggleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasteEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hasteEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBreakout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBreakout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBreakout_Authority_ImposeWiggleStatusEffect, "Authority_ImposeWiggleStatusEffect" }, // 3121491097
		{ &Z_Construct_UFunction_UBreakout_Authority_OnRangeChanged, "Authority_OnRangeChanged" }, // 3676865786
		{ &Z_Construct_UFunction_UBreakout_OnRep_IsPerkActive, "OnRep_IsPerkActive" }, // 2844875410
		{ &Z_Construct_UFunction_UBreakout_OnSlasherSet, "OnSlasherSet" }, // 1919510623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakout_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Breakout.h" },
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakout_Statics::NewProp__isPerkActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	void Z_Construct_UClass_UBreakout_Statics::NewProp__isPerkActive_SetBit(void* Obj)
	{
		((UBreakout*)Obj)->_isPerkActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBreakout_Statics::NewProp__isPerkActive = { "_isPerkActive", "OnRep_IsPerkActive", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBreakout), &Z_Construct_UClass_UBreakout_Statics::NewProp__isPerkActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBreakout_Statics::NewProp__isPerkActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreakout_Statics::NewProp__isPerkActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakout_Statics::NewProp__survivorDistanceMax_MetaData[] = {
		{ "Category", "Breakout" },
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBreakout_Statics::NewProp__survivorDistanceMax = { "_survivorDistanceMax", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreakout, _survivorDistanceMax), METADATA_PARAMS(Z_Construct_UClass_UBreakout_Statics::NewProp__survivorDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreakout_Statics::NewProp__survivorDistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakout_Statics::NewProp__wiggleEffect_MetaData[] = {
		{ "Category", "Breakout" },
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBreakout_Statics::NewProp__wiggleEffect = { "_wiggleEffect", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreakout, _wiggleEffect), METADATA_PARAMS(Z_Construct_UClass_UBreakout_Statics::NewProp__wiggleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreakout_Statics::NewProp__wiggleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakout_Statics::NewProp__hasteEffect_MetaData[] = {
		{ "Category", "Breakout" },
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBreakout_Statics::NewProp__hasteEffect = { "_hasteEffect", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_hasteEffect, UBreakout), STRUCT_OFFSET(UBreakout, _hasteEffect), METADATA_PARAMS(Z_Construct_UClass_UBreakout_Statics::NewProp__hasteEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreakout_Statics::NewProp__hasteEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakout_Statics::NewProp__playerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreakout_Statics::NewProp__playerOwner = { "_playerOwner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreakout, _playerOwner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreakout_Statics::NewProp__playerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreakout_Statics::NewProp__playerOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakout_Statics::NewProp__slasher_MetaData[] = {
		{ "ModuleRelativePath", "Public/Breakout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreakout_Statics::NewProp__slasher = { "_slasher", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreakout, _slasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreakout_Statics::NewProp__slasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreakout_Statics::NewProp__slasher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBreakout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakout_Statics::NewProp__isPerkActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakout_Statics::NewProp__survivorDistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakout_Statics::NewProp__wiggleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakout_Statics::NewProp__hasteEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakout_Statics::NewProp__playerOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakout_Statics::NewProp__slasher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBreakout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBreakout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBreakout_Statics::ClassParams = {
		&UBreakout::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBreakout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBreakout_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBreakout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBreakout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBreakout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBreakout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBreakout, 176400733);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UBreakout>()
	{
		return UBreakout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBreakout(Z_Construct_UClass_UBreakout, &UBreakout::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UBreakout"), false, nullptr, nullptr, nullptr);

	void UBreakout::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isPerkActive(TEXT("_isPerkActive"));

		const bool bIsValid = true
			&& Name__isPerkActive == ClassReps[(int32)ENetFields_Private::_isPerkActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBreakout"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBreakout);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
