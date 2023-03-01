// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ActivateK24PowerInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateK24PowerInteraction() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UActivateK24PowerInteraction_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UActivateK24PowerInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_AK24Power_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UActivateK24PowerInteraction::execSetK24Power)
	{
		P_GET_OBJECT(AK24Power,Z_Param_k24Power);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetK24Power(Z_Param_k24Power);
		P_NATIVE_END;
	}
	void UActivateK24PowerInteraction::StaticRegisterNativesUActivateK24PowerInteraction()
	{
		UClass* Class = UActivateK24PowerInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetK24Power", &UActivateK24PowerInteraction::execSetK24Power },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics
	{
		struct ActivateK24PowerInteraction_eventSetK24Power_Parms
		{
			AK24Power* k24Power;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_k24Power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::NewProp_k24Power = { "k24Power", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivateK24PowerInteraction_eventSetK24Power_Parms, k24Power), Z_Construct_UClass_AK24Power_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::NewProp_k24Power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivateK24PowerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivateK24PowerInteraction, nullptr, "SetK24Power", nullptr, nullptr, sizeof(ActivateK24PowerInteraction_eventSetK24Power_Parms), Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivateK24PowerInteraction_NoRegister()
	{
		return UActivateK24PowerInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UActivateK24PowerInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumTimeToTriggerRegularAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumTimeToTriggerRegularAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionViewPitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionViewPitchMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionViewPitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionViewPitchMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivateK24PowerInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivateK24PowerInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivateK24PowerInteraction_SetK24Power, "SetK24Power" }, // 2385525997
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateK24PowerInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActivateK24PowerInteraction.h" },
		{ "ModuleRelativePath", "Public/ActivateK24PowerInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__maximumTimeToTriggerRegularAttack_MetaData[] = {
		{ "Category", "ActivateK24PowerInteraction" },
		{ "ModuleRelativePath", "Public/ActivateK24PowerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__maximumTimeToTriggerRegularAttack = { "_maximumTimeToTriggerRegularAttack", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivateK24PowerInteraction, _maximumTimeToTriggerRegularAttack), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__maximumTimeToTriggerRegularAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__maximumTimeToTriggerRegularAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMin_MetaData[] = {
		{ "Category", "ActivateK24PowerInteraction" },
		{ "ModuleRelativePath", "Public/ActivateK24PowerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMin = { "_interactionViewPitchMin", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivateK24PowerInteraction, _interactionViewPitchMin), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMax_MetaData[] = {
		{ "Category", "ActivateK24PowerInteraction" },
		{ "ModuleRelativePath", "Public/ActivateK24PowerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMax = { "_interactionViewPitchMax", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivateK24PowerInteraction, _interactionViewPitchMax), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivateK24PowerInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__maximumTimeToTriggerRegularAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivateK24PowerInteraction_Statics::NewProp__interactionViewPitchMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivateK24PowerInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivateK24PowerInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivateK24PowerInteraction_Statics::ClassParams = {
		&UActivateK24PowerInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActivateK24PowerInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateK24PowerInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivateK24PowerInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivateK24PowerInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivateK24PowerInteraction, 3262028078);
	template<> THEK24_API UClass* StaticClass<UActivateK24PowerInteraction>()
	{
		return UActivateK24PowerInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivateK24PowerInteraction(Z_Construct_UClass_UActivateK24PowerInteraction, &UActivateK24PowerInteraction::StaticClass, TEXT("/Script/TheK24"), TEXT("UActivateK24PowerInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivateK24PowerInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
