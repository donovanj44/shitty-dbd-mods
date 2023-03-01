// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/FlurryComboScoreComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlurryComboScoreComponent() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UFlurryComboScoreComponent_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UFlurryComboScoreComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UFlurryComboScoreComponent::execOnRep_ComboScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ComboScore();
		P_NATIVE_END;
	}
	void UFlurryComboScoreComponent::StaticRegisterNativesUFlurryComboScoreComponent()
	{
		UClass* Class = UFlurryComboScoreComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ComboScore", &UFlurryComboScoreComponent::execOnRep_ComboScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlurryComboScoreComponent_OnRep_ComboScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlurryComboScoreComponent_OnRep_ComboScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlurryComboScoreComponent_OnRep_ComboScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlurryComboScoreComponent, nullptr, "OnRep_ComboScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlurryComboScoreComponent_OnRep_ComboScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlurryComboScoreComponent_OnRep_ComboScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlurryComboScoreComponent_OnRep_ComboScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlurryComboScoreComponent_OnRep_ComboScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlurryComboScoreComponent_NoRegister()
	{
		return UFlurryComboScoreComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFlurryComboScoreComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__comboScoreEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__comboScoreEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__comboScoreEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__thresholdsScoreForAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__thresholdsScoreForAudio;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__thresholdsScoreForAudio_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__thresholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__thresholds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__thresholds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__longRangeScoreMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__longRangeScoreMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__closeRangeScoreMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__closeRangeScoreMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__longRangeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__longRangeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fillLacerationComboScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fillLacerationComboScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumKnifeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumKnifeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseKnifeComboScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseKnifeComboScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeForCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeForCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__comboScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__comboScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlurryComboScoreComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlurryComboScoreComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlurryComboScoreComponent_OnRep_ComboScore, "OnRep_ComboScore" }, // 2869559865
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlurryComboScoreComponent.h" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScoreEvents_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScoreEvents = { "_comboScoreEvents", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _comboScoreEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScoreEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScoreEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScoreEvents_Inner = { "_comboScoreEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholdsScoreForAudio_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholdsScoreForAudio = { "_thresholdsScoreForAudio", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _thresholdsScoreForAudio), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholdsScoreForAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholdsScoreForAudio_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholdsScoreForAudio_Inner = { "_thresholdsScoreForAudio", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholds_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholds = { "_thresholds", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _thresholds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholds_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholds_Inner = { "_thresholds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeScoreMultiplier_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeScoreMultiplier = { "_longRangeScoreMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _longRangeScoreMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeScoreMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeScoreMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__closeRangeScoreMultiplier_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__closeRangeScoreMultiplier = { "_closeRangeScoreMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _closeRangeScoreMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__closeRangeScoreMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__closeRangeScoreMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeThreshold_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeThreshold = { "_longRangeThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _longRangeThreshold), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__fillLacerationComboScore_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__fillLacerationComboScore = { "_fillLacerationComboScore", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _fillLacerationComboScore), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__fillLacerationComboScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__fillLacerationComboScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__maximumKnifeMultiplier_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__maximumKnifeMultiplier = { "_maximumKnifeMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _maximumKnifeMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__maximumKnifeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__maximumKnifeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__baseKnifeComboScore_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__baseKnifeComboScore = { "_baseKnifeComboScore", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _baseKnifeComboScore), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__baseKnifeComboScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__baseKnifeComboScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__timeForCombo_MetaData[] = {
		{ "Category", "FlurryComboScoreComponent" },
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__timeForCombo = { "_timeForCombo", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _timeForCombo), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__timeForCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__timeForCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlurryComboScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScore = { "_comboScore", "OnRep_ComboScore", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryComboScoreComponent, _comboScore), METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlurryComboScoreComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScoreEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScoreEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholdsScoreForAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholdsScoreForAudio_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__thresholds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeScoreMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__closeRangeScoreMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__longRangeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__fillLacerationComboScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__maximumKnifeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__baseKnifeComboScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__timeForCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryComboScoreComponent_Statics::NewProp__comboScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlurryComboScoreComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlurryComboScoreComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlurryComboScoreComponent_Statics::ClassParams = {
		&UFlurryComboScoreComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlurryComboScoreComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryComboScoreComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlurryComboScoreComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlurryComboScoreComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlurryComboScoreComponent, 1914938043);
	template<> THEK23_API UClass* StaticClass<UFlurryComboScoreComponent>()
	{
		return UFlurryComboScoreComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlurryComboScoreComponent(Z_Construct_UClass_UFlurryComboScoreComponent, &UFlurryComboScoreComponent::StaticClass, TEXT("/Script/TheK23"), TEXT("UFlurryComboScoreComponent"), false, nullptr, nullptr, nullptr);

	void UFlurryComboScoreComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__comboScore(TEXT("_comboScore"));

		const bool bIsValid = true
			&& Name__comboScore == ClassReps[(int32)ENetFields_Private::_comboScore].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFlurryComboScoreComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlurryComboScoreComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
