// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/Diversion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiversion() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_UDiversion_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_UDiversion();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState();
// End Cross Module References
	DEFINE_FUNCTION(UDiversion::execAuthority_OnOwningSurvivorDamageStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldDamageState);
		P_GET_ENUM(ECamperDamageState,Z_Param_currentDamageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState(Z_Param_oldDamageState),ECamperDamageState(Z_Param_currentDamageState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiversion::execAuthority_OnOwningSurvivorImmobilizedStateChanged)
	{
		P_GET_ENUM(ECamperImmobilizeState,Z_Param_oldImmobilizeState);
		P_GET_ENUM(ECamperImmobilizeState,Z_Param_newImmobilizeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOwningSurvivorImmobilizedStateChanged(ECamperImmobilizeState(Z_Param_oldImmobilizeState),ECamperImmobilizeState(Z_Param_newImmobilizeState));
		P_NATIVE_END;
	}
	void UDiversion::StaticRegisterNativesUDiversion()
	{
		UClass* Class = UDiversion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnOwningSurvivorDamageStateChanged", &UDiversion::execAuthority_OnOwningSurvivorDamageStateChanged },
			{ "Authority_OnOwningSurvivorImmobilizedStateChanged", &UDiversion::execAuthority_OnOwningSurvivorImmobilizedStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics
	{
		struct Diversion_eventAuthority_OnOwningSurvivorDamageStateChanged_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::NewProp_currentDamageState = { "currentDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Diversion_eventAuthority_OnOwningSurvivorDamageStateChanged_Parms, currentDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::NewProp_currentDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::NewProp_oldDamageState = { "oldDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Diversion_eventAuthority_OnOwningSurvivorDamageStateChanged_Parms, oldDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::NewProp_oldDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::NewProp_currentDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::NewProp_currentDamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::NewProp_oldDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::NewProp_oldDamageState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiversion, nullptr, "Authority_OnOwningSurvivorDamageStateChanged", nullptr, nullptr, sizeof(Diversion_eventAuthority_OnOwningSurvivorDamageStateChanged_Parms), Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics
	{
		struct Diversion_eventAuthority_OnOwningSurvivorImmobilizedStateChanged_Parms
		{
			ECamperImmobilizeState oldImmobilizeState;
			ECamperImmobilizeState newImmobilizeState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newImmobilizeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newImmobilizeState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newImmobilizeState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldImmobilizeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldImmobilizeState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldImmobilizeState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_newImmobilizeState = { "newImmobilizeState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Diversion_eventAuthority_OnOwningSurvivorImmobilizedStateChanged_Parms, newImmobilizeState), Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState, METADATA_PARAMS(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState = { "oldImmobilizeState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Diversion_eventAuthority_OnOwningSurvivorImmobilizedStateChanged_Parms, oldImmobilizeState), Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState, METADATA_PARAMS(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_newImmobilizeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiversion, nullptr, "Authority_OnOwningSurvivorImmobilizedStateChanged", nullptr, nullptr, sizeof(Diversion_eventAuthority_OnOwningSurvivorImmobilizedStateChanged_Parms), Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiversion_NoRegister()
	{
		return UDiversion::StaticClass();
	}
	struct Z_Construct_UClass_UDiversion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwPebbleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__throwPebbleDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__diversionActivationTimePerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__diversionActivationTimePerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiversion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiversion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorDamageStateChanged, "Authority_OnOwningSurvivorDamageStateChanged" }, // 1135407894
		{ &Z_Construct_UFunction_UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged, "Authority_OnOwningSurvivorImmobilizedStateChanged" }, // 3753431125
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiversion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Diversion.h" },
		{ "ModuleRelativePath", "Public/Diversion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiversion_Statics::NewProp__throwPebbleDistance_MetaData[] = {
		{ "Category", "Diversion" },
		{ "ModuleRelativePath", "Public/Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDiversion_Statics::NewProp__throwPebbleDistance = { "_throwPebbleDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiversion, _throwPebbleDistance), METADATA_PARAMS(Z_Construct_UClass_UDiversion_Statics::NewProp__throwPebbleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiversion_Statics::NewProp__throwPebbleDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiversion_Statics::NewProp__diversionActivationTimePerLevel_MetaData[] = {
		{ "Category", "Diversion" },
		{ "ModuleRelativePath", "Public/Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDiversion_Statics::NewProp__diversionActivationTimePerLevel = { "_diversionActivationTimePerLevel", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_diversionActivationTimePerLevel, UDiversion), STRUCT_OFFSET(UDiversion, _diversionActivationTimePerLevel), METADATA_PARAMS(Z_Construct_UClass_UDiversion_Statics::NewProp__diversionActivationTimePerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiversion_Statics::NewProp__diversionActivationTimePerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiversion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiversion_Statics::NewProp__throwPebbleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiversion_Statics::NewProp__diversionActivationTimePerLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiversion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiversion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiversion_Statics::ClassParams = {
		&UDiversion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiversion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiversion_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDiversion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiversion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiversion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiversion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiversion, 866171791);
	template<> THESPIRIT_API UClass* StaticClass<UDiversion>()
	{
		return UDiversion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiversion(Z_Construct_UClass_UDiversion, &UDiversion::StaticClass, TEXT("/Script/TheSpirit"), TEXT("UDiversion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiversion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
