// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/ConditionFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionFactory() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UConditionFactory_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UConditionFactory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Competence();
	COMPETENCE_API UClass* Z_Construct_UClass_UAndModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UConditionReceiver_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_URangeBasedCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UIsTimerDoneCondition_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UNotModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UOrModifierCondition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConditionFactory::execAnd)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAndModifierCondition**)Z_Param__Result=UConditionFactory::And(Z_Param_conditionReceiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionFactory::execCreateAndReceiveConditionForBP)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_GET_OBJECT(UClass,Z_Param_conditionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEventDrivenModifierCondition**)Z_Param__Result=UConditionFactory::CreateAndReceiveConditionForBP(Z_Param_conditionReceiver,Z_Param_conditionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionFactory::execCreateAndReceiveConditionWithSubjectForBP)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_GET_OBJECT(UClass,Z_Param_conditionType);
		P_GET_OBJECT(UClass,Z_Param_subjectProviderClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEventDrivenModifierCondition**)Z_Param__Result=UConditionFactory::CreateAndReceiveConditionWithSubjectForBP(Z_Param_conditionReceiver,Z_Param_conditionType,Z_Param_subjectProviderClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionFactory::execCreateRangeBasedCondition)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_GET_OBJECT(UClass,Z_Param_conditionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URangeBasedCondition**)Z_Param__Result=UConditionFactory::CreateRangeBasedCondition(Z_Param_conditionReceiver,Z_Param_conditionType,Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionFactory::execCreateRangeBasedConditionWithSubject)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_GET_OBJECT(UClass,Z_Param_conditionType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_GET_OBJECT(UClass,Z_Param_subjectProviderClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URangeBasedCondition**)Z_Param__Result=UConditionFactory::CreateRangeBasedConditionWithSubject(Z_Param_conditionReceiver,Z_Param_conditionType,Z_Param_range,Z_Param_subjectProviderClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionFactory::execIsTimerDone)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_GET_OBJECT(UTimerObject,Z_Param_timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIsTimerDoneCondition**)Z_Param__Result=UConditionFactory::IsTimerDone(Z_Param_conditionReceiver,Z_Param_timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionFactory::execNot)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNotModifierCondition**)Z_Param__Result=UConditionFactory::Not(Z_Param_conditionReceiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionFactory::execOr)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOrModifierCondition**)Z_Param__Result=UConditionFactory::Or(Z_Param_conditionReceiver);
		P_NATIVE_END;
	}
	void UConditionFactory::StaticRegisterNativesUConditionFactory()
	{
		UClass* Class = UConditionFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "And", &UConditionFactory::execAnd },
			{ "CreateAndReceiveConditionForBP", &UConditionFactory::execCreateAndReceiveConditionForBP },
			{ "CreateAndReceiveConditionWithSubjectForBP", &UConditionFactory::execCreateAndReceiveConditionWithSubjectForBP },
			{ "CreateRangeBasedCondition", &UConditionFactory::execCreateRangeBasedCondition },
			{ "CreateRangeBasedConditionWithSubject", &UConditionFactory::execCreateRangeBasedConditionWithSubject },
			{ "IsTimerDone", &UConditionFactory::execIsTimerDone },
			{ "Not", &UConditionFactory::execNot },
			{ "Or", &UConditionFactory::execOr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConditionFactory_And_Statics
	{
		struct ConditionFactory_eventAnd_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			UAndModifierCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_And_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_And_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventAnd_Parms, ReturnValue), Z_Construct_UClass_UAndModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_And_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_And_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UConditionFactory_And_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventAnd_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionFactory_And_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_And_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_And_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_And_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionFactory_And_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionFactory, nullptr, "And", nullptr, nullptr, sizeof(ConditionFactory_eventAnd_Parms), Z_Construct_UFunction_UConditionFactory_And_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_And_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_And_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_And_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionFactory_And()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionFactory_And_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics
	{
		struct ConditionFactory_eventCreateAndReceiveConditionForBP_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			TSubclassOf<UEventDrivenModifierCondition>  conditionType;
			UEventDrivenModifierCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_conditionType;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateAndReceiveConditionForBP_Parms, ReturnValue), Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_conditionType = { "conditionType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateAndReceiveConditionForBP_Parms, conditionType), Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateAndReceiveConditionForBP_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_conditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionFactory, nullptr, "CreateAndReceiveConditionForBP", nullptr, nullptr, sizeof(ConditionFactory_eventCreateAndReceiveConditionForBP_Parms), Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics
	{
		struct ConditionFactory_eventCreateAndReceiveConditionWithSubjectForBP_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			TSubclassOf<UEventDrivenModifierCondition>  conditionType;
			UClass* subjectProviderClass;
			UEventDrivenModifierCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_subjectProviderClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_conditionType;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateAndReceiveConditionWithSubjectForBP_Parms, ReturnValue), Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_subjectProviderClass = { "subjectProviderClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateAndReceiveConditionWithSubjectForBP_Parms, subjectProviderClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_conditionType = { "conditionType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateAndReceiveConditionWithSubjectForBP_Parms, conditionType), Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateAndReceiveConditionWithSubjectForBP_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_subjectProviderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_conditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionFactory, nullptr, "CreateAndReceiveConditionWithSubjectForBP", nullptr, nullptr, sizeof(ConditionFactory_eventCreateAndReceiveConditionWithSubjectForBP_Parms), Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics
	{
		struct ConditionFactory_eventCreateRangeBasedCondition_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			TSubclassOf<URangeBasedCondition>  conditionType;
			float range;
			URangeBasedCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_conditionType;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedCondition_Parms, ReturnValue), Z_Construct_UClass_URangeBasedCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedCondition_Parms, range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_conditionType = { "conditionType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedCondition_Parms, conditionType), Z_Construct_UClass_URangeBasedCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedCondition_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_conditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionFactory, nullptr, "CreateRangeBasedCondition", nullptr, nullptr, sizeof(ConditionFactory_eventCreateRangeBasedCondition_Parms), Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics
	{
		struct ConditionFactory_eventCreateRangeBasedConditionWithSubject_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			TSubclassOf<URangeBasedCondition>  conditionType;
			float range;
			UClass* subjectProviderClass;
			URangeBasedCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_subjectProviderClass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_conditionType;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedConditionWithSubject_Parms, ReturnValue), Z_Construct_UClass_URangeBasedCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_subjectProviderClass = { "subjectProviderClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedConditionWithSubject_Parms, subjectProviderClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedConditionWithSubject_Parms, range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_conditionType = { "conditionType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedConditionWithSubject_Parms, conditionType), Z_Construct_UClass_URangeBasedCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventCreateRangeBasedConditionWithSubject_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_subjectProviderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_conditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionFactory, nullptr, "CreateRangeBasedConditionWithSubject", nullptr, nullptr, sizeof(ConditionFactory_eventCreateRangeBasedConditionWithSubject_Parms), Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics
	{
		struct ConditionFactory_eventIsTimerDone_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			UTimerObject* timer;
			UIsTimerDoneCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_timer;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventIsTimerDone_Parms, ReturnValue), Z_Construct_UClass_UIsTimerDoneCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_timer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventIsTimerDone_Parms, timer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_timer_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventIsTimerDone_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionFactory, nullptr, "IsTimerDone", nullptr, nullptr, sizeof(ConditionFactory_eventIsTimerDone_Parms), Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionFactory_IsTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionFactory_IsTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionFactory_Not_Statics
	{
		struct ConditionFactory_eventNot_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			UNotModifierCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_Not_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_Not_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventNot_Parms, ReturnValue), Z_Construct_UClass_UNotModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_Not_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_Not_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UConditionFactory_Not_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventNot_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionFactory_Not_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_Not_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_Not_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_Not_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionFactory_Not_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionFactory, nullptr, "Not", nullptr, nullptr, sizeof(ConditionFactory_eventNot_Parms), Z_Construct_UFunction_UConditionFactory_Not_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_Not_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_Not_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_Not_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionFactory_Not()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionFactory_Not_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionFactory_Or_Statics
	{
		struct ConditionFactory_eventOr_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			UOrModifierCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_Or_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionFactory_Or_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventOr_Parms, ReturnValue), Z_Construct_UClass_UOrModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_Or_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_Or_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UConditionFactory_Or_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionFactory_eventOr_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionFactory_Or_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_Or_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionFactory_Or_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionFactory_Or_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionFactory_Or_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionFactory, nullptr, "Or", nullptr, nullptr, sizeof(ConditionFactory_eventOr_Parms), Z_Construct_UFunction_UConditionFactory_Or_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_Or_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionFactory_Or_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionFactory_Or_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionFactory_Or()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionFactory_Or_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConditionFactory_NoRegister()
	{
		return UConditionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UConditionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConditionFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConditionFactory_And, "And" }, // 1147688945
		{ &Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionForBP, "CreateAndReceiveConditionForBP" }, // 4260116584
		{ &Z_Construct_UFunction_UConditionFactory_CreateAndReceiveConditionWithSubjectForBP, "CreateAndReceiveConditionWithSubjectForBP" }, // 579058359
		{ &Z_Construct_UFunction_UConditionFactory_CreateRangeBasedCondition, "CreateRangeBasedCondition" }, // 3524159314
		{ &Z_Construct_UFunction_UConditionFactory_CreateRangeBasedConditionWithSubject, "CreateRangeBasedConditionWithSubject" }, // 2207744816
		{ &Z_Construct_UFunction_UConditionFactory_IsTimerDone, "IsTimerDone" }, // 2788147546
		{ &Z_Construct_UFunction_UConditionFactory_Not, "Not" }, // 3741774639
		{ &Z_Construct_UFunction_UConditionFactory_Or, "Or" }, // 4280581921
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConditionFactory.h" },
		{ "ModuleRelativePath", "Public/ConditionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConditionFactory_Statics::ClassParams = {
		&UConditionFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConditionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConditionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConditionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConditionFactory, 2614457866);
	template<> COMPETENCE_API UClass* StaticClass<UConditionFactory>()
	{
		return UConditionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConditionFactory(Z_Construct_UClass_UConditionFactory, &UConditionFactory::StaticClass, TEXT("/Script/Competence"), TEXT("UConditionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
