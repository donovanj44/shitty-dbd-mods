// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/HealInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UHealInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UHealInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHealInteraction::execGetTargetSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetTargetSurvivor();
		P_NATIVE_END;
	}
	static FName NAME_UHealInteraction_Authority_OnChargeApplied = FName(TEXT("Authority_OnChargeApplied"));
	void UHealInteraction::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
	{
		HealInteraction_eventAuthority_OnChargeApplied_Parms Parms;
		Parms.individualChargeAmount=individualChargeAmount;
		Parms.totalChargeAmount=totalChargeAmount;
		Parms.chargeInstigator=chargeInstigator;
		Parms.wasCoop=wasCoop ? true : false;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UHealInteraction_Authority_OnChargeApplied),&Parms);
	}
	void UHealInteraction::StaticRegisterNativesUHealInteraction()
	{
		UClass* Class = UHealInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetSurvivor", &UHealInteraction::execGetTargetSurvivor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static void NewProp_wasCoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasCoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalChargeAmount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_individualChargeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealInteraction_eventAuthority_OnChargeApplied_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_wasCoop_SetBit(void* Obj)
	{
		((HealInteraction_eventAuthority_OnChargeApplied_Parms*)Obj)->wasCoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_wasCoop = { "wasCoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealInteraction_eventAuthority_OnChargeApplied_Parms), &Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_wasCoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_chargeInstigator = { "chargeInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealInteraction_eventAuthority_OnChargeApplied_Parms, chargeInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_totalChargeAmount = { "totalChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealInteraction_eventAuthority_OnChargeApplied_Parms, totalChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_individualChargeAmount = { "individualChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealInteraction_eventAuthority_OnChargeApplied_Parms, individualChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_wasCoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_chargeInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_totalChargeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::NewProp_individualChargeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealInteraction, nullptr, "Authority_OnChargeApplied", nullptr, nullptr, sizeof(HealInteraction_eventAuthority_OnChargeApplied_Parms), Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics
	{
		struct HealInteraction_eventGetTargetSurvivor_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealInteraction_eventGetTargetSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealInteraction, nullptr, "GetTargetSurvivor", nullptr, nullptr, sizeof(HealInteraction_eventGetTargetSurvivor_Parms), Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealInteraction_NoRegister()
	{
		return UHealInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UHealInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealInteraction_Authority_OnChargeApplied, "Authority_OnChargeApplied" }, // 3428884283
		{ &Z_Construct_UFunction_UHealInteraction_GetTargetSurvivor, "GetTargetSurvivor" }, // 846712601
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HealInteraction.h" },
		{ "ModuleRelativePath", "Public/HealInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealInteraction_Statics::ClassParams = {
		&UHealInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealInteraction, 4218414950);
	template<> DBDINTERACTION_API UClass* StaticClass<UHealInteraction>()
	{
		return UHealInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealInteraction(Z_Construct_UClass_UHealInteraction, &UHealInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UHealInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
