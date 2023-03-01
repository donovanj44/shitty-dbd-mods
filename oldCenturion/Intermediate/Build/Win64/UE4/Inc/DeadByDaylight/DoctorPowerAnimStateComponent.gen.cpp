// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DoctorPowerAnimStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoctorPowerAnimStateComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDoctorPowerAnimStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDoctorPowerAnimStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityPhase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityType();
// End Cross Module References
	DEFINE_FUNCTION(UDoctorPowerAnimStateComponent::execSetCurrentAbilityPhase)
	{
		P_GET_ENUM(EDoctorAbilityPhase,Z_Param_abilityPhase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAbilityPhase(EDoctorAbilityPhase(Z_Param_abilityPhase));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDoctorPowerAnimStateComponent::execSetCurrentAbilityType)
	{
		P_GET_ENUM(EDoctorAbilityType,Z_Param_abilityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAbilityType(EDoctorAbilityType(Z_Param_abilityType));
		P_NATIVE_END;
	}
	void UDoctorPowerAnimStateComponent::StaticRegisterNativesUDoctorPowerAnimStateComponent()
	{
		UClass* Class = UDoctorPowerAnimStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentAbilityPhase", &UDoctorPowerAnimStateComponent::execSetCurrentAbilityPhase },
			{ "SetCurrentAbilityType", &UDoctorPowerAnimStateComponent::execSetCurrentAbilityType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics
	{
		struct DoctorPowerAnimStateComponent_eventSetCurrentAbilityPhase_Parms
		{
			EDoctorAbilityPhase abilityPhase;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_abilityPhase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_abilityPhase_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::NewProp_abilityPhase = { "abilityPhase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoctorPowerAnimStateComponent_eventSetCurrentAbilityPhase_Parms, abilityPhase), Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityPhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::NewProp_abilityPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::NewProp_abilityPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::NewProp_abilityPhase_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoctorPowerAnimStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoctorPowerAnimStateComponent, nullptr, "SetCurrentAbilityPhase", nullptr, nullptr, sizeof(DoctorPowerAnimStateComponent_eventSetCurrentAbilityPhase_Parms), Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics
	{
		struct DoctorPowerAnimStateComponent_eventSetCurrentAbilityType_Parms
		{
			EDoctorAbilityType abilityType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_abilityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_abilityType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::NewProp_abilityType = { "abilityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoctorPowerAnimStateComponent_eventSetCurrentAbilityType_Parms, abilityType), Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::NewProp_abilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::NewProp_abilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::NewProp_abilityType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoctorPowerAnimStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoctorPowerAnimStateComponent, nullptr, "SetCurrentAbilityType", nullptr, nullptr, sizeof(DoctorPowerAnimStateComponent_eventSetCurrentAbilityType_Parms), Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDoctorPowerAnimStateComponent_NoRegister()
	{
		return UDoctorPowerAnimStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__abilityPhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__abilityPhase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__abilityPhase_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__abilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__abilityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__abilityType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityPhase, "SetCurrentAbilityPhase" }, // 4017183485
		{ &Z_Construct_UFunction_UDoctorPowerAnimStateComponent_SetCurrentAbilityType, "SetCurrentAbilityType" }, // 1532325137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DoctorPowerAnimStateComponent.h" },
		{ "ModuleRelativePath", "Public/DoctorPowerAnimStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityPhase_MetaData[] = {
		{ "Category", "DoctorPowerAnimStateComponent" },
		{ "ModuleRelativePath", "Public/DoctorPowerAnimStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityPhase = { "_abilityPhase", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoctorPowerAnimStateComponent, _abilityPhase), Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityPhase, METADATA_PARAMS(Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityPhase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityType_MetaData[] = {
		{ "Category", "DoctorPowerAnimStateComponent" },
		{ "ModuleRelativePath", "Public/DoctorPowerAnimStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityType = { "_abilityType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoctorPowerAnimStateComponent, _abilityType), Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityType, METADATA_PARAMS(Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityPhase_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::NewProp__abilityType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoctorPowerAnimStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::ClassParams = {
		&UDoctorPowerAnimStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoctorPowerAnimStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoctorPowerAnimStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoctorPowerAnimStateComponent, 2520001128);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDoctorPowerAnimStateComponent>()
	{
		return UDoctorPowerAnimStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoctorPowerAnimStateComponent(Z_Construct_UClass_UDoctorPowerAnimStateComponent, &UDoctorPowerAnimStateComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDoctorPowerAnimStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoctorPowerAnimStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
