// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/BearTrapAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearTrapAnimInstance() {}
// Cross Module References
	THETRAPPER_API UClass* Z_Construct_UClass_UBearTrapAnimInstance_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_UBearTrapAnimInstance();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
// End Cross Module References
	DEFINE_FUNCTION(UBearTrapAnimInstance::execSetContainsSurvivor)
	{
		P_GET_UBOOL(Z_Param_containsSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContainsSurvivor(Z_Param_containsSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBearTrapAnimInstance::execSetIsBeingCollected)
	{
		P_GET_UBOOL(Z_Param_isBeingCollected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsBeingCollected(Z_Param_isBeingCollected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBearTrapAnimInstance::execSetIsTrapSet)
	{
		P_GET_UBOOL(Z_Param_isTrapSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsTrapSet(Z_Param_isTrapSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBearTrapAnimInstance::execSetWasJustDisarmed)
	{
		P_GET_UBOOL(Z_Param_wasJustDisarmed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWasJustDisarmed(Z_Param_wasJustDisarmed);
		P_NATIVE_END;
	}
	void UBearTrapAnimInstance::StaticRegisterNativesUBearTrapAnimInstance()
	{
		UClass* Class = UBearTrapAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetContainsSurvivor", &UBearTrapAnimInstance::execSetContainsSurvivor },
			{ "SetIsBeingCollected", &UBearTrapAnimInstance::execSetIsBeingCollected },
			{ "SetIsTrapSet", &UBearTrapAnimInstance::execSetIsTrapSet },
			{ "SetWasJustDisarmed", &UBearTrapAnimInstance::execSetWasJustDisarmed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics
	{
		struct BearTrapAnimInstance_eventSetContainsSurvivor_Parms
		{
			bool containsSurvivor;
		};
		static void NewProp_containsSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_containsSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::NewProp_containsSurvivor_SetBit(void* Obj)
	{
		((BearTrapAnimInstance_eventSetContainsSurvivor_Parms*)Obj)->containsSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::NewProp_containsSurvivor = { "containsSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrapAnimInstance_eventSetContainsSurvivor_Parms), &Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::NewProp_containsSurvivor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::NewProp_containsSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBearTrapAnimInstance, nullptr, "SetContainsSurvivor", nullptr, nullptr, sizeof(BearTrapAnimInstance_eventSetContainsSurvivor_Parms), Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics
	{
		struct BearTrapAnimInstance_eventSetIsBeingCollected_Parms
		{
			bool isBeingCollected;
		};
		static void NewProp_isBeingCollected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBeingCollected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::NewProp_isBeingCollected_SetBit(void* Obj)
	{
		((BearTrapAnimInstance_eventSetIsBeingCollected_Parms*)Obj)->isBeingCollected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::NewProp_isBeingCollected = { "isBeingCollected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrapAnimInstance_eventSetIsBeingCollected_Parms), &Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::NewProp_isBeingCollected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::NewProp_isBeingCollected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBearTrapAnimInstance, nullptr, "SetIsBeingCollected", nullptr, nullptr, sizeof(BearTrapAnimInstance_eventSetIsBeingCollected_Parms), Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics
	{
		struct BearTrapAnimInstance_eventSetIsTrapSet_Parms
		{
			bool isTrapSet;
		};
		static void NewProp_isTrapSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTrapSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::NewProp_isTrapSet_SetBit(void* Obj)
	{
		((BearTrapAnimInstance_eventSetIsTrapSet_Parms*)Obj)->isTrapSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::NewProp_isTrapSet = { "isTrapSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrapAnimInstance_eventSetIsTrapSet_Parms), &Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::NewProp_isTrapSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::NewProp_isTrapSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBearTrapAnimInstance, nullptr, "SetIsTrapSet", nullptr, nullptr, sizeof(BearTrapAnimInstance_eventSetIsTrapSet_Parms), Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics
	{
		struct BearTrapAnimInstance_eventSetWasJustDisarmed_Parms
		{
			bool wasJustDisarmed;
		};
		static void NewProp_wasJustDisarmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasJustDisarmed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::NewProp_wasJustDisarmed_SetBit(void* Obj)
	{
		((BearTrapAnimInstance_eventSetWasJustDisarmed_Parms*)Obj)->wasJustDisarmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::NewProp_wasJustDisarmed = { "wasJustDisarmed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrapAnimInstance_eventSetWasJustDisarmed_Parms), &Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::NewProp_wasJustDisarmed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::NewProp_wasJustDisarmed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBearTrapAnimInstance, nullptr, "SetWasJustDisarmed", nullptr, nullptr, sizeof(BearTrapAnimInstance_eventSetWasJustDisarmed_Parms), Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBearTrapAnimInstance_NoRegister()
	{
		return UBearTrapAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBearTrapAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasJustDisarmed_MetaData[];
#endif
		static void NewProp__wasJustDisarmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__wasJustDisarmed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTrapSet_MetaData[];
#endif
		static void NewProp__isTrapSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTrapSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__containsSurvivor_MetaData[];
#endif
		static void NewProp__containsSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__containsSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingCollected_MetaData[];
#endif
		static void NewProp__isBeingCollected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingCollected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBroken_MetaData[];
#endif
		static void NewProp__isBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBroken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBearTrapAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USleepingAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBearTrapAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBearTrapAnimInstance_SetContainsSurvivor, "SetContainsSurvivor" }, // 774234718
		{ &Z_Construct_UFunction_UBearTrapAnimInstance_SetIsBeingCollected, "SetIsBeingCollected" }, // 2699519581
		{ &Z_Construct_UFunction_UBearTrapAnimInstance_SetIsTrapSet, "SetIsTrapSet" }, // 3993348549
		{ &Z_Construct_UFunction_UBearTrapAnimInstance_SetWasJustDisarmed, "SetWasJustDisarmed" }, // 3730708001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BearTrapAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__wasJustDisarmed_MetaData[] = {
		{ "Category", "BearTrapAnimInstance" },
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__wasJustDisarmed_SetBit(void* Obj)
	{
		((UBearTrapAnimInstance*)Obj)->_wasJustDisarmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__wasJustDisarmed = { "_wasJustDisarmed", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBearTrapAnimInstance), &Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__wasJustDisarmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__wasJustDisarmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__wasJustDisarmed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isTrapSet_MetaData[] = {
		{ "Category", "BearTrapAnimInstance" },
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isTrapSet_SetBit(void* Obj)
	{
		((UBearTrapAnimInstance*)Obj)->_isTrapSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isTrapSet = { "_isTrapSet", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBearTrapAnimInstance), &Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isTrapSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isTrapSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isTrapSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__containsSurvivor_MetaData[] = {
		{ "Category", "BearTrapAnimInstance" },
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__containsSurvivor_SetBit(void* Obj)
	{
		((UBearTrapAnimInstance*)Obj)->_containsSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__containsSurvivor = { "_containsSurvivor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBearTrapAnimInstance), &Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__containsSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__containsSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__containsSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBeingCollected_MetaData[] = {
		{ "Category", "BearTrapAnimInstance" },
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBeingCollected_SetBit(void* Obj)
	{
		((UBearTrapAnimInstance*)Obj)->_isBeingCollected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBeingCollected = { "_isBeingCollected", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBearTrapAnimInstance), &Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBeingCollected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBeingCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBeingCollected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBroken_MetaData[] = {
		{ "Category", "BearTrapAnimInstance" },
		{ "ModuleRelativePath", "Public/BearTrapAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBroken_SetBit(void* Obj)
	{
		((UBearTrapAnimInstance*)Obj)->_isBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBroken = { "_isBroken", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBearTrapAnimInstance), &Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBroken_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBroken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBearTrapAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__wasJustDisarmed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isTrapSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__containsSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBeingCollected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapAnimInstance_Statics::NewProp__isBroken,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBearTrapAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBearTrapAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBearTrapAnimInstance_Statics::ClassParams = {
		&UBearTrapAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBearTrapAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBearTrapAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBearTrapAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBearTrapAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBearTrapAnimInstance, 1140570501);
	template<> THETRAPPER_API UClass* StaticClass<UBearTrapAnimInstance>()
	{
		return UBearTrapAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBearTrapAnimInstance(Z_Construct_UClass_UBearTrapAnimInstance, &UBearTrapAnimInstance::StaticClass, TEXT("/Script/TheTrapper"), TEXT("UBearTrapAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBearTrapAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
