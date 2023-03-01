// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/RepressedAlliance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepressedAlliance() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_URepressedAlliance_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_URepressedAlliance();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryInteractionProperties();
// End Cross Module References
	DEFINE_FUNCTION(URepressedAlliance::execOnRep_BlockedGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_oldGenerator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockedGenerator(Z_Param_oldGenerator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URepressedAlliance::execOnRep_CurrentRepairInteractionWithAbility)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_oldRepairInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentRepairInteractionWithAbility(Z_Param_oldRepairInteraction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URepressedAlliance::execServer_OnActionInputPressed)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnActionInputPressed_Validate(Z_Param_generator))
		{
			RPC_ValidateFailed(TEXT("Server_OnActionInputPressed_Validate"));
			return;
		}
		P_THIS->Server_OnActionInputPressed_Implementation(Z_Param_generator);
		P_NATIVE_END;
	}
	static FName NAME_URepressedAlliance_Server_OnActionInputPressed = FName(TEXT("Server_OnActionInputPressed"));
	void URepressedAlliance::Server_OnActionInputPressed(AGenerator* generator)
	{
		RepressedAlliance_eventServer_OnActionInputPressed_Parms Parms;
		Parms.generator=generator;
		ProcessEvent(FindFunctionChecked(NAME_URepressedAlliance_Server_OnActionInputPressed),&Parms);
	}
	void URepressedAlliance::StaticRegisterNativesURepressedAlliance()
	{
		UClass* Class = URepressedAlliance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_BlockedGenerator", &URepressedAlliance::execOnRep_BlockedGenerator },
			{ "OnRep_CurrentRepairInteractionWithAbility", &URepressedAlliance::execOnRep_CurrentRepairInteractionWithAbility },
			{ "Server_OnActionInputPressed", &URepressedAlliance::execServer_OnActionInputPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics
	{
		struct RepressedAlliance_eventOnRep_BlockedGenerator_Parms
		{
			AGenerator* oldGenerator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::NewProp_oldGenerator = { "oldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RepressedAlliance_eventOnRep_BlockedGenerator_Parms, oldGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::NewProp_oldGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URepressedAlliance, nullptr, "OnRep_BlockedGenerator", nullptr, nullptr, sizeof(RepressedAlliance_eventOnRep_BlockedGenerator_Parms), Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics
	{
		struct RepressedAlliance_eventOnRep_CurrentRepairInteractionWithAbility_Parms
		{
			UInteractionDefinition* oldRepairInteraction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldRepairInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldRepairInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction = { "oldRepairInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RepressedAlliance_eventOnRep_CurrentRepairInteractionWithAbility_Parms, oldRepairInteraction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URepressedAlliance, nullptr, "OnRep_CurrentRepairInteractionWithAbility", nullptr, nullptr, sizeof(RepressedAlliance_eventOnRep_CurrentRepairInteractionWithAbility_Parms), Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RepressedAlliance_eventServer_OnActionInputPressed_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URepressedAlliance, nullptr, "Server_OnActionInputPressed", nullptr, nullptr, sizeof(RepressedAlliance_eventServer_OnActionInputPressed_Parms), Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URepressedAlliance_NoRegister()
	{
		return URepressedAlliance::StaticClass();
	}
	struct Z_Construct_UClass_URepressedAlliance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blockedGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentRepairInteractionWithAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentRepairInteractionWithAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorBlockDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__generatorBlockDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repairTimesNeededToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__repairTimesNeededToActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryActionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__secondaryActionProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URepressedAlliance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URepressedAlliance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URepressedAlliance_OnRep_BlockedGenerator, "OnRep_BlockedGenerator" }, // 340293848
		{ &Z_Construct_UFunction_URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility, "OnRep_CurrentRepairInteractionWithAbility" }, // 1503224950
		{ &Z_Construct_UFunction_URepressedAlliance_Server_OnActionInputPressed, "Server_OnActionInputPressed" }, // 2102216375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepressedAlliance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RepressedAlliance.h" },
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepressedAlliance_Statics::NewProp__blockedGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URepressedAlliance_Statics::NewProp__blockedGenerator = { "_blockedGenerator", "OnRep_BlockedGenerator", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepressedAlliance, _blockedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__blockedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__blockedGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepressedAlliance_Statics::NewProp__currentRepairInteractionWithAbility_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URepressedAlliance_Statics::NewProp__currentRepairInteractionWithAbility = { "_currentRepairInteractionWithAbility", "OnRep_CurrentRepairInteractionWithAbility", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepressedAlliance, _currentRepairInteractionWithAbility), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__currentRepairInteractionWithAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__currentRepairInteractionWithAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepressedAlliance_Statics::NewProp__generatorBlockDuration_MetaData[] = {
		{ "Category", "RepressedAlliance" },
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URepressedAlliance_Statics::NewProp__generatorBlockDuration = { "_generatorBlockDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepressedAlliance, _generatorBlockDuration), METADATA_PARAMS(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__generatorBlockDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__generatorBlockDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepressedAlliance_Statics::NewProp__repairTimesNeededToActivate_MetaData[] = {
		{ "Category", "RepressedAlliance" },
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URepressedAlliance_Statics::NewProp__repairTimesNeededToActivate = { "_repairTimesNeededToActivate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_repairTimesNeededToActivate, URepressedAlliance), STRUCT_OFFSET(URepressedAlliance, _repairTimesNeededToActivate), METADATA_PARAMS(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__repairTimesNeededToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__repairTimesNeededToActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepressedAlliance_Statics::NewProp__secondaryActionProperties_MetaData[] = {
		{ "Category", "RepressedAlliance" },
		{ "ModuleRelativePath", "Public/RepressedAlliance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URepressedAlliance_Statics::NewProp__secondaryActionProperties = { "_secondaryActionProperties", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepressedAlliance, _secondaryActionProperties), Z_Construct_UScriptStruct_FSecondaryInteractionProperties, METADATA_PARAMS(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__secondaryActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepressedAlliance_Statics::NewProp__secondaryActionProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URepressedAlliance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepressedAlliance_Statics::NewProp__blockedGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepressedAlliance_Statics::NewProp__currentRepairInteractionWithAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepressedAlliance_Statics::NewProp__generatorBlockDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepressedAlliance_Statics::NewProp__repairTimesNeededToActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepressedAlliance_Statics::NewProp__secondaryActionProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URepressedAlliance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URepressedAlliance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URepressedAlliance_Statics::ClassParams = {
		&URepressedAlliance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URepressedAlliance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URepressedAlliance_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URepressedAlliance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URepressedAlliance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URepressedAlliance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URepressedAlliance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URepressedAlliance, 625787307);
	template<> THEEXECUTIONER_API UClass* StaticClass<URepressedAlliance>()
	{
		return URepressedAlliance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URepressedAlliance(Z_Construct_UClass_URepressedAlliance, &URepressedAlliance::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("URepressedAlliance"), false, nullptr, nullptr, nullptr);

	void URepressedAlliance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__currentRepairInteractionWithAbility(TEXT("_currentRepairInteractionWithAbility"));
		static const FName Name__blockedGenerator(TEXT("_blockedGenerator"));

		const bool bIsValid = true
			&& Name__currentRepairInteractionWithAbility == ClassReps[(int32)ENetFields_Private::_currentRepairInteractionWithAbility].Property->GetFName()
			&& Name__blockedGenerator == ClassReps[(int32)ENetFields_Private::_blockedGenerator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URepressedAlliance"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URepressedAlliance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
