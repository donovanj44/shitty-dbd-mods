// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/HealSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UHealSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UHealSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_USkillCheckFailureTracker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHealSurvivorSubAnimInstance::execOnHealerSkillCheckResponseAesthetic)
	{
		P_GET_UBOOL(Z_Param_success);
		P_GET_OBJECT(ADBDPlayer,Z_Param_healer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealerSkillCheckResponseAesthetic(Z_Param_success,Z_Param_healer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealSurvivorSubAnimInstance::execResetHealerSkillCheckFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHealerSkillCheckFailed();
		P_NATIVE_END;
	}
	void UHealSurvivorSubAnimInstance::StaticRegisterNativesUHealSurvivorSubAnimInstance()
	{
		UClass* Class = UHealSurvivorSubAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealerSkillCheckResponseAesthetic", &UHealSurvivorSubAnimInstance::execOnHealerSkillCheckResponseAesthetic },
			{ "ResetHealerSkillCheckFailed", &UHealSurvivorSubAnimInstance::execResetHealerSkillCheckFailed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics
	{
		struct HealSurvivorSubAnimInstance_eventOnHealerSkillCheckResponseAesthetic_Parms
		{
			bool success;
			ADBDPlayer* healer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healer;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::NewProp_healer = { "healer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealSurvivorSubAnimInstance_eventOnHealerSkillCheckResponseAesthetic_Parms, healer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::NewProp_success_SetBit(void* Obj)
	{
		((HealSurvivorSubAnimInstance_eventOnHealerSkillCheckResponseAesthetic_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealSurvivorSubAnimInstance_eventOnHealerSkillCheckResponseAesthetic_Parms), &Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::NewProp_healer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealSurvivorSubAnimInstance, nullptr, "OnHealerSkillCheckResponseAesthetic", nullptr, nullptr, sizeof(HealSurvivorSubAnimInstance_eventOnHealerSkillCheckResponseAesthetic_Parms), Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealSurvivorSubAnimInstance, nullptr, "ResetHealerSkillCheckFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealSurvivorSubAnimInstance_NoRegister()
	{
		return UHealSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasHealerSkillCheckFailed_MetaData[];
#endif
		static void NewProp__hasHealerSkillCheckFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasHealerSkillCheckFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrawling_MetaData[];
#endif
		static void NewProp__isCrawling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrawling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasSkillCheckFailed_MetaData[];
#endif
		static void NewProp__hasSkillCheckFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasSkillCheckFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isMendingOther_MetaData[];
#endif
		static void NewProp__isMendingOther_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isMendingOther;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingMended_MetaData[];
#endif
		static void NewProp__isBeingMended_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingMended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingHealed_MetaData[];
#endif
		static void NewProp__isBeingHealed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingHealed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isWakingUpOther_MetaData[];
#endif
		static void NewProp__isWakingUpOther_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isWakingUpOther;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHealingSelfMedkit_MetaData[];
#endif
		static void NewProp__isHealingSelfMedkit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHealingSelfMedkit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHealingSelfNoMedkit_MetaData[];
#endif
		static void NewProp__isHealingSelfNoMedkit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHealingSelfNoMedkit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHealingOtherMedkit_MetaData[];
#endif
		static void NewProp__isHealingOtherMedkit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHealingOtherMedkit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHealingOtherNoMedkit_MetaData[];
#endif
		static void NewProp__isHealingOtherNoMedkit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHealingOtherNoMedkit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHealingACrawlingTarget_MetaData[];
#endif
		static void NewProp__isHealingACrawlingTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHealingACrawlingTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic, "OnHealerSkillCheckResponseAesthetic" }, // 2181779882
		{ &Z_Construct_UFunction_UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed, "ResetHealerSkillCheckFailed" }, // 2780803353
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HealSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasHealerSkillCheckFailed_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasHealerSkillCheckFailed_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_hasHealerSkillCheckFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasHealerSkillCheckFailed = { "_hasHealerSkillCheckFailed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasHealerSkillCheckFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasHealerSkillCheckFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasHealerSkillCheckFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isCrawling_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isCrawling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isCrawling = { "_isCrawling", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isCrawling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isCrawling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_hasSkillCheckFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed = { "_hasSkillCheckFailed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isMendingOther_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isMendingOther_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isMendingOther = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isMendingOther = { "_isMendingOther", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isMendingOther_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isMendingOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isMendingOther_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingMended_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingMended_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isBeingMended = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingMended = { "_isBeingMended", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingMended_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingMended_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingMended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingHealed_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingHealed_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isBeingHealed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingHealed = { "_isBeingHealed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingHealed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingHealed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingHealed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isWakingUpOther_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isWakingUpOther_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isWakingUpOther = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isWakingUpOther = { "_isWakingUpOther", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isWakingUpOther_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isWakingUpOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isWakingUpOther_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfMedkit_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfMedkit_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isHealingSelfMedkit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfMedkit = { "_isHealingSelfMedkit", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfMedkit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfMedkit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfMedkit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfNoMedkit_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfNoMedkit_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isHealingSelfNoMedkit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfNoMedkit = { "_isHealingSelfNoMedkit", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfNoMedkit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfNoMedkit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfNoMedkit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherMedkit_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherMedkit_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isHealingOtherMedkit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherMedkit = { "_isHealingOtherMedkit", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherMedkit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherMedkit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherMedkit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherNoMedkit_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherNoMedkit_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isHealingOtherNoMedkit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherNoMedkit = { "_isHealingOtherNoMedkit", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherNoMedkit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherNoMedkit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherNoMedkit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingACrawlingTarget_MetaData[] = {
		{ "Category", "HealSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HealSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingACrawlingTarget_SetBit(void* Obj)
	{
		((UHealSurvivorSubAnimInstance*)Obj)->_isHealingACrawlingTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingACrawlingTarget = { "_isHealingACrawlingTarget", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealSurvivorSubAnimInstance), &Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingACrawlingTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingACrawlingTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingACrawlingTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasHealerSkillCheckFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isCrawling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isMendingOther,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingMended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isBeingHealed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isWakingUpOther,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfMedkit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingSelfNoMedkit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherMedkit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingOtherNoMedkit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::NewProp__isHealingACrawlingTarget,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USkillCheckFailureTracker_NoRegister, (int32)VTABLE_OFFSET(UHealSurvivorSubAnimInstance, ISkillCheckFailureTracker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::ClassParams = {
		&UHealSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealSurvivorSubAnimInstance, 728386082);
	template<> DBDANIMATION_API UClass* StaticClass<UHealSurvivorSubAnimInstance>()
	{
		return UHealSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealSurvivorSubAnimInstance(Z_Construct_UClass_UHealSurvivorSubAnimInstance, &UHealSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UHealSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
