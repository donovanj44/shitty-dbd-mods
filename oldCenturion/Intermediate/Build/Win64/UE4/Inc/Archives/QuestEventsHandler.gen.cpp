// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/QuestEventsHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEventsHandler() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UQuestEventsHandler_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UQuestEventsHandler();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEndGameReason();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestEventsHandler::execDBD_InGameAddProgressionToCurrentQuest)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_InGameAddProgressionToCurrentQuest(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEventsHandler::execDBD_ShowInGameCurrentQuestInfos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ShowInGameCurrentQuestInfos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEventsHandler::execOnFinishedPlaying)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlaying(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEventsHandler::execOnGameEnded)
	{
		P_GET_ENUM(EEndGameReason,Z_Param_reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameEnded(EEndGameReason(Z_Param_reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEventsHandler::execOnPlayergameStateChanged)
	{
		P_GET_ENUM(EGameState,Z_Param_gameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayergameStateChanged(EGameState(Z_Param_gameState));
		P_NATIVE_END;
	}
	void UQuestEventsHandler::StaticRegisterNativesUQuestEventsHandler()
	{
		UClass* Class = UQuestEventsHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_InGameAddProgressionToCurrentQuest", &UQuestEventsHandler::execDBD_InGameAddProgressionToCurrentQuest },
			{ "DBD_ShowInGameCurrentQuestInfos", &UQuestEventsHandler::execDBD_ShowInGameCurrentQuestInfos },
			{ "OnFinishedPlaying", &UQuestEventsHandler::execOnFinishedPlaying },
			{ "OnGameEnded", &UQuestEventsHandler::execOnGameEnded },
			{ "OnPlayergameStateChanged", &UQuestEventsHandler::execOnPlayergameStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics
	{
		struct QuestEventsHandler_eventDBD_InGameAddProgressionToCurrentQuest_Parms
		{
			int32 amount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::NewProp_amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEventsHandler_eventDBD_InGameAddProgressionToCurrentQuest_Parms, amount), METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::NewProp_amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::NewProp_amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEventsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEventsHandler, nullptr, "DBD_InGameAddProgressionToCurrentQuest", nullptr, nullptr, sizeof(QuestEventsHandler_eventDBD_InGameAddProgressionToCurrentQuest_Parms), Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEventsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEventsHandler, nullptr, "DBD_ShowInGameCurrentQuestInfos", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics
	{
		struct QuestEventsHandler_eventOnFinishedPlaying_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEventsHandler_eventOnFinishedPlaying_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEventsHandler_eventOnFinishedPlaying_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEventsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEventsHandler, nullptr, "OnFinishedPlaying", nullptr, nullptr, sizeof(QuestEventsHandler_eventOnFinishedPlaying_Parms), Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics
	{
		struct QuestEventsHandler_eventOnGameEnded_Parms
		{
			EEndGameReason reason;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_reason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_reason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::NewProp_reason = { "reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEventsHandler_eventOnGameEnded_Parms, reason), Z_Construct_UEnum_DeadByDaylight_EEndGameReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::NewProp_reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::NewProp_reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::NewProp_reason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEventsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEventsHandler, nullptr, "OnGameEnded", nullptr, nullptr, sizeof(QuestEventsHandler_eventOnGameEnded_Parms), Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics
	{
		struct QuestEventsHandler_eventOnPlayergameStateChanged_Parms
		{
			EGameState gameState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gameState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gameState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::NewProp_gameState = { "gameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEventsHandler_eventOnPlayergameStateChanged_Parms, gameState), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::NewProp_gameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::NewProp_gameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::NewProp_gameState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEventsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEventsHandler, nullptr, "OnPlayergameStateChanged", nullptr, nullptr, sizeof(QuestEventsHandler_eventOnPlayergameStateChanged_Parms), Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestEventsHandler_NoRegister()
	{
		return UQuestEventsHandler::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEventsHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__evaluatorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__evaluatorList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__evaluatorList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEventsHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEventsHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest, "DBD_InGameAddProgressionToCurrentQuest" }, // 1891797009
		{ &Z_Construct_UFunction_UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos, "DBD_ShowInGameCurrentQuestInfos" }, // 4284181430
		{ &Z_Construct_UFunction_UQuestEventsHandler_OnFinishedPlaying, "OnFinishedPlaying" }, // 2827523231
		{ &Z_Construct_UFunction_UQuestEventsHandler_OnGameEnded, "OnGameEnded" }, // 3680897947
		{ &Z_Construct_UFunction_UQuestEventsHandler_OnPlayergameStateChanged, "OnPlayergameStateChanged" }, // 1306899608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventsHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestEventsHandler.h" },
		{ "ModuleRelativePath", "Public/QuestEventsHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventsHandler_Statics::NewProp__evaluatorList_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEventsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEventsHandler_Statics::NewProp__evaluatorList = { "_evaluatorList", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEventsHandler, _evaluatorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEventsHandler_Statics::NewProp__evaluatorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventsHandler_Statics::NewProp__evaluatorList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestEventsHandler_Statics::NewProp__evaluatorList_Inner = { "_evaluatorList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestEventEvaluatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEventsHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEventsHandler_Statics::NewProp__evaluatorList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEventsHandler_Statics::NewProp__evaluatorList_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEventsHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEventsHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestEventsHandler_Statics::ClassParams = {
		&UQuestEventsHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestEventsHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventsHandler_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEventsHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventsHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEventsHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestEventsHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestEventsHandler, 1390700456);
	template<> ARCHIVES_API UClass* StaticClass<UQuestEventsHandler>()
	{
		return UQuestEventsHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestEventsHandler(Z_Construct_UClass_UQuestEventsHandler, &UQuestEventsHandler::StaticClass, TEXT("/Script/Archives"), TEXT("UQuestEventsHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEventsHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
