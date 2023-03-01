// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FootSteps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootSteps() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFootSteps_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFootSteps();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDecalComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFootStep();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFootSteps::execOnLoudNoiseTriggered)
	{
		P_GET_OBJECT(AActor,Z_Param_originator);
		P_GET_OBJECT(AActor,Z_Param_instigatingActor);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_UBOOL(Z_Param_shouldTrack);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_audibleRange);
		P_GET_UBOOL(Z_Param_isQuickAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoudNoiseTriggered(Z_Param_originator,Z_Param_instigatingActor,Z_Param_location,Z_Param_shouldTrack,Z_Param_Out_audibleRange,Z_Param_isQuickAction);
		P_NATIVE_END;
	}
	void AFootSteps::StaticRegisterNativesAFootSteps()
	{
		UClass* Class = AFootSteps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoudNoiseTriggered", &AFootSteps::execOnLoudNoiseTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics
	{
		struct FootSteps_eventOnLoudNoiseTriggered_Parms
		{
			AActor* originator;
			AActor* instigatingActor;
			FVector location;
			bool shouldTrack;
			float audibleRange;
			bool isQuickAction;
		};
		static void NewProp_isQuickAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isQuickAction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_audibleRange;
		static void NewProp_shouldTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatingActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction_SetBit(void* Obj)
	{
		((FootSteps_eventOnLoudNoiseTriggered_Parms*)Obj)->isQuickAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction = { "isQuickAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootSteps_eventOnLoudNoiseTriggered_Parms), &Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_audibleRange = { "audibleRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootSteps_eventOnLoudNoiseTriggered_Parms, audibleRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack_SetBit(void* Obj)
	{
		((FootSteps_eventOnLoudNoiseTriggered_Parms*)Obj)->shouldTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack = { "shouldTrack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootSteps_eventOnLoudNoiseTriggered_Parms), &Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootSteps_eventOnLoudNoiseTriggered_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_instigatingActor = { "instigatingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootSteps_eventOnLoudNoiseTriggered_Parms, instigatingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_originator = { "originator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootSteps_eventOnLoudNoiseTriggered_Parms, originator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_audibleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_instigatingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::NewProp_originator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootSteps, nullptr, "OnLoudNoiseTriggered", nullptr, nullptr, sizeof(FootSteps_eventOnLoudNoiseTriggered_Parms), Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFootSteps_NoRegister()
	{
		return AFootSteps::StaticClass();
	}
	struct Z_Construct_UClass_AFootSteps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__decalSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__decalSpawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__footSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__footSteps;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__footSteps_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__footSteps_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__veinsCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__veinsCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__fadeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visibilityMultiplierInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__visibilityMultiplierInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectionTickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__projectionTickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maximumDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__raycastDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__raycastDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__raycastZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__raycastZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__raycastHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__raycastHalfAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFootSteps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFootSteps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFootSteps_OnLoudNoiseTriggered, "OnLoudNoiseTriggered" }, // 3099752953
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FootSteps.h" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__decalSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__decalSpawner = { "_decalSpawner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _decalSpawner), Z_Construct_UClass_UDecalSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__decalSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__decalSpawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditDefaultsOnly)\n//FBHVRPerDetailModeInt _maxOverlapping;\n" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly)\nFBHVRPerDetailModeInt _maxOverlapping;" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps = { "_footSteps", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _footSteps), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps_Key_KeyProp = { "_footSteps_Key", nullptr, (EPropertyFlags)0x0000008000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDDecalComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps_ValueProp = { "_footSteps", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFootStep, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__veinsCurve_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__veinsCurve = { "_veinsCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _veinsCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__veinsCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__veinsCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__fadeCurve_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__fadeCurve = { "_fadeCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _fadeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__fadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__fadeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__visibilityMultiplierInterpSpeed_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__visibilityMultiplierInterpSpeed = { "_visibilityMultiplierInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _visibilityMultiplierInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__visibilityMultiplierInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__visibilityMultiplierInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__projectionTickness_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__projectionTickness = { "_projectionTickness", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _projectionTickness), METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__projectionTickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__projectionTickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__maximumDecalSize_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__maximumDecalSize = { "_maximumDecalSize", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _maximumDecalSize), METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__maximumDecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__maximumDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__minimumDecalSize_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__minimumDecalSize = { "_minimumDecalSize", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _minimumDecalSize), METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__minimumDecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__minimumDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__material_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__material = { "_material", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastDistance_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastDistance = { "_raycastDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _raycastDistance), METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastZOffset_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastZOffset = { "_raycastZOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _raycastZOffset), METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastHalfAngle_MetaData[] = {
		{ "Category", "FootSteps" },
		{ "ModuleRelativePath", "Public/FootSteps.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastHalfAngle = { "_raycastHalfAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootSteps, _raycastHalfAngle), METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastHalfAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFootSteps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__decalSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__footSteps_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__veinsCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__fadeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__visibilityMultiplierInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__projectionTickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__maximumDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__minimumDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSteps_Statics::NewProp__raycastHalfAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFootSteps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFootSteps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFootSteps_Statics::ClassParams = {
		&AFootSteps::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFootSteps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFootSteps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFootSteps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFootSteps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFootSteps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFootSteps, 959810255);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AFootSteps>()
	{
		return AFootSteps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFootSteps(Z_Construct_UClass_AFootSteps, &AFootSteps::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AFootSteps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFootSteps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
