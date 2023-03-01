// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAttack/Public/PounceAttackOpenSubstateCosmetic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePounceAttackOpenSubstateCosmetic() {}
// Cross Module References
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_NoRegister();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDAttack();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPounceAttackOpenSubstateCosmetic::execIsLungeAttackAugmented)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_slasherPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLungeAttackAugmented(Z_Param_slasherPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPounceAttackOpenSubstateCosmetic::execOnLocallyObservedChanged)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_slasherPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged(Z_Param_slasherPlayer);
		P_NATIVE_END;
	}
	static FName NAME_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic = FName(TEXT("OnLocallyObservedChangedCosmetic"));
	void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChangedCosmetic(ADBDPlayer* slasherPlayer)
	{
		PounceAttackOpenSubstateCosmetic_eventOnLocallyObservedChangedCosmetic_Parms Parms;
		Parms.slasherPlayer=slasherPlayer;
		ProcessEvent(FindFunctionChecked(NAME_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic),&Parms);
	}
	static FName NAME_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic = FName(TEXT("OnLungeAttackEndCosmetic"));
	void UPounceAttackOpenSubstateCosmetic::OnLungeAttackEndCosmetic(ADBDPlayer* slasherPlayer)
	{
		PounceAttackOpenSubstateCosmetic_eventOnLungeAttackEndCosmetic_Parms Parms;
		Parms.slasherPlayer=slasherPlayer;
		ProcessEvent(FindFunctionChecked(NAME_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic),&Parms);
	}
	static FName NAME_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic = FName(TEXT("OnLungeAttackStartCosmetic"));
	void UPounceAttackOpenSubstateCosmetic::OnLungeAttackStartCosmetic(ADBDPlayer* slasherPlayer)
	{
		PounceAttackOpenSubstateCosmetic_eventOnLungeAttackStartCosmetic_Parms Parms;
		Parms.slasherPlayer=slasherPlayer;
		ProcessEvent(FindFunctionChecked(NAME_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic),&Parms);
	}
	void UPounceAttackOpenSubstateCosmetic::StaticRegisterNativesUPounceAttackOpenSubstateCosmetic()
	{
		UClass* Class = UPounceAttackOpenSubstateCosmetic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLungeAttackAugmented", &UPounceAttackOpenSubstateCosmetic::execIsLungeAttackAugmented },
			{ "OnLocallyObservedChanged", &UPounceAttackOpenSubstateCosmetic::execOnLocallyObservedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics
	{
		struct PounceAttackOpenSubstateCosmetic_eventIsLungeAttackAugmented_Parms
		{
			ADBDPlayer* slasherPlayer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PounceAttackOpenSubstateCosmetic_eventIsLungeAttackAugmented_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PounceAttackOpenSubstateCosmetic_eventIsLungeAttackAugmented_Parms), &Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::NewProp_slasherPlayer = { "slasherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PounceAttackOpenSubstateCosmetic_eventIsLungeAttackAugmented_Parms, slasherPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::NewProp_slasherPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PounceAttackOpenSubstateCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic, nullptr, "IsLungeAttackAugmented", nullptr, nullptr, sizeof(PounceAttackOpenSubstateCosmetic_eventIsLungeAttackAugmented_Parms), Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics
	{
		struct PounceAttackOpenSubstateCosmetic_eventOnLocallyObservedChanged_Parms
		{
			ADBDPlayer* slasherPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::NewProp_slasherPlayer = { "slasherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PounceAttackOpenSubstateCosmetic_eventOnLocallyObservedChanged_Parms, slasherPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::NewProp_slasherPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PounceAttackOpenSubstateCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, sizeof(PounceAttackOpenSubstateCosmetic_eventOnLocallyObservedChanged_Parms), Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::NewProp_slasherPlayer = { "slasherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PounceAttackOpenSubstateCosmetic_eventOnLocallyObservedChangedCosmetic_Parms, slasherPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::NewProp_slasherPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PounceAttackOpenSubstateCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic, nullptr, "OnLocallyObservedChangedCosmetic", nullptr, nullptr, sizeof(PounceAttackOpenSubstateCosmetic_eventOnLocallyObservedChangedCosmetic_Parms), Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::NewProp_slasherPlayer = { "slasherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PounceAttackOpenSubstateCosmetic_eventOnLungeAttackEndCosmetic_Parms, slasherPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::NewProp_slasherPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PounceAttackOpenSubstateCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic, nullptr, "OnLungeAttackEndCosmetic", nullptr, nullptr, sizeof(PounceAttackOpenSubstateCosmetic_eventOnLungeAttackEndCosmetic_Parms), Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::NewProp_slasherPlayer = { "slasherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PounceAttackOpenSubstateCosmetic_eventOnLungeAttackStartCosmetic_Parms, slasherPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::NewProp_slasherPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PounceAttackOpenSubstateCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic, nullptr, "OnLungeAttackStartCosmetic", nullptr, nullptr, sizeof(PounceAttackOpenSubstateCosmetic_eventOnLungeAttackStartCosmetic_Parms), Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_NoRegister()
	{
		return UPounceAttackOpenSubstateCosmetic::StaticClass();
	}
	struct Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAttack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented, "IsLungeAttackAugmented" }, // 248264335
		{ &Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 617051033
		{ &Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic, "OnLocallyObservedChangedCosmetic" }, // 491330494
		{ &Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic, "OnLungeAttackEndCosmetic" }, // 3483177582
		{ &Z_Construct_UFunction_UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic, "OnLungeAttackStartCosmetic" }, // 3545199342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PounceAttackOpenSubstateCosmetic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PounceAttackOpenSubstateCosmetic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPounceAttackOpenSubstateCosmetic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics::ClassParams = {
		&UPounceAttackOpenSubstateCosmetic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPounceAttackOpenSubstateCosmetic, 2222195111);
	template<> DBDATTACK_API UClass* StaticClass<UPounceAttackOpenSubstateCosmetic>()
	{
		return UPounceAttackOpenSubstateCosmetic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPounceAttackOpenSubstateCosmetic(Z_Construct_UClass_UPounceAttackOpenSubstateCosmetic, &UPounceAttackOpenSubstateCosmetic::StaticClass, TEXT("/Script/DBDAttack"), TEXT("UPounceAttackOpenSubstateCosmetic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPounceAttackOpenSubstateCosmetic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
