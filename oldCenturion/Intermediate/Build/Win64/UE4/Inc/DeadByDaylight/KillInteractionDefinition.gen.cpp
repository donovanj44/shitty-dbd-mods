// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillInteractionDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillInteractionDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillInteractionDefinition::execGetChargeCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChargeCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillInteractionDefinition::execGetExitAnimationMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimationMontageDescriptor*)Z_Param__Result=P_THIS->GetExitAnimationMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillInteractionDefinition::execGetOwningSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetOwningSurvivor();
		P_NATIVE_END;
	}
	static FName NAME_UKillInteractionDefinition_GetExitAnimationMontage = FName(TEXT("GetExitAnimationMontage"));
	FAnimationMontageDescriptor UKillInteractionDefinition::GetExitAnimationMontage() const
	{
		KillInteractionDefinition_eventGetExitAnimationMontage_Parms Parms;
		const_cast<UKillInteractionDefinition*>(this)->ProcessEvent(FindFunctionChecked(NAME_UKillInteractionDefinition_GetExitAnimationMontage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UKillInteractionDefinition_OnKillAudioActivation = FName(TEXT("OnKillAudioActivation"));
	void UKillInteractionDefinition::OnKillAudioActivation(bool active, ADBDPlayer* interactingPlayer)
	{
		KillInteractionDefinition_eventOnKillAudioActivation_Parms Parms;
		Parms.active=active ? true : false;
		Parms.interactingPlayer=interactingPlayer;
		ProcessEvent(FindFunctionChecked(NAME_UKillInteractionDefinition_OnKillAudioActivation),&Parms);
	}
	static FName NAME_UKillInteractionDefinition_OnMoriCancelled = FName(TEXT("OnMoriCancelled"));
	void UKillInteractionDefinition::OnMoriCancelled()
	{
		ProcessEvent(FindFunctionChecked(NAME_UKillInteractionDefinition_OnMoriCancelled),NULL);
	}
	void UKillInteractionDefinition::StaticRegisterNativesUKillInteractionDefinition()
	{
		UClass* Class = UKillInteractionDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChargeCompleted", &UKillInteractionDefinition::execGetChargeCompleted },
			{ "GetExitAnimationMontage", &UKillInteractionDefinition::execGetExitAnimationMontage },
			{ "GetOwningSurvivor", &UKillInteractionDefinition::execGetOwningSurvivor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics
	{
		struct KillInteractionDefinition_eventGetChargeCompleted_Parms
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
	void Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KillInteractionDefinition_eventGetChargeCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillInteractionDefinition_eventGetChargeCompleted_Parms), &Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillInteractionDefinition, nullptr, "GetChargeCompleted", nullptr, nullptr, sizeof(KillInteractionDefinition_eventGetChargeCompleted_Parms), Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillInteractionDefinition_eventGetExitAnimationMontage_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillInteractionDefinition, nullptr, "GetExitAnimationMontage", nullptr, nullptr, sizeof(KillInteractionDefinition_eventGetExitAnimationMontage_Parms), Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics
	{
		struct KillInteractionDefinition_eventGetOwningSurvivor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillInteractionDefinition_eventGetOwningSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillInteractionDefinition, nullptr, "GetOwningSurvivor", nullptr, nullptr, sizeof(KillInteractionDefinition_eventGetOwningSurvivor_Parms), Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillInteractionDefinition_eventOnKillAudioActivation_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_active_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_active_SetBit(void* Obj)
	{
		((KillInteractionDefinition_eventOnKillAudioActivation_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillInteractionDefinition_eventOnKillAudioActivation_Parms), &Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_active_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_active_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_active_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_interactingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillInteractionDefinition, nullptr, "OnKillAudioActivation", nullptr, nullptr, sizeof(KillInteractionDefinition_eventOnKillAudioActivation_Parms), Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillInteractionDefinition_OnMoriCancelled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillInteractionDefinition_OnMoriCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillInteractionDefinition_OnMoriCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillInteractionDefinition, nullptr, "OnMoriCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillInteractionDefinition_OnMoriCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillInteractionDefinition_OnMoriCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillInteractionDefinition_OnMoriCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillInteractionDefinition_OnMoriCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillInteractionDefinition_NoRegister()
	{
		return UKillInteractionDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UKillInteractionDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exitMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__exitMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__manuallyManageMeshHiding_MetaData[];
#endif
		static void NewProp__manuallyManageMeshHiding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__manuallyManageMeshHiding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isKillShownInThirdPerson_MetaData[];
#endif
		static void NewProp__isKillShownInThirdPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isKillShownInThirdPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeCompleted_MetaData[];
#endif
		static void NewProp__chargeCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__chargeCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nonOverrideableTargetInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__nonOverrideableTargetInteractions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__nonOverrideableTargetInteractions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disableFOVSystemDuringInteraction_MetaData[];
#endif
		static void NewProp__disableFOVSystemDuringInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__disableFOVSystemDuringInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillInteractionDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillInteractionDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillInteractionDefinition_GetChargeCompleted, "GetChargeCompleted" }, // 3283659670
		{ &Z_Construct_UFunction_UKillInteractionDefinition_GetExitAnimationMontage, "GetExitAnimationMontage" }, // 428042064
		{ &Z_Construct_UFunction_UKillInteractionDefinition_GetOwningSurvivor, "GetOwningSurvivor" }, // 691969449
		{ &Z_Construct_UFunction_UKillInteractionDefinition_OnKillAudioActivation, "OnKillAudioActivation" }, // 2992793910
		{ &Z_Construct_UFunction_UKillInteractionDefinition_OnMoriCancelled, "OnMoriCancelled" }, // 3490650741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillInteractionDefinition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "KillInteractionDefinition.h" },
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__exitMontage_MetaData[] = {
		{ "Category", "KillInteractionDefinition" },
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__exitMontage = { "_exitMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillInteractionDefinition, _exitMontage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__exitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__exitMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__manuallyManageMeshHiding_MetaData[] = {
		{ "Category", "KillInteractionDefinition" },
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__manuallyManageMeshHiding_SetBit(void* Obj)
	{
		((UKillInteractionDefinition*)Obj)->_manuallyManageMeshHiding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__manuallyManageMeshHiding = { "_manuallyManageMeshHiding", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillInteractionDefinition), &Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__manuallyManageMeshHiding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__manuallyManageMeshHiding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__manuallyManageMeshHiding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__isKillShownInThirdPerson_MetaData[] = {
		{ "Category", "KillInteractionDefinition" },
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__isKillShownInThirdPerson_SetBit(void* Obj)
	{
		((UKillInteractionDefinition*)Obj)->_isKillShownInThirdPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__isKillShownInThirdPerson = { "_isKillShownInThirdPerson", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillInteractionDefinition), &Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__isKillShownInThirdPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__isKillShownInThirdPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__isKillShownInThirdPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__chargeCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KillInteractionDefinition" },
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__chargeCompleted_SetBit(void* Obj)
	{
		((UKillInteractionDefinition*)Obj)->_chargeCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__chargeCompleted = { "_chargeCompleted", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillInteractionDefinition), &Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__chargeCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__chargeCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__chargeCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__nonOverrideableTargetInteractions_MetaData[] = {
		{ "Category", "KillInteractionDefinition" },
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__nonOverrideableTargetInteractions = { "_nonOverrideableTargetInteractions", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillInteractionDefinition, _nonOverrideableTargetInteractions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__nonOverrideableTargetInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__nonOverrideableTargetInteractions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__nonOverrideableTargetInteractions_Inner = { "_nonOverrideableTargetInteractions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__disableFOVSystemDuringInteraction_MetaData[] = {
		{ "Category", "KillInteractionDefinition" },
		{ "ModuleRelativePath", "Public/KillInteractionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__disableFOVSystemDuringInteraction_SetBit(void* Obj)
	{
		((UKillInteractionDefinition*)Obj)->_disableFOVSystemDuringInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__disableFOVSystemDuringInteraction = { "_disableFOVSystemDuringInteraction", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillInteractionDefinition), &Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__disableFOVSystemDuringInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__disableFOVSystemDuringInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__disableFOVSystemDuringInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillInteractionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__exitMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__manuallyManageMeshHiding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__isKillShownInThirdPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__chargeCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__nonOverrideableTargetInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__nonOverrideableTargetInteractions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillInteractionDefinition_Statics::NewProp__disableFOVSystemDuringInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillInteractionDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillInteractionDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillInteractionDefinition_Statics::ClassParams = {
		&UKillInteractionDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKillInteractionDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillInteractionDefinition_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillInteractionDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillInteractionDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillInteractionDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillInteractionDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillInteractionDefinition, 2985294689);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillInteractionDefinition>()
	{
		return UKillInteractionDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillInteractionDefinition(Z_Construct_UClass_UKillInteractionDefinition, &UKillInteractionDefinition::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillInteractionDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillInteractionDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
