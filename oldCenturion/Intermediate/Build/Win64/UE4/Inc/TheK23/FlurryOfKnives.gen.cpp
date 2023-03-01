// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/FlurryOfKnives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlurryOfKnives() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UFlurryOfKnives_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UFlurryOfKnives();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFlurryOfKnives::execMulticast_StartThrowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartThrowing_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlurryOfKnives::execOnRep_NumOfStacksReduction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NumOfStacksReduction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlurryOfKnives::execServer_DecreaseConsecutiveKnivesStacks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_DecreaseConsecutiveKnivesStacks_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_DecreaseConsecutiveKnivesStacks_Validate"));
			return;
		}
		P_THIS->Server_DecreaseConsecutiveKnivesStacks_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlurryOfKnives::execServer_StartThrowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StartThrowing_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_StartThrowing_Validate"));
			return;
		}
		P_THIS->Server_StartThrowing_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UFlurryOfKnives_Multicast_StartThrowing = FName(TEXT("Multicast_StartThrowing"));
	void UFlurryOfKnives::Multicast_StartThrowing()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlurryOfKnives_Multicast_StartThrowing),NULL);
	}
	static FName NAME_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks = FName(TEXT("Server_DecreaseConsecutiveKnivesStacks"));
	void UFlurryOfKnives::Server_DecreaseConsecutiveKnivesStacks()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks),NULL);
	}
	static FName NAME_UFlurryOfKnives_Server_StartThrowing = FName(TEXT("Server_StartThrowing"));
	void UFlurryOfKnives::Server_StartThrowing()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlurryOfKnives_Server_StartThrowing),NULL);
	}
	void UFlurryOfKnives::StaticRegisterNativesUFlurryOfKnives()
	{
		UClass* Class = UFlurryOfKnives::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_StartThrowing", &UFlurryOfKnives::execMulticast_StartThrowing },
			{ "OnRep_NumOfStacksReduction", &UFlurryOfKnives::execOnRep_NumOfStacksReduction },
			{ "Server_DecreaseConsecutiveKnivesStacks", &UFlurryOfKnives::execServer_DecreaseConsecutiveKnivesStacks },
			{ "Server_StartThrowing", &UFlurryOfKnives::execServer_StartThrowing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlurryOfKnives_Multicast_StartThrowing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlurryOfKnives_Multicast_StartThrowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlurryOfKnives_Multicast_StartThrowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlurryOfKnives, nullptr, "Multicast_StartThrowing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlurryOfKnives_Multicast_StartThrowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlurryOfKnives_Multicast_StartThrowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlurryOfKnives_Multicast_StartThrowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlurryOfKnives_Multicast_StartThrowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlurryOfKnives_OnRep_NumOfStacksReduction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlurryOfKnives_OnRep_NumOfStacksReduction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlurryOfKnives_OnRep_NumOfStacksReduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlurryOfKnives, nullptr, "OnRep_NumOfStacksReduction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlurryOfKnives_OnRep_NumOfStacksReduction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlurryOfKnives_OnRep_NumOfStacksReduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlurryOfKnives_OnRep_NumOfStacksReduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlurryOfKnives_OnRep_NumOfStacksReduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlurryOfKnives, nullptr, "Server_DecreaseConsecutiveKnivesStacks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlurryOfKnives_Server_StartThrowing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlurryOfKnives_Server_StartThrowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlurryOfKnives_Server_StartThrowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlurryOfKnives, nullptr, "Server_StartThrowing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlurryOfKnives_Server_StartThrowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlurryOfKnives_Server_StartThrowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlurryOfKnives_Server_StartThrowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlurryOfKnives_Server_StartThrowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlurryOfKnives_NoRegister()
	{
		return UFlurryOfKnives::StaticClass();
	}
	struct Z_Construct_UClass_UFlurryOfKnives_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwingGamepadYawCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__throwingGamepadYawCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwingGamepadPitchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__throwingGamepadPitchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimingGamepadYawCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimingGamepadYawCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimingGamepadPitchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimingGamepadPitchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwingGamepadRotationPitchScaleAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__throwingGamepadRotationPitchScaleAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwingGamepadRotationYawScaleAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__throwingGamepadRotationYawScaleAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimingStanceGamepadRotationPitchScaleAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimingStanceGamepadRotationPitchScaleAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimingStanceGamepadRotationYawScaleAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimingStanceGamepadRotationYawScaleAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwingRotationPitchScaleAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__throwingRotationPitchScaleAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwingRotationYawScaleAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__throwingRotationYawScaleAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimingStanceRotationPitchScaleAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimingStanceRotationPitchScaleAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimingStanceRotationYawScaleAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimingStanceRotationYawScaleAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotationSpeedAdjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rotationSpeedAdjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumRecoilAngleVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumRecoilAngleVariation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recoilAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__recoilAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recoilDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__recoilDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recoilIntensityByKnivesThrown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__recoilIntensityByKnivesThrown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeBaseMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__superModeBaseMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementSpeedByKnivesThrown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__movementSpeedByKnivesThrown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxConsecutiveKnivesStacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxConsecutiveKnivesStacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__consecutiveKnivesStacksDecayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__consecutiveKnivesStacksDecayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__coneOfFireAngleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__coneOfFireAngleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__convergencePointDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__convergencePointDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__knivesLaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__knivesLaunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeThrowRateModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__superModeThrowRateModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwRateModifierByKnivesThrown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__throwRateModifierByKnivesThrown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseTimeBetweenThrows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseTimeBetweenThrows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chargeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flurryOfKnivesExitDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__flurryOfKnivesExitDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flurryOfKnivesEnterDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__flurryOfKnivesEnterDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selfSlowEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selfSlowEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSuperModeThrow_MetaData[];
#endif
		static void NewProp__isSuperModeThrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSuperModeThrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicatedNumOfStacksReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__replicatedNumOfStacksReduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlurryOfKnives_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlurryOfKnives_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlurryOfKnives_Multicast_StartThrowing, "Multicast_StartThrowing" }, // 977905334
		{ &Z_Construct_UFunction_UFlurryOfKnives_OnRep_NumOfStacksReduction, "OnRep_NumOfStacksReduction" }, // 3610335927
		{ &Z_Construct_UFunction_UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks, "Server_DecreaseConsecutiveKnivesStacks" }, // 40138752
		{ &Z_Construct_UFunction_UFlurryOfKnives_Server_StartThrowing, "Server_StartThrowing" }, // 1242404263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FlurryOfKnives.h" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadYawCurve_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadYawCurve = { "_throwingGamepadYawCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _throwingGamepadYawCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadYawCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadYawCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadPitchCurve_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadPitchCurve = { "_throwingGamepadPitchCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _throwingGamepadPitchCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadPitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadPitchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadYawCurve_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadYawCurve = { "_aimingGamepadYawCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _aimingGamepadYawCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadYawCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadYawCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadPitchCurve_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadPitchCurve = { "_aimingGamepadPitchCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _aimingGamepadPitchCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadPitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadPitchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationPitchScaleAdjustment_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationPitchScaleAdjustment = { "_throwingGamepadRotationPitchScaleAdjustment", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _throwingGamepadRotationPitchScaleAdjustment), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationPitchScaleAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationPitchScaleAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationYawScaleAdjustment_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationYawScaleAdjustment = { "_throwingGamepadRotationYawScaleAdjustment", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _throwingGamepadRotationYawScaleAdjustment), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationYawScaleAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationYawScaleAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationPitchScaleAdjustment_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationPitchScaleAdjustment = { "_aimingStanceGamepadRotationPitchScaleAdjustment", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _aimingStanceGamepadRotationPitchScaleAdjustment), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationPitchScaleAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationPitchScaleAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationYawScaleAdjustment_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationYawScaleAdjustment = { "_aimingStanceGamepadRotationYawScaleAdjustment", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _aimingStanceGamepadRotationYawScaleAdjustment), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationYawScaleAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationYawScaleAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationPitchScaleAdjustment_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationPitchScaleAdjustment = { "_throwingRotationPitchScaleAdjustment", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _throwingRotationPitchScaleAdjustment), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationPitchScaleAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationPitchScaleAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationYawScaleAdjustment_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationYawScaleAdjustment = { "_throwingRotationYawScaleAdjustment", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _throwingRotationYawScaleAdjustment), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationYawScaleAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationYawScaleAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationPitchScaleAdjustment_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationPitchScaleAdjustment = { "_aimingStanceRotationPitchScaleAdjustment", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _aimingStanceRotationPitchScaleAdjustment), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationPitchScaleAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationPitchScaleAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationYawScaleAdjustment_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationYawScaleAdjustment = { "_aimingStanceRotationYawScaleAdjustment", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _aimingStanceRotationYawScaleAdjustment), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationYawScaleAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationYawScaleAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__rotationSpeedAdjustmentTime_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__rotationSpeedAdjustmentTime = { "_rotationSpeedAdjustmentTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _rotationSpeedAdjustmentTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__rotationSpeedAdjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__rotationSpeedAdjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maximumRecoilAngleVariation_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maximumRecoilAngleVariation = { "_maximumRecoilAngleVariation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _maximumRecoilAngleVariation), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maximumRecoilAngleVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maximumRecoilAngleVariation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilAngle_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilAngle = { "_recoilAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _recoilAngle), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilDuration_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilDuration = { "_recoilDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _recoilDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilIntensityByKnivesThrown_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilIntensityByKnivesThrown = { "_recoilIntensityByKnivesThrown", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _recoilIntensityByKnivesThrown), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilIntensityByKnivesThrown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilIntensityByKnivesThrown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseWalkSpeed_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseWalkSpeed = { "_baseWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _baseWalkSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeBaseMovementSpeed_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeBaseMovementSpeed = { "_superModeBaseMovementSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _superModeBaseMovementSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeBaseMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeBaseMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__movementSpeedByKnivesThrown_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__movementSpeedByKnivesThrown = { "_movementSpeedByKnivesThrown", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _movementSpeedByKnivesThrown), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__movementSpeedByKnivesThrown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__movementSpeedByKnivesThrown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maxConsecutiveKnivesStacks_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maxConsecutiveKnivesStacks = { "_maxConsecutiveKnivesStacks", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _maxConsecutiveKnivesStacks), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maxConsecutiveKnivesStacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maxConsecutiveKnivesStacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__consecutiveKnivesStacksDecayTime_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__consecutiveKnivesStacksDecayTime = { "_consecutiveKnivesStacksDecayTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _consecutiveKnivesStacksDecayTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__consecutiveKnivesStacksDecayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__consecutiveKnivesStacksDecayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__coneOfFireAngleCurve_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__coneOfFireAngleCurve = { "_coneOfFireAngleCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _coneOfFireAngleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__coneOfFireAngleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__coneOfFireAngleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__convergencePointDistance_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__convergencePointDistance = { "_convergencePointDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _convergencePointDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__convergencePointDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__convergencePointDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__knivesLaunchSpeed_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__knivesLaunchSpeed = { "_knivesLaunchSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _knivesLaunchSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__knivesLaunchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__knivesLaunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeThrowRateModifier_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeThrowRateModifier = { "_superModeThrowRateModifier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _superModeThrowRateModifier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeThrowRateModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeThrowRateModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwRateModifierByKnivesThrown_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwRateModifierByKnivesThrown = { "_throwRateModifierByKnivesThrown", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _throwRateModifierByKnivesThrown), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwRateModifierByKnivesThrown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwRateModifierByKnivesThrown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseTimeBetweenThrows_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseTimeBetweenThrows = { "_baseTimeBetweenThrows", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _baseTimeBetweenThrows), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseTimeBetweenThrows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseTimeBetweenThrows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__chargeTime_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__chargeTime = { "_chargeTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _chargeTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__chargeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__chargeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesExitDuration_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesExitDuration = { "_flurryOfKnivesExitDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _flurryOfKnivesExitDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesExitDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesExitDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesEnterDuration_MetaData[] = {
		{ "Category", "FlurryOfKnives" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesEnterDuration = { "_flurryOfKnivesEnterDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _flurryOfKnivesEnterDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesEnterDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesEnterDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__selfSlowEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__selfSlowEffect = { "_selfSlowEffect", nullptr, (EPropertyFlags)0x0040000000080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _selfSlowEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__selfSlowEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__selfSlowEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__isSuperModeThrow_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	void Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__isSuperModeThrow_SetBit(void* Obj)
	{
		((UFlurryOfKnives*)Obj)->_isSuperModeThrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__isSuperModeThrow = { "_isSuperModeThrow", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlurryOfKnives), &Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__isSuperModeThrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__isSuperModeThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__isSuperModeThrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__replicatedNumOfStacksReduction_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlurryOfKnives.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__replicatedNumOfStacksReduction = { "_replicatedNumOfStacksReduction", "OnRep_NumOfStacksReduction", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlurryOfKnives, _replicatedNumOfStacksReduction), METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__replicatedNumOfStacksReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__replicatedNumOfStacksReduction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlurryOfKnives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadYawCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadPitchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadYawCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingGamepadPitchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationPitchScaleAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingGamepadRotationYawScaleAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationPitchScaleAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceGamepadRotationYawScaleAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationPitchScaleAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwingRotationYawScaleAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationPitchScaleAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__aimingStanceRotationYawScaleAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__rotationSpeedAdjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maximumRecoilAngleVariation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__recoilIntensityByKnivesThrown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeBaseMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__movementSpeedByKnivesThrown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__maxConsecutiveKnivesStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__consecutiveKnivesStacksDecayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__coneOfFireAngleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__convergencePointDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__knivesLaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__superModeThrowRateModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__throwRateModifierByKnivesThrown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__baseTimeBetweenThrows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__chargeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesExitDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__flurryOfKnivesEnterDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__selfSlowEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__isSuperModeThrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurryOfKnives_Statics::NewProp__replicatedNumOfStacksReduction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlurryOfKnives_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlurryOfKnives>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlurryOfKnives_Statics::ClassParams = {
		&UFlurryOfKnives::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlurryOfKnives_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlurryOfKnives_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurryOfKnives_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlurryOfKnives()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlurryOfKnives_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlurryOfKnives, 2184002422);
	template<> THEK23_API UClass* StaticClass<UFlurryOfKnives>()
	{
		return UFlurryOfKnives::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlurryOfKnives(Z_Construct_UClass_UFlurryOfKnives, &UFlurryOfKnives::StaticClass, TEXT("/Script/TheK23"), TEXT("UFlurryOfKnives"), false, nullptr, nullptr, nullptr);

	void UFlurryOfKnives::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__replicatedNumOfStacksReduction(TEXT("_replicatedNumOfStacksReduction"));
		static const FName Name__isSuperModeThrow(TEXT("_isSuperModeThrow"));
		static const FName Name__selfSlowEffect(TEXT("_selfSlowEffect"));

		const bool bIsValid = true
			&& Name__replicatedNumOfStacksReduction == ClassReps[(int32)ENetFields_Private::_replicatedNumOfStacksReduction].Property->GetFName()
			&& Name__isSuperModeThrow == ClassReps[(int32)ENetFields_Private::_isSuperModeThrow].Property->GetFName()
			&& Name__selfSlowEffect == ClassReps[(int32)ENetFields_Private::_selfSlowEffect].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFlurryOfKnives"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlurryOfKnives);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
