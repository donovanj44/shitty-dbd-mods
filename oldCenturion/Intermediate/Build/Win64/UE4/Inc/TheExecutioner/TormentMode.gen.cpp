// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentMode() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentMode_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentMode();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_AMobileTormentTrailRenderer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentModeCooldownInteraction_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailDetectorComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAgonyComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailSpawnerComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerToggleComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATormentMode::execIsInTormentMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTormentMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentMode::execOnTormentModeChargeEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTormentModeChargeEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentMode::execServer_RequestMoreActorInAttackPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RequestMoreActorInAttackPool_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_RequestMoreActorInAttackPool_Validate"));
			return;
		}
		P_THIS->Server_RequestMoreActorInAttackPool_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATormentMode_OnTormentModeStart_Cosmetic = FName(TEXT("OnTormentModeStart_Cosmetic"));
	void ATormentMode::OnTormentModeStart_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATormentMode_OnTormentModeStart_Cosmetic),NULL);
	}
	static FName NAME_ATormentMode_OnTormentModeStop_Cosmetic = FName(TEXT("OnTormentModeStop_Cosmetic"));
	void ATormentMode::OnTormentModeStop_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATormentMode_OnTormentModeStop_Cosmetic),NULL);
	}
	static FName NAME_ATormentMode_Server_RequestMoreActorInAttackPool = FName(TEXT("Server_RequestMoreActorInAttackPool"));
	void ATormentMode::Server_RequestMoreActorInAttackPool()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATormentMode_Server_RequestMoreActorInAttackPool),NULL);
	}
	void ATormentMode::StaticRegisterNativesATormentMode()
	{
		UClass* Class = ATormentMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInTormentMode", &ATormentMode::execIsInTormentMode },
			{ "OnTormentModeChargeEmpty", &ATormentMode::execOnTormentModeChargeEmpty },
			{ "Server_RequestMoreActorInAttackPool", &ATormentMode::execServer_RequestMoreActorInAttackPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics
	{
		struct TormentMode_eventIsInTormentMode_Parms
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
	void Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TormentMode_eventIsInTormentMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TormentMode_eventIsInTormentMode_Parms), &Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentMode, nullptr, "IsInTormentMode", nullptr, nullptr, sizeof(TormentMode_eventIsInTormentMode_Parms), Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentMode_IsInTormentMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentMode_IsInTormentMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentMode_OnTormentModeChargeEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentMode_OnTormentModeChargeEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentMode_OnTormentModeChargeEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentMode, nullptr, "OnTormentModeChargeEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentMode_OnTormentModeChargeEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentMode_OnTormentModeChargeEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentMode_OnTormentModeChargeEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentMode_OnTormentModeChargeEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentMode_OnTormentModeStart_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentMode_OnTormentModeStart_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentMode_OnTormentModeStart_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentMode, nullptr, "OnTormentModeStart_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentMode_OnTormentModeStart_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentMode_OnTormentModeStart_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentMode_OnTormentModeStart_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentMode_OnTormentModeStart_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentMode_OnTormentModeStop_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentMode_OnTormentModeStop_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentMode_OnTormentModeStop_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentMode, nullptr, "OnTormentModeStop_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentMode_OnTormentModeStop_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentMode_OnTormentModeStop_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentMode_OnTormentModeStop_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentMode_OnTormentModeStop_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentMode_Server_RequestMoreActorInAttackPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentMode_Server_RequestMoreActorInAttackPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentMode_Server_RequestMoreActorInAttackPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentMode, nullptr, "Server_RequestMoreActorInAttackPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentMode_Server_RequestMoreActorInAttackPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentMode_Server_RequestMoreActorInAttackPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentMode_Server_RequestMoreActorInAttackPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentMode_Server_RequestMoreActorInAttackPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATormentMode_NoRegister()
	{
		return ATormentMode::StaticClass();
	}
	struct Z_Construct_UClass_ATormentMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mobileTormentTrailRendererClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__mobileTormentTrailRendererClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeChargeSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentModeChargeSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeCooldownInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentModeCooldownInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorTormentTrailDetectorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__survivorTormentTrailDetectorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerTormentTrailDetectorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__killerTormentTrailDetectorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__agonyComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__agonyComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeForcedPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeForcedPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normalWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__normalWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeNotMovingYawAdjustTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeNotMovingYawAdjustTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeNotMovingYawScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeNotMovingYawScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeYawInputLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeYawInputLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeGamePadYawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeGamePadYawScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeYawAdjustTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeYawAdjustTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeMouseYawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeMouseYawScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeMinimumPercentToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeMinimumPercentToActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeAttackConsumePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeAttackConsumePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModePauseChargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModePauseChargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeDischargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeDischargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeChargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeChargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activateTormentModeSecondsToCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activateTormentModeSecondsToCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictedTormentTrailPointPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__restrictedTormentTrailPointPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailPointPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentTrailPointPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictedTormentTrailControllerPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__restrictedTormentTrailControllerPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentAttackTrailControllerPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentAttackTrailControllerPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailControllerPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentTrailControllerPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictedTormentTrailPointCollectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__restrictedTormentTrailPointCollectionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailPointCollectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentTrailPointCollectionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailSpawnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentTrailSpawnerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerToggleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__powerToggleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeChargePresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentModeChargePresentation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentModeCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activateTormentModeCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activateTormentModeCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATormentMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATormentMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATormentMode_IsInTormentMode, "IsInTormentMode" }, // 3908288518
		{ &Z_Construct_UFunction_ATormentMode_OnTormentModeChargeEmpty, "OnTormentModeChargeEmpty" }, // 1312890586
		{ &Z_Construct_UFunction_ATormentMode_OnTormentModeStart_Cosmetic, "OnTormentModeStart_Cosmetic" }, // 3189877382
		{ &Z_Construct_UFunction_ATormentMode_OnTormentModeStop_Cosmetic, "OnTormentModeStop_Cosmetic" }, // 3111979467
		{ &Z_Construct_UFunction_ATormentMode_Server_RequestMoreActorInAttackPool, "Server_RequestMoreActorInAttackPool" }, // 1789896026
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TormentMode.h" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__mobileTormentTrailRendererClass_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__mobileTormentTrailRendererClass = { "_mobileTormentTrailRendererClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _mobileTormentTrailRendererClass), Z_Construct_UClass_AMobileTormentTrailRenderer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__mobileTormentTrailRendererClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__mobileTormentTrailRendererClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeSpeedCurve_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeSpeedCurve = { "_tormentModeChargeSpeedCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeChargeSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCooldownInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCooldownInteraction = { "_tormentModeCooldownInteraction", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeCooldownInteraction), Z_Construct_UClass_UTormentModeCooldownInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCooldownInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCooldownInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__survivorTormentTrailDetectorClass_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__survivorTormentTrailDetectorClass = { "_survivorTormentTrailDetectorClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _survivorTormentTrailDetectorClass), Z_Construct_UClass_UTormentTrailDetectorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__survivorTormentTrailDetectorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__survivorTormentTrailDetectorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__killerTormentTrailDetectorClass_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__killerTormentTrailDetectorClass = { "_killerTormentTrailDetectorClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _killerTormentTrailDetectorClass), Z_Construct_UClass_UTormentTrailDetectorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__killerTormentTrailDetectorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__killerTormentTrailDetectorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__agonyComponentClass_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__agonyComponentClass = { "_agonyComponentClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _agonyComponentClass), Z_Construct_UClass_UAgonyComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__agonyComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__agonyComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeForcedPitch_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeForcedPitch = { "_tormentModeForcedPitch", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeForcedPitch), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeForcedPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeForcedPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__normalWalkSpeed_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__normalWalkSpeed = { "_normalWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _normalWalkSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__normalWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__normalWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeWalkSpeed_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeWalkSpeed = { "_tormentModeWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeWalkSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawAdjustTime_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawAdjustTime = { "_tormentModeNotMovingYawAdjustTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeNotMovingYawAdjustTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawAdjustTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawAdjustTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawScaleMultiplier_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawScaleMultiplier = { "_tormentModeNotMovingYawScaleMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeNotMovingYawScaleMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawInputLimit_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawInputLimit = { "_tormentModeYawInputLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeYawInputLimit), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawInputLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawInputLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeGamePadYawScale_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeGamePadYawScale = { "_tormentModeGamePadYawScale", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeGamePadYawScale), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeGamePadYawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeGamePadYawScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawAdjustTime_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawAdjustTime = { "_tormentModeYawAdjustTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeYawAdjustTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawAdjustTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawAdjustTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMouseYawScale_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMouseYawScale = { "_tormentModeMouseYawScale", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeMouseYawScale), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMouseYawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMouseYawScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMinimumPercentToActivate_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMinimumPercentToActivate = { "_tormentModeMinimumPercentToActivate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeMinimumPercentToActivate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMinimumPercentToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMinimumPercentToActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeAttackConsumePower_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeAttackConsumePower = { "_tormentModeAttackConsumePower", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeAttackConsumePower), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeAttackConsumePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeAttackConsumePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModePauseChargeRate_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModePauseChargeRate = { "_tormentModePauseChargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModePauseChargeRate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModePauseChargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModePauseChargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeDischargeRate_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeDischargeRate = { "_tormentModeDischargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeDischargeRate), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeDischargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeDischargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeRate_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeRate = { "_tormentModeChargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeChargeRate), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMaxCharge_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMaxCharge = { "_tormentModeMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeSecondsToCharge_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeSecondsToCharge = { "_activateTormentModeSecondsToCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _activateTormentModeSecondsToCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeSecondsToCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeSecondsToCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointPool_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointPool = { "_restrictedTormentTrailPointPool", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _restrictedTormentTrailPointPool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointPool_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointPool = { "_tormentTrailPointPool", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentTrailPointPool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailControllerPool_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailControllerPool = { "_restrictedTormentTrailControllerPool", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _restrictedTormentTrailControllerPool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailControllerPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailControllerPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentAttackTrailControllerPool_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentAttackTrailControllerPool = { "_tormentAttackTrailControllerPool", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentAttackTrailControllerPool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentAttackTrailControllerPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentAttackTrailControllerPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailControllerPool_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailControllerPool = { "_tormentTrailControllerPool", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentTrailControllerPool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailControllerPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailControllerPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointCollectionComponent_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointCollectionComponent = { "_restrictedTormentTrailPointCollectionComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _restrictedTormentTrailPointCollectionComponent), Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointCollectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointCollectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointCollectionComponent_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointCollectionComponent = { "_tormentTrailPointCollectionComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentTrailPointCollectionComponent), Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointCollectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointCollectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailSpawnerComponent_MetaData[] = {
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailSpawnerComponent = { "_tormentTrailSpawnerComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentTrailSpawnerComponent), Z_Construct_UClass_UTormentTrailSpawnerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailSpawnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailSpawnerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__powerToggleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__powerToggleComponent = { "_powerToggleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _powerToggleComponent), Z_Construct_UClass_UPowerToggleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__powerToggleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__powerToggleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargePresentation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargePresentation = { "_tormentModeChargePresentation", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeChargePresentation), Z_Construct_UClass_UPowerChargePresentationItemProgressComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargePresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargePresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCharge_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCharge = { "_tormentModeCharge", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _tormentModeCharge), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TormentMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeCharge = { "_activateTormentModeCharge", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentMode, _activateTormentModeCharge), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATormentMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__mobileTormentTrailRendererClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCooldownInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__survivorTormentTrailDetectorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__killerTormentTrailDetectorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__agonyComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeForcedPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__normalWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawAdjustTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeNotMovingYawScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawInputLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeGamePadYawScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeYawAdjustTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMouseYawScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMinimumPercentToActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeAttackConsumePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModePauseChargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeDischargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeSecondsToCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailControllerPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentAttackTrailControllerPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailControllerPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__restrictedTormentTrailPointCollectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailPointCollectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentTrailSpawnerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__powerToggleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeChargePresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__tormentModeCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentMode_Statics::NewProp__activateTormentModeCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATormentMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATormentMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATormentMode_Statics::ClassParams = {
		&ATormentMode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATormentMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATormentMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATormentMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATormentMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATormentMode, 629269029);
	template<> THEEXECUTIONER_API UClass* StaticClass<ATormentMode>()
	{
		return ATormentMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATormentMode(Z_Construct_UClass_ATormentMode, &ATormentMode::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("ATormentMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATormentMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
