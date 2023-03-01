// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperInteractable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperInteractable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APlayerInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACamperInteractable::execGetOwningSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetOwningSurvivor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACamperInteractable::execServerMoveOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveOut_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerMoveOut_Validate"));
			return;
		}
		P_THIS->ServerMoveOut_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACamperInteractable::execSetKillInteraction)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_killInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKillInteraction(Z_Param_killInteraction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACamperInteractable::execUpdateTargetHPSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTargetHPSlot();
		P_NATIVE_END;
	}
	static FName NAME_ACamperInteractable_GetSlasherInteractor = FName(TEXT("GetSlasherInteractor"));
	UInteractor* ACamperInteractable::GetSlasherInteractor() const
	{
		CamperInteractable_eventGetSlasherInteractor_Parms Parms;
		const_cast<ACamperInteractable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACamperInteractable_GetSlasherInteractor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ACamperInteractable_ServerMoveOut = FName(TEXT("ServerMoveOut"));
	void ACamperInteractable::ServerMoveOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACamperInteractable_ServerMoveOut),NULL);
	}
	void ACamperInteractable::StaticRegisterNativesACamperInteractable()
	{
		UClass* Class = ACamperInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningSurvivor", &ACamperInteractable::execGetOwningSurvivor },
			{ "ServerMoveOut", &ACamperInteractable::execServerMoveOut },
			{ "SetKillInteraction", &ACamperInteractable::execSetKillInteraction },
			{ "UpdateTargetHPSlot", &ACamperInteractable::execUpdateTargetHPSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics
	{
		struct CamperInteractable_eventGetOwningSurvivor_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperInteractable_eventGetOwningSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperInteractable, nullptr, "GetOwningSurvivor", nullptr, nullptr, sizeof(CamperInteractable_eventGetOwningSurvivor_Parms), Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperInteractable_eventGetSlasherInteractor_Parms, ReturnValue), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperInteractable, nullptr, "GetSlasherInteractor", nullptr, nullptr, sizeof(CamperInteractable_eventGetSlasherInteractor_Parms), Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamperInteractable_ServerMoveOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperInteractable_ServerMoveOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperInteractable_ServerMoveOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperInteractable, nullptr, "ServerMoveOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperInteractable_ServerMoveOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_ServerMoveOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperInteractable_ServerMoveOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperInteractable_ServerMoveOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics
	{
		struct CamperInteractable_eventSetKillInteraction_Parms
		{
			UInteractionDefinition* killInteraction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::NewProp_killInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::NewProp_killInteraction = { "killInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperInteractable_eventSetKillInteraction_Parms, killInteraction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::NewProp_killInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::NewProp_killInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::NewProp_killInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperInteractable, nullptr, "SetKillInteraction", nullptr, nullptr, sizeof(CamperInteractable_eventSetKillInteraction_Parms), Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperInteractable_SetKillInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperInteractable_SetKillInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamperInteractable_UpdateTargetHPSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperInteractable_UpdateTargetHPSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperInteractable_UpdateTargetHPSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperInteractable, nullptr, "UpdateTargetHPSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperInteractable_UpdateTargetHPSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperInteractable_UpdateTargetHPSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperInteractable_UpdateTargetHPSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperInteractable_UpdateTargetHPSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACamperInteractable_NoRegister()
	{
		return ACamperInteractable::StaticClass();
	}
	struct Z_Construct_UClass_ACamperInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selfInteractionsInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selfInteractionsInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__healingInteractor1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__healingInteractor1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mainInteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mainInteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killHealthyInteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killHealthyInteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killInteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killInteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crowDismissCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crowDismissCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wakeUpCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__wakeUpCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snapOutOfItCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snapOutOfItCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__healInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__healInteractions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__healInteractions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealingInteractors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HealingInteractors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealingInteractors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamperInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACamperInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACamperInteractable_GetOwningSurvivor, "GetOwningSurvivor" }, // 1267262834
		{ &Z_Construct_UFunction_ACamperInteractable_GetSlasherInteractor, "GetSlasherInteractor" }, // 4063011740
		{ &Z_Construct_UFunction_ACamperInteractable_ServerMoveOut, "ServerMoveOut" }, // 1262334422
		{ &Z_Construct_UFunction_ACamperInteractable_SetKillInteraction, "SetKillInteraction" }, // 2501193051
		{ &Z_Construct_UFunction_ACamperInteractable_UpdateTargetHPSlot, "UpdateTargetHPSlot" }, // 4140759304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CamperInteractable.h" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__rootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__rootComponent = { "_rootComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _rootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__rootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__rootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__selfInteractionsInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__selfInteractionsInteractor = { "_selfInteractionsInteractor", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _selfInteractionsInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__selfInteractionsInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__selfInteractionsInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healingInteractor1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healingInteractor1 = { "_healingInteractor1", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _healingInteractor1), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healingInteractor1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healingInteractor1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__mainInteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__mainInteractionZone = { "_mainInteractionZone", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _mainInteractionZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__mainInteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__mainInteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killHealthyInteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killHealthyInteractionZone = { "_killHealthyInteractionZone", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _killHealthyInteractionZone), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killHealthyInteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killHealthyInteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractionZone = { "_killInteractionZone", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _killInteractionZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractor = { "_killInteractor", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _killInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__activator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__activator = { "_activator", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _activator), Z_Construct_UClass_UActivatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__activator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__activator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__crowDismissCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__crowDismissCharge = { "_crowDismissCharge", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _crowDismissCharge), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__crowDismissCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__crowDismissCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__wakeUpCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__wakeUpCharge = { "_wakeUpCharge", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _wakeUpCharge), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__wakeUpCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__wakeUpCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__snapOutOfItCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__snapOutOfItCharge = { "_snapOutOfItCharge", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _snapOutOfItCharge), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__snapOutOfItCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__snapOutOfItCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killCharge = { "_killCharge", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _killCharge), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healInteractions_MetaData[] = {
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healInteractions = { "_healInteractions", nullptr, (EPropertyFlags)0x002008800000200c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, _healInteractions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healInteractions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healInteractions_Inner = { "_healInteractions", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperInteractable_Statics::NewProp_HealingInteractors_MetaData[] = {
		{ "Category", "CamperInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp_HealingInteractors = { "HealingInteractors", nullptr, (EPropertyFlags)0x002008800000200c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperInteractable, HealingInteractors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::NewProp_HealingInteractors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::NewProp_HealingInteractors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamperInteractable_Statics::NewProp_HealingInteractors_Inner = { "HealingInteractors", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamperInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__rootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__selfInteractionsInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healingInteractor1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__mainInteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killHealthyInteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__activator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__crowDismissCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__wakeUpCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__snapOutOfItCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__killCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp__healInteractions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp_HealingInteractors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperInteractable_Statics::NewProp_HealingInteractors_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACamperInteractable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ACamperInteractable, IAIInteractableTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamperInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamperInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamperInteractable_Statics::ClassParams = {
		&ACamperInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACamperInteractable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACamperInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamperInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamperInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamperInteractable, 145410305);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ACamperInteractable>()
	{
		return ACamperInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamperInteractable(Z_Construct_UClass_ACamperInteractable, &ACamperInteractable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ACamperInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamperInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
