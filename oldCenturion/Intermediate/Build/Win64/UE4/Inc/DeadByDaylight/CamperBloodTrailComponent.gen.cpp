// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperBloodTrailComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperBloodTrailComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperBloodTrailComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperBloodTrailComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodTrailComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCamperBloodTrailComponent::execOnDamageStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldDamageState);
		P_GET_ENUM(ECamperDamageState,Z_Param_currentDamageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageStateChanged(ECamperDamageState(Z_Param_oldDamageState),ECamperDamageState(Z_Param_currentDamageState));
		P_NATIVE_END;
	}
	void UCamperBloodTrailComponent::StaticRegisterNativesUCamperBloodTrailComponent()
	{
		UClass* Class = UCamperBloodTrailComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamageStateChanged", &UCamperBloodTrailComponent::execOnDamageStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics
	{
		struct CamperBloodTrailComponent_eventOnDamageStateChanged_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::NewProp_currentDamageState = { "currentDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperBloodTrailComponent_eventOnDamageStateChanged_Parms, currentDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::NewProp_currentDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::NewProp_oldDamageState = { "oldDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperBloodTrailComponent_eventOnDamageStateChanged_Parms, oldDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::NewProp_oldDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::NewProp_currentDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::NewProp_currentDamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::NewProp_oldDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::NewProp_oldDamageState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperBloodTrailComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperBloodTrailComponent, nullptr, "OnDamageStateChanged", nullptr, nullptr, sizeof(CamperBloodTrailComponent_eventOnDamageStateChanged_Parms), Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCamperBloodTrailComponent_NoRegister()
	{
		return UCamperBloodTrailComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCamperBloodTrailComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperPerkManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperPerkManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCamperBloodTrailComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBloodTrailComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCamperBloodTrailComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCamperBloodTrailComponent_OnDamageStateChanged, "OnDamageStateChanged" }, // 3372705305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperBloodTrailComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CamperBloodTrailComponent.h" },
		{ "ModuleRelativePath", "Public/CamperBloodTrailComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperBloodTrailComponent_Statics::NewProp__camperPerkManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperBloodTrailComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamperBloodTrailComponent_Statics::NewProp__camperPerkManager = { "_camperPerkManager", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperBloodTrailComponent, _camperPerkManager), Z_Construct_UClass_UPerkManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCamperBloodTrailComponent_Statics::NewProp__camperPerkManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperBloodTrailComponent_Statics::NewProp__camperPerkManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCamperBloodTrailComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperBloodTrailComponent_Statics::NewProp__camperPerkManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCamperBloodTrailComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamperBloodTrailComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCamperBloodTrailComponent_Statics::ClassParams = {
		&UCamperBloodTrailComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCamperBloodTrailComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCamperBloodTrailComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCamperBloodTrailComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperBloodTrailComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCamperBloodTrailComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCamperBloodTrailComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCamperBloodTrailComponent, 3535131993);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCamperBloodTrailComponent>()
	{
		return UCamperBloodTrailComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCamperBloodTrailComponent(Z_Construct_UClass_UCamperBloodTrailComponent, &UCamperBloodTrailComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCamperBloodTrailComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCamperBloodTrailComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
