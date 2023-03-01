// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/InnerStrength.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInnerStrength() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UInnerStrength_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UInnerStrength();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState();
// End Cross Module References
	DEFINE_FUNCTION(UInnerStrength::execOnPlayerImmobilizeStateChanged)
	{
		P_GET_ENUM(ECamperImmobilizeState,Z_Param_oldImmobilizeState);
		P_GET_ENUM(ECamperImmobilizeState,Z_Param_newImmobilizeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerImmobilizeStateChanged(ECamperImmobilizeState(Z_Param_oldImmobilizeState),ECamperImmobilizeState(Z_Param_newImmobilizeState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInnerStrength::execOnRep_PerkEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PerkEnabled();
		P_NATIVE_END;
	}
	void UInnerStrength::StaticRegisterNativesUInnerStrength()
	{
		UClass* Class = UInnerStrength::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerImmobilizeStateChanged", &UInnerStrength::execOnPlayerImmobilizeStateChanged },
			{ "OnRep_PerkEnabled", &UInnerStrength::execOnRep_PerkEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics
	{
		struct InnerStrength_eventOnPlayerImmobilizeStateChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState = { "newImmobilizeState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerStrength_eventOnPlayerImmobilizeStateChanged_Parms, newImmobilizeState), Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState, METADATA_PARAMS(Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState = { "oldImmobilizeState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerStrength_eventOnPlayerImmobilizeStateChanged_Parms, oldImmobilizeState), Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState, METADATA_PARAMS(Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InnerStrength.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerStrength, nullptr, "OnPlayerImmobilizeStateChanged", nullptr, nullptr, sizeof(InnerStrength_eventOnPlayerImmobilizeStateChanged_Parms), Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerStrength_OnRep_PerkEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerStrength_OnRep_PerkEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InnerStrength.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerStrength_OnRep_PerkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerStrength, nullptr, "OnRep_PerkEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerStrength_OnRep_PerkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInnerStrength_OnRep_PerkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerStrength_OnRep_PerkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerStrength_OnRep_PerkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInnerStrength_NoRegister()
	{
		return UInnerStrength::StaticClass();
	}
	struct Z_Construct_UClass_UInnerStrength_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkEnabled_MetaData[];
#endif
		static void NewProp__perkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__perkEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hideDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hideDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInnerStrength_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInnerStrength_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInnerStrength_OnPlayerImmobilizeStateChanged, "OnPlayerImmobilizeStateChanged" }, // 3871137352
		{ &Z_Construct_UFunction_UInnerStrength_OnRep_PerkEnabled, "OnRep_PerkEnabled" }, // 2975970748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInnerStrength_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InnerStrength.h" },
		{ "ModuleRelativePath", "Public/InnerStrength.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInnerStrength_Statics::NewProp__perkEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/InnerStrength.h" },
	};
#endif
	void Z_Construct_UClass_UInnerStrength_Statics::NewProp__perkEnabled_SetBit(void* Obj)
	{
		((UInnerStrength*)Obj)->_perkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInnerStrength_Statics::NewProp__perkEnabled = { "_perkEnabled", "OnRep_PerkEnabled", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInnerStrength), &Z_Construct_UClass_UInnerStrength_Statics::NewProp__perkEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInnerStrength_Statics::NewProp__perkEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInnerStrength_Statics::NewProp__perkEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInnerStrength_Statics::NewProp__hideDuration_MetaData[] = {
		{ "Category", "InnerStrength" },
		{ "ModuleRelativePath", "Public/InnerStrength.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInnerStrength_Statics::NewProp__hideDuration = { "_hideDuration", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_hideDuration, UInnerStrength), STRUCT_OFFSET(UInnerStrength, _hideDuration), METADATA_PARAMS(Z_Construct_UClass_UInnerStrength_Statics::NewProp__hideDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInnerStrength_Statics::NewProp__hideDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInnerStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInnerStrength_Statics::NewProp__perkEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInnerStrength_Statics::NewProp__hideDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInnerStrength_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInnerStrength>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInnerStrength_Statics::ClassParams = {
		&UInnerStrength::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInnerStrength_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInnerStrength_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInnerStrength_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInnerStrength_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInnerStrength()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInnerStrength_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInnerStrength, 1395866185);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UInnerStrength>()
	{
		return UInnerStrength::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInnerStrength(Z_Construct_UClass_UInnerStrength, &UInnerStrength::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UInnerStrength"), false, nullptr, nullptr, nullptr);

	void UInnerStrength::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__perkEnabled(TEXT("_perkEnabled"));

		const bool bIsValid = true
			&& Name__perkEnabled == ClassReps[(int32)ENetFields_Private::_perkEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInnerStrength"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInnerStrength);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
