// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Pallet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePallet() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APallet_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APallet();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPalletStunZoneSideStrategy();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPalletPushSettings();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPalletState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPalletPulldownBlockerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNavEvadeLoopComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APallet::execAuthority_OnOverlapPushBox)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOverlapPushBox(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execAuthority_StunSlashersinStunZone)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_StunSlashersinStunZone(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execCanPulldown)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_interactionAxis);
		P_GET_UBOOL(Z_Param_isStationary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPulldown(Z_Param_player,Z_Param_Out_interactionAxis,Z_Param_isStationary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execGetDestructibleAreaPrimitiveComponents)
	{
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_prims);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDestructibleAreaPrimitiveComponents_Implementation(Z_Param_Out_prims);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execGetFallDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFallDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execGetIsDreamPallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsDreamPallet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execGetIsPulledDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPulledDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execGetPlayerDoingPulldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetPlayerDoingPulldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execIsPulldownBlockedByEntity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPulldownBlockedByEntity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execMulticast_PulldownPallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PulldownPallet_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execMulticast_ResetPallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetPallet_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execMulticast_StunPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_GET_UBOOL(Z_Param_stunBreakPallet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StunPlayer_Implementation(Z_Param_actor,Z_Param_survivor,Z_Param_stunBreakPallet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execOnStunOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStunOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execPullDown)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT_REF(FPalletPushSettings,Z_Param_Out_pushSettings);
		P_GET_ENUM(EPalletStunZoneSideStrategy,Z_Param_stunZoneSideStrategy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PullDown(Z_Param_player,Z_Param_Out_pushSettings,EPalletStunZoneSideStrategy(Z_Param_stunZoneSideStrategy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execSetIllusionaryPallet)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_pallet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIllusionaryPallet(Z_Param_pallet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execSetPalletState)
	{
		P_GET_ENUM(EPalletState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPalletState(EPalletState(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APallet::execUpdateIllusionaryPallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIllusionaryPallet();
		P_NATIVE_END;
	}
	static FName NAME_APallet_ExplodePallet = FName(TEXT("ExplodePallet"));
	void APallet::ExplodePallet(ADBDPlayer* player)
	{
		Pallet_eventExplodePallet_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_APallet_ExplodePallet),&Parms);
	}
	static FName NAME_APallet_ExplodeStunPallet = FName(TEXT("ExplodeStunPallet"));
	void APallet::ExplodeStunPallet(ADBDPlayer* player)
	{
		Pallet_eventExplodeStunPallet_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_APallet_ExplodeStunPallet),&Parms);
	}
	static FName NAME_APallet_GetDestructibleAreaPrimitiveComponents = FName(TEXT("GetDestructibleAreaPrimitiveComponents"));
	void APallet::GetDestructibleAreaPrimitiveComponents(TArray<UPrimitiveComponent*>& prims) const
	{
		Pallet_eventGetDestructibleAreaPrimitiveComponents_Parms Parms;
		Parms.prims=prims;
		const_cast<APallet*>(this)->ProcessEvent(FindFunctionChecked(NAME_APallet_GetDestructibleAreaPrimitiveComponents),&Parms);
		prims=Parms.prims;
	}
	static FName NAME_APallet_Multicast_PulldownPallet = FName(TEXT("Multicast_PulldownPallet"));
	void APallet::Multicast_PulldownPallet()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_Multicast_PulldownPallet),NULL);
	}
	static FName NAME_APallet_Multicast_ResetPallet = FName(TEXT("Multicast_ResetPallet"));
	void APallet::Multicast_ResetPallet()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_Multicast_ResetPallet),NULL);
	}
	static FName NAME_APallet_Multicast_StunPlayer = FName(TEXT("Multicast_StunPlayer"));
	void APallet::Multicast_StunPlayer(AActor* actor, ACamperPlayer* survivor, bool stunBreakPallet)
	{
		Pallet_eventMulticast_StunPlayer_Parms Parms;
		Parms.actor=actor;
		Parms.survivor=survivor;
		Parms.stunBreakPallet=stunBreakPallet ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APallet_Multicast_StunPlayer),&Parms);
	}
	static FName NAME_APallet_OnFallen = FName(TEXT("OnFallen"));
	void APallet::OnFallen()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_OnFallen),NULL);
	}
	static FName NAME_APallet_OnPalletPulldownBlockedByEntityHide = FName(TEXT("OnPalletPulldownBlockedByEntityHide"));
	void APallet::OnPalletPulldownBlockedByEntityHide()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_OnPalletPulldownBlockedByEntityHide),NULL);
	}
	static FName NAME_APallet_OnPalletPulldownBlockedByEntityShow = FName(TEXT("OnPalletPulldownBlockedByEntityShow"));
	void APallet::OnPalletPulldownBlockedByEntityShow()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_OnPalletPulldownBlockedByEntityShow),NULL);
	}
	static FName NAME_APallet_OnPalletPulledUp_BP = FName(TEXT("OnPalletPulledUp_BP"));
	void APallet::OnPalletPulledUp_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_OnPalletPulledUp_BP),NULL);
	}
	static FName NAME_APallet_OnPalletStunHit = FName(TEXT("OnPalletStunHit"));
	void APallet::OnPalletStunHit()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_OnPalletStunHit),NULL);
	}
	static FName NAME_APallet_PulldownPallet = FName(TEXT("PulldownPallet"));
	void APallet::PulldownPallet()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_PulldownPallet),NULL);
	}
	static FName NAME_APallet_ResetPallet = FName(TEXT("ResetPallet"));
	void APallet::ResetPallet()
	{
		ProcessEvent(FindFunctionChecked(NAME_APallet_ResetPallet),NULL);
	}
	void APallet::StaticRegisterNativesAPallet()
	{
		UClass* Class = APallet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnOverlapPushBox", &APallet::execAuthority_OnOverlapPushBox },
			{ "Authority_StunSlashersinStunZone", &APallet::execAuthority_StunSlashersinStunZone },
			{ "CanPulldown", &APallet::execCanPulldown },
			{ "GetDestructibleAreaPrimitiveComponents", &APallet::execGetDestructibleAreaPrimitiveComponents },
			{ "GetFallDuration", &APallet::execGetFallDuration },
			{ "GetIsDreamPallet", &APallet::execGetIsDreamPallet },
			{ "GetIsPulledDown", &APallet::execGetIsPulledDown },
			{ "GetPlayerDoingPulldown", &APallet::execGetPlayerDoingPulldown },
			{ "IsPulldownBlockedByEntity", &APallet::execIsPulldownBlockedByEntity },
			{ "Multicast_PulldownPallet", &APallet::execMulticast_PulldownPallet },
			{ "Multicast_ResetPallet", &APallet::execMulticast_ResetPallet },
			{ "Multicast_StunPlayer", &APallet::execMulticast_StunPlayer },
			{ "OnStunOverlap", &APallet::execOnStunOverlap },
			{ "PullDown", &APallet::execPullDown },
			{ "SetIllusionaryPallet", &APallet::execSetIllusionaryPallet },
			{ "SetPalletState", &APallet::execSetPalletState },
			{ "UpdateIllusionaryPallet", &APallet::execUpdateIllusionaryPallet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics
	{
		struct Pallet_eventAuthority_OnOverlapPushBox_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventAuthority_OnOverlapPushBox_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Pallet_eventAuthority_OnOverlapPushBox_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pallet_eventAuthority_OnOverlapPushBox_Parms), &Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventAuthority_OnOverlapPushBox_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventAuthority_OnOverlapPushBox_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventAuthority_OnOverlapPushBox_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventAuthority_OnOverlapPushBox_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "Authority_OnOverlapPushBox", nullptr, nullptr, sizeof(Pallet_eventAuthority_OnOverlapPushBox_Parms), Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics
	{
		struct Pallet_eventAuthority_StunSlashersinStunZone_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventAuthority_StunSlashersinStunZone_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "Authority_StunSlashersinStunZone", nullptr, nullptr, sizeof(Pallet_eventAuthority_StunSlashersinStunZone_Parms), Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_CanPulldown_Statics
	{
		struct Pallet_eventCanPulldown_Parms
		{
			const ADBDPlayer* player;
			FVector interactionAxis;
			bool isStationary;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStationary_MetaData[];
#endif
		static void NewProp_isStationary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStationary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pallet_eventCanPulldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pallet_eventCanPulldown_Parms), &Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_isStationary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_isStationary_SetBit(void* Obj)
	{
		((Pallet_eventCanPulldown_Parms*)Obj)->isStationary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_isStationary = { "isStationary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pallet_eventCanPulldown_Parms), &Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_isStationary_SetBit, METADATA_PARAMS(Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_isStationary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_isStationary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_interactionAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_interactionAxis = { "interactionAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventCanPulldown_Parms, interactionAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_interactionAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_interactionAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventCanPulldown_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_CanPulldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_isStationary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_interactionAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_CanPulldown_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_CanPulldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_CanPulldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "CanPulldown", nullptr, nullptr, sizeof(Pallet_eventCanPulldown_Parms), Z_Construct_UFunction_APallet_CanPulldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_CanPulldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_CanPulldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_CanPulldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_CanPulldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_CanPulldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_ExplodePallet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_ExplodePallet_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventExplodePallet_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_ExplodePallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_ExplodePallet_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_ExplodePallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_ExplodePallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "ExplodePallet", nullptr, nullptr, sizeof(Pallet_eventExplodePallet_Parms), Z_Construct_UFunction_APallet_ExplodePallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_ExplodePallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_ExplodePallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_ExplodePallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_ExplodePallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_ExplodePallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventExplodeStunPallet_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "ExplodeStunPallet", nullptr, nullptr, sizeof(Pallet_eventExplodeStunPallet_Parms), Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_ExplodeStunPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_ExplodeStunPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prims_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_prims;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_prims_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::NewProp_prims_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::NewProp_prims = { "prims", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventGetDestructibleAreaPrimitiveComponents_Parms, prims), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::NewProp_prims_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::NewProp_prims_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::NewProp_prims_Inner = { "prims", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::NewProp_prims,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::NewProp_prims_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "GetDestructibleAreaPrimitiveComponents", nullptr, nullptr, sizeof(Pallet_eventGetDestructibleAreaPrimitiveComponents_Parms), Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_GetFallDuration_Statics
	{
		struct Pallet_eventGetFallDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APallet_GetFallDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventGetFallDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_GetFallDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_GetFallDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_GetFallDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_GetFallDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "GetFallDuration", nullptr, nullptr, sizeof(Pallet_eventGetFallDuration_Parms), Z_Construct_UFunction_APallet_GetFallDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetFallDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_GetFallDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetFallDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_GetFallDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_GetFallDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics
	{
		struct Pallet_eventGetIsDreamPallet_Parms
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
	void Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pallet_eventGetIsDreamPallet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pallet_eventGetIsDreamPallet_Parms), &Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "GetIsDreamPallet", nullptr, nullptr, sizeof(Pallet_eventGetIsDreamPallet_Parms), Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_GetIsDreamPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_GetIsDreamPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_GetIsPulledDown_Statics
	{
		struct Pallet_eventGetIsPulledDown_Parms
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
	void Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pallet_eventGetIsPulledDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pallet_eventGetIsPulledDown_Parms), &Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "GetIsPulledDown", nullptr, nullptr, sizeof(Pallet_eventGetIsPulledDown_Parms), Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_GetIsPulledDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_GetIsPulledDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics
	{
		struct Pallet_eventGetPlayerDoingPulldown_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventGetPlayerDoingPulldown_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "GetPlayerDoingPulldown", nullptr, nullptr, sizeof(Pallet_eventGetPlayerDoingPulldown_Parms), Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_GetPlayerDoingPulldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_GetPlayerDoingPulldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics
	{
		struct Pallet_eventIsPulldownBlockedByEntity_Parms
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
	void Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pallet_eventIsPulldownBlockedByEntity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pallet_eventIsPulldownBlockedByEntity_Parms), &Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "IsPulldownBlockedByEntity", nullptr, nullptr, sizeof(Pallet_eventIsPulldownBlockedByEntity_Parms), Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_Multicast_PulldownPallet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_Multicast_PulldownPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_Multicast_PulldownPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "Multicast_PulldownPallet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_Multicast_PulldownPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Multicast_PulldownPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_Multicast_PulldownPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_Multicast_PulldownPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_Multicast_ResetPallet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_Multicast_ResetPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_Multicast_ResetPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "Multicast_ResetPallet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_Multicast_ResetPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Multicast_ResetPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_Multicast_ResetPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_Multicast_ResetPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics
	{
		static void NewProp_stunBreakPallet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_stunBreakPallet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::NewProp_stunBreakPallet_SetBit(void* Obj)
	{
		((Pallet_eventMulticast_StunPlayer_Parms*)Obj)->stunBreakPallet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::NewProp_stunBreakPallet = { "stunBreakPallet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pallet_eventMulticast_StunPlayer_Parms), &Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::NewProp_stunBreakPallet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventMulticast_StunPlayer_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventMulticast_StunPlayer_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::NewProp_stunBreakPallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::NewProp_survivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "Multicast_StunPlayer", nullptr, nullptr, sizeof(Pallet_eventMulticast_StunPlayer_Parms), Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_Multicast_StunPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_Multicast_StunPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_OnFallen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnFallen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_OnFallen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "OnFallen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnFallen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnFallen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_OnFallen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_OnFallen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityHide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityHide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityHide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "OnPalletPulldownBlockedByEntityHide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityHide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityHide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityHide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityHide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityShow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "OnPalletPulldownBlockedByEntityShow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_OnPalletPulledUp_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnPalletPulledUp_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_OnPalletPulledUp_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "OnPalletPulledUp_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnPalletPulledUp_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnPalletPulledUp_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_OnPalletPulledUp_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_OnPalletPulledUp_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_OnPalletStunHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnPalletStunHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_OnPalletStunHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "OnPalletStunHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnPalletStunHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnPalletStunHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_OnPalletStunHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_OnPalletStunHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_OnStunOverlap_Statics
	{
		struct Pallet_eventOnStunOverlap_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventOnStunOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Pallet_eventOnStunOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pallet_eventOnStunOverlap_Parms), &Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventOnStunOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventOnStunOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventOnStunOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventOnStunOverlap_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_OnStunOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_OnStunOverlap_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_OnStunOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_OnStunOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "OnStunOverlap", nullptr, nullptr, sizeof(Pallet_eventOnStunOverlap_Parms), Z_Construct_UFunction_APallet_OnStunOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_OnStunOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_OnStunOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_OnStunOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_PullDown_Statics
	{
		struct Pallet_eventPullDown_Parms
		{
			ADBDPlayer* player;
			FPalletPushSettings pushSettings;
			EPalletStunZoneSideStrategy stunZoneSideStrategy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stunZoneSideStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_stunZoneSideStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_stunZoneSideStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pushSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pushSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_stunZoneSideStrategy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_stunZoneSideStrategy = { "stunZoneSideStrategy", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventPullDown_Parms, stunZoneSideStrategy), Z_Construct_UEnum_DeadByDaylight_EPalletStunZoneSideStrategy, METADATA_PARAMS(Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_stunZoneSideStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_stunZoneSideStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_stunZoneSideStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_pushSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_pushSettings = { "pushSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventPullDown_Parms, pushSettings), Z_Construct_UScriptStruct_FPalletPushSettings, METADATA_PARAMS(Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_pushSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_pushSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventPullDown_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_PullDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_stunZoneSideStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_stunZoneSideStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_pushSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_PullDown_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_PullDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_PullDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "PullDown", nullptr, nullptr, sizeof(Pallet_eventPullDown_Parms), Z_Construct_UFunction_APallet_PullDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_PullDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_PullDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_PullDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_PullDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_PullDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_PulldownPallet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_PulldownPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_PulldownPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "PulldownPallet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_PulldownPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_PulldownPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_PulldownPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_PulldownPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_ResetPallet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_ResetPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_ResetPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "ResetPallet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_ResetPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_ResetPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_ResetPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_ResetPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics
	{
		struct Pallet_eventSetIllusionaryPallet_Parms
		{
			USkeletalMeshComponent* pallet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pallet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pallet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::NewProp_pallet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::NewProp_pallet = { "pallet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventSetIllusionaryPallet_Parms, pallet), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::NewProp_pallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::NewProp_pallet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::NewProp_pallet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "SetIllusionaryPallet", nullptr, nullptr, sizeof(Pallet_eventSetIllusionaryPallet_Parms), Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_SetIllusionaryPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_SetIllusionaryPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_SetPalletState_Statics
	{
		struct Pallet_eventSetPalletState_Parms
		{
			EPalletState state;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APallet_SetPalletState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pallet_eventSetPalletState_Parms, state), Z_Construct_UEnum_DeadByDaylight_EPalletState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APallet_SetPalletState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APallet_SetPalletState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_SetPalletState_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APallet_SetPalletState_Statics::NewProp_state_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_SetPalletState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_SetPalletState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "SetPalletState", nullptr, nullptr, sizeof(Pallet_eventSetPalletState_Parms), Z_Construct_UFunction_APallet_SetPalletState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_SetPalletState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_SetPalletState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_SetPalletState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_SetPalletState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_SetPalletState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APallet_UpdateIllusionaryPallet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APallet_UpdateIllusionaryPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APallet_UpdateIllusionaryPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APallet, nullptr, "UpdateIllusionaryPallet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APallet_UpdateIllusionaryPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APallet_UpdateIllusionaryPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APallet_UpdateIllusionaryPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APallet_UpdateIllusionaryPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APallet_NoRegister()
	{
		return APallet::StaticClass();
	}
	struct Z_Construct_UClass_APallet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDreamPallet_MetaData[];
#endif
		static void NewProp__isDreamPallet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDreamPallet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__palletPulldownBlockerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__palletPulldownBlockerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navEvadeLoopComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__navEvadeLoopComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pushSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pushSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerExecutingPulldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerExecutingPulldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stunnedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__stunnedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stunnedActors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stunBoxRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stunBoxRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stunBoxLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stunBoxLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fallDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fallDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDotproductThresholdForPulldownAccross_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxDotproductThresholdForPulldownAccross;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pushBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pushBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__destroyRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__destroyRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__destroyLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__destroyLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__illusionaryPallet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__illusionaryPallet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIllusionaryPalletDown_MetaData[];
#endif
		static void NewProp__isIllusionaryPalletDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIllusionaryPalletDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletDownEvadeDoorFrontPointOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PalletDownEvadeDoorFrontPointOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APallet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APallet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APallet_Authority_OnOverlapPushBox, "Authority_OnOverlapPushBox" }, // 1546991510
		{ &Z_Construct_UFunction_APallet_Authority_StunSlashersinStunZone, "Authority_StunSlashersinStunZone" }, // 3918104638
		{ &Z_Construct_UFunction_APallet_CanPulldown, "CanPulldown" }, // 700205276
		{ &Z_Construct_UFunction_APallet_ExplodePallet, "ExplodePallet" }, // 2430605309
		{ &Z_Construct_UFunction_APallet_ExplodeStunPallet, "ExplodeStunPallet" }, // 4099356968
		{ &Z_Construct_UFunction_APallet_GetDestructibleAreaPrimitiveComponents, "GetDestructibleAreaPrimitiveComponents" }, // 1275406164
		{ &Z_Construct_UFunction_APallet_GetFallDuration, "GetFallDuration" }, // 3951602382
		{ &Z_Construct_UFunction_APallet_GetIsDreamPallet, "GetIsDreamPallet" }, // 1431444666
		{ &Z_Construct_UFunction_APallet_GetIsPulledDown, "GetIsPulledDown" }, // 3325473007
		{ &Z_Construct_UFunction_APallet_GetPlayerDoingPulldown, "GetPlayerDoingPulldown" }, // 4235908472
		{ &Z_Construct_UFunction_APallet_IsPulldownBlockedByEntity, "IsPulldownBlockedByEntity" }, // 1208277548
		{ &Z_Construct_UFunction_APallet_Multicast_PulldownPallet, "Multicast_PulldownPallet" }, // 3769791414
		{ &Z_Construct_UFunction_APallet_Multicast_ResetPallet, "Multicast_ResetPallet" }, // 972613215
		{ &Z_Construct_UFunction_APallet_Multicast_StunPlayer, "Multicast_StunPlayer" }, // 1594714980
		{ &Z_Construct_UFunction_APallet_OnFallen, "OnFallen" }, // 1415560119
		{ &Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityHide, "OnPalletPulldownBlockedByEntityHide" }, // 2265358686
		{ &Z_Construct_UFunction_APallet_OnPalletPulldownBlockedByEntityShow, "OnPalletPulldownBlockedByEntityShow" }, // 3230979856
		{ &Z_Construct_UFunction_APallet_OnPalletPulledUp_BP, "OnPalletPulledUp_BP" }, // 2559687050
		{ &Z_Construct_UFunction_APallet_OnPalletStunHit, "OnPalletStunHit" }, // 2855343158
		{ &Z_Construct_UFunction_APallet_OnStunOverlap, "OnStunOverlap" }, // 778177968
		{ &Z_Construct_UFunction_APallet_PullDown, "PullDown" }, // 10101256
		{ &Z_Construct_UFunction_APallet_PulldownPallet, "PulldownPallet" }, // 3600211739
		{ &Z_Construct_UFunction_APallet_ResetPallet, "ResetPallet" }, // 1658419214
		{ &Z_Construct_UFunction_APallet_SetIllusionaryPallet, "SetIllusionaryPallet" }, // 3445074629
		{ &Z_Construct_UFunction_APallet_SetPalletState, "SetPalletState" }, // 396468430
		{ &Z_Construct_UFunction_APallet_UpdateIllusionaryPallet, "UpdateIllusionaryPallet" }, // 290322663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pallet.h" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__isDreamPallet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	void Z_Construct_UClass_APallet_Statics::NewProp__isDreamPallet_SetBit(void* Obj)
	{
		((APallet*)Obj)->_isDreamPallet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__isDreamPallet = { "_isDreamPallet", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APallet), &Z_Construct_UClass_APallet_Statics::NewProp__isDreamPallet_SetBit, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__isDreamPallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__isDreamPallet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__palletPulldownBlockerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__palletPulldownBlockerComponent = { "_palletPulldownBlockerComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _palletPulldownBlockerComponent), Z_Construct_UClass_UPalletPulldownBlockerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__palletPulldownBlockerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__palletPulldownBlockerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__navEvadeLoopComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__navEvadeLoopComponent = { "_navEvadeLoopComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _navEvadeLoopComponent), Z_Construct_UClass_UDBDNavEvadeLoopComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__navEvadeLoopComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__navEvadeLoopComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__pushSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__pushSettings = { "_pushSettings", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _pushSettings), Z_Construct_UScriptStruct_FPalletPushSettings, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__pushSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__pushSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__playerExecutingPulldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__playerExecutingPulldown = { "_playerExecutingPulldown", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _playerExecutingPulldown), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__playerExecutingPulldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__playerExecutingPulldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__stunnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__stunnedActors = { "_stunnedActors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _stunnedActors), METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__stunnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__stunnedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__stunnedActors_ElementProp = { "_stunnedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__stunBoxRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__stunBoxRight = { "_stunBoxRight", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _stunBoxRight), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__stunBoxRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__stunBoxRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__stunBoxLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__stunBoxLeft = { "_stunBoxLeft", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _stunBoxLeft), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__stunBoxLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__stunBoxLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__fallDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__fallDuration = { "_fallDuration", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _fallDuration), METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__fallDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__fallDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__maxDotproductThresholdForPulldownAccross_MetaData[] = {
		{ "Category", "Pallet" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__maxDotproductThresholdForPulldownAccross = { "_maxDotproductThresholdForPulldownAccross", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _maxDotproductThresholdForPulldownAccross), METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__maxDotproductThresholdForPulldownAccross_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__maxDotproductThresholdForPulldownAccross_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__pushBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__pushBox = { "_pushBox", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _pushBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__pushBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__pushBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__destroyRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__destroyRight = { "_destroyRight", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _destroyRight), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__destroyRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__destroyRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__destroyLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__destroyLeft = { "_destroyLeft", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _destroyLeft), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__destroyLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__destroyLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__illusionaryPallet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pallet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__illusionaryPallet = { "_illusionaryPallet", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _illusionaryPallet), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__illusionaryPallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__illusionaryPallet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__isIllusionaryPalletDown_MetaData[] = {
		{ "Category", "Pallet" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	void Z_Construct_UClass_APallet_Statics::NewProp__isIllusionaryPalletDown_SetBit(void* Obj)
	{
		((APallet*)Obj)->_isIllusionaryPalletDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__isIllusionaryPalletDown = { "_isIllusionaryPalletDown", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APallet), &Z_Construct_UClass_APallet_Statics::NewProp__isIllusionaryPalletDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__isIllusionaryPalletDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__isIllusionaryPalletDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp__state_MetaData[] = {
		{ "Category", "Pallet" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APallet_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, _state), Z_Construct_UEnum_DeadByDaylight_EPalletState, METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp__state_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APallet_Statics::NewProp__state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallet_Statics::NewProp_PalletDownEvadeDoorFrontPointOffset_MetaData[] = {
		{ "Category", "Pallet" },
		{ "ModuleRelativePath", "Public/Pallet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APallet_Statics::NewProp_PalletDownEvadeDoorFrontPointOffset = { "PalletDownEvadeDoorFrontPointOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APallet, PalletDownEvadeDoorFrontPointOffset), METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::NewProp_PalletDownEvadeDoorFrontPointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::NewProp_PalletDownEvadeDoorFrontPointOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__isDreamPallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__palletPulldownBlockerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__navEvadeLoopComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__pushSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__playerExecutingPulldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__stunnedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__stunnedActors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__stunBoxRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__stunBoxLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__fallDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__maxDotproductThresholdForPulldownAccross,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__pushBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__destroyRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__destroyLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__illusionaryPallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__isIllusionaryPalletDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp__state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallet_Statics::NewProp_PalletDownEvadeDoorFrontPointOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APallet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APallet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APallet_Statics::ClassParams = {
		&APallet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APallet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APallet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APallet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APallet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APallet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APallet, 4266455112);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<APallet>()
	{
		return APallet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APallet(Z_Construct_UClass_APallet, &APallet::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("APallet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APallet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
