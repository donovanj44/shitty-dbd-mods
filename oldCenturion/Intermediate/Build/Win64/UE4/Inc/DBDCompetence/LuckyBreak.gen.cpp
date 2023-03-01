// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/LuckyBreak.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuckyBreak() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ULuckyBreak_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ULuckyBreak();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
// End Cross Module References
	DEFINE_FUNCTION(ULuckyBreak::execActivationTimerEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivationTimerEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuckyBreak::execOnDamageStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldDamageState);
		P_GET_ENUM(ECamperDamageState,Z_Param_currentDamageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageStateChanged(ECamperDamageState(Z_Param_oldDamageState),ECamperDamageState(Z_Param_currentDamageState));
		P_NATIVE_END;
	}
	void ULuckyBreak::StaticRegisterNativesULuckyBreak()
	{
		UClass* Class = ULuckyBreak::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivationTimerEnded", &ULuckyBreak::execActivationTimerEnded },
			{ "OnDamageStateChanged", &ULuckyBreak::execOnDamageStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuckyBreak_ActivationTimerEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuckyBreak_ActivationTimerEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuckyBreak.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuckyBreak_ActivationTimerEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuckyBreak, nullptr, "ActivationTimerEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuckyBreak_ActivationTimerEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuckyBreak_ActivationTimerEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuckyBreak_ActivationTimerEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuckyBreak_ActivationTimerEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics
	{
		struct LuckyBreak_eventOnDamageStateChanged_Parms
		{
			ECamperDamageState oldDamageState;
			ECamperDamageState currentDamageState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentDamageState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldDamageState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::NewProp_currentDamageState = { "currentDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuckyBreak_eventOnDamageStateChanged_Parms, currentDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::NewProp_currentDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::NewProp_oldDamageState = { "oldDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuckyBreak_eventOnDamageStateChanged_Parms, oldDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::NewProp_oldDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::NewProp_currentDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::NewProp_currentDamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::NewProp_oldDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::NewProp_oldDamageState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuckyBreak.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuckyBreak, nullptr, "OnDamageStateChanged", nullptr, nullptr, sizeof(LuckyBreak_eventOnDamageStateChanged_Parms), Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuckyBreak_NoRegister()
	{
		return ULuckyBreak::StaticClass();
	}
	struct Z_Construct_UClass_ULuckyBreak_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__activationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuckyBreak_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuckyBreak_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuckyBreak_ActivationTimerEnded, "ActivationTimerEnded" }, // 1434763704
		{ &Z_Construct_UFunction_ULuckyBreak_OnDamageStateChanged, "OnDamageStateChanged" }, // 1644538868
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuckyBreak_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuckyBreak.h" },
		{ "ModuleRelativePath", "Public/LuckyBreak.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuckyBreak_Statics::NewProp__activationTime_MetaData[] = {
		{ "Category", "LuckyBreak" },
		{ "ModuleRelativePath", "Public/LuckyBreak.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULuckyBreak_Statics::NewProp__activationTime = { "_activationTime", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_activationTime, ULuckyBreak), STRUCT_OFFSET(ULuckyBreak, _activationTime), METADATA_PARAMS(Z_Construct_UClass_ULuckyBreak_Statics::NewProp__activationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuckyBreak_Statics::NewProp__activationTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuckyBreak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuckyBreak_Statics::NewProp__activationTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuckyBreak_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuckyBreak>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuckyBreak_Statics::ClassParams = {
		&ULuckyBreak::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULuckyBreak_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuckyBreak_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULuckyBreak_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuckyBreak_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuckyBreak()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuckyBreak_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuckyBreak, 2465469511);
	template<> DBDCOMPETENCE_API UClass* StaticClass<ULuckyBreak>()
	{
		return ULuckyBreak::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuckyBreak(Z_Construct_UClass_ULuckyBreak, &ULuckyBreak::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("ULuckyBreak"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuckyBreak);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
