// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrb() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THEONI_API UEnum* Z_Construct_UEnum_TheOni_EBloodOrbState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbFadeComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	DEFINE_FUNCTION(ABloodOrb::execAuthority_Despawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Despawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABloodOrb::execAuthority_DestroyBloodOrb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_DestroyBloodOrb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABloodOrb::execAuthority_OnDropFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnDropFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABloodOrb::execGetDroppingPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetDroppingPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABloodOrb::execOnRep_State)
	{
		P_GET_ENUM(EBloodOrbState,Z_Param_oldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State(EBloodOrbState(Z_Param_oldState));
		P_NATIVE_END;
	}
	static FName NAME_ABloodOrb_Authority_OnDropped = FName(TEXT("Authority_OnDropped"));
	void ABloodOrb::Authority_OnDropped(const ADBDPlayer* droppedBy, const float impulseFactor)
	{
		BloodOrb_eventAuthority_OnDropped_Parms Parms;
		Parms.droppedBy=droppedBy;
		Parms.impulseFactor=impulseFactor;
		ProcessEvent(FindFunctionChecked(NAME_ABloodOrb_Authority_OnDropped),&Parms);
	}
	static FName NAME_ABloodOrb_OnAbsorbedCosmetic = FName(TEXT("OnAbsorbedCosmetic"));
	void ABloodOrb::OnAbsorbedCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABloodOrb_OnAbsorbedCosmetic),NULL);
	}
	static FName NAME_ABloodOrb_OnDestroyedCosmetic = FName(TEXT("OnDestroyedCosmetic"));
	void ABloodOrb::OnDestroyedCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABloodOrb_OnDestroyedCosmetic),NULL);
	}
	static FName NAME_ABloodOrb_OnIsAttractedChangedCosmetic = FName(TEXT("OnIsAttractedChangedCosmetic"));
	void ABloodOrb::OnIsAttractedChangedCosmetic(bool isAttracted)
	{
		BloodOrb_eventOnIsAttractedChangedCosmetic_Parms Parms;
		Parms.isAttracted=isAttracted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABloodOrb_OnIsAttractedChangedCosmetic),&Parms);
	}
	static FName NAME_ABloodOrb_UpdateAbsorbed_Cosmetic = FName(TEXT("UpdateAbsorbed_Cosmetic"));
	void ABloodOrb::UpdateAbsorbed_Cosmetic(const FVector destination, ADBDPlayer* absorber, const float deltaTime)
	{
		BloodOrb_eventUpdateAbsorbed_Cosmetic_Parms Parms;
		Parms.destination=destination;
		Parms.absorber=absorber;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_ABloodOrb_UpdateAbsorbed_Cosmetic),&Parms);
	}
	static FName NAME_ABloodOrb_UpdateAttracted_Cosmetic = FName(TEXT("UpdateAttracted_Cosmetic"));
	void ABloodOrb::UpdateAttracted_Cosmetic(const FVector destination, ADBDPlayer* absorber, const float deltaTime)
	{
		BloodOrb_eventUpdateAttracted_Cosmetic_Parms Parms;
		Parms.destination=destination;
		Parms.absorber=absorber;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_ABloodOrb_UpdateAttracted_Cosmetic),&Parms);
	}
	void ABloodOrb::StaticRegisterNativesABloodOrb()
	{
		UClass* Class = ABloodOrb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_Despawn", &ABloodOrb::execAuthority_Despawn },
			{ "Authority_DestroyBloodOrb", &ABloodOrb::execAuthority_DestroyBloodOrb },
			{ "Authority_OnDropFinished", &ABloodOrb::execAuthority_OnDropFinished },
			{ "GetDroppingPlayer", &ABloodOrb::execGetDroppingPlayer },
			{ "OnRep_State", &ABloodOrb::execOnRep_State },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABloodOrb_Authority_Despawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_Authority_Despawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_Authority_Despawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "Authority_Despawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_Authority_Despawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_Authority_Despawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_Authority_Despawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_Authority_Despawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_Authority_DestroyBloodOrb_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_Authority_DestroyBloodOrb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_Authority_DestroyBloodOrb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "Authority_DestroyBloodOrb", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_Authority_DestroyBloodOrb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_Authority_DestroyBloodOrb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_Authority_DestroyBloodOrb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_Authority_DestroyBloodOrb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_Authority_OnDropFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_Authority_OnDropFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_Authority_OnDropFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "Authority_OnDropFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_Authority_OnDropFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_Authority_OnDropFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_Authority_OnDropFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_Authority_OnDropFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impulseFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_impulseFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_droppedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_droppedBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_impulseFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_impulseFactor = { "impulseFactor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventAuthority_OnDropped_Parms, impulseFactor), METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_impulseFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_impulseFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_droppedBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_droppedBy = { "droppedBy", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventAuthority_OnDropped_Parms, droppedBy), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_droppedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_droppedBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_impulseFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::NewProp_droppedBy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "Authority_OnDropped", nullptr, nullptr, sizeof(BloodOrb_eventAuthority_OnDropped_Parms), Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_Authority_OnDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_Authority_OnDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics
	{
		struct BloodOrb_eventGetDroppingPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventGetDroppingPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "GetDroppingPlayer", nullptr, nullptr, sizeof(BloodOrb_eventGetDroppingPlayer_Parms), Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_OnAbsorbedCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_OnAbsorbedCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_OnAbsorbedCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "OnAbsorbedCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_OnAbsorbedCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_OnAbsorbedCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_OnAbsorbedCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_OnAbsorbedCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_OnDestroyedCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_OnDestroyedCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_OnDestroyedCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "OnDestroyedCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_OnDestroyedCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_OnDestroyedCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_OnDestroyedCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_OnDestroyedCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttracted_MetaData[];
#endif
		static void NewProp_isAttracted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttracted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::NewProp_isAttracted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::NewProp_isAttracted_SetBit(void* Obj)
	{
		((BloodOrb_eventOnIsAttractedChangedCosmetic_Parms*)Obj)->isAttracted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::NewProp_isAttracted = { "isAttracted", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BloodOrb_eventOnIsAttractedChangedCosmetic_Parms), &Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::NewProp_isAttracted_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::NewProp_isAttracted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::NewProp_isAttracted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::NewProp_isAttracted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "OnIsAttractedChangedCosmetic", nullptr, nullptr, sizeof(BloodOrb_eventOnIsAttractedChangedCosmetic_Parms), Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics
	{
		struct BloodOrb_eventOnRep_State_Parms
		{
			EBloodOrbState oldState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::NewProp_oldState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::NewProp_oldState = { "oldState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventOnRep_State_Parms, oldState), Z_Construct_UEnum_TheOni_EBloodOrbState, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::NewProp_oldState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::NewProp_oldState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::NewProp_oldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::NewProp_oldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::NewProp_oldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "OnRep_State", nullptr, nullptr, sizeof(BloodOrb_eventOnRep_State_Parms), Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_absorber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_deltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventUpdateAbsorbed_Cosmetic_Parms, deltaTime), METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_deltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_deltaTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_absorber = { "absorber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventUpdateAbsorbed_Cosmetic_Parms, absorber), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventUpdateAbsorbed_Cosmetic_Parms, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_destination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_absorber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::NewProp_destination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "UpdateAbsorbed_Cosmetic", nullptr, nullptr, sizeof(BloodOrb_eventUpdateAbsorbed_Cosmetic_Parms), Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_absorber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_deltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventUpdateAttracted_Cosmetic_Parms, deltaTime), METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_deltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_deltaTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_absorber = { "absorber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventUpdateAttracted_Cosmetic_Parms, absorber), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrb_eventUpdateAttracted_Cosmetic_Parms, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_destination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_absorber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::NewProp_destination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodOrb, nullptr, "UpdateAttracted_Cosmetic", nullptr, nullptr, sizeof(BloodOrb_eventUpdateAttracted_Cosmetic_Parms), Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABloodOrb_NoRegister()
	{
		return ABloodOrb::StaticClass();
	}
	struct Z_Construct_UClass_ABloodOrb_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__fadeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__droppingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__droppingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__despawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__despawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__absorbReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__absorbReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__randomMoveDelayInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__randomMoveDelayInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloodOrb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABloodOrb_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloodOrb_Authority_Despawn, "Authority_Despawn" }, // 2236488884
		{ &Z_Construct_UFunction_ABloodOrb_Authority_DestroyBloodOrb, "Authority_DestroyBloodOrb" }, // 2588770890
		{ &Z_Construct_UFunction_ABloodOrb_Authority_OnDropFinished, "Authority_OnDropFinished" }, // 3345706135
		{ &Z_Construct_UFunction_ABloodOrb_Authority_OnDropped, "Authority_OnDropped" }, // 4266189656
		{ &Z_Construct_UFunction_ABloodOrb_GetDroppingPlayer, "GetDroppingPlayer" }, // 2630368651
		{ &Z_Construct_UFunction_ABloodOrb_OnAbsorbedCosmetic, "OnAbsorbedCosmetic" }, // 680478427
		{ &Z_Construct_UFunction_ABloodOrb_OnDestroyedCosmetic, "OnDestroyedCosmetic" }, // 640458313
		{ &Z_Construct_UFunction_ABloodOrb_OnIsAttractedChangedCosmetic, "OnIsAttractedChangedCosmetic" }, // 784965636
		{ &Z_Construct_UFunction_ABloodOrb_OnRep_State, "OnRep_State" }, // 3100969134
		{ &Z_Construct_UFunction_ABloodOrb_UpdateAbsorbed_Cosmetic, "UpdateAbsorbed_Cosmetic" }, // 4234241034
		{ &Z_Construct_UFunction_ABloodOrb_UpdateAttracted_Cosmetic, "UpdateAttracted_Cosmetic" }, // 989795181
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodOrb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodOrb.h" },
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodOrb_Statics::NewProp__fadeComponent_MetaData[] = {
		{ "Category", "BloodOrb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodOrb_Statics::NewProp__fadeComponent = { "_fadeComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloodOrb, _fadeComponent), Z_Construct_UClass_UBloodOrbFadeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloodOrb_Statics::NewProp__fadeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::NewProp__fadeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodOrb_Statics::NewProp__state_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABloodOrb_Statics::NewProp__state = { "_state", "OnRep_State", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloodOrb, _state), Z_Construct_UEnum_TheOni_EBloodOrbState, METADATA_PARAMS(Z_Construct_UClass_ABloodOrb_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::NewProp__state_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABloodOrb_Statics::NewProp__state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodOrb_Statics::NewProp__droppingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ABloodOrb_Statics::NewProp__droppingPlayer = { "_droppingPlayer", nullptr, (EPropertyFlags)0x0044000000002020, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloodOrb, _droppingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloodOrb_Statics::NewProp__droppingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::NewProp__droppingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodOrb_Statics::NewProp__despawnDelay_MetaData[] = {
		{ "Category", "BloodOrb" },
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloodOrb_Statics::NewProp__despawnDelay = { "_despawnDelay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloodOrb, _despawnDelay), METADATA_PARAMS(Z_Construct_UClass_ABloodOrb_Statics::NewProp__despawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::NewProp__despawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodOrb_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "Category", "BloodOrb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodOrb_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloodOrb, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloodOrb_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodOrb_Statics::NewProp__absorbReference_MetaData[] = {
		{ "Category", "BloodOrb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodOrb_Statics::NewProp__absorbReference = { "_absorbReference", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloodOrb, _absorbReference), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloodOrb_Statics::NewProp__absorbReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::NewProp__absorbReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodOrb_Statics::NewProp__randomMoveDelayInterval_MetaData[] = {
		{ "Category", "BloodOrb" },
		{ "ModuleRelativePath", "Public/BloodOrb.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABloodOrb_Statics::NewProp__randomMoveDelayInterval = { "_randomMoveDelayInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloodOrb, _randomMoveDelayInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ABloodOrb_Statics::NewProp__randomMoveDelayInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::NewProp__randomMoveDelayInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloodOrb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodOrb_Statics::NewProp__fadeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodOrb_Statics::NewProp__state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodOrb_Statics::NewProp__state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodOrb_Statics::NewProp__droppingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodOrb_Statics::NewProp__despawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodOrb_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodOrb_Statics::NewProp__absorbReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodOrb_Statics::NewProp__randomMoveDelayInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloodOrb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodOrb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloodOrb_Statics::ClassParams = {
		&ABloodOrb::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABloodOrb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloodOrb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodOrb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloodOrb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloodOrb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloodOrb, 4071016321);
	template<> THEONI_API UClass* StaticClass<ABloodOrb>()
	{
		return ABloodOrb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloodOrb(Z_Construct_UClass_ABloodOrb, &ABloodOrb::StaticClass, TEXT("/Script/TheOni"), TEXT("ABloodOrb"), false, nullptr, nullptr, nullptr);

	void ABloodOrb::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__droppingPlayer(TEXT("_droppingPlayer"));
		static const FName Name__state(TEXT("_state"));

		const bool bIsValid = true
			&& Name__droppingPlayer == ClassReps[(int32)ENetFields_Private::_droppingPlayer].Property->GetFName()
			&& Name__state == ClassReps[(int32)ENetFields_Private::_state].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABloodOrb"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloodOrb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
