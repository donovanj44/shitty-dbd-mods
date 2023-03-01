// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HarpoonChainPositioner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarpoonChainPositioner() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonChainPositioner_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonChainPositioner();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonProp_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_ARifleChain_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonProjectile_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UHarpoonChainPositioner::execAttachToAnimSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToAnimSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHarpoonChainPositioner::execAttachToRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHarpoonChainPositioner::execGetCurrentHarpoon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentHarpoon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHarpoonChainPositioner::execGetHarpoonProp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHarpoonProp**)Z_Param__Result=P_THIS->GetHarpoonProp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHarpoonChainPositioner::execOnOwnerCollected)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_collector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerCollected(Z_Param_collector);
		P_NATIVE_END;
	}
	static FName NAME_UHarpoonChainPositioner_OnCurrentHarpoonChanged = FName(TEXT("OnCurrentHarpoonChanged"));
	void UHarpoonChainPositioner::OnCurrentHarpoonChanged(AActor* currentHarpoon)
	{
		HarpoonChainPositioner_eventOnCurrentHarpoonChanged_Parms Parms;
		Parms.currentHarpoon=currentHarpoon;
		ProcessEvent(FindFunctionChecked(NAME_UHarpoonChainPositioner_OnCurrentHarpoonChanged),&Parms);
	}
	static FName NAME_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle = FName(TEXT("OnHarpoonLoadedOnRifle"));
	void UHarpoonChainPositioner::OnHarpoonLoadedOnRifle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle),NULL);
	}
	static FName NAME_UHarpoonChainPositioner_OnHarpoonTravelingChanged = FName(TEXT("OnHarpoonTravelingChanged"));
	void UHarpoonChainPositioner::OnHarpoonTravelingChanged(bool isTravelling)
	{
		HarpoonChainPositioner_eventOnHarpoonTravelingChanged_Parms Parms;
		Parms.isTravelling=isTravelling ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHarpoonChainPositioner_OnHarpoonTravelingChanged),&Parms);
	}
	void UHarpoonChainPositioner::StaticRegisterNativesUHarpoonChainPositioner()
	{
		UClass* Class = UHarpoonChainPositioner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToAnimSocket", &UHarpoonChainPositioner::execAttachToAnimSocket },
			{ "AttachToRifle", &UHarpoonChainPositioner::execAttachToRifle },
			{ "GetCurrentHarpoon", &UHarpoonChainPositioner::execGetCurrentHarpoon },
			{ "GetHarpoonProp", &UHarpoonChainPositioner::execGetHarpoonProp },
			{ "OnOwnerCollected", &UHarpoonChainPositioner::execOnOwnerCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHarpoonChainPositioner_AttachToAnimSocket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHarpoonChainPositioner_AttachToAnimSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarpoonChainPositioner_AttachToAnimSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarpoonChainPositioner, nullptr, "AttachToAnimSocket", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHarpoonChainPositioner_AttachToAnimSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_AttachToAnimSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHarpoonChainPositioner_AttachToAnimSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHarpoonChainPositioner_AttachToAnimSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHarpoonChainPositioner_AttachToRifle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHarpoonChainPositioner_AttachToRifle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarpoonChainPositioner_AttachToRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarpoonChainPositioner, nullptr, "AttachToRifle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHarpoonChainPositioner_AttachToRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_AttachToRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHarpoonChainPositioner_AttachToRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHarpoonChainPositioner_AttachToRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics
	{
		struct HarpoonChainPositioner_eventGetCurrentHarpoon_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HarpoonChainPositioner_eventGetCurrentHarpoon_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarpoonChainPositioner, nullptr, "GetCurrentHarpoon", nullptr, nullptr, sizeof(HarpoonChainPositioner_eventGetCurrentHarpoon_Parms), Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics
	{
		struct HarpoonChainPositioner_eventGetHarpoonProp_Parms
		{
			AHarpoonProp* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HarpoonChainPositioner_eventGetHarpoonProp_Parms, ReturnValue), Z_Construct_UClass_AHarpoonProp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarpoonChainPositioner, nullptr, "GetHarpoonProp", nullptr, nullptr, sizeof(HarpoonChainPositioner_eventGetHarpoonProp_Parms), Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentHarpoon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::NewProp_currentHarpoon = { "currentHarpoon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HarpoonChainPositioner_eventOnCurrentHarpoonChanged_Parms, currentHarpoon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::NewProp_currentHarpoon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarpoonChainPositioner, nullptr, "OnCurrentHarpoonChanged", nullptr, nullptr, sizeof(HarpoonChainPositioner_eventOnCurrentHarpoonChanged_Parms), Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarpoonChainPositioner, nullptr, "OnHarpoonLoadedOnRifle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics
	{
		static void NewProp_isTravelling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTravelling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::NewProp_isTravelling_SetBit(void* Obj)
	{
		((HarpoonChainPositioner_eventOnHarpoonTravelingChanged_Parms*)Obj)->isTravelling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::NewProp_isTravelling = { "isTravelling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HarpoonChainPositioner_eventOnHarpoonTravelingChanged_Parms), &Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::NewProp_isTravelling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::NewProp_isTravelling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarpoonChainPositioner, nullptr, "OnHarpoonTravelingChanged", nullptr, nullptr, sizeof(HarpoonChainPositioner_eventOnHarpoonTravelingChanged_Parms), Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics
	{
		struct HarpoonChainPositioner_eventOnOwnerCollected_Parms
		{
			ADBDPlayer* collector;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HarpoonChainPositioner_eventOnOwnerCollected_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHarpoonChainPositioner, nullptr, "OnOwnerCollected", nullptr, nullptr, sizeof(HarpoonChainPositioner_eventOnOwnerCollected_Parms), Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHarpoonChainPositioner_NoRegister()
	{
		return UHarpoonChainPositioner::StaticClass();
	}
	struct Z_Construct_UClass_UHarpoonChainPositioner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__harpoonProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__harpoonProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__harpoonProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__harpoonProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__harpoonMinimumSnapBackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__harpoonMinimumSnapBackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelBackToRifleSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reelBackToRifleSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__animationSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorAttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__survivorAttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__harpoonPropClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__harpoonPropClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHarpoonChainPositioner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHarpoonChainPositioner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHarpoonChainPositioner_AttachToAnimSocket, "AttachToAnimSocket" }, // 242328639
		{ &Z_Construct_UFunction_UHarpoonChainPositioner_AttachToRifle, "AttachToRifle" }, // 685462796
		{ &Z_Construct_UFunction_UHarpoonChainPositioner_GetCurrentHarpoon, "GetCurrentHarpoon" }, // 98056050
		{ &Z_Construct_UFunction_UHarpoonChainPositioner_GetHarpoonProp, "GetHarpoonProp" }, // 3685788453
		{ &Z_Construct_UFunction_UHarpoonChainPositioner_OnCurrentHarpoonChanged, "OnCurrentHarpoonChanged" }, // 3597148017
		{ &Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonLoadedOnRifle, "OnHarpoonLoadedOnRifle" }, // 1226458196
		{ &Z_Construct_UFunction_UHarpoonChainPositioner_OnHarpoonTravelingChanged, "OnHarpoonTravelingChanged" }, // 3318431430
		{ &Z_Construct_UFunction_UHarpoonChainPositioner_OnOwnerCollected, "OnOwnerCollected" }, // 2472282429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HarpoonChainPositioner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__chain_MetaData[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__chain = { "_chain", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _chain), Z_Construct_UClass_ARifleChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__chain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__collector_MetaData[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__collector = { "_collector", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__collector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__collector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProjectile = { "_harpoonProjectile", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _harpoonProjectile), Z_Construct_UClass_AHarpoonProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProp_MetaData[] = {
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProp = { "_harpoonProp", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _harpoonProp), Z_Construct_UClass_AHarpoonProp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonMinimumSnapBackDistance_MetaData[] = {
		{ "Category", "HarpoonChainPositioner" },
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonMinimumSnapBackDistance = { "_harpoonMinimumSnapBackDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _harpoonMinimumSnapBackDistance), METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonMinimumSnapBackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonMinimumSnapBackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__reelBackToRifleSpeed_MetaData[] = {
		{ "Category", "HarpoonChainPositioner" },
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__reelBackToRifleSpeed = { "_reelBackToRifleSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _reelBackToRifleSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__reelBackToRifleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__reelBackToRifleSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__animationSocket_MetaData[] = {
		{ "Category", "HarpoonChainPositioner" },
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__animationSocket = { "_animationSocket", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _animationSocket), METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__animationSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__animationSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__survivorAttachSocket_MetaData[] = {
		{ "Category", "HarpoonChainPositioner" },
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__survivorAttachSocket = { "_survivorAttachSocket", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _survivorAttachSocket), METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__survivorAttachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__survivorAttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonPropClass_MetaData[] = {
		{ "Category", "HarpoonChainPositioner" },
		{ "ModuleRelativePath", "Public/HarpoonChainPositioner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonPropClass = { "_harpoonPropClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonChainPositioner, _harpoonPropClass), Z_Construct_UClass_AHarpoonProp_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonPropClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonPropClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHarpoonChainPositioner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__chain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__collector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonMinimumSnapBackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__reelBackToRifleSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__animationSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__survivorAttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonChainPositioner_Statics::NewProp__harpoonPropClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHarpoonChainPositioner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHarpoonChainPositioner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHarpoonChainPositioner_Statics::ClassParams = {
		&UHarpoonChainPositioner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHarpoonChainPositioner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHarpoonChainPositioner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonChainPositioner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHarpoonChainPositioner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHarpoonChainPositioner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHarpoonChainPositioner, 1010665903);
	template<> THEGUNSLINGER_API UClass* StaticClass<UHarpoonChainPositioner>()
	{
		return UHarpoonChainPositioner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHarpoonChainPositioner(Z_Construct_UClass_UHarpoonChainPositioner, &UHarpoonChainPositioner::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UHarpoonChainPositioner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHarpoonChainPositioner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
