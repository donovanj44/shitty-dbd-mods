// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/ForThePeople.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForThePeople() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UForThePeople_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UForThePeople();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryInteractionProperties();
// End Cross Module References
	DEFINE_FUNCTION(UForThePeople::execMulticast_OnHealAbilityUsed)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_healingSurvivor);
		P_GET_OBJECT(ACamperPlayer,Z_Param_healedSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnHealAbilityUsed_Implementation(Z_Param_healingSurvivor,Z_Param_healedSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UForThePeople::execServer_OnActionInputPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnActionInputPressed_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_OnActionInputPressed_Validate"));
			return;
		}
		P_THIS->Server_OnActionInputPressed_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UForThePeople_Multicast_OnHealAbilityUsed = FName(TEXT("Multicast_OnHealAbilityUsed"));
	void UForThePeople::Multicast_OnHealAbilityUsed(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor)
	{
		ForThePeople_eventMulticast_OnHealAbilityUsed_Parms Parms;
		Parms.healingSurvivor=healingSurvivor;
		Parms.healedSurvivor=healedSurvivor;
		ProcessEvent(FindFunctionChecked(NAME_UForThePeople_Multicast_OnHealAbilityUsed),&Parms);
	}
	static FName NAME_UForThePeople_OnHealingAbilityUsed = FName(TEXT("OnHealingAbilityUsed"));
	void UForThePeople::OnHealingAbilityUsed(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor)
	{
		ForThePeople_eventOnHealingAbilityUsed_Parms Parms;
		Parms.healingSurvivor=healingSurvivor;
		Parms.healedSurvivor=healedSurvivor;
		ProcessEvent(FindFunctionChecked(NAME_UForThePeople_OnHealingAbilityUsed),&Parms);
	}
	static FName NAME_UForThePeople_Server_OnActionInputPressed = FName(TEXT("Server_OnActionInputPressed"));
	void UForThePeople::Server_OnActionInputPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UForThePeople_Server_OnActionInputPressed),NULL);
	}
	void UForThePeople::StaticRegisterNativesUForThePeople()
	{
		UClass* Class = UForThePeople::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnHealAbilityUsed", &UForThePeople::execMulticast_OnHealAbilityUsed },
			{ "Server_OnActionInputPressed", &UForThePeople::execServer_OnActionInputPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healedSurvivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::NewProp_healedSurvivor = { "healedSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForThePeople_eventMulticast_OnHealAbilityUsed_Parms, healedSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::NewProp_healingSurvivor = { "healingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForThePeople_eventMulticast_OnHealAbilityUsed_Parms, healingSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::NewProp_healedSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::NewProp_healingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ForThePeople.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForThePeople, nullptr, "Multicast_OnHealAbilityUsed", nullptr, nullptr, sizeof(ForThePeople_eventMulticast_OnHealAbilityUsed_Parms), Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healedSurvivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::NewProp_healedSurvivor = { "healedSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForThePeople_eventOnHealingAbilityUsed_Parms, healedSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::NewProp_healingSurvivor = { "healingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForThePeople_eventOnHealingAbilityUsed_Parms, healingSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::NewProp_healedSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::NewProp_healingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ForThePeople.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForThePeople, nullptr, "OnHealingAbilityUsed", nullptr, nullptr, sizeof(ForThePeople_eventOnHealingAbilityUsed_Parms), Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForThePeople_Server_OnActionInputPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForThePeople_Server_OnActionInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ForThePeople.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForThePeople_Server_OnActionInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForThePeople, nullptr, "Server_OnActionInputPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForThePeople_Server_OnActionInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForThePeople_Server_OnActionInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForThePeople_Server_OnActionInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForThePeople_Server_OnActionInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForThePeople_NoRegister()
	{
		return UForThePeople::StaticClass();
	}
	struct Z_Construct_UClass_UForThePeople_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryActionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__secondaryActionProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__brokenEffectDurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__brokenEffectDurations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForThePeople_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UForThePeople_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UForThePeople_Multicast_OnHealAbilityUsed, "Multicast_OnHealAbilityUsed" }, // 1471007533
		{ &Z_Construct_UFunction_UForThePeople_OnHealingAbilityUsed, "OnHealingAbilityUsed" }, // 2174265330
		{ &Z_Construct_UFunction_UForThePeople_Server_OnActionInputPressed, "Server_OnActionInputPressed" }, // 2051951808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForThePeople_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ForThePeople.h" },
		{ "ModuleRelativePath", "Public/ForThePeople.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForThePeople_Statics::NewProp__secondaryActionProperties_MetaData[] = {
		{ "Category", "ForThePeople" },
		{ "ModuleRelativePath", "Public/ForThePeople.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForThePeople_Statics::NewProp__secondaryActionProperties = { "_secondaryActionProperties", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForThePeople, _secondaryActionProperties), Z_Construct_UScriptStruct_FSecondaryInteractionProperties, METADATA_PARAMS(Z_Construct_UClass_UForThePeople_Statics::NewProp__secondaryActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForThePeople_Statics::NewProp__secondaryActionProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForThePeople_Statics::NewProp__brokenEffectDurations_MetaData[] = {
		{ "Category", "ForThePeople" },
		{ "ModuleRelativePath", "Public/ForThePeople.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UForThePeople_Statics::NewProp__brokenEffectDurations = { "_brokenEffectDurations", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_brokenEffectDurations, UForThePeople), STRUCT_OFFSET(UForThePeople, _brokenEffectDurations), METADATA_PARAMS(Z_Construct_UClass_UForThePeople_Statics::NewProp__brokenEffectDurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForThePeople_Statics::NewProp__brokenEffectDurations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForThePeople_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForThePeople_Statics::NewProp__secondaryActionProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForThePeople_Statics::NewProp__brokenEffectDurations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForThePeople_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForThePeople>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForThePeople_Statics::ClassParams = {
		&UForThePeople::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UForThePeople_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UForThePeople_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UForThePeople_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForThePeople_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForThePeople()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForThePeople_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForThePeople, 3049387526);
	template<> THEGUNSLINGER_API UClass* StaticClass<UForThePeople>()
	{
		return UForThePeople::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForThePeople(Z_Construct_UClass_UForThePeople, &UForThePeople::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UForThePeople"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForThePeople);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
