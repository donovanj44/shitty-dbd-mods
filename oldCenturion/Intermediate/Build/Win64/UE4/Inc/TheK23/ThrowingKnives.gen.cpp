// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/ThrowingKnives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowingKnives() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_AThrowingKnives_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_AThrowingKnives();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	THEK23_API UClass* Z_Construct_UClass_UKnivesLauncher_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UReloadKnives_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_ULacerationComponent_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UKnivesProvider_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UK23PowerProgressPresentationComponent_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UTricksterSuperModeComponent_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UFlurryComboScoreComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AThrowingKnives::execAuthority_SpawnReloadInteractionOnLockers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SpawnReloadInteractionOnLockers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowingKnives::execGetLauncher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UKnivesLauncher**)Z_Param__Result=P_THIS->GetLauncher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowingKnives::execGetSlasher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=P_THIS->GetSlasher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowingKnives::execMulticast_OnUsePowerWhenInCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnUsePowerWhenInCooldown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowingKnives::execMulticast_OnUsePowerWhenOutOfAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnUsePowerWhenOutOfAmmo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowingKnives::execOnItemUsedStateChanged)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemUsedStateChanged(Z_Param_pressed);
		P_NATIVE_END;
	}
	static FName NAME_AThrowingKnives_Cosmetic_OnComboFinished = FName(TEXT("Cosmetic_OnComboFinished"));
	void AThrowingKnives::Cosmetic_OnComboFinished(bool isSRankCombo)
	{
		ThrowingKnives_eventCosmetic_OnComboFinished_Parms Parms;
		Parms.isSRankCombo=isSRankCombo ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AThrowingKnives_Cosmetic_OnComboFinished),&Parms);
	}
	static FName NAME_AThrowingKnives_Cosmetic_OnComboScoreChanged = FName(TEXT("Cosmetic_OnComboScoreChanged"));
	void AThrowingKnives::Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio)
	{
		ThrowingKnives_eventCosmetic_OnComboScoreChanged_Parms Parms;
		Parms.scoreNormalizedForAudio=scoreNormalizedForAudio;
		ProcessEvent(FindFunctionChecked(NAME_AThrowingKnives_Cosmetic_OnComboScoreChanged),&Parms);
	}
	static FName NAME_AThrowingKnives_Cosmetic_OnLaunch = FName(TEXT("Cosmetic_OnLaunch"));
	void AThrowingKnives::Cosmetic_OnLaunch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThrowingKnives_Cosmetic_OnLaunch),NULL);
	}
	static FName NAME_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown = FName(TEXT("Cosmetic_OnUsePowerWhenInCooldown"));
	void AThrowingKnives::Cosmetic_OnUsePowerWhenInCooldown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown),NULL);
	}
	static FName NAME_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo = FName(TEXT("Cosmetic_OnUsePowerWhenOutOfAmmo"));
	void AThrowingKnives::Cosmetic_OnUsePowerWhenOutOfAmmo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo),NULL);
	}
	static FName NAME_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown = FName(TEXT("Multicast_OnUsePowerWhenInCooldown"));
	void AThrowingKnives::Multicast_OnUsePowerWhenInCooldown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown),NULL);
	}
	static FName NAME_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo = FName(TEXT("Multicast_OnUsePowerWhenOutOfAmmo"));
	void AThrowingKnives::Multicast_OnUsePowerWhenOutOfAmmo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo),NULL);
	}
	void AThrowingKnives::StaticRegisterNativesAThrowingKnives()
	{
		UClass* Class = AThrowingKnives::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_SpawnReloadInteractionOnLockers", &AThrowingKnives::execAuthority_SpawnReloadInteractionOnLockers },
			{ "GetLauncher", &AThrowingKnives::execGetLauncher },
			{ "GetSlasher", &AThrowingKnives::execGetSlasher },
			{ "Multicast_OnUsePowerWhenInCooldown", &AThrowingKnives::execMulticast_OnUsePowerWhenInCooldown },
			{ "Multicast_OnUsePowerWhenOutOfAmmo", &AThrowingKnives::execMulticast_OnUsePowerWhenOutOfAmmo },
			{ "OnItemUsedStateChanged", &AThrowingKnives::execOnItemUsedStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "Authority_SpawnReloadInteractionOnLockers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_Authority_SpawnReloadInteractionOnLockers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics
	{
		static void NewProp_isSRankCombo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSRankCombo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::NewProp_isSRankCombo_SetBit(void* Obj)
	{
		((ThrowingKnives_eventCosmetic_OnComboFinished_Parms*)Obj)->isSRankCombo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::NewProp_isSRankCombo = { "isSRankCombo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThrowingKnives_eventCosmetic_OnComboFinished_Parms), &Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::NewProp_isSRankCombo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::NewProp_isSRankCombo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "Cosmetic_OnComboFinished", nullptr, nullptr, sizeof(ThrowingKnives_eventCosmetic_OnComboFinished_Parms), Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scoreNormalizedForAudio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::NewProp_scoreNormalizedForAudio = { "scoreNormalizedForAudio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingKnives_eventCosmetic_OnComboScoreChanged_Parms, scoreNormalizedForAudio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::NewProp_scoreNormalizedForAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "Cosmetic_OnComboScoreChanged", nullptr, nullptr, sizeof(ThrowingKnives_eventCosmetic_OnComboScoreChanged_Parms), Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnLaunch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnLaunch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnLaunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "Cosmetic_OnLaunch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnLaunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnLaunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnLaunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnLaunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "Cosmetic_OnUsePowerWhenInCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "Cosmetic_OnUsePowerWhenOutOfAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics
	{
		struct ThrowingKnives_eventGetLauncher_Parms
		{
			UKnivesLauncher* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingKnives_eventGetLauncher_Parms, ReturnValue), Z_Construct_UClass_UKnivesLauncher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "GetLauncher", nullptr, nullptr, sizeof(ThrowingKnives_eventGetLauncher_Parms), Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_GetLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_GetLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics
	{
		struct ThrowingKnives_eventGetSlasher_Parms
		{
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingKnives_eventGetSlasher_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "GetSlasher", nullptr, nullptr, sizeof(ThrowingKnives_eventGetSlasher_Parms), Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_GetSlasher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_GetSlasher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "Multicast_OnUsePowerWhenInCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "Multicast_OnUsePowerWhenOutOfAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics
	{
		struct ThrowingKnives_eventOnItemUsedStateChanged_Parms
		{
			bool pressed;
		};
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((ThrowingKnives_eventOnItemUsedStateChanged_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThrowingKnives_eventOnItemUsedStateChanged_Parms), &Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingKnives, nullptr, "OnItemUsedStateChanged", nullptr, nullptr, sizeof(ThrowingKnives_eventOnItemUsedStateChanged_Parms), Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AThrowingKnives_NoRegister()
	{
		return AThrowingKnives::StaticClass();
	}
	struct Z_Construct_UClass_AThrowingKnives_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumTimeBetweenBroadcast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumTimeBetweenBroadcast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__closetReloadActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__closetReloadActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reloadInteractionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__reloadInteractionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__lacerationComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__knivesLauncher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__knivesLauncher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__knivesProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__knivesProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeChargeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__superModeChargeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeChargePresentationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__superModeChargePresentationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__superModeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flurryScoreComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flurryScoreComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowingKnives_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowingKnives_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowingKnives_Authority_SpawnReloadInteractionOnLockers, "Authority_SpawnReloadInteractionOnLockers" }, // 1968012595
		{ &Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboFinished, "Cosmetic_OnComboFinished" }, // 2236526402
		{ &Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnComboScoreChanged, "Cosmetic_OnComboScoreChanged" }, // 787876480
		{ &Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnLaunch, "Cosmetic_OnLaunch" }, // 960795869
		{ &Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown, "Cosmetic_OnUsePowerWhenInCooldown" }, // 4283688587
		{ &Z_Construct_UFunction_AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo, "Cosmetic_OnUsePowerWhenOutOfAmmo" }, // 430645516
		{ &Z_Construct_UFunction_AThrowingKnives_GetLauncher, "GetLauncher" }, // 3201814072
		{ &Z_Construct_UFunction_AThrowingKnives_GetSlasher, "GetSlasher" }, // 4082268654
		{ &Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenInCooldown, "Multicast_OnUsePowerWhenInCooldown" }, // 2888858732
		{ &Z_Construct_UFunction_AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo, "Multicast_OnUsePowerWhenOutOfAmmo" }, // 2715499807
		{ &Z_Construct_UFunction_AThrowingKnives_OnItemUsedStateChanged, "OnItemUsedStateChanged" }, // 3059750071
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThrowingKnives.h" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__minimumTimeBetweenBroadcast_MetaData[] = {
		{ "Category", "ThrowingKnives" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__minimumTimeBetweenBroadcast = { "_minimumTimeBetweenBroadcast", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _minimumTimeBetweenBroadcast), METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__minimumTimeBetweenBroadcast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__minimumTimeBetweenBroadcast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__closetReloadActor_MetaData[] = {
		{ "Category", "ThrowingKnives" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__closetReloadActor = { "_closetReloadActor", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _closetReloadActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__closetReloadActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__closetReloadActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__reloadInteractionClass_MetaData[] = {
		{ "Category", "ThrowingKnives" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__reloadInteractionClass = { "_reloadInteractionClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _reloadInteractionClass), Z_Construct_UClass_UReloadKnives_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__reloadInteractionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__reloadInteractionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__lacerationComponentClass_MetaData[] = {
		{ "Category", "ThrowingKnives" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__lacerationComponentClass = { "_lacerationComponentClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _lacerationComponentClass), Z_Construct_UClass_ULacerationComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__lacerationComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__lacerationComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesLauncher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThrowingKnives" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesLauncher = { "_knivesLauncher", nullptr, (EPropertyFlags)0x004000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _knivesLauncher), Z_Construct_UClass_UKnivesLauncher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesLauncher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesLauncher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThrowingKnives" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesProvider = { "_knivesProvider", nullptr, (EPropertyFlags)0x004000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _knivesProvider), Z_Construct_UClass_UKnivesProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargeComponent = { "_superModeChargeComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _superModeChargeComponent), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargePresentationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargePresentationComponent = { "_superModeChargePresentationComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _superModeChargePresentationComponent), Z_Construct_UClass_UK23PowerProgressPresentationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargePresentationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargePresentationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeComponent_MetaData[] = {
		{ "Category", "ThrowingKnives" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeComponent = { "_superModeComponent", nullptr, (EPropertyFlags)0x00400000000b0029, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _superModeComponent), Z_Construct_UClass_UTricksterSuperModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingKnives_Statics::NewProp__flurryScoreComponent_MetaData[] = {
		{ "Category", "ThrowingKnives" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThrowingKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowingKnives_Statics::NewProp__flurryScoreComponent = { "_flurryScoreComponent", nullptr, (EPropertyFlags)0x00400000000b0029, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingKnives, _flurryScoreComponent), Z_Construct_UClass_UFlurryComboScoreComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__flurryScoreComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::NewProp__flurryScoreComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowingKnives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__minimumTimeBetweenBroadcast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__closetReloadActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__reloadInteractionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__lacerationComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesLauncher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__knivesProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeChargePresentationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__superModeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingKnives_Statics::NewProp__flurryScoreComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowingKnives_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowingKnives>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThrowingKnives_Statics::ClassParams = {
		&AThrowingKnives::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowingKnives_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowingKnives_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingKnives_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowingKnives()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThrowingKnives_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThrowingKnives, 1031339907);
	template<> THEK23_API UClass* StaticClass<AThrowingKnives>()
	{
		return AThrowingKnives::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThrowingKnives(Z_Construct_UClass_AThrowingKnives, &AThrowingKnives::StaticClass, TEXT("/Script/TheK23"), TEXT("AThrowingKnives"), false, nullptr, nullptr, nullptr);

	void AThrowingKnives::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__flurryScoreComponent(TEXT("_flurryScoreComponent"));
		static const FName Name__superModeComponent(TEXT("_superModeComponent"));

		const bool bIsValid = true
			&& Name__flurryScoreComponent == ClassReps[(int32)ENetFields_Private::_flurryScoreComponent].Property->GetFName()
			&& Name__superModeComponent == ClassReps[(int32)ENetFields_Private::_superModeComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AThrowingKnives"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowingKnives);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
