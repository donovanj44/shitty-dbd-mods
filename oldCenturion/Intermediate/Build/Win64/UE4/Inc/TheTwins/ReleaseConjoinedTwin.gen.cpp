// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/ReleaseConjoinedTwin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReleaseConjoinedTwin() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UReleaseConjoinedTwin_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UReleaseConjoinedTwin();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UReleaseConjoinedTwin::execOnKillerStunned)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerStunned(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReleaseConjoinedTwin::execOnPowerCollected)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_collector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPowerCollected(Z_Param_collector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReleaseConjoinedTwin::execOnRep_ReleaseAnimationWentToTheEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReleaseAnimationWentToTheEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReleaseConjoinedTwin::execOnTwinSet)
	{
		P_GET_OBJECT(AConjoinedTwin,Z_Param_twin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTwinSet(Z_Param_twin);
		P_NATIVE_END;
	}
	static FName NAME_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled = FName(TEXT("Cosmetic_OnReleaseCancelled"));
	void UReleaseConjoinedTwin::Cosmetic_OnReleaseCancelled(ADBDPlayer* sister, AConjoinedTwin* brother)
	{
		ReleaseConjoinedTwin_eventCosmetic_OnReleaseCancelled_Parms Parms;
		Parms.sister=sister;
		Parms.brother=brother;
		ProcessEvent(FindFunctionChecked(NAME_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled),&Parms);
	}
	static FName NAME_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete = FName(TEXT("Cosmetic_OnReleaseChargeComplete"));
	void UReleaseConjoinedTwin::Cosmetic_OnReleaseChargeComplete(ADBDPlayer* sister, AConjoinedTwin* brother)
	{
		ReleaseConjoinedTwin_eventCosmetic_OnReleaseChargeComplete_Parms Parms;
		Parms.sister=sister;
		Parms.brother=brother;
		ProcessEvent(FindFunctionChecked(NAME_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete),&Parms);
	}
	static FName NAME_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate = FName(TEXT("Cosmetic_OnReleaseTwinInteractionUpdate"));
	void UReleaseConjoinedTwin::Cosmetic_OnReleaseTwinInteractionUpdate(ADBDPlayer* sister, AConjoinedTwin* brother, float deltaTime)
	{
		ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdate_Parms Parms;
		Parms.sister=sister;
		Parms.brother=brother;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate),&Parms);
	}
	static FName NAME_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart = FName(TEXT("Cosmetic_OnReleaseTwinInteractionUpdateStart"));
	void UReleaseConjoinedTwin::Cosmetic_OnReleaseTwinInteractionUpdateStart(ADBDPlayer* sister, AConjoinedTwin* brother)
	{
		ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdateStart_Parms Parms;
		Parms.sister=sister;
		Parms.brother=brother;
		ProcessEvent(FindFunctionChecked(NAME_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart),&Parms);
	}
	void UReleaseConjoinedTwin::StaticRegisterNativesUReleaseConjoinedTwin()
	{
		UClass* Class = UReleaseConjoinedTwin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerStunned", &UReleaseConjoinedTwin::execOnKillerStunned },
			{ "OnPowerCollected", &UReleaseConjoinedTwin::execOnPowerCollected },
			{ "OnRep_ReleaseAnimationWentToTheEnd", &UReleaseConjoinedTwin::execOnRep_ReleaseAnimationWentToTheEnd },
			{ "OnTwinSet", &UReleaseConjoinedTwin::execOnTwinSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brother;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sister;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::NewProp_brother = { "brother", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseCancelled_Parms, brother), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::NewProp_sister = { "sister", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseCancelled_Parms, sister), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::NewProp_brother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::NewProp_sister,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReleaseConjoinedTwin, nullptr, "Cosmetic_OnReleaseCancelled", nullptr, nullptr, sizeof(ReleaseConjoinedTwin_eventCosmetic_OnReleaseCancelled_Parms), Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brother;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sister;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::NewProp_brother = { "brother", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseChargeComplete_Parms, brother), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::NewProp_sister = { "sister", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseChargeComplete_Parms, sister), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::NewProp_brother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::NewProp_sister,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReleaseConjoinedTwin, nullptr, "Cosmetic_OnReleaseChargeComplete", nullptr, nullptr, sizeof(ReleaseConjoinedTwin_eventCosmetic_OnReleaseChargeComplete_Parms), Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brother;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sister;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdate_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::NewProp_brother = { "brother", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdate_Parms, brother), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::NewProp_sister = { "sister", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdate_Parms, sister), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::NewProp_brother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::NewProp_sister,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReleaseConjoinedTwin, nullptr, "Cosmetic_OnReleaseTwinInteractionUpdate", nullptr, nullptr, sizeof(ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdate_Parms), Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brother;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sister;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::NewProp_brother = { "brother", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdateStart_Parms, brother), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::NewProp_sister = { "sister", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdateStart_Parms, sister), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::NewProp_brother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::NewProp_sister,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReleaseConjoinedTwin, nullptr, "Cosmetic_OnReleaseTwinInteractionUpdateStart", nullptr, nullptr, sizeof(ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdateStart_Parms), Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics
	{
		struct ReleaseConjoinedTwin_eventOnKillerStunned_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventOnKillerStunned_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventOnKillerStunned_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReleaseConjoinedTwin, nullptr, "OnKillerStunned", nullptr, nullptr, sizeof(ReleaseConjoinedTwin_eventOnKillerStunned_Parms), Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics
	{
		struct ReleaseConjoinedTwin_eventOnPowerCollected_Parms
		{
			ADBDPlayer* collector;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventOnPowerCollected_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReleaseConjoinedTwin, nullptr, "OnPowerCollected", nullptr, nullptr, sizeof(ReleaseConjoinedTwin_eventOnPowerCollected_Parms), Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReleaseConjoinedTwin, nullptr, "OnRep_ReleaseAnimationWentToTheEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics
	{
		struct ReleaseConjoinedTwin_eventOnTwinSet_Parms
		{
			AConjoinedTwin* twin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReleaseConjoinedTwin_eventOnTwinSet_Parms, twin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::NewProp_twin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReleaseConjoinedTwin, nullptr, "OnTwinSet", nullptr, nullptr, sizeof(ReleaseConjoinedTwin_eventOnTwinSet_Parms), Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReleaseConjoinedTwin_NoRegister()
	{
		return UReleaseConjoinedTwin::StaticClass();
	}
	struct Z_Construct_UClass_UReleaseConjoinedTwin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__releaseAnimationWentToTheEnd_MetaData[];
#endif
		static void NewProp__releaseAnimationWentToTheEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__releaseAnimationWentToTheEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__releaseExitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__releaseExitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__releaseMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__releaseMaxCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReleaseConjoinedTwin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReleaseConjoinedTwin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled, "Cosmetic_OnReleaseCancelled" }, // 1001627973
		{ &Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete, "Cosmetic_OnReleaseChargeComplete" }, // 1449507508
		{ &Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate, "Cosmetic_OnReleaseTwinInteractionUpdate" }, // 1495642185
		{ &Z_Construct_UFunction_UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart, "Cosmetic_OnReleaseTwinInteractionUpdateStart" }, // 3474442272
		{ &Z_Construct_UFunction_UReleaseConjoinedTwin_OnKillerStunned, "OnKillerStunned" }, // 2505729340
		{ &Z_Construct_UFunction_UReleaseConjoinedTwin_OnPowerCollected, "OnPowerCollected" }, // 2955541705
		{ &Z_Construct_UFunction_UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd, "OnRep_ReleaseAnimationWentToTheEnd" }, // 4220627354
		{ &Z_Construct_UFunction_UReleaseConjoinedTwin_OnTwinSet, "OnTwinSet" }, // 1301553915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReleaseConjoinedTwin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ReleaseConjoinedTwin.h" },
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseAnimationWentToTheEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	void Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseAnimationWentToTheEnd_SetBit(void* Obj)
	{
		((UReleaseConjoinedTwin*)Obj)->_releaseAnimationWentToTheEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseAnimationWentToTheEnd = { "_releaseAnimationWentToTheEnd", "OnRep_ReleaseAnimationWentToTheEnd", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReleaseConjoinedTwin), &Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseAnimationWentToTheEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseAnimationWentToTheEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseAnimationWentToTheEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseExitTime_MetaData[] = {
		{ "Category", "ReleaseConjoinedTwin" },
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseExitTime = { "_releaseExitTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReleaseConjoinedTwin, _releaseExitTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseExitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseExitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseMaxCharge_MetaData[] = {
		{ "Category", "ReleaseConjoinedTwin" },
		{ "ModuleRelativePath", "Public/ReleaseConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseMaxCharge = { "_releaseMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReleaseConjoinedTwin, _releaseMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseMaxCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReleaseConjoinedTwin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseAnimationWentToTheEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseExitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReleaseConjoinedTwin_Statics::NewProp__releaseMaxCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReleaseConjoinedTwin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReleaseConjoinedTwin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReleaseConjoinedTwin_Statics::ClassParams = {
		&UReleaseConjoinedTwin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReleaseConjoinedTwin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReleaseConjoinedTwin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReleaseConjoinedTwin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReleaseConjoinedTwin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReleaseConjoinedTwin, 2119127833);
	template<> THETWINS_API UClass* StaticClass<UReleaseConjoinedTwin>()
	{
		return UReleaseConjoinedTwin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReleaseConjoinedTwin(Z_Construct_UClass_UReleaseConjoinedTwin, &UReleaseConjoinedTwin::StaticClass, TEXT("/Script/TheTwins"), TEXT("UReleaseConjoinedTwin"), false, nullptr, nullptr, nullptr);

	void UReleaseConjoinedTwin::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__releaseAnimationWentToTheEnd(TEXT("_releaseAnimationWentToTheEnd"));

		const bool bIsValid = true
			&& Name__releaseAnimationWentToTheEnd == ClassReps[(int32)ENetFields_Private::_releaseAnimationWentToTheEnd].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UReleaseConjoinedTwin"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReleaseConjoinedTwin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
