// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SourceBasedOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceBasedOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USourceBasedOutlineUpdateStrategy::execAddRangedReveal)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_GET_OBJECT(AActor,Z_Param_sourceActor);
		P_GET_STRUCT(FLinearColor,Z_Param_highlightColor);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_TARRAY_REF(ADBDPlayer*,Z_Param_Out_affectedCharacters);
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRangedReveal(Z_Param_source,Z_Param_sourceActor,Z_Param_highlightColor,Z_Param_priority,Z_Param_Out_affectedCharacters,Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceBasedOutlineUpdateStrategy::execAddReveal)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_GET_STRUCT(FLinearColor,Z_Param_highlightColor);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_TARRAY_REF(ADBDPlayer*,Z_Param_Out_affectedCharacters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddReveal(Z_Param_source,Z_Param_highlightColor,Z_Param_priority,Z_Param_Out_affectedCharacters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceBasedOutlineUpdateStrategy::execAddTimedAndRangedReveal)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_GET_OBJECT(AActor,Z_Param_sourceActor);
		P_GET_STRUCT(FLinearColor,Z_Param_highlightColor);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_TARRAY_REF(ADBDPlayer*,Z_Param_Out_affectedCharacters);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTimedAndRangedReveal(Z_Param_source,Z_Param_sourceActor,Z_Param_highlightColor,Z_Param_priority,Z_Param_Out_affectedCharacters,Z_Param_duration,Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceBasedOutlineUpdateStrategy::execAddTimedReveal)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_GET_STRUCT(FLinearColor,Z_Param_highlightColor);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_TARRAY_REF(ADBDPlayer*,Z_Param_Out_affectedCharacters);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTimedReveal(Z_Param_source,Z_Param_highlightColor,Z_Param_priority,Z_Param_Out_affectedCharacters,Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceBasedOutlineUpdateStrategy::execChangeDefaultColorForSlasher)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_newColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeDefaultColorForSlasher(Z_Param_newColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceBasedOutlineUpdateStrategy::execChangeDefaultColorForSurvivor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_newColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeDefaultColorForSurvivor(Z_Param_newColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceBasedOutlineUpdateStrategy::execRemoveRevealSource)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRevealSource(Z_Param_source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceBasedOutlineUpdateStrategy::execResetReveal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetReveal();
		P_NATIVE_END;
	}
	void USourceBasedOutlineUpdateStrategy::StaticRegisterNativesUSourceBasedOutlineUpdateStrategy()
	{
		UClass* Class = USourceBasedOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRangedReveal", &USourceBasedOutlineUpdateStrategy::execAddRangedReveal },
			{ "AddReveal", &USourceBasedOutlineUpdateStrategy::execAddReveal },
			{ "AddTimedAndRangedReveal", &USourceBasedOutlineUpdateStrategy::execAddTimedAndRangedReveal },
			{ "AddTimedReveal", &USourceBasedOutlineUpdateStrategy::execAddTimedReveal },
			{ "ChangeDefaultColorForSlasher", &USourceBasedOutlineUpdateStrategy::execChangeDefaultColorForSlasher },
			{ "ChangeDefaultColorForSurvivor", &USourceBasedOutlineUpdateStrategy::execChangeDefaultColorForSurvivor },
			{ "RemoveRevealSource", &USourceBasedOutlineUpdateStrategy::execRemoveRevealSource },
			{ "ResetReveal", &USourceBasedOutlineUpdateStrategy::execResetReveal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics
	{
		struct SourceBasedOutlineUpdateStrategy_eventAddRangedReveal_Parms
		{
			const UObject* source;
			const AActor* sourceActor;
			FLinearColor highlightColor;
			int32 priority;
			TArray<ADBDPlayer*> affectedCharacters;
			float range;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_affectedCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_affectedCharacters_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_highlightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_highlightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddRangedReveal_Parms, range), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_affectedCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_affectedCharacters = { "affectedCharacters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddRangedReveal_Parms, affectedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_affectedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_affectedCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_affectedCharacters_Inner = { "affectedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddRangedReveal_Parms, priority), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_highlightColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_highlightColor = { "highlightColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddRangedReveal_Parms, highlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_highlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_highlightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_sourceActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_sourceActor = { "sourceActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddRangedReveal_Parms, sourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_sourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_sourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddRangedReveal_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_affectedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_affectedCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_highlightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_sourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, nullptr, "AddRangedReveal", nullptr, nullptr, sizeof(SourceBasedOutlineUpdateStrategy_eventAddRangedReveal_Parms), Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics
	{
		struct SourceBasedOutlineUpdateStrategy_eventAddReveal_Parms
		{
			const UObject* source;
			FLinearColor highlightColor;
			int32 priority;
			TArray<ADBDPlayer*> affectedCharacters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_affectedCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_affectedCharacters_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_highlightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_highlightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_affectedCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_affectedCharacters = { "affectedCharacters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddReveal_Parms, affectedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_affectedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_affectedCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_affectedCharacters_Inner = { "affectedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddReveal_Parms, priority), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_highlightColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_highlightColor = { "highlightColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddReveal_Parms, highlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_highlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_highlightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddReveal_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_affectedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_affectedCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_highlightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, nullptr, "AddReveal", nullptr, nullptr, sizeof(SourceBasedOutlineUpdateStrategy_eventAddReveal_Parms), Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics
	{
		struct SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms
		{
			const UObject* source;
			const AActor* sourceActor;
			FLinearColor highlightColor;
			int32 priority;
			TArray<ADBDPlayer*> affectedCharacters;
			float duration;
			float range;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_affectedCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_affectedCharacters_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_highlightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_highlightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms, range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms, duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_affectedCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_affectedCharacters = { "affectedCharacters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms, affectedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_affectedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_affectedCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_affectedCharacters_Inner = { "affectedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms, priority), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_highlightColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_highlightColor = { "highlightColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms, highlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_highlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_highlightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_sourceActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_sourceActor = { "sourceActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms, sourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_sourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_sourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_affectedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_affectedCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_highlightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_sourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, nullptr, "AddTimedAndRangedReveal", nullptr, nullptr, sizeof(SourceBasedOutlineUpdateStrategy_eventAddTimedAndRangedReveal_Parms), Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics
	{
		struct SourceBasedOutlineUpdateStrategy_eventAddTimedReveal_Parms
		{
			const UObject* source;
			FLinearColor highlightColor;
			int32 priority;
			TArray<ADBDPlayer*> affectedCharacters;
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_affectedCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_affectedCharacters_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_highlightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_highlightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedReveal_Parms, duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_affectedCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_affectedCharacters = { "affectedCharacters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedReveal_Parms, affectedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_affectedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_affectedCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_affectedCharacters_Inner = { "affectedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedReveal_Parms, priority), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_highlightColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_highlightColor = { "highlightColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedReveal_Parms, highlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_highlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_highlightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventAddTimedReveal_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_affectedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_affectedCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_highlightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, nullptr, "AddTimedReveal", nullptr, nullptr, sizeof(SourceBasedOutlineUpdateStrategy_eventAddTimedReveal_Parms), Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics
	{
		struct SourceBasedOutlineUpdateStrategy_eventChangeDefaultColorForSlasher_Parms
		{
			FLinearColor newColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::NewProp_newColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::NewProp_newColor = { "newColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventChangeDefaultColorForSlasher_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::NewProp_newColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::NewProp_newColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, nullptr, "ChangeDefaultColorForSlasher", nullptr, nullptr, sizeof(SourceBasedOutlineUpdateStrategy_eventChangeDefaultColorForSlasher_Parms), Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics
	{
		struct SourceBasedOutlineUpdateStrategy_eventChangeDefaultColorForSurvivor_Parms
		{
			FLinearColor newColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::NewProp_newColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::NewProp_newColor = { "newColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventChangeDefaultColorForSurvivor_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::NewProp_newColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::NewProp_newColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, nullptr, "ChangeDefaultColorForSurvivor", nullptr, nullptr, sizeof(SourceBasedOutlineUpdateStrategy_eventChangeDefaultColorForSurvivor_Parms), Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics
	{
		struct SourceBasedOutlineUpdateStrategy_eventRemoveRevealSource_Parms
		{
			const UObject* source;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceBasedOutlineUpdateStrategy_eventRemoveRevealSource_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, nullptr, "RemoveRevealSource", nullptr, nullptr, sizeof(SourceBasedOutlineUpdateStrategy_eventRemoveRevealSource_Parms), Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ResetReveal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ResetReveal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ResetReveal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, nullptr, "ResetReveal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ResetReveal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ResetReveal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ResetReveal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ResetReveal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_NoRegister()
	{
		return USourceBasedOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultColorForSlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__defaultColorForSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultColorForSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__defaultColorForSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddRangedReveal, "AddRangedReveal" }, // 1348293129
		{ &Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddReveal, "AddReveal" }, // 701684935
		{ &Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedAndRangedReveal, "AddTimedAndRangedReveal" }, // 2899261904
		{ &Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_AddTimedReveal, "AddTimedReveal" }, // 3517532591
		{ &Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSlasher, "ChangeDefaultColorForSlasher" }, // 1128317575
		{ &Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ChangeDefaultColorForSurvivor, "ChangeDefaultColorForSurvivor" }, // 2699128860
		{ &Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_RemoveRevealSource, "RemoveRevealSource" }, // 417487797
		{ &Z_Construct_UFunction_USourceBasedOutlineUpdateStrategy_ResetReveal, "ResetReveal" }, // 3763261465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SourceBasedOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSlasher_MetaData[] = {
		{ "Category", "SourceBasedOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSlasher = { "_defaultColorForSlasher", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceBasedOutlineUpdateStrategy, _defaultColorForSlasher), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSurvivor_MetaData[] = {
		{ "Category", "SourceBasedOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/SourceBasedOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSurvivor = { "_defaultColorForSurvivor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceBasedOutlineUpdateStrategy, _defaultColorForSurvivor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::NewProp__defaultColorForSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceBasedOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::ClassParams = {
		&USourceBasedOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceBasedOutlineUpdateStrategy, 2535461911);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USourceBasedOutlineUpdateStrategy>()
	{
		return USourceBasedOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceBasedOutlineUpdateStrategy(Z_Construct_UClass_USourceBasedOutlineUpdateStrategy, &USourceBasedOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USourceBasedOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceBasedOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
