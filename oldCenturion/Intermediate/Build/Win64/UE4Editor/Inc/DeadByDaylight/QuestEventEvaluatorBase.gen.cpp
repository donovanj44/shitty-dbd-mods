// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/QuestEventEvaluatorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEventEvaluatorBase() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvaluatorCondition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestEventEvaluatorBase::execOnGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UQuestEventEvaluatorBase::StaticRegisterNativesUQuestEventEvaluatorBase()
	{
		UClass* Class = UQuestEventEvaluatorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameEvent", &UQuestEventEvaluatorBase::execOnGameEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics
	{
		struct QuestEventEvaluatorBase_eventOnGameEvent_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEventEvaluatorBase_eventOnGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEventEvaluatorBase_eventOnGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEventEvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEventEvaluatorBase, nullptr, "OnGameEvent", nullptr, nullptr, sizeof(QuestEventEvaluatorBase_eventOnGameEvent_Parms), Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestEventEvaluatorBase_NoRegister()
	{
		return UQuestEventEvaluatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEventEvaluatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__evaluatorConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__evaluatorConditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__evaluatorConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__evaluatorConditionsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__evaluatorConditionsClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__evaluatorConditionsClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dbdPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dbdPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEventEvaluatorBase_OnGameEvent, "OnGameEvent" }, // 3487816365
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestEventEvaluatorBase.h" },
		{ "ModuleRelativePath", "Public/QuestEventEvaluatorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditions_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEventEvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditions = { "_evaluatorConditions", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEventEvaluatorBase, _evaluatorConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditions_Inner = { "_evaluatorConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditionsClass_MetaData[] = {
		{ "Category", "QuestEventEvaluatorBase" },
		{ "ModuleRelativePath", "Public/QuestEventEvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditionsClass = { "_evaluatorConditionsClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEventEvaluatorBase, _evaluatorConditionsClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditionsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditionsClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditionsClass_Inner = { "_evaluatorConditionsClass", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__dbdPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEventEvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__dbdPlayer = { "_dbdPlayer", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEventEvaluatorBase, _dbdPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__dbdPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__dbdPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditionsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__evaluatorConditionsClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::NewProp__dbdPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEventEvaluatorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::ClassParams = {
		&UQuestEventEvaluatorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEventEvaluatorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestEventEvaluatorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestEventEvaluatorBase, 2911922706);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UQuestEventEvaluatorBase>()
	{
		return UQuestEventEvaluatorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestEventEvaluatorBase(Z_Construct_UClass_UQuestEventEvaluatorBase, &UQuestEventEvaluatorBase::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UQuestEventEvaluatorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEventEvaluatorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
