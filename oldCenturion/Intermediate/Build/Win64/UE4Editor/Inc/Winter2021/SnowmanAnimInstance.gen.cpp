// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/SnowmanAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowmanAnimInstance() {}
// Cross Module References
	WINTER2021_API UClass* Z_Construct_UClass_USnowmanAnimInstance_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_USnowmanAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
	WINTER2021_API UEnum* Z_Construct_UEnum_Winter2021_ESnowmanDestructionType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_ASnowman_NoRegister();
// End Cross Module References
	static FName NAME_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent = FName(TEXT("Cosmetic_OnSnowmanDestroyedEvent"));
	void USnowmanAnimInstance::Cosmetic_OnSnowmanDestroyedEvent(ESnowmanDestructionType snowmanDestructionType)
	{
		SnowmanAnimInstance_eventCosmetic_OnSnowmanDestroyedEvent_Parms Parms;
		Parms.snowmanDestructionType=snowmanDestructionType;
		ProcessEvent(FindFunctionChecked(NAME_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent),&Parms);
	}
	void USnowmanAnimInstance::StaticRegisterNativesUSnowmanAnimInstance()
	{
	}
	struct Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_snowmanDestructionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_snowmanDestructionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::NewProp_snowmanDestructionType = { "snowmanDestructionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnowmanAnimInstance_eventCosmetic_OnSnowmanDestroyedEvent_Parms, snowmanDestructionType), Z_Construct_UEnum_Winter2021_ESnowmanDestructionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::NewProp_snowmanDestructionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::NewProp_snowmanDestructionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::NewProp_snowmanDestructionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnowmanAnimInstance, nullptr, "Cosmetic_OnSnowmanDestroyedEvent", nullptr, nullptr, sizeof(SnowmanAnimInstance_eventCosmetic_OnSnowmanDestroyedEvent_Parms), Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USnowmanAnimInstance_NoRegister()
	{
		return USnowmanAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USnowmanAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorUsingSnowman_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__survivorUsingSnowman;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowman_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__snowman;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSurvivorUsingSnowmanMoving_MetaData[];
#endif
		static void NewProp__isSurvivorUsingSnowmanMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSurvivorUsingSnowmanMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty_MetaData[];
#endif
		static void NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingDestroyedDueToKillerAttackWhileControlled_MetaData[];
#endif
		static void NewProp__isBeingDestroyedDueToKillerAttackWhileControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingDestroyedDueToKillerAttackWhileControlled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingDestroyedDueToSurvivorRunExit_MetaData[];
#endif
		static void NewProp__isBeingDestroyedDueToSurvivorRunExit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingDestroyedDueToSurvivorRunExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDestroyed_MetaData[];
#endif
		static void NewProp__isDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isControlled_MetaData[];
#endif
		static void NewProp__isControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isControlled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingEntered_MetaData[];
#endif
		static void NewProp__isBeingEntered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIdle_MetaData[];
#endif
		static void NewProp__isIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIdle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnowmanAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnowmanAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent, "Cosmetic_OnSnowmanDestroyedEvent" }, // 1240654104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SnowmanAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__survivorUsingSnowman_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__survivorUsingSnowman = { "_survivorUsingSnowman", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanAnimInstance, _survivorUsingSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__survivorUsingSnowman_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__survivorUsingSnowman_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__snowman_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__snowman = { "_snowman", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanAnimInstance, _snowman), Z_Construct_UClass_ASnowman_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__snowman_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__snowman_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isSurvivorUsingSnowmanMoving_MetaData[] = {
		{ "Category", "SnowmanAnimInstance" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isSurvivorUsingSnowmanMoving_SetBit(void* Obj)
	{
		((USnowmanAnimInstance*)Obj)->_isSurvivorUsingSnowmanMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isSurvivorUsingSnowmanMoving = { "_isSurvivorUsingSnowmanMoving", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnowmanAnimInstance), &Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isSurvivorUsingSnowmanMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isSurvivorUsingSnowmanMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isSurvivorUsingSnowmanMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty_MetaData[] = {
		{ "Category", "SnowmanAnimInstance" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty_SetBit(void* Obj)
	{
		((USnowmanAnimInstance*)Obj)->_isBeingDestroyedDueToKillerAttackWhileEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty = { "_isBeingDestroyedDueToKillerAttackWhileEmpty", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnowmanAnimInstance), &Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileControlled_MetaData[] = {
		{ "Category", "SnowmanAnimInstance" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileControlled_SetBit(void* Obj)
	{
		((USnowmanAnimInstance*)Obj)->_isBeingDestroyedDueToKillerAttackWhileControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileControlled = { "_isBeingDestroyedDueToKillerAttackWhileControlled", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnowmanAnimInstance), &Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileControlled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileControlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileControlled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToSurvivorRunExit_MetaData[] = {
		{ "Category", "SnowmanAnimInstance" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToSurvivorRunExit_SetBit(void* Obj)
	{
		((USnowmanAnimInstance*)Obj)->_isBeingDestroyedDueToSurvivorRunExit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToSurvivorRunExit = { "_isBeingDestroyedDueToSurvivorRunExit", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnowmanAnimInstance), &Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToSurvivorRunExit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToSurvivorRunExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToSurvivorRunExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isDestroyed_MetaData[] = {
		{ "Category", "SnowmanAnimInstance" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isDestroyed_SetBit(void* Obj)
	{
		((USnowmanAnimInstance*)Obj)->_isDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isDestroyed = { "_isDestroyed", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnowmanAnimInstance), &Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isControlled_MetaData[] = {
		{ "Category", "SnowmanAnimInstance" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isControlled_SetBit(void* Obj)
	{
		((USnowmanAnimInstance*)Obj)->_isControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isControlled = { "_isControlled", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnowmanAnimInstance), &Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isControlled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isControlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isControlled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingEntered_MetaData[] = {
		{ "Category", "SnowmanAnimInstance" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingEntered_SetBit(void* Obj)
	{
		((USnowmanAnimInstance*)Obj)->_isBeingEntered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingEntered = { "_isBeingEntered", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnowmanAnimInstance), &Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingEntered_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isIdle_MetaData[] = {
		{ "Category", "SnowmanAnimInstance" },
		{ "ModuleRelativePath", "Public/SnowmanAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isIdle_SetBit(void* Obj)
	{
		((USnowmanAnimInstance*)Obj)->_isIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isIdle = { "_isIdle", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnowmanAnimInstance), &Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isIdle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnowmanAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__survivorUsingSnowman,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__snowman,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isSurvivorUsingSnowmanMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToKillerAttackWhileControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingDestroyedDueToSurvivorRunExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isBeingEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAnimInstance_Statics::NewProp__isIdle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnowmanAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnowmanAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USnowmanAnimInstance_Statics::ClassParams = {
		&USnowmanAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USnowmanAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USnowmanAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnowmanAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USnowmanAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USnowmanAnimInstance, 3194509569);
	template<> WINTER2021_API UClass* StaticClass<USnowmanAnimInstance>()
	{
		return USnowmanAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USnowmanAnimInstance(Z_Construct_UClass_USnowmanAnimInstance, &USnowmanAnimInstance::StaticClass, TEXT("/Script/Winter2021"), TEXT("USnowmanAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnowmanAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
