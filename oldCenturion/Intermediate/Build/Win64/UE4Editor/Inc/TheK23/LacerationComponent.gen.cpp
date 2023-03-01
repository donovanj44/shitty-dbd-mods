// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/LacerationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLacerationComponent() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_ULacerationComponent_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_ULacerationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULacerationUIData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULacerationComponent::execMulticast_KnifeHit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newLaceration);
		P_GET_UBOOL(Z_Param_causedDamage);
		P_GET_UBOOL(Z_Param_causedKo);
		P_GET_STRUCT(FVector,Z_Param_impactLocation);
		P_GET_STRUCT(FVector,Z_Param_impactNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_KnifeHit_Implementation(Z_Param_newLaceration,Z_Param_causedDamage,Z_Param_causedKo,Z_Param_impactLocation,Z_Param_impactNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULacerationComponent::execOnRepLaceration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_oldLaceration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRepLaceration(Z_Param_oldLaceration);
		P_NATIVE_END;
	}
	static FName NAME_ULacerationComponent_Cosmetic_OnKnifeHit = FName(TEXT("Cosmetic_OnKnifeHit"));
	void ULacerationComponent::Cosmetic_OnKnifeHit(float lacerationPercent, bool isDangerous, bool causedDamage, bool causedKo, FVector const& impactNormal)
	{
		LacerationComponent_eventCosmetic_OnKnifeHit_Parms Parms;
		Parms.lacerationPercent=lacerationPercent;
		Parms.isDangerous=isDangerous ? true : false;
		Parms.causedDamage=causedDamage ? true : false;
		Parms.causedKo=causedKo ? true : false;
		Parms.impactNormal=impactNormal;
		ProcessEvent(FindFunctionChecked(NAME_ULacerationComponent_Cosmetic_OnKnifeHit),&Parms);
	}
	static FName NAME_ULacerationComponent_Cosmetic_OnLacerationChanged = FName(TEXT("Cosmetic_OnLacerationChanged"));
	void ULacerationComponent::Cosmetic_OnLacerationChanged(float lacerationPercent, bool isDangerous)
	{
		LacerationComponent_eventCosmetic_OnLacerationChanged_Parms Parms;
		Parms.lacerationPercent=lacerationPercent;
		Parms.isDangerous=isDangerous ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ULacerationComponent_Cosmetic_OnLacerationChanged),&Parms);
	}
	static FName NAME_ULacerationComponent_Cosmetic_OnLocallyObservedChanged = FName(TEXT("Cosmetic_OnLocallyObservedChanged"));
	void ULacerationComponent::Cosmetic_OnLocallyObservedChanged(bool isLocallyObserved, float lacerationPercent, bool isDangerous)
	{
		LacerationComponent_eventCosmetic_OnLocallyObservedChanged_Parms Parms;
		Parms.isLocallyObserved=isLocallyObserved ? true : false;
		Parms.lacerationPercent=lacerationPercent;
		Parms.isDangerous=isDangerous ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ULacerationComponent_Cosmetic_OnLocallyObservedChanged),&Parms);
	}
	static FName NAME_ULacerationComponent_Multicast_KnifeHit = FName(TEXT("Multicast_KnifeHit"));
	void ULacerationComponent::Multicast_KnifeHit(float newLaceration, bool causedDamage, bool causedKo, FVector const& impactLocation, FVector const& impactNormal)
	{
		LacerationComponent_eventMulticast_KnifeHit_Parms Parms;
		Parms.newLaceration=newLaceration;
		Parms.causedDamage=causedDamage ? true : false;
		Parms.causedKo=causedKo ? true : false;
		Parms.impactLocation=impactLocation;
		Parms.impactNormal=impactNormal;
		ProcessEvent(FindFunctionChecked(NAME_ULacerationComponent_Multicast_KnifeHit),&Parms);
	}
	void ULacerationComponent::StaticRegisterNativesULacerationComponent()
	{
		UClass* Class = ULacerationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_KnifeHit", &ULacerationComponent::execMulticast_KnifeHit },
			{ "OnRepLaceration", &ULacerationComponent::execOnRepLaceration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactNormal;
		static void NewProp_causedKo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_causedKo;
		static void NewProp_causedDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_causedDamage;
		static void NewProp_isDangerous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDangerous;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lacerationPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_impactNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_impactNormal = { "impactNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LacerationComponent_eventCosmetic_OnKnifeHit_Parms, impactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_impactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_impactNormal_MetaData)) };
	void Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_causedKo_SetBit(void* Obj)
	{
		((LacerationComponent_eventCosmetic_OnKnifeHit_Parms*)Obj)->causedKo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_causedKo = { "causedKo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LacerationComponent_eventCosmetic_OnKnifeHit_Parms), &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_causedKo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_causedDamage_SetBit(void* Obj)
	{
		((LacerationComponent_eventCosmetic_OnKnifeHit_Parms*)Obj)->causedDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_causedDamage = { "causedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LacerationComponent_eventCosmetic_OnKnifeHit_Parms), &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_causedDamage_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_isDangerous_SetBit(void* Obj)
	{
		((LacerationComponent_eventCosmetic_OnKnifeHit_Parms*)Obj)->isDangerous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_isDangerous = { "isDangerous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LacerationComponent_eventCosmetic_OnKnifeHit_Parms), &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_isDangerous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_lacerationPercent = { "lacerationPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LacerationComponent_eventCosmetic_OnKnifeHit_Parms, lacerationPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_impactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_causedKo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_causedDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_isDangerous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::NewProp_lacerationPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULacerationComponent, nullptr, "Cosmetic_OnKnifeHit", nullptr, nullptr, sizeof(LacerationComponent_eventCosmetic_OnKnifeHit_Parms), Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics
	{
		static void NewProp_isDangerous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDangerous;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lacerationPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::NewProp_isDangerous_SetBit(void* Obj)
	{
		((LacerationComponent_eventCosmetic_OnLacerationChanged_Parms*)Obj)->isDangerous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::NewProp_isDangerous = { "isDangerous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LacerationComponent_eventCosmetic_OnLacerationChanged_Parms), &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::NewProp_isDangerous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::NewProp_lacerationPercent = { "lacerationPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LacerationComponent_eventCosmetic_OnLacerationChanged_Parms, lacerationPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::NewProp_isDangerous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::NewProp_lacerationPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULacerationComponent, nullptr, "Cosmetic_OnLacerationChanged", nullptr, nullptr, sizeof(LacerationComponent_eventCosmetic_OnLacerationChanged_Parms), Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics
	{
		static void NewProp_isDangerous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDangerous;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lacerationPercent;
		static void NewProp_isLocallyObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocallyObserved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_isDangerous_SetBit(void* Obj)
	{
		((LacerationComponent_eventCosmetic_OnLocallyObservedChanged_Parms*)Obj)->isDangerous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_isDangerous = { "isDangerous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LacerationComponent_eventCosmetic_OnLocallyObservedChanged_Parms), &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_isDangerous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_lacerationPercent = { "lacerationPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LacerationComponent_eventCosmetic_OnLocallyObservedChanged_Parms, lacerationPercent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_isLocallyObserved_SetBit(void* Obj)
	{
		((LacerationComponent_eventCosmetic_OnLocallyObservedChanged_Parms*)Obj)->isLocallyObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_isLocallyObserved = { "isLocallyObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LacerationComponent_eventCosmetic_OnLocallyObservedChanged_Parms), &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_isLocallyObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_isDangerous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_lacerationPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::NewProp_isLocallyObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULacerationComponent, nullptr, "Cosmetic_OnLocallyObservedChanged", nullptr, nullptr, sizeof(LacerationComponent_eventCosmetic_OnLocallyObservedChanged_Parms), Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactLocation;
		static void NewProp_causedKo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_causedKo;
		static void NewProp_causedDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_causedDamage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newLaceration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactNormal = { "impactNormal", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LacerationComponent_eventMulticast_KnifeHit_Parms, impactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactLocation = { "impactLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LacerationComponent_eventMulticast_KnifeHit_Parms, impactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactLocation_MetaData)) };
	void Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_causedKo_SetBit(void* Obj)
	{
		((LacerationComponent_eventMulticast_KnifeHit_Parms*)Obj)->causedKo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_causedKo = { "causedKo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LacerationComponent_eventMulticast_KnifeHit_Parms), &Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_causedKo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_causedDamage_SetBit(void* Obj)
	{
		((LacerationComponent_eventMulticast_KnifeHit_Parms*)Obj)->causedDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_causedDamage = { "causedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LacerationComponent_eventMulticast_KnifeHit_Parms), &Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_causedDamage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_newLaceration = { "newLaceration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LacerationComponent_eventMulticast_KnifeHit_Parms, newLaceration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_impactLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_causedKo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_causedDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::NewProp_newLaceration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULacerationComponent, nullptr, "Multicast_KnifeHit", nullptr, nullptr, sizeof(LacerationComponent_eventMulticast_KnifeHit_Parms), Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics
	{
		struct LacerationComponent_eventOnRepLaceration_Parms
		{
			float oldLaceration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldLaceration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::NewProp_oldLaceration = { "oldLaceration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LacerationComponent_eventOnRepLaceration_Parms, oldLaceration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::NewProp_oldLaceration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULacerationComponent, nullptr, "OnRepLaceration", nullptr, nullptr, sizeof(LacerationComponent_eventOnRepLaceration_Parms), Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULacerationComponent_OnRepLaceration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULacerationComponent_OnRepLaceration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULacerationComponent_NoRegister()
	{
		return ULacerationComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULacerationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__thresholdForGraceTimerScoreEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__thresholdForGraceTimerScoreEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationToRemoveOnBasicAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lacerationToRemoveOnBasicAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__regressionBufferTimerAlwaysTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__regressionBufferTimerAlwaysTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBeforeLacerationDecayStarts_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeBeforeLacerationDecayStarts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stopTickingRegressionWithinTerrorRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stopTickingRegressionWithinTerrorRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stopTickingRegressionWhileInChase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stopTickingRegressionWhileInChase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stopTickingRegressionWhileInjured_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stopTickingRegressionWhileInjured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedBoostDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__speedBoostDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedBoostIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__speedBoostIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationRegressionPerSecondWhileRunning_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lacerationRegressionPerSecondWhileRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationRegressionPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lacerationRegressionPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lacerationExplosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxLaceration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxLaceration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onHitSpeedBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onHitSpeedBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__laceration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__laceration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULacerationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULacerationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnKnifeHit, "Cosmetic_OnKnifeHit" }, // 2426208720
		{ &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLacerationChanged, "Cosmetic_OnLacerationChanged" }, // 382831405
		{ &Z_Construct_UFunction_ULacerationComponent_Cosmetic_OnLocallyObservedChanged, "Cosmetic_OnLocallyObservedChanged" }, // 3023448606
		{ &Z_Construct_UFunction_ULacerationComponent_Multicast_KnifeHit, "Multicast_KnifeHit" }, // 380075351
		{ &Z_Construct_UFunction_ULacerationComponent_OnRepLaceration, "OnRepLaceration" }, // 2560576642
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LacerationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__thresholdForGraceTimerScoreEvent_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__thresholdForGraceTimerScoreEvent = { "_thresholdForGraceTimerScoreEvent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _thresholdForGraceTimerScoreEvent), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__thresholdForGraceTimerScoreEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__thresholdForGraceTimerScoreEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationToRemoveOnBasicAttack_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationToRemoveOnBasicAttack = { "_lacerationToRemoveOnBasicAttack", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _lacerationToRemoveOnBasicAttack), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationToRemoveOnBasicAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationToRemoveOnBasicAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__regressionBufferTimerAlwaysTicks_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__regressionBufferTimerAlwaysTicks = { "_regressionBufferTimerAlwaysTicks", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _regressionBufferTimerAlwaysTicks), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__regressionBufferTimerAlwaysTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__regressionBufferTimerAlwaysTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__timeBeforeLacerationDecayStarts_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__timeBeforeLacerationDecayStarts = { "_timeBeforeLacerationDecayStarts", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _timeBeforeLacerationDecayStarts), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__timeBeforeLacerationDecayStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__timeBeforeLacerationDecayStarts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWithinTerrorRadius_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWithinTerrorRadius = { "_stopTickingRegressionWithinTerrorRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _stopTickingRegressionWithinTerrorRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWithinTerrorRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWithinTerrorRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInChase_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInChase = { "_stopTickingRegressionWhileInChase", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _stopTickingRegressionWhileInChase), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInChase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInChase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInjured_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInjured = { "_stopTickingRegressionWhileInjured", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _stopTickingRegressionWhileInjured), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInjured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInjured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostDuration_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostDuration = { "_speedBoostDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _speedBoostDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostIntensity_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostIntensity = { "_speedBoostIntensity", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _speedBoostIntensity), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecondWhileRunning_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecondWhileRunning = { "_lacerationRegressionPerSecondWhileRunning", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _lacerationRegressionPerSecondWhileRunning), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecondWhileRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecondWhileRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecond_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecond = { "_lacerationRegressionPerSecond", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _lacerationRegressionPerSecond), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationExplosionDamage_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationExplosionDamage = { "_lacerationExplosionDamage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _lacerationExplosionDamage), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationExplosionDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__maxLaceration_MetaData[] = {
		{ "Category", "LacerationComponent" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__maxLaceration = { "_maxLaceration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _maxLaceration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__maxLaceration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__maxLaceration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__onHitSpeedBoost_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__onHitSpeedBoost = { "_onHitSpeedBoost", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _onHitSpeedBoost), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__onHitSpeedBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__onHitSpeedBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationComponent_Statics::NewProp__laceration_MetaData[] = {
		{ "ModuleRelativePath", "Public/LacerationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULacerationComponent_Statics::NewProp__laceration = { "_laceration", "OnRepLaceration", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationComponent, _laceration), METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__laceration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::NewProp__laceration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULacerationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__thresholdForGraceTimerScoreEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationToRemoveOnBasicAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__regressionBufferTimerAlwaysTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__timeBeforeLacerationDecayStarts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWithinTerrorRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInChase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__stopTickingRegressionWhileInjured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__speedBoostIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecondWhileRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationRegressionPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__lacerationExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__maxLaceration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__onHitSpeedBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationComponent_Statics::NewProp__laceration,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULacerationComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULacerationUIData_NoRegister, (int32)VTABLE_OFFSET(ULacerationComponent, ILacerationUIData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULacerationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULacerationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULacerationComponent_Statics::ClassParams = {
		&ULacerationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULacerationComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULacerationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULacerationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULacerationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULacerationComponent, 1157792534);
	template<> THEK23_API UClass* StaticClass<ULacerationComponent>()
	{
		return ULacerationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULacerationComponent(Z_Construct_UClass_ULacerationComponent, &ULacerationComponent::StaticClass, TEXT("/Script/TheK23"), TEXT("ULacerationComponent"), false, nullptr, nullptr, nullptr);

	void ULacerationComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__laceration(TEXT("_laceration"));

		const bool bIsValid = true
			&& Name__laceration == ClassReps[(int32)ENetFields_Private::_laceration].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULacerationComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULacerationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
