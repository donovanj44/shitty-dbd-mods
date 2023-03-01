// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpecialEventUtilities/Public/RespawnableInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnableInteractable() {}
// Cross Module References
	SPECIALEVENTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpecialEventUtilities();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_ARespawnableInteractable_NoRegister();
	SPECIALEVENTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_ARespawnableInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics
	{
		struct _Script_SpecialEventUtilities_eventRespawnableInteractableOnIsInteractingChanged_Parms
		{
			ARespawnableInteractable* respawnableInteractable;
			bool isInteracting;
		};
		static void NewProp_isInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInteracting;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_respawnableInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::NewProp_isInteracting_SetBit(void* Obj)
	{
		((_Script_SpecialEventUtilities_eventRespawnableInteractableOnIsInteractingChanged_Parms*)Obj)->isInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::NewProp_isInteracting = { "isInteracting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SpecialEventUtilities_eventRespawnableInteractableOnIsInteractingChanged_Parms), &Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::NewProp_isInteracting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::NewProp_respawnableInteractable = { "respawnableInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpecialEventUtilities_eventRespawnableInteractableOnIsInteractingChanged_Parms, respawnableInteractable), Z_Construct_UClass_ARespawnableInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::NewProp_isInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::NewProp_respawnableInteractable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpecialEventUtilities, nullptr, "RespawnableInteractableOnIsInteractingChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_SpecialEventUtilities_eventRespawnableInteractableOnIsInteractingChanged_Parms), Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics
	{
		struct _Script_SpecialEventUtilities_eventRespawnableInteractableOnInteractionEnded_Parms
		{
			ARespawnableInteractable* respawnableInteractable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_respawnableInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::NewProp_respawnableInteractable = { "respawnableInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpecialEventUtilities_eventRespawnableInteractableOnInteractionEnded_Parms, respawnableInteractable), Z_Construct_UClass_ARespawnableInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::NewProp_respawnableInteractable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpecialEventUtilities, nullptr, "RespawnableInteractableOnInteractionEnded__DelegateSignature", nullptr, nullptr, sizeof(_Script_SpecialEventUtilities_eventRespawnableInteractableOnInteractionEnded_Parms), Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARespawnableInteractable::execIsHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARespawnableInteractable::execOnRep_IsHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsHidden();
		P_NATIVE_END;
	}
	static FName NAME_ARespawnableInteractable_OnHidden = FName(TEXT("OnHidden"));
	void ARespawnableInteractable::OnHidden()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARespawnableInteractable_OnHidden),NULL);
	}
	static FName NAME_ARespawnableInteractable_OnUnhidden = FName(TEXT("OnUnhidden"));
	void ARespawnableInteractable::OnUnhidden()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARespawnableInteractable_OnUnhidden),NULL);
	}
	void ARespawnableInteractable::StaticRegisterNativesARespawnableInteractable()
	{
		UClass* Class = ARespawnableInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsHidden", &ARespawnableInteractable::execIsHidden },
			{ "OnRep_IsHidden", &ARespawnableInteractable::execOnRep_IsHidden },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics
	{
		struct RespawnableInteractable_eventIsHidden_Parms
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
	void Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RespawnableInteractable_eventIsHidden_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RespawnableInteractable_eventIsHidden_Parms), &Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnableInteractable, nullptr, "IsHidden", nullptr, nullptr, sizeof(RespawnableInteractable_eventIsHidden_Parms), Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARespawnableInteractable_IsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARespawnableInteractable_IsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARespawnableInteractable_OnHidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARespawnableInteractable_OnHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnableInteractable_OnHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnableInteractable, nullptr, "OnHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARespawnableInteractable_OnHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnableInteractable_OnHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARespawnableInteractable_OnHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARespawnableInteractable_OnHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARespawnableInteractable_OnRep_IsHidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARespawnableInteractable_OnRep_IsHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnableInteractable_OnRep_IsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnableInteractable, nullptr, "OnRep_IsHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARespawnableInteractable_OnRep_IsHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnableInteractable_OnRep_IsHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARespawnableInteractable_OnRep_IsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARespawnableInteractable_OnRep_IsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARespawnableInteractable_OnUnhidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARespawnableInteractable_OnUnhidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnableInteractable_OnUnhidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnableInteractable, nullptr, "OnUnhidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARespawnableInteractable_OnUnhidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnableInteractable_OnUnhidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARespawnableInteractable_OnUnhidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARespawnableInteractable_OnUnhidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARespawnableInteractable_NoRegister()
	{
		return ARespawnableInteractable::StaticClass();
	}
	struct Z_Construct_UClass_ARespawnableInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHidden_MetaData[];
#endif
		static void NewProp__isHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsInteractingChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsInteractingChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInteractionEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionEnded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARespawnableInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_SpecialEventUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARespawnableInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARespawnableInteractable_IsHidden, "IsHidden" }, // 1927808551
		{ &Z_Construct_UFunction_ARespawnableInteractable_OnHidden, "OnHidden" }, // 2732601515
		{ &Z_Construct_UFunction_ARespawnableInteractable_OnRep_IsHidden, "OnRep_IsHidden" }, // 2607146844
		{ &Z_Construct_UFunction_ARespawnableInteractable_OnUnhidden, "OnUnhidden" }, // 700319618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnableInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RespawnableInteractable.h" },
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp__isHidden_MetaData[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	void Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp__isHidden_SetBit(void* Obj)
	{
		((ARespawnableInteractable*)Obj)->_isHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp__isHidden = { "_isHidden", "OnRep_IsHidden", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARespawnableInteractable), &Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp__isHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp__isHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp__isHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnIsInteractingChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnIsInteractingChanged = { "OnIsInteractingChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARespawnableInteractable, OnIsInteractingChanged), Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnIsInteractingChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnIsInteractingChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnIsInteractingChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnInteractionEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/RespawnableInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnInteractionEnded = { "OnInteractionEnded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARespawnableInteractable, OnInteractionEnded), Z_Construct_UDelegateFunction_SpecialEventUtilities_RespawnableInteractableOnInteractionEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnInteractionEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnInteractionEnded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARespawnableInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp__isHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnIsInteractingChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnableInteractable_Statics::NewProp_OnInteractionEnded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARespawnableInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARespawnableInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARespawnableInteractable_Statics::ClassParams = {
		&ARespawnableInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARespawnableInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnableInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARespawnableInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnableInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARespawnableInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARespawnableInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARespawnableInteractable, 262492873);
	template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<ARespawnableInteractable>()
	{
		return ARespawnableInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARespawnableInteractable(Z_Construct_UClass_ARespawnableInteractable, &ARespawnableInteractable::StaticClass, TEXT("/Script/SpecialEventUtilities"), TEXT("ARespawnableInteractable"), false, nullptr, nullptr, nullptr);

	void ARespawnableInteractable::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isHidden(TEXT("_isHidden"));

		const bool bIsValid = true
			&& Name__isHidden == ClassReps[(int32)ENetFields_Private::_isHidden].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARespawnableInteractable"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARespawnableInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
