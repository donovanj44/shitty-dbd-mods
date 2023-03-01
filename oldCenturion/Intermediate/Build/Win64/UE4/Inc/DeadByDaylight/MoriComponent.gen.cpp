// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MoriComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoriComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMoriComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMoriComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMoriComponent::execOnMoriChargeCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoriChargeCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoriComponent::execOnMoriFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoriFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoriComponent::execOnMoriUpdateStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoriUpdateStart();
		P_NATIVE_END;
	}
	void UMoriComponent::StaticRegisterNativesUMoriComponent()
	{
		UClass* Class = UMoriComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMoriChargeCompleted", &UMoriComponent::execOnMoriChargeCompleted },
			{ "OnMoriFinished", &UMoriComponent::execOnMoriFinished },
			{ "OnMoriUpdateStart", &UMoriComponent::execOnMoriUpdateStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoriComponent_OnMoriChargeCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoriComponent_OnMoriChargeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoriComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoriComponent_OnMoriChargeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoriComponent, nullptr, "OnMoriChargeCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoriComponent_OnMoriChargeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoriComponent_OnMoriChargeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoriComponent_OnMoriChargeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoriComponent_OnMoriChargeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoriComponent_OnMoriFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoriComponent_OnMoriFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoriComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoriComponent_OnMoriFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoriComponent, nullptr, "OnMoriFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoriComponent_OnMoriFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoriComponent_OnMoriFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoriComponent_OnMoriFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoriComponent_OnMoriFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoriComponent_OnMoriUpdateStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoriComponent_OnMoriUpdateStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoriComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoriComponent_OnMoriUpdateStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoriComponent, nullptr, "OnMoriUpdateStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoriComponent_OnMoriUpdateStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoriComponent_OnMoriUpdateStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoriComponent_OnMoriUpdateStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoriComponent_OnMoriUpdateStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoriComponent_NoRegister()
	{
		return UMoriComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoriComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__moriInteractionClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__moriInteractionClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__moriInteractionClasses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoriComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoriComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoriComponent_OnMoriChargeCompleted, "OnMoriChargeCompleted" }, // 4284235614
		{ &Z_Construct_UFunction_UMoriComponent_OnMoriFinished, "OnMoriFinished" }, // 1298323315
		{ &Z_Construct_UFunction_UMoriComponent_OnMoriUpdateStart, "OnMoriUpdateStart" }, // 2600440711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoriComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoriComponent.h" },
		{ "ModuleRelativePath", "Public/MoriComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoriComponent_Statics::NewProp__moriInteractionClasses_MetaData[] = {
		{ "Category", "MoriComponent" },
		{ "ModuleRelativePath", "Public/MoriComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoriComponent_Statics::NewProp__moriInteractionClasses = { "_moriInteractionClasses", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoriComponent, _moriInteractionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoriComponent_Statics::NewProp__moriInteractionClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoriComponent_Statics::NewProp__moriInteractionClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoriComponent_Statics::NewProp__moriInteractionClasses_Inner = { "_moriInteractionClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoriComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoriComponent_Statics::NewProp__moriInteractionClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoriComponent_Statics::NewProp__moriInteractionClasses_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoriComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoriComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoriComponent_Statics::ClassParams = {
		&UMoriComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoriComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoriComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMoriComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoriComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoriComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoriComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoriComponent, 3339996585);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMoriComponent>()
	{
		return UMoriComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoriComponent(Z_Construct_UClass_UMoriComponent, &UMoriComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMoriComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoriComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
