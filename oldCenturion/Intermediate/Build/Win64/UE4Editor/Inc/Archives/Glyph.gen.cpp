// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/Glyph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlyph() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_AGlyph_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_AGlyph();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASpecialBehaviourInteractable();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ARCHIVES_API UClass* Z_Construct_UClass_UNearTrackedActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UGlyphInteraction_NoRegister();
	ARCHIVES_API UEnum* Z_Construct_UEnum_Archives_EAllowedPlayerType();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGlyph::execAuthority_OnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGlyph::execAuthority_OnPlayerBreachedRangeThreshold)
	{
		P_GET_UBOOL(Z_Param_isWithinRange);
		P_GET_OBJECT(AActor,Z_Param_trackedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnPlayerBreachedRangeThreshold(Z_Param_isWithinRange,Z_Param_trackedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGlyph::execAuthority_TrackPlayerWithBehaviourID)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_dbdPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_TrackPlayerWithBehaviourID(Z_Param_dbdPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGlyph::execDoesLocalPlayerHaveVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesLocalPlayerHaveVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGlyph::execOnRep_PlayersWithVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayersWithVisibility();
		P_NATIVE_END;
	}
	static FName NAME_AGlyph_Authority_OnInteractionCompleted = FName(TEXT("Authority_OnInteractionCompleted"));
	void AGlyph::Authority_OnInteractionCompleted(ADBDPlayer* interactingPlayer)
	{
		Glyph_eventAuthority_OnInteractionCompleted_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGlyph_Authority_OnInteractionCompleted),&Parms);
	}
	static FName NAME_AGlyph_Cosmetic_OnGlyphVisibilityChanged = FName(TEXT("Cosmetic_OnGlyphVisibilityChanged"));
	void AGlyph::Cosmetic_OnGlyphVisibilityChanged(ADBDPlayer* interactingPlayer, bool isVisible)
	{
		Glyph_eventCosmetic_OnGlyphVisibilityChanged_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		Parms.isVisible=isVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGlyph_Cosmetic_OnGlyphVisibilityChanged),&Parms);
	}
	static FName NAME_AGlyph_Cosmetic_OnInteractionCompleted = FName(TEXT("Cosmetic_OnInteractionCompleted"));
	void AGlyph::Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer)
	{
		Glyph_eventCosmetic_OnInteractionCompleted_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGlyph_Cosmetic_OnInteractionCompleted),&Parms);
	}
	static FName NAME_AGlyph_Cosmetic_OnStartedInteracting = FName(TEXT("Cosmetic_OnStartedInteracting"));
	void AGlyph::Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		Glyph_eventCosmetic_OnStartedInteracting_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		Parms.interactionDuration=interactionDuration;
		ProcessEvent(FindFunctionChecked(NAME_AGlyph_Cosmetic_OnStartedInteracting),&Parms);
	}
	static FName NAME_AGlyph_Cosmetic_OnStoppedInteracting = FName(TEXT("Cosmetic_OnStoppedInteracting"));
	void AGlyph::Cosmetic_OnStoppedInteracting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGlyph_Cosmetic_OnStoppedInteracting),NULL);
	}
	void AGlyph::StaticRegisterNativesAGlyph()
	{
		UClass* Class = AGlyph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnIntroCompleted", &AGlyph::execAuthority_OnIntroCompleted },
			{ "Authority_OnPlayerBreachedRangeThreshold", &AGlyph::execAuthority_OnPlayerBreachedRangeThreshold },
			{ "Authority_TrackPlayerWithBehaviourID", &AGlyph::execAuthority_TrackPlayerWithBehaviourID },
			{ "DoesLocalPlayerHaveVisibility", &AGlyph::execDoesLocalPlayerHaveVisibility },
			{ "OnRep_PlayersWithVisibility", &AGlyph::execOnRep_PlayersWithVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Glyph_eventAuthority_OnInteractionCompleted_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "Authority_OnInteractionCompleted", nullptr, nullptr, sizeof(Glyph_eventAuthority_OnInteractionCompleted_Parms), Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_Authority_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Authority_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_Authority_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "Authority_OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Authority_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_Authority_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_Authority_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics
	{
		struct Glyph_eventAuthority_OnPlayerBreachedRangeThreshold_Parms
		{
			bool isWithinRange;
			const AActor* trackedActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackedActor;
		static void NewProp_isWithinRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWithinRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_trackedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_trackedActor = { "trackedActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Glyph_eventAuthority_OnPlayerBreachedRangeThreshold_Parms, trackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_trackedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_trackedActor_MetaData)) };
	void Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_isWithinRange_SetBit(void* Obj)
	{
		((Glyph_eventAuthority_OnPlayerBreachedRangeThreshold_Parms*)Obj)->isWithinRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_isWithinRange = { "isWithinRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Glyph_eventAuthority_OnPlayerBreachedRangeThreshold_Parms), &Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_isWithinRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_trackedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::NewProp_isWithinRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "Authority_OnPlayerBreachedRangeThreshold", nullptr, nullptr, sizeof(Glyph_eventAuthority_OnPlayerBreachedRangeThreshold_Parms), Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics
	{
		struct Glyph_eventAuthority_TrackPlayerWithBehaviourID_Parms
		{
			const ADBDPlayer* dbdPlayer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dbdPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dbdPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::NewProp_dbdPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::NewProp_dbdPlayer = { "dbdPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Glyph_eventAuthority_TrackPlayerWithBehaviourID_Parms, dbdPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::NewProp_dbdPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::NewProp_dbdPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::NewProp_dbdPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "Authority_TrackPlayerWithBehaviourID", nullptr, nullptr, sizeof(Glyph_eventAuthority_TrackPlayerWithBehaviourID_Parms), Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((Glyph_eventCosmetic_OnGlyphVisibilityChanged_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Glyph_eventCosmetic_OnGlyphVisibilityChanged_Parms), &Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Glyph_eventCosmetic_OnGlyphVisibilityChanged_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::NewProp_isVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "Cosmetic_OnGlyphVisibilityChanged", nullptr, nullptr, sizeof(Glyph_eventCosmetic_OnGlyphVisibilityChanged_Parms), Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Glyph_eventCosmetic_OnInteractionCompleted_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "Cosmetic_OnInteractionCompleted", nullptr, nullptr, sizeof(Glyph_eventCosmetic_OnInteractionCompleted_Parms), Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::NewProp_interactionDuration = { "interactionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Glyph_eventCosmetic_OnStartedInteracting_Parms, interactionDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Glyph_eventCosmetic_OnStartedInteracting_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::NewProp_interactionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "Cosmetic_OnStartedInteracting", nullptr, nullptr, sizeof(Glyph_eventCosmetic_OnStartedInteracting_Parms), Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_Cosmetic_OnStoppedInteracting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_Cosmetic_OnStoppedInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "Cosmetic_OnStoppedInteracting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_Cosmetic_OnStoppedInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_Cosmetic_OnStoppedInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics
	{
		struct Glyph_eventDoesLocalPlayerHaveVisibility_Parms
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
	void Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Glyph_eventDoesLocalPlayerHaveVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Glyph_eventDoesLocalPlayerHaveVisibility_Parms), &Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "DoesLocalPlayerHaveVisibility", nullptr, nullptr, sizeof(Glyph_eventDoesLocalPlayerHaveVisibility_Parms), Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGlyph_OnRep_PlayersWithVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlyph_OnRep_PlayersWithVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlyph_OnRep_PlayersWithVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlyph, nullptr, "OnRep_PlayersWithVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlyph_OnRep_PlayersWithVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlyph_OnRep_PlayersWithVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlyph_OnRep_PlayersWithVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGlyph_OnRep_PlayersWithVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGlyph_NoRegister()
	{
		return AGlyph::StaticClass();
	}
	struct Z_Construct_UClass_AGlyph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playersThatInteractedWithGlyph_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playersThatInteractedWithGlyph;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersThatInteractedWithGlyph_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraColorWhileInteracting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__auraColorWhileInteracting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphDetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__glyphDetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphInteractionSecondsToChargeKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__glyphInteractionSecondsToChargeKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphInteractionSecondsToCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__glyphInteractionSecondsToCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__associatedKillerScoreEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__associatedKillerScoreEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__associatedSurvivorScoreEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__associatedSurvivorScoreEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nearTrackedActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__nearTrackedActorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__glyphMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphInteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__glyphInteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__glyphInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphInteractionChargeableKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__glyphInteractionChargeableKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphInteractionChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__glyphInteractionChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphInteractionKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__glyphInteractionKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glyphInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__glyphInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastPlayerToStartInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_lastPlayerToStartInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowedPlayerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__allowedPlayerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__allowedPlayerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__specialBehaviourId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__specialBehaviourId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__oldPlayersWithVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__oldPlayersWithVisibility;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__oldPlayersWithVisibility_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playersWithVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playersWithVisibility;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersWithVisibility_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGlyph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpecialBehaviourInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGlyph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGlyph_Authority_OnInteractionCompleted, "Authority_OnInteractionCompleted" }, // 962891052
		{ &Z_Construct_UFunction_AGlyph_Authority_OnIntroCompleted, "Authority_OnIntroCompleted" }, // 1624414557
		{ &Z_Construct_UFunction_AGlyph_Authority_OnPlayerBreachedRangeThreshold, "Authority_OnPlayerBreachedRangeThreshold" }, // 3064446449
		{ &Z_Construct_UFunction_AGlyph_Authority_TrackPlayerWithBehaviourID, "Authority_TrackPlayerWithBehaviourID" }, // 649165371
		{ &Z_Construct_UFunction_AGlyph_Cosmetic_OnGlyphVisibilityChanged, "Cosmetic_OnGlyphVisibilityChanged" }, // 1653487517
		{ &Z_Construct_UFunction_AGlyph_Cosmetic_OnInteractionCompleted, "Cosmetic_OnInteractionCompleted" }, // 1158477231
		{ &Z_Construct_UFunction_AGlyph_Cosmetic_OnStartedInteracting, "Cosmetic_OnStartedInteracting" }, // 3005333330
		{ &Z_Construct_UFunction_AGlyph_Cosmetic_OnStoppedInteracting, "Cosmetic_OnStoppedInteracting" }, // 591079404
		{ &Z_Construct_UFunction_AGlyph_DoesLocalPlayerHaveVisibility, "DoesLocalPlayerHaveVisibility" }, // 104536892
		{ &Z_Construct_UFunction_AGlyph_OnRep_PlayersWithVisibility, "OnRep_PlayersWithVisibility" }, // 3187558123
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Glyph.h" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__playersThatInteractedWithGlyph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__playersThatInteractedWithGlyph = { "_playersThatInteractedWithGlyph", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _playersThatInteractedWithGlyph), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__playersThatInteractedWithGlyph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__playersThatInteractedWithGlyph_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__playersThatInteractedWithGlyph_Inner = { "_playersThatInteractedWithGlyph", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__auraColorWhileInteracting_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__auraColorWhileInteracting = { "_auraColorWhileInteracting", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _auraColorWhileInteracting), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__auraColorWhileInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__auraColorWhileInteracting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphDetectionRange_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphDetectionRange = { "_glyphDetectionRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphDetectionRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphDetectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphDetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToChargeKiller_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToChargeKiller = { "_glyphInteractionSecondsToChargeKiller", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphInteractionSecondsToChargeKiller), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToChargeKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToChargeKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToCharge_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToCharge = { "_glyphInteractionSecondsToCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphInteractionSecondsToCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__associatedKillerScoreEvent_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__associatedKillerScoreEvent = { "_associatedKillerScoreEvent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _associatedKillerScoreEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__associatedKillerScoreEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__associatedKillerScoreEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__associatedSurvivorScoreEvent_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__associatedSurvivorScoreEvent = { "_associatedSurvivorScoreEvent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _associatedSurvivorScoreEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__associatedSurvivorScoreEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__associatedSurvivorScoreEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__nearTrackedActorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__nearTrackedActorComponent = { "_nearTrackedActorComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _nearTrackedActorComponent), Z_Construct_UClass_UNearTrackedActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__nearTrackedActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__nearTrackedActorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphMesh = { "_glyphMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionZone = { "_glyphInteractionZone", nullptr, (EPropertyFlags)0x004000000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphInteractionZone), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractor = { "_glyphInteractor", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeableKiller_MetaData[] = {
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeableKiller = { "_glyphInteractionChargeableKiller", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphInteractionChargeableKiller), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeableKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeableKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeable_MetaData[] = {
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeable = { "_glyphInteractionChargeable", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphInteractionChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionKiller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionKiller = { "_glyphInteractionKiller", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphInteractionKiller), Z_Construct_UClass_UGlyphInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Glyph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteraction = { "_glyphInteraction", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _glyphInteraction), Z_Construct_UClass_UGlyphInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp_lastPlayerToStartInteraction_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp_lastPlayerToStartInteraction = { "lastPlayerToStartInteraction", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, lastPlayerToStartInteraction), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp_lastPlayerToStartInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp_lastPlayerToStartInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__allowedPlayerType_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__allowedPlayerType = { "_allowedPlayerType", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _allowedPlayerType), Z_Construct_UEnum_Archives_EAllowedPlayerType, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__allowedPlayerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__allowedPlayerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__allowedPlayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__specialBehaviourId_MetaData[] = {
		{ "Category", "Glyph" },
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__specialBehaviourId = { "_specialBehaviourId", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _specialBehaviourId), METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__specialBehaviourId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__specialBehaviourId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__oldPlayersWithVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__oldPlayersWithVisibility = { "_oldPlayersWithVisibility", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _oldPlayersWithVisibility), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__oldPlayersWithVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__oldPlayersWithVisibility_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__oldPlayersWithVisibility_Inner = { "_oldPlayersWithVisibility", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlyph_Statics::NewProp__playersWithVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Glyph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__playersWithVisibility = { "_playersWithVisibility", "OnRep_PlayersWithVisibility", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlyph, _playersWithVisibility), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::NewProp__playersWithVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::NewProp__playersWithVisibility_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlyph_Statics::NewProp__playersWithVisibility_Inner = { "_playersWithVisibility", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlyph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__playersThatInteractedWithGlyph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__playersThatInteractedWithGlyph_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__auraColorWhileInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphDetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToChargeKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionSecondsToCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__associatedKillerScoreEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__associatedSurvivorScoreEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__nearTrackedActorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeableKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteractionKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__glyphInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp_lastPlayerToStartInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__allowedPlayerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__allowedPlayerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__specialBehaviourId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__oldPlayersWithVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__oldPlayersWithVisibility_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__playersWithVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlyph_Statics::NewProp__playersWithVisibility_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGlyph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AGlyph, INavAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGlyph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlyph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGlyph_Statics::ClassParams = {
		&AGlyph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGlyph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGlyph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGlyph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGlyph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGlyph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGlyph, 3514905564);
	template<> ARCHIVES_API UClass* StaticClass<AGlyph>()
	{
		return AGlyph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGlyph(Z_Construct_UClass_AGlyph, &AGlyph::StaticClass, TEXT("/Script/Archives"), TEXT("AGlyph"), false, nullptr, nullptr, nullptr);

	void AGlyph::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__playersWithVisibility(TEXT("_playersWithVisibility"));
		static const FName Name__playersThatInteractedWithGlyph(TEXT("_playersThatInteractedWithGlyph"));

		const bool bIsValid = true
			&& Name__playersWithVisibility == ClassReps[(int32)ENetFields_Private::_playersWithVisibility].Property->GetFName()
			&& Name__playersThatInteractedWithGlyph == ClassReps[(int32)ENetFields_Private::_playersThatInteractedWithGlyph].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGlyph"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGlyph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
