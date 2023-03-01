// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Totem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTotem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETotemState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTotemOutlineUpdateStrategy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister();
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULocalPlayerTrackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockableComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTotemBoundPerk_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIPointOfInterestTargetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATotem::execGetBoonAuraRevealColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetBoonAuraRevealColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATotem::execGetBoonTotemAuraRevealRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoonTotemAuraRevealRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATotem::execGetBoonTotemBlessingRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoonTotemBlessingRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATotem::execGetTotemState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETotemState*)Z_Param__Result=P_THIS->GetTotemState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATotem::execIsBoundToPerk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBoundToPerk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATotem::execIsTotemBlockedForPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTotemBlockedForPlayer(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATotem::execOnLocallyObservedChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATotem::execOnRep_TotemState)
	{
		P_GET_ENUM(ETotemState,Z_Param_oldTotemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TotemState(ETotemState(Z_Param_oldTotemState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATotem::execOnTotemBlockChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTotemBlockChanged();
		P_NATIVE_END;
	}
	static FName NAME_ATotem_GetBlessTotemInteraction = FName(TEXT("GetBlessTotemInteraction"));
	UChargeableInteractionDefinition* ATotem::GetBlessTotemInteraction() const
	{
		Totem_eventGetBlessTotemInteraction_Parms Parms;
		const_cast<ATotem*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATotem_GetBlessTotemInteraction),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATotem_GetCleanseTotemInteraction = FName(TEXT("GetCleanseTotemInteraction"));
	UChargeableInteractionDefinition* ATotem::GetCleanseTotemInteraction() const
	{
		Totem_eventGetCleanseTotemInteraction_Parms Parms;
		const_cast<ATotem*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATotem_GetCleanseTotemInteraction),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATotem_GetMainInteractor = FName(TEXT("GetMainInteractor"));
	UInteractor* ATotem::GetMainInteractor() const
	{
		Totem_eventGetMainInteractor_Parms Parms;
		const_cast<ATotem*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATotem_GetMainInteractor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATotem_OnBlockTotemCosmetic = FName(TEXT("OnBlockTotemCosmetic"));
	void ATotem::OnBlockTotemCosmetic(ADBDPlayer* player)
	{
		Totem_eventOnBlockTotemCosmetic_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_ATotem_OnBlockTotemCosmetic),&Parms);
	}
	static FName NAME_ATotem_OnCleanseTotem = FName(TEXT("OnCleanseTotem"));
	void ATotem::OnCleanseTotem(ATotem* totem, const ETotemState oldTotemState)
	{
		Totem_eventOnCleanseTotem_Parms Parms;
		Parms.totem=totem;
		Parms.oldTotemState=oldTotemState;
		ProcessEvent(FindFunctionChecked(NAME_ATotem_OnCleanseTotem),&Parms);
	}
	static FName NAME_ATotem_OnTotemStateChanged = FName(TEXT("OnTotemStateChanged"));
	void ATotem::OnTotemStateChanged(const ETotemState oldTotemState, const ETotemState newTotemState)
	{
		Totem_eventOnTotemStateChanged_Parms Parms;
		Parms.oldTotemState=oldTotemState;
		Parms.newTotemState=newTotemState;
		ProcessEvent(FindFunctionChecked(NAME_ATotem_OnTotemStateChanged),&Parms);
	}
	static FName NAME_ATotem_OnUnblockTotemCosmetic = FName(TEXT("OnUnblockTotemCosmetic"));
	void ATotem::OnUnblockTotemCosmetic(ADBDPlayer* player)
	{
		Totem_eventOnUnblockTotemCosmetic_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_ATotem_OnUnblockTotemCosmetic),&Parms);
	}
	void ATotem::StaticRegisterNativesATotem()
	{
		UClass* Class = ATotem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoonAuraRevealColor", &ATotem::execGetBoonAuraRevealColor },
			{ "GetBoonTotemAuraRevealRange", &ATotem::execGetBoonTotemAuraRevealRange },
			{ "GetBoonTotemBlessingRange", &ATotem::execGetBoonTotemBlessingRange },
			{ "GetTotemState", &ATotem::execGetTotemState },
			{ "IsBoundToPerk", &ATotem::execIsBoundToPerk },
			{ "IsTotemBlockedForPlayer", &ATotem::execIsTotemBlockedForPlayer },
			{ "OnLocallyObservedChanged", &ATotem::execOnLocallyObservedChanged },
			{ "OnRep_TotemState", &ATotem::execOnRep_TotemState },
			{ "OnTotemBlockChanged", &ATotem::execOnTotemBlockChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventGetBlessTotemInteraction_Parms, ReturnValue), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "GetBlessTotemInteraction", nullptr, nullptr, sizeof(Totem_eventGetBlessTotemInteraction_Parms), Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_GetBlessTotemInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_GetBlessTotemInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics
	{
		struct Totem_eventGetBoonAuraRevealColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventGetBoonAuraRevealColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "GetBoonAuraRevealColor", nullptr, nullptr, sizeof(Totem_eventGetBoonAuraRevealColor_Parms), Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics
	{
		struct Totem_eventGetBoonTotemAuraRevealRange_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventGetBoonTotemAuraRevealRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "GetBoonTotemAuraRevealRange", nullptr, nullptr, sizeof(Totem_eventGetBoonTotemAuraRevealRange_Parms), Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics
	{
		struct Totem_eventGetBoonTotemBlessingRange_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventGetBoonTotemBlessingRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "GetBoonTotemBlessingRange", nullptr, nullptr, sizeof(Totem_eventGetBoonTotemBlessingRange_Parms), Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventGetCleanseTotemInteraction_Parms, ReturnValue), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "GetCleanseTotemInteraction", nullptr, nullptr, sizeof(Totem_eventGetCleanseTotemInteraction_Parms), Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_GetMainInteractor_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventGetMainInteractor_Parms, ReturnValue), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "GetMainInteractor", nullptr, nullptr, sizeof(Totem_eventGetMainInteractor_Parms), Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_GetMainInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_GetMainInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_GetTotemState_Statics
	{
		struct Totem_eventGetTotemState_Parms
		{
			ETotemState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATotem_GetTotemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventGetTotemState_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_ETotemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATotem_GetTotemState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_GetTotemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_GetTotemState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_GetTotemState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_GetTotemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_GetTotemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "GetTotemState", nullptr, nullptr, sizeof(Totem_eventGetTotemState_Parms), Z_Construct_UFunction_ATotem_GetTotemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetTotemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_GetTotemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_GetTotemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_GetTotemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_GetTotemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics
	{
		struct Totem_eventIsBoundToPerk_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Totem_eventIsBoundToPerk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Totem_eventIsBoundToPerk_Parms), &Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "IsBoundToPerk", nullptr, nullptr, sizeof(Totem_eventIsBoundToPerk_Parms), Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_IsBoundToPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_IsBoundToPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics
	{
		struct Totem_eventIsTotemBlockedForPlayer_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Totem_eventIsTotemBlockedForPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Totem_eventIsTotemBlockedForPlayer_Parms), &Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventIsTotemBlockedForPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "IsTotemBlockedForPlayer", nullptr, nullptr, sizeof(Totem_eventIsTotemBlockedForPlayer_Parms), Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventOnBlockTotemCosmetic_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "OnBlockTotemCosmetic", nullptr, nullptr, sizeof(Totem_eventOnBlockTotemCosmetic_Parms), Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldTotemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldTotemState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldTotemState_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_totem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_oldTotemState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_oldTotemState = { "oldTotemState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventOnCleanseTotem_Parms, oldTotemState), Z_Construct_UEnum_DeadByDaylight_ETotemState, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_oldTotemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_oldTotemState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_oldTotemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_totem = { "totem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventOnCleanseTotem_Parms, totem), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_oldTotemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_oldTotemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::NewProp_totem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "OnCleanseTotem", nullptr, nullptr, sizeof(Totem_eventOnCleanseTotem_Parms), Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_OnCleanseTotem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_OnCleanseTotem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_OnLocallyObservedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics
	{
		struct Totem_eventOnRep_TotemState_Parms
		{
			ETotemState oldTotemState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldTotemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldTotemState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldTotemState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::NewProp_oldTotemState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::NewProp_oldTotemState = { "oldTotemState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventOnRep_TotemState_Parms, oldTotemState), Z_Construct_UEnum_DeadByDaylight_ETotemState, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::NewProp_oldTotemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::NewProp_oldTotemState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::NewProp_oldTotemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::NewProp_oldTotemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::NewProp_oldTotemState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "OnRep_TotemState", nullptr, nullptr, sizeof(Totem_eventOnRep_TotemState_Parms), Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_OnRep_TotemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_OnRep_TotemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_OnTotemBlockChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnTotemBlockChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_OnTotemBlockChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "OnTotemBlockChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnTotemBlockChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnTotemBlockChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_OnTotemBlockChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_OnTotemBlockChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newTotemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newTotemState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newTotemState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldTotemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldTotemState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldTotemState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_newTotemState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_newTotemState = { "newTotemState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventOnTotemStateChanged_Parms, newTotemState), Z_Construct_UEnum_DeadByDaylight_ETotemState, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_newTotemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_newTotemState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_newTotemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_oldTotemState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_oldTotemState = { "oldTotemState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventOnTotemStateChanged_Parms, oldTotemState), Z_Construct_UEnum_DeadByDaylight_ETotemState, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_oldTotemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_oldTotemState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_oldTotemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_newTotemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_newTotemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_oldTotemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::NewProp_oldTotemState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "OnTotemStateChanged", nullptr, nullptr, sizeof(Totem_eventOnTotemStateChanged_Parms), Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_OnTotemStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_OnTotemStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Totem_eventOnUnblockTotemCosmetic_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATotem, nullptr, "OnUnblockTotemCosmetic", nullptr, nullptr, sizeof(Totem_eventOnUnblockTotemCosmetic_Parms), Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATotem_NoRegister()
	{
		return ATotem::StaticClass();
	}
	struct Z_Construct_UClass_ATotem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canBeBoundToBoonPerk_MetaData[];
#endif
		static void NewProp__canBeBoundToBoonPerk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canBeBoundToBoonPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemOutlineUpdateStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__totemOutlineUpdateStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionsAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactionsAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activatorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activatorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localPlayerTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__localPlayerTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemBlockableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__totemBlockableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perceptionStimuliComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perceptionStimuliComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseBoonTotemAuraRevealRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseBoonTotemAuraRevealRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseBoonTotemBlessingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseBoonTotemBlessingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__totemState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__totemState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boundPerks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__boundPerks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__boundPerks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boonAuraRevealColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__boonAuraRevealColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATotem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATotem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATotem_GetBlessTotemInteraction, "GetBlessTotemInteraction" }, // 4268681398
		{ &Z_Construct_UFunction_ATotem_GetBoonAuraRevealColor, "GetBoonAuraRevealColor" }, // 2848137251
		{ &Z_Construct_UFunction_ATotem_GetBoonTotemAuraRevealRange, "GetBoonTotemAuraRevealRange" }, // 3100113937
		{ &Z_Construct_UFunction_ATotem_GetBoonTotemBlessingRange, "GetBoonTotemBlessingRange" }, // 1726039560
		{ &Z_Construct_UFunction_ATotem_GetCleanseTotemInteraction, "GetCleanseTotemInteraction" }, // 2373686971
		{ &Z_Construct_UFunction_ATotem_GetMainInteractor, "GetMainInteractor" }, // 542202078
		{ &Z_Construct_UFunction_ATotem_GetTotemState, "GetTotemState" }, // 83596227
		{ &Z_Construct_UFunction_ATotem_IsBoundToPerk, "IsBoundToPerk" }, // 300594626
		{ &Z_Construct_UFunction_ATotem_IsTotemBlockedForPlayer, "IsTotemBlockedForPlayer" }, // 1910538152
		{ &Z_Construct_UFunction_ATotem_OnBlockTotemCosmetic, "OnBlockTotemCosmetic" }, // 2105909776
		{ &Z_Construct_UFunction_ATotem_OnCleanseTotem, "OnCleanseTotem" }, // 2078940697
		{ &Z_Construct_UFunction_ATotem_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 693084144
		{ &Z_Construct_UFunction_ATotem_OnRep_TotemState, "OnRep_TotemState" }, // 202353573
		{ &Z_Construct_UFunction_ATotem_OnTotemBlockChanged, "OnTotemBlockChanged" }, // 1809532452
		{ &Z_Construct_UFunction_ATotem_OnTotemStateChanged, "OnTotemStateChanged" }, // 3715287197
		{ &Z_Construct_UFunction_ATotem_OnUnblockTotemCosmetic, "OnUnblockTotemCosmetic" }, // 639263455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Totem.h" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__canBeBoundToBoonPerk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Totem" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	void Z_Construct_UClass_ATotem_Statics::NewProp__canBeBoundToBoonPerk_SetBit(void* Obj)
	{
		((ATotem*)Obj)->_canBeBoundToBoonPerk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__canBeBoundToBoonPerk = { "_canBeBoundToBoonPerk", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATotem), &Z_Construct_UClass_ATotem_Statics::NewProp__canBeBoundToBoonPerk_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__canBeBoundToBoonPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__canBeBoundToBoonPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__totemOutlineUpdateStrategy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Totem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__totemOutlineUpdateStrategy = { "_totemOutlineUpdateStrategy", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _totemOutlineUpdateStrategy), Z_Construct_UClass_UTotemOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__totemOutlineUpdateStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__totemOutlineUpdateStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__interactionsAttachPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Totem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__interactionsAttachPoint = { "_interactionsAttachPoint", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _interactionsAttachPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__interactionsAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__interactionsAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__objectState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__objectState = { "_objectState", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _objectState), Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__objectState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__objectState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__activatorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__activatorComponent = { "_activatorComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _activatorComponent), Z_Construct_UClass_UActivatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__activatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__activatorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__localPlayerTracker_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__localPlayerTracker = { "_localPlayerTracker", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _localPlayerTracker), Z_Construct_UClass_ULocalPlayerTrackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__localPlayerTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__localPlayerTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__totemBlockableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__totemBlockableComponent = { "_totemBlockableComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _totemBlockableComponent), Z_Construct_UClass_UBlockableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__totemBlockableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__totemBlockableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__perceptionStimuliComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Totem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__perceptionStimuliComponent = { "_perceptionStimuliComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _perceptionStimuliComponent), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__perceptionStimuliComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__perceptionStimuliComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemAuraRevealRange_MetaData[] = {
		{ "Category", "Totem" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemAuraRevealRange = { "_baseBoonTotemAuraRevealRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _baseBoonTotemAuraRevealRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemAuraRevealRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemAuraRevealRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemBlessingRange_MetaData[] = {
		{ "Category", "Totem" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemBlessingRange = { "_baseBoonTotemBlessingRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _baseBoonTotemBlessingRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemBlessingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemBlessingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__totemState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__totemState = { "_totemState", "OnRep_TotemState", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _totemState), Z_Construct_UEnum_DeadByDaylight_ETotemState, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__totemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__totemState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__totemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__boundPerks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__boundPerks = { "_boundPerks", nullptr, (EPropertyFlags)0x0040008000002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _boundPerks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__boundPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__boundPerks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__boundPerks_Inner = { "_boundPerks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTotemBoundPerk_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATotem_Statics::NewProp__boonAuraRevealColor_MetaData[] = {
		{ "Category", "Totem" },
		{ "ModuleRelativePath", "Public/Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATotem_Statics::NewProp__boonAuraRevealColor = { "_boonAuraRevealColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATotem, _boonAuraRevealColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::NewProp__boonAuraRevealColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::NewProp__boonAuraRevealColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__canBeBoundToBoonPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__totemOutlineUpdateStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__interactionsAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__objectState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__activatorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__localPlayerTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__totemBlockableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__perceptionStimuliComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemAuraRevealRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__baseBoonTotemBlessingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__totemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__totemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__boundPerks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__boundPerks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATotem_Statics::NewProp__boonAuraRevealColor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATotem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIPointOfInterestTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ATotem, IAIPointOfInterestTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATotem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATotem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATotem_Statics::ClassParams = {
		&ATotem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATotem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATotem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATotem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATotem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATotem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATotem, 4160534172);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ATotem>()
	{
		return ATotem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATotem(Z_Construct_UClass_ATotem, &ATotem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ATotem"), false, nullptr, nullptr, nullptr);

	void ATotem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__boundPerks(TEXT("_boundPerks"));
		static const FName Name__totemState(TEXT("_totemState"));

		const bool bIsValid = true
			&& Name__boundPerks == ClassReps[(int32)ENetFields_Private::_boundPerks].Property->GetFName()
			&& Name__totemState == ClassReps[(int32)ENetFields_Private::_totemState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATotem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATotem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
