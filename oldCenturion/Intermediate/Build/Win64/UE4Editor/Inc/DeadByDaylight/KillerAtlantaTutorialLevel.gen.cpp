// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerAtlantaTutorialLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerAtlantaTutorialLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerAtlantaTutorialLevel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerAtlantaTutorialLevel();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaTutorialLevel();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeDoor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AHatch_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AWindow_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EKillerTutorialEndGameType();
// End Cross Module References
	DEFINE_FUNCTION(AKillerAtlantaTutorialLevel::execCompleteEscapeRequirements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteEscapeRequirements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerAtlantaTutorialLevel::execSetBearTrapSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_camperPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBearTrapSurvivor(Z_Param_camperPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerAtlantaTutorialLevel::execSetChaseSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_camperPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChaseSurvivor(Z_Param_camperPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerAtlantaTutorialLevel::execSetControlledSlasherPlayer)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasherPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlledSlasherPlayer(Z_Param_slasherPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerAtlantaTutorialLevel::execSetEscapeDoor)
	{
		P_GET_OBJECT(AEscapeDoor,Z_Param_targetEscapeDoor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEscapeDoor(Z_Param_targetEscapeDoor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerAtlantaTutorialLevel::execSetGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGenerator(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerAtlantaTutorialLevel::execSetHatch)
	{
		P_GET_OBJECT(AHatch,Z_Param_targetHatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHatch(Z_Param_targetHatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerAtlantaTutorialLevel::execSetVaultWindow)
	{
		P_GET_OBJECT(AWindow,Z_Param_window);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVaultWindow(Z_Param_window);
		P_NATIVE_END;
	}
	static FName NAME_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase = FName(TEXT("SetupEndGameTutorialPhase"));
	void AKillerAtlantaTutorialLevel::SetupEndGameTutorialPhase()
	{
		ProcessEvent(FindFunctionChecked(NAME_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase),NULL);
	}
	static FName NAME_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation = FName(TEXT("TriggerEndGameSequenceAnimation"));
	void AKillerAtlantaTutorialLevel::TriggerEndGameSequenceAnimation(EKillerTutorialEndGameType camperDeathType)
	{
		KillerAtlantaTutorialLevel_eventTriggerEndGameSequenceAnimation_Parms Parms;
		Parms.camperDeathType=camperDeathType;
		ProcessEvent(FindFunctionChecked(NAME_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation),&Parms);
	}
	static FName NAME_AKillerAtlantaTutorialLevel_TriggerExitGameSetup = FName(TEXT("TriggerExitGameSetup"));
	void AKillerAtlantaTutorialLevel::TriggerExitGameSetup()
	{
		ProcessEvent(FindFunctionChecked(NAME_AKillerAtlantaTutorialLevel_TriggerExitGameSetup),NULL);
	}
	void AKillerAtlantaTutorialLevel::StaticRegisterNativesAKillerAtlantaTutorialLevel()
	{
		UClass* Class = AKillerAtlantaTutorialLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteEscapeRequirements", &AKillerAtlantaTutorialLevel::execCompleteEscapeRequirements },
			{ "SetBearTrapSurvivor", &AKillerAtlantaTutorialLevel::execSetBearTrapSurvivor },
			{ "SetChaseSurvivor", &AKillerAtlantaTutorialLevel::execSetChaseSurvivor },
			{ "SetControlledSlasherPlayer", &AKillerAtlantaTutorialLevel::execSetControlledSlasherPlayer },
			{ "SetEscapeDoor", &AKillerAtlantaTutorialLevel::execSetEscapeDoor },
			{ "SetGenerator", &AKillerAtlantaTutorialLevel::execSetGenerator },
			{ "SetHatch", &AKillerAtlantaTutorialLevel::execSetHatch },
			{ "SetVaultWindow", &AKillerAtlantaTutorialLevel::execSetVaultWindow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_CompleteEscapeRequirements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_CompleteEscapeRequirements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_CompleteEscapeRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "CompleteEscapeRequirements", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_CompleteEscapeRequirements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_CompleteEscapeRequirements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_CompleteEscapeRequirements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_CompleteEscapeRequirements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics
	{
		struct KillerAtlantaTutorialLevel_eventSetBearTrapSurvivor_Parms
		{
			ACamperPlayer* camperPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camperPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::NewProp_camperPlayer = { "camperPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAtlantaTutorialLevel_eventSetBearTrapSurvivor_Parms, camperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::NewProp_camperPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "SetBearTrapSurvivor", nullptr, nullptr, sizeof(KillerAtlantaTutorialLevel_eventSetBearTrapSurvivor_Parms), Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics
	{
		struct KillerAtlantaTutorialLevel_eventSetChaseSurvivor_Parms
		{
			ACamperPlayer* camperPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camperPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::NewProp_camperPlayer = { "camperPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAtlantaTutorialLevel_eventSetChaseSurvivor_Parms, camperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::NewProp_camperPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "SetChaseSurvivor", nullptr, nullptr, sizeof(KillerAtlantaTutorialLevel_eventSetChaseSurvivor_Parms), Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics
	{
		struct KillerAtlantaTutorialLevel_eventSetControlledSlasherPlayer_Parms
		{
			ASlasherPlayer* slasherPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::NewProp_slasherPlayer = { "slasherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAtlantaTutorialLevel_eventSetControlledSlasherPlayer_Parms, slasherPlayer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::NewProp_slasherPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "SetControlledSlasherPlayer", nullptr, nullptr, sizeof(KillerAtlantaTutorialLevel_eventSetControlledSlasherPlayer_Parms), Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics
	{
		struct KillerAtlantaTutorialLevel_eventSetEscapeDoor_Parms
		{
			AEscapeDoor* targetEscapeDoor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetEscapeDoor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::NewProp_targetEscapeDoor = { "targetEscapeDoor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAtlantaTutorialLevel_eventSetEscapeDoor_Parms, targetEscapeDoor), Z_Construct_UClass_AEscapeDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::NewProp_targetEscapeDoor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "SetEscapeDoor", nullptr, nullptr, sizeof(KillerAtlantaTutorialLevel_eventSetEscapeDoor_Parms), Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics
	{
		struct KillerAtlantaTutorialLevel_eventSetGenerator_Parms
		{
			AGenerator* generator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAtlantaTutorialLevel_eventSetGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "SetGenerator", nullptr, nullptr, sizeof(KillerAtlantaTutorialLevel_eventSetGenerator_Parms), Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics
	{
		struct KillerAtlantaTutorialLevel_eventSetHatch_Parms
		{
			AHatch* targetHatch;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::NewProp_targetHatch = { "targetHatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAtlantaTutorialLevel_eventSetHatch_Parms, targetHatch), Z_Construct_UClass_AHatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::NewProp_targetHatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "SetHatch", nullptr, nullptr, sizeof(KillerAtlantaTutorialLevel_eventSetHatch_Parms), Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "SetupEndGameTutorialPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics
	{
		struct KillerAtlantaTutorialLevel_eventSetVaultWindow_Parms
		{
			AWindow* window;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_window;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::NewProp_window = { "window", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAtlantaTutorialLevel_eventSetVaultWindow_Parms, window), Z_Construct_UClass_AWindow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::NewProp_window,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "SetVaultWindow", nullptr, nullptr, sizeof(KillerAtlantaTutorialLevel_eventSetVaultWindow_Parms), Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_camperDeathType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_camperDeathType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::NewProp_camperDeathType = { "camperDeathType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAtlantaTutorialLevel_eventTriggerEndGameSequenceAnimation_Parms, camperDeathType), Z_Construct_UEnum_DeadByDaylight_EKillerTutorialEndGameType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::NewProp_camperDeathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::NewProp_camperDeathType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::NewProp_camperDeathType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "TriggerEndGameSequenceAnimation", nullptr, nullptr, sizeof(KillerAtlantaTutorialLevel_eventTriggerEndGameSequenceAnimation_Parms), Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerExitGameSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerExitGameSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerExitGameSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerAtlantaTutorialLevel, nullptr, "TriggerExitGameSetup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerExitGameSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerExitGameSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerExitGameSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerExitGameSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKillerAtlantaTutorialLevel_NoRegister()
	{
		return AKillerAtlantaTutorialLevel::StaticClass();
	}
	struct Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Hatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_EscapeDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_VaultWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_KickGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BearTrapCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_BearTrapCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ChaseCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocallyControllerSlasherPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LocallyControllerSlasherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAtlantaTutorialLevel,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_CompleteEscapeRequirements, "CompleteEscapeRequirements" }, // 2671386273
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetBearTrapSurvivor, "SetBearTrapSurvivor" }, // 4285640270
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetChaseSurvivor, "SetChaseSurvivor" }, // 1362278919
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetControlledSlasherPlayer, "SetControlledSlasherPlayer" }, // 952129716
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetEscapeDoor, "SetEscapeDoor" }, // 178982916
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetGenerator, "SetGenerator" }, // 526083028
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetHatch, "SetHatch" }, // 1077134020
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetupEndGameTutorialPhase, "SetupEndGameTutorialPhase" }, // 3931441495
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_SetVaultWindow, "SetVaultWindow" }, // 1470253640
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerEndGameSequenceAnimation, "TriggerEndGameSequenceAnimation" }, // 1636218412
		{ &Z_Construct_UFunction_AKillerAtlantaTutorialLevel_TriggerExitGameSetup, "TriggerExitGameSetup" }, // 776817567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KillerAtlantaTutorialLevel.h" },
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_Hatch_MetaData[] = {
		{ "Category", "KillerAtlantaTutorialLevel" },
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_Hatch = { "Hatch", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerAtlantaTutorialLevel, Hatch), Z_Construct_UClass_AHatch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_Hatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_Hatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_EscapeDoor_MetaData[] = {
		{ "Category", "KillerAtlantaTutorialLevel" },
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_EscapeDoor = { "EscapeDoor", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerAtlantaTutorialLevel, EscapeDoor), Z_Construct_UClass_AEscapeDoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_EscapeDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_EscapeDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_VaultWindow_MetaData[] = {
		{ "Category", "KillerAtlantaTutorialLevel" },
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_VaultWindow = { "VaultWindow", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerAtlantaTutorialLevel, VaultWindow), Z_Construct_UClass_AWindow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_VaultWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_VaultWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_KickGenerator_MetaData[] = {
		{ "Category", "KillerAtlantaTutorialLevel" },
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_KickGenerator = { "KickGenerator", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerAtlantaTutorialLevel, KickGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_KickGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_KickGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_BearTrapCamper_MetaData[] = {
		{ "Category", "KillerAtlantaTutorialLevel" },
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_BearTrapCamper = { "BearTrapCamper", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerAtlantaTutorialLevel, BearTrapCamper), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_BearTrapCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_BearTrapCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_ChaseCamper_MetaData[] = {
		{ "Category", "KillerAtlantaTutorialLevel" },
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_ChaseCamper = { "ChaseCamper", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerAtlantaTutorialLevel, ChaseCamper), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_ChaseCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_ChaseCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_LocallyControllerSlasherPlayer_MetaData[] = {
		{ "Category", "KillerAtlantaTutorialLevel" },
		{ "ModuleRelativePath", "Public/KillerAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_LocallyControllerSlasherPlayer = { "LocallyControllerSlasherPlayer", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerAtlantaTutorialLevel, LocallyControllerSlasherPlayer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_LocallyControllerSlasherPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_LocallyControllerSlasherPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_Hatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_EscapeDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_VaultWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_KickGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_BearTrapCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_ChaseCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::NewProp_LocallyControllerSlasherPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillerAtlantaTutorialLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::ClassParams = {
		&AKillerAtlantaTutorialLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillerAtlantaTutorialLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKillerAtlantaTutorialLevel, 1468554187);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AKillerAtlantaTutorialLevel>()
	{
		return AKillerAtlantaTutorialLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKillerAtlantaTutorialLevel(Z_Construct_UClass_AKillerAtlantaTutorialLevel, &AKillerAtlantaTutorialLevel::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AKillerAtlantaTutorialLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillerAtlantaTutorialLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
