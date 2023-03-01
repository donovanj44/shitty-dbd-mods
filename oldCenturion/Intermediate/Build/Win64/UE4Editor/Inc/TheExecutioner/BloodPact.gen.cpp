// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/BloodPact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodPact() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UBloodPact_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UBloodPact();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBloodPact::execAuthority_OnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnInRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	void UBloodPact::StaticRegisterNativesUBloodPact()
	{
		UClass* Class = UBloodPact::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnInRangeChanged", &UBloodPact::execAuthority_OnInRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics
	{
		struct BloodPact_eventAuthority_OnInRangeChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((BloodPact_eventAuthority_OnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BloodPact_eventAuthority_OnInRangeChanged_Parms), &Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodPact, nullptr, "Authority_OnInRangeChanged", nullptr, nullptr, sizeof(BloodPact_eventAuthority_OnInRangeChanged_Parms), Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodPact_NoRegister()
	{
		return UBloodPact::StaticClass();
	}
	struct Z_Construct_UClass_UBloodPact_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__otherPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__otherPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__otherPlayerHasteStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__otherPlayerHasteStatusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ownerHasteStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ownerHasteStatusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obsessionStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__obsessionStatusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ownerStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ownerStatusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasteEffectMovementSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hasteEffectMovementSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasteEffectRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hasteEffectRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fullHealthStateOnly_MetaData[];
#endif
		static void NewProp__fullHealthStateOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__fullHealthStateOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dyingToInjured_MetaData[];
#endif
		static void NewProp__dyingToInjured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__dyingToInjured;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodPact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodPact_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodPact_Authority_OnInRangeChanged, "Authority_OnInRangeChanged" }, // 1643222900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodPact.h" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayer = { "_otherPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodPact, _otherPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayerHasteStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayerHasteStatusEffect = { "_otherPlayerHasteStatusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodPact, _otherPlayerHasteStatusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayerHasteStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayerHasteStatusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerHasteStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerHasteStatusEffect = { "_ownerHasteStatusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodPact, _ownerHasteStatusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerHasteStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerHasteStatusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__obsessionStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__obsessionStatusEffect = { "_obsessionStatusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodPact, _obsessionStatusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__obsessionStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__obsessionStatusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerStatusEffect = { "_ownerStatusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodPact, _ownerStatusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerStatusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectMovementSpeedIncrease_MetaData[] = {
		{ "Category", "BloodPact" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectMovementSpeedIncrease = { "_hasteEffectMovementSpeedIncrease", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_hasteEffectMovementSpeedIncrease, UBloodPact), STRUCT_OFFSET(UBloodPact, _hasteEffectMovementSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectMovementSpeedIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectMovementSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectRange_MetaData[] = {
		{ "Category", "BloodPact" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectRange = { "_hasteEffectRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodPact, _hasteEffectRange), METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__fullHealthStateOnly_MetaData[] = {
		{ "Category", "BloodPact" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	void Z_Construct_UClass_UBloodPact_Statics::NewProp__fullHealthStateOnly_SetBit(void* Obj)
	{
		((UBloodPact*)Obj)->_fullHealthStateOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__fullHealthStateOnly = { "_fullHealthStateOnly", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBloodPact), &Z_Construct_UClass_UBloodPact_Statics::NewProp__fullHealthStateOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__fullHealthStateOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__fullHealthStateOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodPact_Statics::NewProp__dyingToInjured_MetaData[] = {
		{ "Category", "BloodPact" },
		{ "ModuleRelativePath", "Public/BloodPact.h" },
	};
#endif
	void Z_Construct_UClass_UBloodPact_Statics::NewProp__dyingToInjured_SetBit(void* Obj)
	{
		((UBloodPact*)Obj)->_dyingToInjured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBloodPact_Statics::NewProp__dyingToInjured = { "_dyingToInjured", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBloodPact), &Z_Construct_UClass_UBloodPact_Statics::NewProp__dyingToInjured_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::NewProp__dyingToInjured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::NewProp__dyingToInjured_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodPact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__otherPlayerHasteStatusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerHasteStatusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__obsessionStatusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__ownerStatusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectMovementSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__hasteEffectRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__fullHealthStateOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodPact_Statics::NewProp__dyingToInjured,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodPact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodPact>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodPact_Statics::ClassParams = {
		&UBloodPact::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodPact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodPact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodPact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodPact()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodPact_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodPact, 842585052);
	template<> THEEXECUTIONER_API UClass* StaticClass<UBloodPact>()
	{
		return UBloodPact::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodPact(Z_Construct_UClass_UBloodPact, &UBloodPact::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UBloodPact"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodPact);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
