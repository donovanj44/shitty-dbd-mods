// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24Power.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24Power() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_AK24Power_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_AK24Power();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UEnum* Z_Construct_UEnum_TheK24_EContaminator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABreakableBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APallet_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
	THEK24_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEK24_API UClass* Z_Construct_UClass_USurvivorContaminationComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AK24Power::execAuthority_OnSurvivorContaminated)
	{
		P_GET_ENUM(EContaminator,Z_Param_contaminator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorContaminated(EContaminator(Z_Param_contaminator));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execGetPowerLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPowerLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execGetWhipLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWhipLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execIsInPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execMulticast_PowerDestroyBreakable)
	{
		P_GET_OBJECT(ABreakableBase,Z_Param_breakable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PowerDestroyBreakable_Implementation(Z_Param_breakable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execMulticast_PowerDestroyPallet)
	{
		P_GET_OBJECT(APallet,Z_Param_pallet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PowerDestroyPallet_Implementation(Z_Param_pallet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execOnRep_PowerLevelPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PowerLevelPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execServer_KillAZombie)
	{
		P_GET_OBJECT(AZombieCharacter,Z_Param_zombie);
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_KillAZombie_Implementation(Z_Param_zombie,EAttackType(Z_Param_attackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execServer_PowerDestroyBreakable)
	{
		P_GET_OBJECT(ABreakableBase,Z_Param_breakable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_PowerDestroyBreakable_Implementation(Z_Param_breakable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK24Power::execServer_PowerDestroyPallet)
	{
		P_GET_OBJECT(APallet,Z_Param_pallet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_PowerDestroyPallet_Implementation(Z_Param_pallet);
		P_NATIVE_END;
	}
	static FName NAME_AK24Power_Multicast_PowerDestroyBreakable = FName(TEXT("Multicast_PowerDestroyBreakable"));
	void AK24Power::Multicast_PowerDestroyBreakable(ABreakableBase* breakable)
	{
		K24Power_eventMulticast_PowerDestroyBreakable_Parms Parms;
		Parms.breakable=breakable;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_Multicast_PowerDestroyBreakable),&Parms);
	}
	static FName NAME_AK24Power_Multicast_PowerDestroyPallet = FName(TEXT("Multicast_PowerDestroyPallet"));
	void AK24Power::Multicast_PowerDestroyPallet(APallet* pallet)
	{
		K24Power_eventMulticast_PowerDestroyPallet_Parms Parms;
		Parms.pallet=pallet;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_Multicast_PowerDestroyPallet),&Parms);
	}
	static FName NAME_AK24Power_OnPowerLevelChanged_Cosmetic = FName(TEXT("OnPowerLevelChanged_Cosmetic"));
	void AK24Power::OnPowerLevelChanged_Cosmetic(const int32 powerLevel)
	{
		K24Power_eventOnPowerLevelChanged_Cosmetic_Parms Parms;
		Parms.powerLevel=powerLevel;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_OnPowerLevelChanged_Cosmetic),&Parms);
	}
	static FName NAME_AK24Power_OnPowerStartCharge_Cosmetic = FName(TEXT("OnPowerStartCharge_Cosmetic"));
	void AK24Power::OnPowerStartCharge_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_OnPowerStartCharge_Cosmetic),NULL);
	}
	static FName NAME_AK24Power_OnPowerStop_Cosmetic = FName(TEXT("OnPowerStop_Cosmetic"));
	void AK24Power::OnPowerStop_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_OnPowerStop_Cosmetic),NULL);
	}
	static FName NAME_AK24Power_PowerCooldownEnd_Cosmetic = FName(TEXT("PowerCooldownEnd_Cosmetic"));
	void AK24Power::PowerCooldownEnd_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_PowerCooldownEnd_Cosmetic),NULL);
	}
	static FName NAME_AK24Power_PowerHitStateEnd_Cosmetic = FName(TEXT("PowerHitStateEnd_Cosmetic"));
	void AK24Power::PowerHitStateEnd_Cosmetic(FVector whipStartLocation, FVector whipEndLocation)
	{
		K24Power_eventPowerHitStateEnd_Cosmetic_Parms Parms;
		Parms.whipStartLocation=whipStartLocation;
		Parms.whipEndLocation=whipEndLocation;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_PowerHitStateEnd_Cosmetic),&Parms);
	}
	static FName NAME_AK24Power_Server_KillAZombie = FName(TEXT("Server_KillAZombie"));
	void AK24Power::Server_KillAZombie(AZombieCharacter* zombie, EAttackType attackType)
	{
		K24Power_eventServer_KillAZombie_Parms Parms;
		Parms.zombie=zombie;
		Parms.attackType=attackType;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_Server_KillAZombie),&Parms);
	}
	static FName NAME_AK24Power_Server_PowerDestroyBreakable = FName(TEXT("Server_PowerDestroyBreakable"));
	void AK24Power::Server_PowerDestroyBreakable(ABreakableBase* breakable)
	{
		K24Power_eventServer_PowerDestroyBreakable_Parms Parms;
		Parms.breakable=breakable;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_Server_PowerDestroyBreakable),&Parms);
	}
	static FName NAME_AK24Power_Server_PowerDestroyPallet = FName(TEXT("Server_PowerDestroyPallet"));
	void AK24Power::Server_PowerDestroyPallet(APallet* pallet)
	{
		K24Power_eventServer_PowerDestroyPallet_Parms Parms;
		Parms.pallet=pallet;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_Server_PowerDestroyPallet),&Parms);
	}
	static FName NAME_AK24Power_WhipAttackEnd_Cosmetic = FName(TEXT("WhipAttackEnd_Cosmetic"));
	void AK24Power::WhipAttackEnd_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_WhipAttackEnd_Cosmetic),NULL);
	}
	static FName NAME_AK24Power_WhipAttackHit_Cosmetic = FName(TEXT("WhipAttackHit_Cosmetic"));
	void AK24Power::WhipAttackHit_Cosmetic(FVector whipStartLocation, FVector impactPointLocation, FVector whipEndLocation, bool isFirstHit, FVector impactNormal, const FName phyMaterial, bool hitACharacter)
	{
		K24Power_eventWhipAttackHit_Cosmetic_Parms Parms;
		Parms.whipStartLocation=whipStartLocation;
		Parms.impactPointLocation=impactPointLocation;
		Parms.whipEndLocation=whipEndLocation;
		Parms.isFirstHit=isFirstHit ? true : false;
		Parms.impactNormal=impactNormal;
		Parms.phyMaterial=phyMaterial;
		Parms.hitACharacter=hitACharacter ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_WhipAttackHit_Cosmetic),&Parms);
	}
	static FName NAME_AK24Power_WhipAttackMove_Cosmetic = FName(TEXT("WhipAttackMove_Cosmetic"));
	void AK24Power::WhipAttackMove_Cosmetic(FVector whipStartLocation, FVector whipEndLocation, bool isFirstRayCast)
	{
		K24Power_eventWhipAttackMove_Cosmetic_Parms Parms;
		Parms.whipStartLocation=whipStartLocation;
		Parms.whipEndLocation=whipEndLocation;
		Parms.isFirstRayCast=isFirstRayCast ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_WhipAttackMove_Cosmetic),&Parms);
	}
	static FName NAME_AK24Power_WhipAttackStart_Cosmetic = FName(TEXT("WhipAttackStart_Cosmetic"));
	void AK24Power::WhipAttackStart_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK24Power_WhipAttackStart_Cosmetic),NULL);
	}
	void AK24Power::StaticRegisterNativesAK24Power()
	{
		UClass* Class = AK24Power::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSurvivorContaminated", &AK24Power::execAuthority_OnSurvivorContaminated },
			{ "GetPowerLevel", &AK24Power::execGetPowerLevel },
			{ "GetWhipLength", &AK24Power::execGetWhipLength },
			{ "IsInPower", &AK24Power::execIsInPower },
			{ "Multicast_PowerDestroyBreakable", &AK24Power::execMulticast_PowerDestroyBreakable },
			{ "Multicast_PowerDestroyPallet", &AK24Power::execMulticast_PowerDestroyPallet },
			{ "OnRep_PowerLevelPoints", &AK24Power::execOnRep_PowerLevelPoints },
			{ "Server_KillAZombie", &AK24Power::execServer_KillAZombie },
			{ "Server_PowerDestroyBreakable", &AK24Power::execServer_PowerDestroyBreakable },
			{ "Server_PowerDestroyPallet", &AK24Power::execServer_PowerDestroyPallet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics
	{
		struct K24Power_eventAuthority_OnSurvivorContaminated_Parms
		{
			EContaminator contaminator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contaminator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_contaminator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_contaminator_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::NewProp_contaminator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::NewProp_contaminator = { "contaminator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventAuthority_OnSurvivorContaminated_Parms, contaminator), Z_Construct_UEnum_TheK24_EContaminator, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::NewProp_contaminator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::NewProp_contaminator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::NewProp_contaminator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::NewProp_contaminator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::NewProp_contaminator_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "Authority_OnSurvivorContaminated", nullptr, nullptr, sizeof(K24Power_eventAuthority_OnSurvivorContaminated_Parms), Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics
	{
		struct K24Power_eventGetPowerLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventGetPowerLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "GetPowerLevel", nullptr, nullptr, sizeof(K24Power_eventGetPowerLevel_Parms), Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_GetPowerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_GetPowerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_GetWhipLength_Statics
	{
		struct K24Power_eventGetWhipLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventGetWhipLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "GetWhipLength", nullptr, nullptr, sizeof(K24Power_eventGetWhipLength_Parms), Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_GetWhipLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_GetWhipLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_IsInPower_Statics
	{
		struct K24Power_eventIsInPower_Parms
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
	void Z_Construct_UFunction_AK24Power_IsInPower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((K24Power_eventIsInPower_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK24Power_IsInPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K24Power_eventIsInPower_Parms), &Z_Construct_UFunction_AK24Power_IsInPower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_IsInPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_IsInPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_IsInPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_IsInPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "IsInPower", nullptr, nullptr, sizeof(K24Power_eventIsInPower_Parms), Z_Construct_UFunction_AK24Power_IsInPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_IsInPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_IsInPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_IsInPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_IsInPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_IsInPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_breakable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::NewProp_breakable = { "breakable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventMulticast_PowerDestroyBreakable_Parms, breakable), Z_Construct_UClass_ABreakableBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::NewProp_breakable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "Multicast_PowerDestroyBreakable", nullptr, nullptr, sizeof(K24Power_eventMulticast_PowerDestroyBreakable_Parms), Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pallet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::NewProp_pallet = { "pallet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventMulticast_PowerDestroyPallet_Parms, pallet), Z_Construct_UClass_APallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::NewProp_pallet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "Multicast_PowerDestroyPallet", nullptr, nullptr, sizeof(K24Power_eventMulticast_PowerDestroyPallet_Parms), Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_powerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::NewProp_powerLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::NewProp_powerLevel = { "powerLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventOnPowerLevelChanged_Cosmetic_Parms, powerLevel), METADATA_PARAMS(Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::NewProp_powerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::NewProp_powerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::NewProp_powerLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "OnPowerLevelChanged_Cosmetic", nullptr, nullptr, sizeof(K24Power_eventOnPowerLevelChanged_Cosmetic_Parms), Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_OnPowerStartCharge_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_OnPowerStartCharge_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_OnPowerStartCharge_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "OnPowerStartCharge_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_OnPowerStartCharge_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_OnPowerStartCharge_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_OnPowerStartCharge_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_OnPowerStartCharge_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_OnPowerStop_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_OnPowerStop_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_OnPowerStop_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "OnPowerStop_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_OnPowerStop_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_OnPowerStop_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_OnPowerStop_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_OnPowerStop_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_OnRep_PowerLevelPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_OnRep_PowerLevelPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_OnRep_PowerLevelPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "OnRep_PowerLevelPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_OnRep_PowerLevelPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_OnRep_PowerLevelPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_OnRep_PowerLevelPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_OnRep_PowerLevelPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_PowerCooldownEnd_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_PowerCooldownEnd_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_PowerCooldownEnd_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "PowerCooldownEnd_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_PowerCooldownEnd_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_PowerCooldownEnd_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_PowerCooldownEnd_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_PowerCooldownEnd_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_whipEndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_whipStartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::NewProp_whipEndLocation = { "whipEndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventPowerHitStateEnd_Cosmetic_Parms, whipEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::NewProp_whipStartLocation = { "whipStartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventPowerHitStateEnd_Cosmetic_Parms, whipStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::NewProp_whipEndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::NewProp_whipStartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "PowerHitStateEnd_Cosmetic", nullptr, nullptr, sizeof(K24Power_eventPowerHitStateEnd_Cosmetic_Parms), Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zombie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventServer_KillAZombie_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::NewProp_zombie = { "zombie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventServer_KillAZombie_Parms, zombie), Z_Construct_UClass_AZombieCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::NewProp_attackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::NewProp_zombie,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "Server_KillAZombie", nullptr, nullptr, sizeof(K24Power_eventServer_KillAZombie_Parms), Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_Server_KillAZombie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_Server_KillAZombie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_breakable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::NewProp_breakable = { "breakable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventServer_PowerDestroyBreakable_Parms, breakable), Z_Construct_UClass_ABreakableBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::NewProp_breakable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "Server_PowerDestroyBreakable", nullptr, nullptr, sizeof(K24Power_eventServer_PowerDestroyBreakable_Parms), Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pallet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::NewProp_pallet = { "pallet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventServer_PowerDestroyPallet_Parms, pallet), Z_Construct_UClass_APallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::NewProp_pallet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "Server_PowerDestroyPallet", nullptr, nullptr, sizeof(K24Power_eventServer_PowerDestroyPallet_Parms), Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_WhipAttackEnd_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_WhipAttackEnd_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_WhipAttackEnd_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "WhipAttackEnd_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_WhipAttackEnd_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_WhipAttackEnd_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_WhipAttackEnd_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_WhipAttackEnd_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics
	{
		static void NewProp_hitACharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hitACharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phyMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_phyMaterial;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactNormal;
		static void NewProp_isFirstHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFirstHit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_whipEndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactPointLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_whipStartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_hitACharacter_SetBit(void* Obj)
	{
		((K24Power_eventWhipAttackHit_Cosmetic_Parms*)Obj)->hitACharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_hitACharacter = { "hitACharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K24Power_eventWhipAttackHit_Cosmetic_Parms), &Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_hitACharacter_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_phyMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_phyMaterial = { "phyMaterial", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventWhipAttackHit_Cosmetic_Parms, phyMaterial), METADATA_PARAMS(Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_phyMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_phyMaterial_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_impactNormal = { "impactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventWhipAttackHit_Cosmetic_Parms, impactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_isFirstHit_SetBit(void* Obj)
	{
		((K24Power_eventWhipAttackHit_Cosmetic_Parms*)Obj)->isFirstHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_isFirstHit = { "isFirstHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K24Power_eventWhipAttackHit_Cosmetic_Parms), &Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_isFirstHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_whipEndLocation = { "whipEndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventWhipAttackHit_Cosmetic_Parms, whipEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_impactPointLocation = { "impactPointLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventWhipAttackHit_Cosmetic_Parms, impactPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_whipStartLocation = { "whipStartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventWhipAttackHit_Cosmetic_Parms, whipStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_hitACharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_phyMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_impactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_isFirstHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_whipEndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_impactPointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::NewProp_whipStartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "WhipAttackHit_Cosmetic", nullptr, nullptr, sizeof(K24Power_eventWhipAttackHit_Cosmetic_Parms), Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics
	{
		static void NewProp_isFirstRayCast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFirstRayCast;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_whipEndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_whipStartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::NewProp_isFirstRayCast_SetBit(void* Obj)
	{
		((K24Power_eventWhipAttackMove_Cosmetic_Parms*)Obj)->isFirstRayCast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::NewProp_isFirstRayCast = { "isFirstRayCast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K24Power_eventWhipAttackMove_Cosmetic_Parms), &Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::NewProp_isFirstRayCast_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::NewProp_whipEndLocation = { "whipEndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventWhipAttackMove_Cosmetic_Parms, whipEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::NewProp_whipStartLocation = { "whipStartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24Power_eventWhipAttackMove_Cosmetic_Parms, whipStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::NewProp_isFirstRayCast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::NewProp_whipEndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::NewProp_whipStartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "WhipAttackMove_Cosmetic", nullptr, nullptr, sizeof(K24Power_eventWhipAttackMove_Cosmetic_Parms), Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK24Power_WhipAttackStart_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK24Power_WhipAttackStart_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK24Power_WhipAttackStart_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK24Power, nullptr, "WhipAttackStart_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK24Power_WhipAttackStart_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK24Power_WhipAttackStart_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK24Power_WhipAttackStart_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK24Power_WhipAttackStart_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK24Power_NoRegister()
	{
		return AK24Power::StaticClass();
	}
	struct Z_Construct_UClass_AK24Power_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerLevelPointsToLevel3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerLevelPointsToLevel3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerLevelPointsToLevel2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerLevelPointsToLevel2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerLevelPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__powerLevelPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerChargeSurvivorHitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerChargeSurvivorHitPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerChargeZombieKilledPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerChargeZombieKilledPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerChargeSurvivorContaminatedPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerChargeSurvivorContaminatedPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contaminationComponentBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__contaminationComponentBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__whipLengthLevel3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__whipLengthLevel3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__whipLengthLevel2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__whipLengthLevel2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__whipLengthLevel1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__whipLengthLevel1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k24PowerCooldownInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k24PowerCooldownInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activatePowerChargeLvl3SpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activatePowerChargeLvl3SpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activatePowerChargeSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activatePowerChargeSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activateK24PowerSecondsToCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activateK24PowerSecondsToCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activateK24PowerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activateK24PowerCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerGamePadYawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerGamePadYawScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerYawAdjustTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerYawAdjustTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerMouseYawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerMouseYawScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normalWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__normalWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerWalkSpeedLevel3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerWalkSpeedLevel3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__powerWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK24Power_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK24Power_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK24Power_Authority_OnSurvivorContaminated, "Authority_OnSurvivorContaminated" }, // 3415870686
		{ &Z_Construct_UFunction_AK24Power_GetPowerLevel, "GetPowerLevel" }, // 3879631842
		{ &Z_Construct_UFunction_AK24Power_GetWhipLength, "GetWhipLength" }, // 3623370822
		{ &Z_Construct_UFunction_AK24Power_IsInPower, "IsInPower" }, // 1426943006
		{ &Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyBreakable, "Multicast_PowerDestroyBreakable" }, // 3628976879
		{ &Z_Construct_UFunction_AK24Power_Multicast_PowerDestroyPallet, "Multicast_PowerDestroyPallet" }, // 4146383261
		{ &Z_Construct_UFunction_AK24Power_OnPowerLevelChanged_Cosmetic, "OnPowerLevelChanged_Cosmetic" }, // 2159706819
		{ &Z_Construct_UFunction_AK24Power_OnPowerStartCharge_Cosmetic, "OnPowerStartCharge_Cosmetic" }, // 3991770466
		{ &Z_Construct_UFunction_AK24Power_OnPowerStop_Cosmetic, "OnPowerStop_Cosmetic" }, // 3003902642
		{ &Z_Construct_UFunction_AK24Power_OnRep_PowerLevelPoints, "OnRep_PowerLevelPoints" }, // 3600149745
		{ &Z_Construct_UFunction_AK24Power_PowerCooldownEnd_Cosmetic, "PowerCooldownEnd_Cosmetic" }, // 3864850123
		{ &Z_Construct_UFunction_AK24Power_PowerHitStateEnd_Cosmetic, "PowerHitStateEnd_Cosmetic" }, // 1504997435
		{ &Z_Construct_UFunction_AK24Power_Server_KillAZombie, "Server_KillAZombie" }, // 1682107832
		{ &Z_Construct_UFunction_AK24Power_Server_PowerDestroyBreakable, "Server_PowerDestroyBreakable" }, // 3859988226
		{ &Z_Construct_UFunction_AK24Power_Server_PowerDestroyPallet, "Server_PowerDestroyPallet" }, // 1305171479
		{ &Z_Construct_UFunction_AK24Power_WhipAttackEnd_Cosmetic, "WhipAttackEnd_Cosmetic" }, // 896069832
		{ &Z_Construct_UFunction_AK24Power_WhipAttackHit_Cosmetic, "WhipAttackHit_Cosmetic" }, // 3043139342
		{ &Z_Construct_UFunction_AK24Power_WhipAttackMove_Cosmetic, "WhipAttackMove_Cosmetic" }, // 4100634533
		{ &Z_Construct_UFunction_AK24Power_WhipAttackStart_Cosmetic, "WhipAttackStart_Cosmetic" }, // 1970281561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K24Power.h" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel3_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel3 = { "_powerLevelPointsToLevel3", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerLevelPointsToLevel3), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel2_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel2 = { "_powerLevelPointsToLevel2", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerLevelPointsToLevel2), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPoints = { "_powerLevelPoints", "OnRep_PowerLevelPoints", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerLevelPoints), METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorHitPoint_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorHitPoint = { "_powerChargeSurvivorHitPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerChargeSurvivorHitPoint), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorHitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorHitPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeZombieKilledPoint_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeZombieKilledPoint = { "_powerChargeZombieKilledPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerChargeZombieKilledPoint), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeZombieKilledPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeZombieKilledPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorContaminatedPoint_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorContaminatedPoint = { "_powerChargeSurvivorContaminatedPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerChargeSurvivorContaminatedPoint), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorContaminatedPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorContaminatedPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__contaminationComponentBP_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__contaminationComponentBP = { "_contaminationComponentBP", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _contaminationComponentBP), Z_Construct_UClass_USurvivorContaminationComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__contaminationComponentBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__contaminationComponentBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel3_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel3 = { "_whipLengthLevel3", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _whipLengthLevel3), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel2_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel2 = { "_whipLengthLevel2", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _whipLengthLevel2), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel1_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel1 = { "_whipLengthLevel1", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _whipLengthLevel1), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__k24PowerCooldownInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "K24Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__k24PowerCooldownInteraction = { "_k24PowerCooldownInteraction", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _k24PowerCooldownInteraction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__k24PowerCooldownInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__k24PowerCooldownInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeLvl3SpeedCurve_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeLvl3SpeedCurve = { "_activatePowerChargeLvl3SpeedCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _activatePowerChargeLvl3SpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeLvl3SpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeLvl3SpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeSpeedCurve_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeSpeedCurve = { "_activatePowerChargeSpeedCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _activatePowerChargeSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerSecondsToCharge_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerSecondsToCharge = { "_activateK24PowerSecondsToCharge", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _activateK24PowerSecondsToCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerSecondsToCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerSecondsToCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "K24Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerCharge = { "_activateK24PowerCharge", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _activateK24PowerCharge), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerGamePadYawScale_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerGamePadYawScale = { "_powerGamePadYawScale", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerGamePadYawScale), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerGamePadYawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerGamePadYawScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerYawAdjustTime_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerYawAdjustTime = { "_powerYawAdjustTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerYawAdjustTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerYawAdjustTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerYawAdjustTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerMouseYawScale_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerMouseYawScale = { "_powerMouseYawScale", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerMouseYawScale), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerMouseYawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerMouseYawScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__normalWalkSpeed_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__normalWalkSpeed = { "_normalWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _normalWalkSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__normalWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__normalWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeedLevel3_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeedLevel3 = { "_powerWalkSpeedLevel3", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerWalkSpeedLevel3), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeedLevel3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeedLevel3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeed_MetaData[] = {
		{ "Category", "K24Power" },
		{ "ModuleRelativePath", "Public/K24Power.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeed = { "_powerWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK24Power, _powerWalkSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK24Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPointsToLevel2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerLevelPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorHitPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeZombieKilledPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerChargeSurvivorContaminatedPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__contaminationComponentBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__whipLengthLevel1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__k24PowerCooldownInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeLvl3SpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__activatePowerChargeSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerSecondsToCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__activateK24PowerCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerGamePadYawScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerYawAdjustTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerMouseYawScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__normalWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeedLevel3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK24Power_Statics::NewProp__powerWalkSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK24Power_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK24Power>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK24Power_Statics::ClassParams = {
		&AK24Power::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK24Power_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK24Power_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK24Power_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK24Power()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK24Power_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK24Power, 1499713365);
	template<> THEK24_API UClass* StaticClass<AK24Power>()
	{
		return AK24Power::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK24Power(Z_Construct_UClass_AK24Power, &AK24Power::StaticClass, TEXT("/Script/TheK24"), TEXT("AK24Power"), false, nullptr, nullptr, nullptr);

	void AK24Power::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__powerLevelPoints(TEXT("_powerLevelPoints"));

		const bool bIsValid = true
			&& Name__powerLevelPoints == ClassReps[(int32)ENetFields_Private::_powerLevelPoints].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK24Power"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK24Power);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
