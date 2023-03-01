// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsPlayerPerformingInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPlayerPerformingInteraction() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPlayerPerformingInteraction_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPlayerPerformingInteraction();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIsPlayerPerformingInteraction::execSetInteractionSemantics)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_interactionSemantics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionSemantics(Z_Param_Out_interactionSemantics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsPlayerPerformingInteraction::execUpdateIsTrue)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_interactionDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIsTrue(Z_Param_interactionDefinition);
		P_NATIVE_END;
	}
	void UIsPlayerPerformingInteraction::StaticRegisterNativesUIsPlayerPerformingInteraction()
	{
		UClass* Class = UIsPlayerPerformingInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInteractionSemantics", &UIsPlayerPerformingInteraction::execSetInteractionSemantics },
			{ "UpdateIsTrue", &UIsPlayerPerformingInteraction::execUpdateIsTrue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics
	{
		struct IsPlayerPerformingInteraction_eventSetInteractionSemantics_Parms
		{
			FGameplayTagContainer interactionSemantics;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionSemantics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionSemantics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::NewProp_interactionSemantics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::NewProp_interactionSemantics = { "interactionSemantics", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsPlayerPerformingInteraction_eventSetInteractionSemantics_Parms, interactionSemantics), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::NewProp_interactionSemantics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::NewProp_interactionSemantics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::NewProp_interactionSemantics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsPlayerPerformingInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsPlayerPerformingInteraction, nullptr, "SetInteractionSemantics", nullptr, nullptr, sizeof(IsPlayerPerformingInteraction_eventSetInteractionSemantics_Parms), Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics
	{
		struct IsPlayerPerformingInteraction_eventUpdateIsTrue_Parms
		{
			UInteractionDefinition* interactionDefinition;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactionDefinition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::NewProp_interactionDefinition_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::NewProp_interactionDefinition = { "interactionDefinition", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsPlayerPerformingInteraction_eventUpdateIsTrue_Parms, interactionDefinition), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::NewProp_interactionDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::NewProp_interactionDefinition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::NewProp_interactionDefinition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsPlayerPerformingInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsPlayerPerformingInteraction, nullptr, "UpdateIsTrue", nullptr, nullptr, sizeof(IsPlayerPerformingInteraction_eventUpdateIsTrue_Parms), Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsPlayerPerformingInteraction_NoRegister()
	{
		return UIsPlayerPerformingInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionSemantics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionSemantics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsPlayerPerformingInteraction_SetInteractionSemantics, "SetInteractionSemantics" }, // 1147741185
		{ &Z_Construct_UFunction_UIsPlayerPerformingInteraction_UpdateIsTrue, "UpdateIsTrue" }, // 3142953656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsPlayerPerformingInteraction.h" },
		{ "ModuleRelativePath", "Public/IsPlayerPerformingInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::NewProp__interactionSemantics_MetaData[] = {
		{ "Category", "IsPlayerPerformingInteraction" },
		{ "ModuleRelativePath", "Public/IsPlayerPerformingInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::NewProp__interactionSemantics = { "_interactionSemantics", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsPlayerPerformingInteraction, _interactionSemantics), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::NewProp__interactionSemantics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::NewProp__interactionSemantics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::NewProp__interactionSemantics,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsPlayerPerformingInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::ClassParams = {
		&UIsPlayerPerformingInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsPlayerPerformingInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsPlayerPerformingInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsPlayerPerformingInteraction, 618263588);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsPlayerPerformingInteraction>()
	{
		return UIsPlayerPerformingInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsPlayerPerformingInteraction(Z_Construct_UClass_UIsPlayerPerformingInteraction, &UIsPlayerPerformingInteraction::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsPlayerPerformingInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPlayerPerformingInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
