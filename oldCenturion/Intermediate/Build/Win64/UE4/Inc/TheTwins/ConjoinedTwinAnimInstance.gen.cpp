// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/ConjoinedTwinAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConjoinedTwinAnimInstance() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UConjoinedTwinAnimInstance_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UConjoinedTwinAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
	THETWINS_API UClass* Z_Construct_UClass_UTwinLockerBlockerComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinAttachmentComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackerComponent_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation();
// End Cross Module References
	DEFINE_FUNCTION(UConjoinedTwinAnimInstance::execGetOwningConjoinedTwin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AConjoinedTwin**)Z_Param__Result=P_THIS->GetOwningConjoinedTwin();
		P_NATIVE_END;
	}
	void UConjoinedTwinAnimInstance::StaticRegisterNativesUConjoinedTwinAnimInstance()
	{
		UClass* Class = UConjoinedTwinAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningConjoinedTwin", &UConjoinedTwinAnimInstance::execGetOwningConjoinedTwin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics
	{
		struct ConjoinedTwinAnimInstance_eventGetOwningConjoinedTwin_Parms
		{
			AConjoinedTwin* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConjoinedTwinAnimInstance_eventGetOwningConjoinedTwin_Parms, ReturnValue), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConjoinedTwinAnimInstance, nullptr, "GetOwningConjoinedTwin", nullptr, nullptr, sizeof(ConjoinedTwinAnimInstance_eventGetOwningConjoinedTwin_Parms), Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConjoinedTwinAnimInstance_NoRegister()
	{
		return UConjoinedTwinAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__attackState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__attackState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttachedToLocker_MetaData[];
#endif
		static void NewProp__isAttachedToLocker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttachedToLocker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingAutoPossessedAfterRelease_MetaData[];
#endif
		static void NewProp__isBeingAutoPossessedAfterRelease_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingAutoPossessedAfterRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDormant_MetaData[];
#endif
		static void NewProp__isDormant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDormant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isWakingUpFromPossess_MetaData[];
#endif
		static void NewProp__isWakingUpFromPossess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isWakingUpFromPossess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPossessing_MetaData[];
#endif
		static void NewProp__isPossessing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPossessing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isChargingTwinJump_MetaData[];
#endif
		static void NewProp__isChargingTwinJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isChargingTwinJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttachedToFemaleSurvivor_MetaData[];
#endif
		static void NewProp__isAttachedToFemaleSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttachedToFemaleSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttachedToSurvivor_MetaData[];
#endif
		static void NewProp__isAttachedToSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttachedToSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttachedToSister_MetaData[];
#endif
		static void NewProp__isAttachedToSister_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttachedToSister;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSpectator_MetaData[];
#endif
		static void NewProp__isSpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinLockerBlockerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__twinLockerBlockerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinAttachmentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__twinAttachmentComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attackerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttacking_MetaData[];
#endif
		static void NewProp__isAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__idleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIdle_MetaData[];
#endif
		static void NewProp__isIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInAir_MetaData[];
#endif
		static void NewProp__isInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__interactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__interactionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lateralVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lateralVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forwardVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__forwardVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonView_MetaData[];
#endif
		static void NewProp__firstPersonView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__firstPersonView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningConjoinedTwin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningConjoinedTwin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConjoinedTwinAnimInstance_GetOwningConjoinedTwin, "GetOwningConjoinedTwin" }, // 3537783103
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ConjoinedTwinAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackState_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackState = { "_attackState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _attackState), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToLocker_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToLocker_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isAttachedToLocker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToLocker = { "_isAttachedToLocker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToLocker_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToLocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToLocker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isBeingAutoPossessedAfterRelease_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isBeingAutoPossessedAfterRelease_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isBeingAutoPossessedAfterRelease = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isBeingAutoPossessedAfterRelease = { "_isBeingAutoPossessedAfterRelease", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isBeingAutoPossessedAfterRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isBeingAutoPossessedAfterRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isBeingAutoPossessedAfterRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isDormant_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isDormant_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isDormant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isDormant = { "_isDormant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isDormant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isDormant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isDormant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isWakingUpFromPossess_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isWakingUpFromPossess_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isWakingUpFromPossess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isWakingUpFromPossess = { "_isWakingUpFromPossess", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isWakingUpFromPossess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isWakingUpFromPossess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isWakingUpFromPossess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isPossessing_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isPossessing_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isPossessing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isPossessing = { "_isPossessing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isPossessing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isPossessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isPossessing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isChargingTwinJump_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isChargingTwinJump_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isChargingTwinJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isChargingTwinJump = { "_isChargingTwinJump", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isChargingTwinJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isChargingTwinJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isChargingTwinJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToFemaleSurvivor_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToFemaleSurvivor_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isAttachedToFemaleSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToFemaleSurvivor = { "_isAttachedToFemaleSurvivor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToFemaleSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToFemaleSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToFemaleSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSurvivor_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSurvivor_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isAttachedToSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSurvivor = { "_isAttachedToSurvivor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSister_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSister_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isAttachedToSister = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSister = { "_isAttachedToSister", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSister_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSister_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSister_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animSpeed_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animSpeed = { "_animSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _animSpeed), METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animDirection_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animDirection = { "_animDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _animDirection), METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isSpectator_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isSpectator_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isSpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isSpectator = { "_isSpectator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isSpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isSpectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isSpectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animPitch_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animPitch = { "_animPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _animPitch), METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animYaw_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animYaw = { "_animYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _animYaw), METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinLockerBlockerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinLockerBlockerComponent = { "_twinLockerBlockerComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _twinLockerBlockerComponent), Z_Construct_UClass_UTwinLockerBlockerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinLockerBlockerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinLockerBlockerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinAttachmentComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinAttachmentComponent = { "_twinAttachmentComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _twinAttachmentComponent), Z_Construct_UClass_UTwinAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinAttachmentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinAttachmentComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackerComponent = { "_attackerComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _attackerComponent), Z_Construct_UClass_UDBDAttackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttacking_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttacking_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttacking = { "_isAttacking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__idleTime_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__idleTime = { "_idleTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _idleTime), METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__idleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__idleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isIdle_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isIdle_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isIdle = { "_isIdle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isInAir_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isInAir_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_isInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isInAir = { "_isInAir", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__interactionType_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__interactionType = { "_interactionType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _interactionType), Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__interactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__interactionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__interactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__lateralVelocity_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__lateralVelocity = { "_lateralVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _lateralVelocity), METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__lateralVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__lateralVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__forwardVelocity_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__forwardVelocity = { "_forwardVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _forwardVelocity), METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__forwardVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__forwardVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__firstPersonView_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__firstPersonView_SetBit(void* Obj)
	{
		((UConjoinedTwinAnimInstance*)Obj)->_firstPersonView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__firstPersonView = { "_firstPersonView", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConjoinedTwinAnimInstance), &Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__firstPersonView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__firstPersonView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__firstPersonView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__owningConjoinedTwin_MetaData[] = {
		{ "Category", "ConjoinedTwinAnimInstance" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__owningConjoinedTwin = { "_owningConjoinedTwin", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConjoinedTwinAnimInstance, _owningConjoinedTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__owningConjoinedTwin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__owningConjoinedTwin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToLocker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isBeingAutoPossessedAfterRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isDormant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isWakingUpFromPossess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isPossessing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isChargingTwinJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToFemaleSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttachedToSister,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__animYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinLockerBlockerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__twinAttachmentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__attackerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__idleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__isInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__interactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__interactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__lateralVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__forwardVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__firstPersonView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::NewProp__owningConjoinedTwin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConjoinedTwinAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::ClassParams = {
		&UConjoinedTwinAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConjoinedTwinAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConjoinedTwinAnimInstance, 705755367);
	template<> THETWINS_API UClass* StaticClass<UConjoinedTwinAnimInstance>()
	{
		return UConjoinedTwinAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConjoinedTwinAnimInstance(Z_Construct_UClass_UConjoinedTwinAnimInstance, &UConjoinedTwinAnimInstance::StaticClass, TEXT("/Script/TheTwins"), TEXT("UConjoinedTwinAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConjoinedTwinAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
