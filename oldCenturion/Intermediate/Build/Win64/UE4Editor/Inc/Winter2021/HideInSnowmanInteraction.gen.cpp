// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/HideInSnowmanInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHideInSnowmanInteraction() {}
// Cross Module References
	WINTER2021_API UClass* Z_Construct_UClass_UHideInSnowmanInteraction_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_UHideInSnowmanInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UHideInSnowmanInteraction::execMulticast_OnAbleToRunAndExitSnowmanStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnAbleToRunAndExitSnowmanStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHideInSnowmanInteraction::execMulticast_StartControllingSnowman)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartControllingSnowman_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHideInSnowmanInteraction::execMulticast_StopControllingSnowman)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopControllingSnowman_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	static FName NAME_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart = FName(TEXT("Multicast_OnAbleToRunAndExitSnowmanStart"));
	void UHideInSnowmanInteraction::Multicast_OnAbleToRunAndExitSnowmanStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart),NULL);
	}
	static FName NAME_UHideInSnowmanInteraction_Multicast_StartControllingSnowman = FName(TEXT("Multicast_StartControllingSnowman"));
	void UHideInSnowmanInteraction::Multicast_StartControllingSnowman(ACamperPlayer* survivor)
	{
		HideInSnowmanInteraction_eventMulticast_StartControllingSnowman_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UHideInSnowmanInteraction_Multicast_StartControllingSnowman),&Parms);
	}
	static FName NAME_UHideInSnowmanInteraction_Multicast_StopControllingSnowman = FName(TEXT("Multicast_StopControllingSnowman"));
	void UHideInSnowmanInteraction::Multicast_StopControllingSnowman(ACamperPlayer* survivor)
	{
		HideInSnowmanInteraction_eventMulticast_StopControllingSnowman_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UHideInSnowmanInteraction_Multicast_StopControllingSnowman),&Parms);
	}
	void UHideInSnowmanInteraction::StaticRegisterNativesUHideInSnowmanInteraction()
	{
		UClass* Class = UHideInSnowmanInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnAbleToRunAndExitSnowmanStart", &UHideInSnowmanInteraction::execMulticast_OnAbleToRunAndExitSnowmanStart },
			{ "Multicast_StartControllingSnowman", &UHideInSnowmanInteraction::execMulticast_StartControllingSnowman },
			{ "Multicast_StopControllingSnowman", &UHideInSnowmanInteraction::execMulticast_StopControllingSnowman },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideInSnowmanInteraction, nullptr, "Multicast_OnAbleToRunAndExitSnowmanStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideInSnowmanInteraction_eventMulticast_StartControllingSnowman_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideInSnowmanInteraction, nullptr, "Multicast_StartControllingSnowman", nullptr, nullptr, sizeof(HideInSnowmanInteraction_eventMulticast_StartControllingSnowman_Parms), Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideInSnowmanInteraction_eventMulticast_StopControllingSnowman_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideInSnowmanInteraction, nullptr, "Multicast_StopControllingSnowman", nullptr, nullptr, sizeof(HideInSnowmanInteraction_eventMulticast_StopControllingSnowman_Parms), Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHideInSnowmanInteraction_NoRegister()
	{
		return UHideInSnowmanInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UHideInSnowmanInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeToZoomExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeToZoomExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeToZoomEnter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeToZoomEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraZoomBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraZoomBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumTimeToRunAndExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minimumTimeToRunAndExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeToEnterSnowman_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeToEnterSnowman;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSnowmanShieldDamaged_MetaData[];
#endif
		static void NewProp__isSnowmanShieldDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSnowmanShieldDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldRunOutOfSnowman_MetaData[];
#endif
		static void NewProp__shouldRunOutOfSnowman_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldRunOutOfSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHideInSnowmanInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHideInSnowmanInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart, "Multicast_OnAbleToRunAndExitSnowmanStart" }, // 1709790221
		{ &Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StartControllingSnowman, "Multicast_StartControllingSnowman" }, // 3591999579
		{ &Z_Construct_UFunction_UHideInSnowmanInteraction_Multicast_StopControllingSnowman, "Multicast_StopControllingSnowman" }, // 3656302770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideInSnowmanInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HideInSnowmanInteraction.h" },
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomExit_MetaData[] = {
		{ "Category", "HideInSnowmanInteraction" },
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomExit = { "_timeToZoomExit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHideInSnowmanInteraction, _timeToZoomExit), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomEnter_MetaData[] = {
		{ "Category", "HideInSnowmanInteraction" },
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomEnter = { "_timeToZoomEnter", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHideInSnowmanInteraction, _timeToZoomEnter), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__cameraZoomBack_MetaData[] = {
		{ "Category", "HideInSnowmanInteraction" },
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__cameraZoomBack = { "_cameraZoomBack", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHideInSnowmanInteraction, _cameraZoomBack), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__cameraZoomBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__cameraZoomBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__minimumTimeToRunAndExit_MetaData[] = {
		{ "Category", "HideInSnowmanInteraction" },
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__minimumTimeToRunAndExit = { "_minimumTimeToRunAndExit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHideInSnowmanInteraction, _minimumTimeToRunAndExit), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__minimumTimeToRunAndExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__minimumTimeToRunAndExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToEnterSnowman_MetaData[] = {
		{ "Category", "HideInSnowmanInteraction" },
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToEnterSnowman = { "_timeToEnterSnowman", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHideInSnowmanInteraction, _timeToEnterSnowman), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToEnterSnowman_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToEnterSnowman_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__isSnowmanShieldDamaged_MetaData[] = {
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	void Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__isSnowmanShieldDamaged_SetBit(void* Obj)
	{
		((UHideInSnowmanInteraction*)Obj)->_isSnowmanShieldDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__isSnowmanShieldDamaged = { "_isSnowmanShieldDamaged", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHideInSnowmanInteraction), &Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__isSnowmanShieldDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__isSnowmanShieldDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__isSnowmanShieldDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__shouldRunOutOfSnowman_MetaData[] = {
		{ "ModuleRelativePath", "Public/HideInSnowmanInteraction.h" },
	};
#endif
	void Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__shouldRunOutOfSnowman_SetBit(void* Obj)
	{
		((UHideInSnowmanInteraction*)Obj)->_shouldRunOutOfSnowman = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__shouldRunOutOfSnowman = { "_shouldRunOutOfSnowman", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHideInSnowmanInteraction), &Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__shouldRunOutOfSnowman_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__shouldRunOutOfSnowman_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__shouldRunOutOfSnowman_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHideInSnowmanInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToZoomEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__cameraZoomBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__minimumTimeToRunAndExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__timeToEnterSnowman,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__isSnowmanShieldDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideInSnowmanInteraction_Statics::NewProp__shouldRunOutOfSnowman,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHideInSnowmanInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHideInSnowmanInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHideInSnowmanInteraction_Statics::ClassParams = {
		&UHideInSnowmanInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHideInSnowmanInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHideInSnowmanInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHideInSnowmanInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHideInSnowmanInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHideInSnowmanInteraction, 2671136872);
	template<> WINTER2021_API UClass* StaticClass<UHideInSnowmanInteraction>()
	{
		return UHideInSnowmanInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHideInSnowmanInteraction(Z_Construct_UClass_UHideInSnowmanInteraction, &UHideInSnowmanInteraction::StaticClass, TEXT("/Script/Winter2021"), TEXT("UHideInSnowmanInteraction"), false, nullptr, nullptr, nullptr);

	void UHideInSnowmanInteraction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__shouldRunOutOfSnowman(TEXT("_shouldRunOutOfSnowman"));
		static const FName Name__isSnowmanShieldDamaged(TEXT("_isSnowmanShieldDamaged"));

		const bool bIsValid = true
			&& Name__shouldRunOutOfSnowman == ClassReps[(int32)ENetFields_Private::_shouldRunOutOfSnowman].Property->GetFName()
			&& Name__isSnowmanShieldDamaged == ClassReps[(int32)ENetFields_Private::_isSnowmanShieldDamaged].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHideInSnowmanInteraction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHideInSnowmanInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
