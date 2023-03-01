// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveStoryScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveStoryScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveStoryScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveStoryScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveBaseScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnAllNodesReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAllNodesReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnAutoplayChanged)
	{
		P_GET_UBOOL(Z_Param_autoplayActive);
		P_GET_PROPERTY(FIntProperty,Z_Param_entryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAutoplayChanged(Z_Param_autoplayActive,Z_Param_entryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnEntrySelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEntrySelected(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnJournalSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJournalSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnLevelSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_levelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelSelected(Z_Param_levelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnNodeSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_nodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNodeSelected(Z_Param_nodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnPlayCinematic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayCinematic(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnPlayVoiceOver)
	{
		P_GET_UBOOL(Z_Param_startPlaying);
		P_GET_PROPERTY(FIntProperty,Z_Param_entryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayVoiceOver(Z_Param_startPlaying,Z_Param_entryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnQuestsSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestsSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnReceiveNeighbor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_nodeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_neighborId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceiveNeighbor(Z_Param_nodeId,Z_Param_neighborId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnReceiveNodeCoordinates)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_nodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_posX);
		P_GET_PROPERTY(FIntProperty,Z_Param_PosY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceiveNodeCoordinates(Z_Param_nodeId,Z_Param_posX,Z_Param_PosY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnStoryLevelCompletedOrMasteredAnimationDone)
	{
		P_GET_UBOOL(Z_Param_wasJustCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoryLevelCompletedOrMasteredAnimationDone(Z_Param_wasJustCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnStoryMapCreated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoryMapCreated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveStoryScreen::execOnVignetteSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_vignetteId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVignetteSelected(Z_Param_vignetteId);
		P_NATIVE_END;
	}
	void UArchiveStoryScreen::StaticRegisterNativesUArchiveStoryScreen()
	{
		UClass* Class = UArchiveStoryScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAllNodesReceived", &UArchiveStoryScreen::execOnAllNodesReceived },
			{ "OnAutoplayChanged", &UArchiveStoryScreen::execOnAutoplayChanged },
			{ "OnEntrySelected", &UArchiveStoryScreen::execOnEntrySelected },
			{ "OnJournalSelected", &UArchiveStoryScreen::execOnJournalSelected },
			{ "OnLevelSelected", &UArchiveStoryScreen::execOnLevelSelected },
			{ "OnNodeSelected", &UArchiveStoryScreen::execOnNodeSelected },
			{ "OnPlayCinematic", &UArchiveStoryScreen::execOnPlayCinematic },
			{ "OnPlayVoiceOver", &UArchiveStoryScreen::execOnPlayVoiceOver },
			{ "OnQuestsSelected", &UArchiveStoryScreen::execOnQuestsSelected },
			{ "OnReceiveNeighbor", &UArchiveStoryScreen::execOnReceiveNeighbor },
			{ "OnReceiveNodeCoordinates", &UArchiveStoryScreen::execOnReceiveNodeCoordinates },
			{ "OnStoryLevelCompletedOrMasteredAnimationDone", &UArchiveStoryScreen::execOnStoryLevelCompletedOrMasteredAnimationDone },
			{ "OnStoryMapCreated", &UArchiveStoryScreen::execOnStoryMapCreated },
			{ "OnVignetteSelected", &UArchiveStoryScreen::execOnVignetteSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnAllNodesReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnAllNodesReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnAllNodesReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnAllNodesReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnAllNodesReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnAllNodesReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnAllNodesReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnAllNodesReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics
	{
		struct ArchiveStoryScreen_eventOnAutoplayChanged_Parms
		{
			bool autoplayActive;
			int32 entryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_entryIndex;
		static void NewProp_autoplayActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoplayActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::NewProp_entryIndex = { "entryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnAutoplayChanged_Parms, entryIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::NewProp_autoplayActive_SetBit(void* Obj)
	{
		((ArchiveStoryScreen_eventOnAutoplayChanged_Parms*)Obj)->autoplayActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::NewProp_autoplayActive = { "autoplayActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveStoryScreen_eventOnAutoplayChanged_Parms), &Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::NewProp_autoplayActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::NewProp_entryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::NewProp_autoplayActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnAutoplayChanged", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnAutoplayChanged_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics
	{
		struct ArchiveStoryScreen_eventOnEntrySelected_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnEntrySelected_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnEntrySelected", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnEntrySelected_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnJournalSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnJournalSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnJournalSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnJournalSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnJournalSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnJournalSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnJournalSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnJournalSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics
	{
		struct ArchiveStoryScreen_eventOnLevelSelected_Parms
		{
			int32 levelIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::NewProp_levelIndex = { "levelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnLevelSelected_Parms, levelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::NewProp_levelIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnLevelSelected", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnLevelSelected_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics
	{
		struct ArchiveStoryScreen_eventOnNodeSelected_Parms
		{
			FString nodeId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::NewProp_nodeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::NewProp_nodeId = { "nodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnNodeSelected_Parms, nodeId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::NewProp_nodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::NewProp_nodeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::NewProp_nodeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnNodeSelected", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnNodeSelected_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics
	{
		struct ArchiveStoryScreen_eventOnPlayCinematic_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnPlayCinematic_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnPlayCinematic", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnPlayCinematic_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics
	{
		struct ArchiveStoryScreen_eventOnPlayVoiceOver_Parms
		{
			bool startPlaying;
			int32 entryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_entryIndex;
		static void NewProp_startPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_startPlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::NewProp_entryIndex = { "entryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnPlayVoiceOver_Parms, entryIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::NewProp_startPlaying_SetBit(void* Obj)
	{
		((ArchiveStoryScreen_eventOnPlayVoiceOver_Parms*)Obj)->startPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::NewProp_startPlaying = { "startPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveStoryScreen_eventOnPlayVoiceOver_Parms), &Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::NewProp_startPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::NewProp_entryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::NewProp_startPlaying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnPlayVoiceOver", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnPlayVoiceOver_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnQuestsSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnQuestsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnQuestsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnQuestsSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnQuestsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnQuestsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnQuestsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnQuestsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics
	{
		struct ArchiveStoryScreen_eventOnReceiveNeighbor_Parms
		{
			FString nodeId;
			FString neighborId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neighborId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_neighborId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_neighborId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_neighborId = { "neighborId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnReceiveNeighbor_Parms, neighborId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_neighborId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_neighborId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_nodeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_nodeId = { "nodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnReceiveNeighbor_Parms, nodeId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_nodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_nodeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_neighborId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::NewProp_nodeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnReceiveNeighbor", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnReceiveNeighbor_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics
	{
		struct ArchiveStoryScreen_eventOnReceiveNodeCoordinates_Parms
		{
			FString nodeId;
			int32 posX;
			int32 PosY;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PosY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_posX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnReceiveNodeCoordinates_Parms, PosY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_posX = { "posX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnReceiveNodeCoordinates_Parms, posX), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_nodeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_nodeId = { "nodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnReceiveNodeCoordinates_Parms, nodeId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_nodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_nodeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_PosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_posX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::NewProp_nodeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnReceiveNodeCoordinates", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnReceiveNodeCoordinates_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics
	{
		struct ArchiveStoryScreen_eventOnStoryLevelCompletedOrMasteredAnimationDone_Parms
		{
			bool wasJustCompleted;
		};
		static void NewProp_wasJustCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasJustCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::NewProp_wasJustCompleted_SetBit(void* Obj)
	{
		((ArchiveStoryScreen_eventOnStoryLevelCompletedOrMasteredAnimationDone_Parms*)Obj)->wasJustCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::NewProp_wasJustCompleted = { "wasJustCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveStoryScreen_eventOnStoryLevelCompletedOrMasteredAnimationDone_Parms), &Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::NewProp_wasJustCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::NewProp_wasJustCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnStoryLevelCompletedOrMasteredAnimationDone", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnStoryLevelCompletedOrMasteredAnimationDone_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnStoryMapCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnStoryMapCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnStoryMapCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnStoryMapCreated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnStoryMapCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnStoryMapCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnStoryMapCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnStoryMapCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics
	{
		struct ArchiveStoryScreen_eventOnVignetteSelected_Parms
		{
			FString vignetteId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vignetteId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vignetteId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::NewProp_vignetteId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::NewProp_vignetteId = { "vignetteId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchiveStoryScreen_eventOnVignetteSelected_Parms, vignetteId), METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::NewProp_vignetteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::NewProp_vignetteId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::NewProp_vignetteId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveStoryScreen, nullptr, "OnVignetteSelected", nullptr, nullptr, sizeof(ArchiveStoryScreen_eventOnVignetteSelected_Parms), Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveStoryScreen_NoRegister()
	{
		return UArchiveStoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveStoryScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveStoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchiveBaseScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveStoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnAllNodesReceived, "OnAllNodesReceived" }, // 1251932139
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnAutoplayChanged, "OnAutoplayChanged" }, // 4294843219
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnEntrySelected, "OnEntrySelected" }, // 3414618968
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnJournalSelected, "OnJournalSelected" }, // 1777429151
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnLevelSelected, "OnLevelSelected" }, // 2627831003
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnNodeSelected, "OnNodeSelected" }, // 3175212643
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnPlayCinematic, "OnPlayCinematic" }, // 3744293469
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnPlayVoiceOver, "OnPlayVoiceOver" }, // 2713942659
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnQuestsSelected, "OnQuestsSelected" }, // 4132585659
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNeighbor, "OnReceiveNeighbor" }, // 2480235369
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnReceiveNodeCoordinates, "OnReceiveNodeCoordinates" }, // 3988768828
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnStoryLevelCompletedOrMasteredAnimationDone, "OnStoryLevelCompletedOrMasteredAnimationDone" }, // 2583992167
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnStoryMapCreated, "OnStoryMapCreated" }, // 3267599011
		{ &Z_Construct_UFunction_UArchiveStoryScreen_OnVignetteSelected, "OnVignetteSelected" }, // 3234161747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveStoryScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchiveStoryScreen.h" },
		{ "ModuleRelativePath", "Public/ArchiveStoryScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveStoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveStoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveStoryScreen_Statics::ClassParams = {
		&UArchiveStoryScreen::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveStoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveStoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveStoryScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveStoryScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveStoryScreen, 4063772265);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchiveStoryScreen>()
	{
		return UArchiveStoryScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveStoryScreen(Z_Construct_UClass_UArchiveStoryScreen, &UArchiveStoryScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchiveStoryScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveStoryScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
