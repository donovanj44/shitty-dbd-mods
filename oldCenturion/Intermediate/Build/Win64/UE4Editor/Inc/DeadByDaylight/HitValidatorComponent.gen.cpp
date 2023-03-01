// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HitValidatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitValidatorComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidatorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FHitValidationReport();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidationConfigsComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHitValidatorComponent::execMulticast_DrawDebugHit)
	{
		P_GET_STRUCT(FHitValidationReport,Z_Param_report);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DrawDebugHit_Implementation(Z_Param_report);
		P_NATIVE_END;
	}
	static FName NAME_UHitValidatorComponent_Multicast_DrawDebugHit = FName(TEXT("Multicast_DrawDebugHit"));
	void UHitValidatorComponent::Multicast_DrawDebugHit(FHitValidationReport report)
	{
		HitValidatorComponent_eventMulticast_DrawDebugHit_Parms Parms;
		Parms.report=report;
		ProcessEvent(FindFunctionChecked(NAME_UHitValidatorComponent_Multicast_DrawDebugHit),&Parms);
	}
	void UHitValidatorComponent::StaticRegisterNativesUHitValidatorComponent()
	{
		UClass* Class = UHitValidatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_DrawDebugHit", &UHitValidatorComponent::execMulticast_DrawDebugHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_report;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::NewProp_report = { "report", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitValidatorComponent_eventMulticast_DrawDebugHit_Parms, report), Z_Construct_UScriptStruct_FHitValidationReport, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::NewProp_report,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitValidatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitValidatorComponent, nullptr, "Multicast_DrawDebugHit", nullptr, nullptr, sizeof(HitValidatorComponent_eventMulticast_DrawDebugHit_Parms), Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHitValidatorComponent_NoRegister()
	{
		return UHitValidatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHitValidatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitValidationConfigComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__hitValidationConfigComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumSquareDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maximumSquareDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitValidatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHitValidatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitValidatorComponent_Multicast_DrawDebugHit, "Multicast_DrawDebugHit" }, // 3136046008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitValidatorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitValidatorComponent.h" },
		{ "ModuleRelativePath", "Public/HitValidatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__hitValidationConfigComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__hitValidationConfigComponent = { "_hitValidationConfigComponent", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitValidatorComponent, _hitValidationConfigComponent), Z_Construct_UClass_UHitValidationConfigsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__hitValidationConfigComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__hitValidationConfigComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__maximumSquareDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__maximumSquareDistance = { "_maximumSquareDistance", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitValidatorComponent, _maximumSquareDistance), METADATA_PARAMS(Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__maximumSquareDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__maximumSquareDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitValidatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__hitValidationConfigComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitValidatorComponent_Statics::NewProp__maximumSquareDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitValidatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitValidatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHitValidatorComponent_Statics::ClassParams = {
		&UHitValidatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHitValidatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHitValidatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHitValidatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitValidatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitValidatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitValidatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitValidatorComponent, 688086090);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHitValidatorComponent>()
	{
		return UHitValidatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitValidatorComponent(Z_Construct_UClass_UHitValidatorComponent, &UHitValidatorComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHitValidatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitValidatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
