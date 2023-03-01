// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorAttackableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorAttackableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorAttackableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorAttackableComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAttackableComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorAttackableComponent::execAuthority_HitCosmetic)
	{
		P_GET_OBJECT(AActor,Z_Param_attacker);
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_GET_UBOOL(Z_Param_causeKO);
		P_GET_UBOOL(Z_Param_isWeaponHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_HitCosmetic(Z_Param_attacker,EAttackType(Z_Param_attackType),Z_Param_causeKO,Z_Param_isWeaponHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorAttackableComponent::execMulticast_HitCosmetic)
	{
		P_GET_OBJECT(AActor,Z_Param_attacker);
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_GET_UBOOL(Z_Param_causedKO);
		P_GET_UBOOL(Z_Param_isWeaponHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_HitCosmetic_Implementation(Z_Param_attacker,EAttackType(Z_Param_attackType),Z_Param_causedKO,Z_Param_isWeaponHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorAttackableComponent::execMulticast_HitCosmetic_NonLocal)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_attacker);
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_GET_UBOOL(Z_Param_causedKO);
		P_GET_UBOOL(Z_Param_isWeaponHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_HitCosmetic_NonLocal_Implementation(Z_Param_attacker,EAttackType(Z_Param_attackType),Z_Param_causedKO,Z_Param_isWeaponHit);
		P_NATIVE_END;
	}
	static FName NAME_USurvivorAttackableComponent_Multicast_HitCosmetic = FName(TEXT("Multicast_HitCosmetic"));
	void USurvivorAttackableComponent::Multicast_HitCosmetic(const AActor* attacker, EAttackType attackType, bool causedKO, bool isWeaponHit)
	{
		SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms Parms;
		Parms.attacker=attacker;
		Parms.attackType=attackType;
		Parms.causedKO=causedKO ? true : false;
		Parms.isWeaponHit=isWeaponHit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorAttackableComponent_Multicast_HitCosmetic),&Parms);
	}
	static FName NAME_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal = FName(TEXT("Multicast_HitCosmetic_NonLocal"));
	void USurvivorAttackableComponent::Multicast_HitCosmetic_NonLocal(const ADBDPlayer* attacker, EAttackType attackType, bool causedKO, bool isWeaponHit)
	{
		SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms Parms;
		Parms.attacker=attacker;
		Parms.attackType=attackType;
		Parms.causedKO=causedKO ? true : false;
		Parms.isWeaponHit=isWeaponHit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal),&Parms);
	}
	void USurvivorAttackableComponent::StaticRegisterNativesUSurvivorAttackableComponent()
	{
		UClass* Class = USurvivorAttackableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_HitCosmetic", &USurvivorAttackableComponent::execAuthority_HitCosmetic },
			{ "Multicast_HitCosmetic", &USurvivorAttackableComponent::execMulticast_HitCosmetic },
			{ "Multicast_HitCosmetic_NonLocal", &USurvivorAttackableComponent::execMulticast_HitCosmetic_NonLocal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics
	{
		struct SurvivorAttackableComponent_eventAuthority_HitCosmetic_Parms
		{
			const AActor* attacker;
			EAttackType attackType;
			bool causeKO;
			bool isWeaponHit;
		};
		static void NewProp_isWeaponHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWeaponHit;
		static void NewProp_causeKO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_causeKO;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_isWeaponHit_SetBit(void* Obj)
	{
		((SurvivorAttackableComponent_eventAuthority_HitCosmetic_Parms*)Obj)->isWeaponHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_isWeaponHit = { "isWeaponHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorAttackableComponent_eventAuthority_HitCosmetic_Parms), &Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_isWeaponHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_causeKO_SetBit(void* Obj)
	{
		((SurvivorAttackableComponent_eventAuthority_HitCosmetic_Parms*)Obj)->causeKO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_causeKO = { "causeKO", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorAttackableComponent_eventAuthority_HitCosmetic_Parms), &Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_causeKO_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAttackableComponent_eventAuthority_HitCosmetic_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attacker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attacker = { "attacker", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAttackableComponent_eventAuthority_HitCosmetic_Parms, attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attacker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_isWeaponHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_causeKO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAttackableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorAttackableComponent, nullptr, "Authority_HitCosmetic", nullptr, nullptr, sizeof(SurvivorAttackableComponent_eventAuthority_HitCosmetic_Parms), Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics
	{
		static void NewProp_isWeaponHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWeaponHit;
		static void NewProp_causedKO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_causedKO;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_isWeaponHit_SetBit(void* Obj)
	{
		((SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms*)Obj)->isWeaponHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_isWeaponHit = { "isWeaponHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms), &Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_isWeaponHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_causedKO_SetBit(void* Obj)
	{
		((SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms*)Obj)->causedKO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_causedKO = { "causedKO", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms), &Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_causedKO_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attacker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attacker = { "attacker", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms, attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attacker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_isWeaponHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_causedKO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAttackableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorAttackableComponent, nullptr, "Multicast_HitCosmetic", nullptr, nullptr, sizeof(SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms), Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics
	{
		static void NewProp_isWeaponHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWeaponHit;
		static void NewProp_causedKO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_causedKO;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_isWeaponHit_SetBit(void* Obj)
	{
		((SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms*)Obj)->isWeaponHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_isWeaponHit = { "isWeaponHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms), &Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_isWeaponHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_causedKO_SetBit(void* Obj)
	{
		((SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms*)Obj)->causedKO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_causedKO = { "causedKO", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms), &Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_causedKO_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attacker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attacker = { "attacker", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms, attacker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attacker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_isWeaponHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_causedKO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAttackableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorAttackableComponent, nullptr, "Multicast_HitCosmetic_NonLocal", nullptr, nullptr, sizeof(SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms), Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorAttackableComponent_NoRegister()
	{
		return USurvivorAttackableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorAttackableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorAttackableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttackableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorAttackableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorAttackableComponent_Authority_HitCosmetic, "Authority_HitCosmetic" }, // 1097418609
		{ &Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic, "Multicast_HitCosmetic" }, // 3175811995
		{ &Z_Construct_UFunction_USurvivorAttackableComponent_Multicast_HitCosmetic_NonLocal, "Multicast_HitCosmetic_NonLocal" }, // 1784442128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAttackableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SurvivorAttackableComponent.h" },
		{ "ModuleRelativePath", "Public/SurvivorAttackableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorAttackableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorAttackableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorAttackableComponent_Statics::ClassParams = {
		&USurvivorAttackableComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorAttackableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAttackableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorAttackableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorAttackableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorAttackableComponent, 3611719013);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USurvivorAttackableComponent>()
	{
		return USurvivorAttackableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorAttackableComponent(Z_Construct_UClass_USurvivorAttackableComponent, &USurvivorAttackableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USurvivorAttackableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorAttackableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
