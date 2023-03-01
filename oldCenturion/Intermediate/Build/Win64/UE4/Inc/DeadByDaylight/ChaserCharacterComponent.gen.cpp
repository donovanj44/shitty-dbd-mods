// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ChaserCharacterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaserCharacterComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChaserCharacterComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChaserCharacterComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChaseComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FChaseUpdateInfo();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPawnSensingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UChaserCharacterComponent::execAuthority_OnChaseTargetFound)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnChaseTargetFound(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaserCharacterComponent::execMulticast_OnAllChaseEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnAllChaseEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaserCharacterComponent::execMulticast_OnChaseEnd)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_GET_STRUCT(FChaseUpdateInfo,Z_Param_chaseUpdateInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnChaseEnd_Implementation(Z_Param_survivor,Z_Param_chaseUpdateInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaserCharacterComponent::execMulticast_OnChaseStart)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnChaseStart_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaserCharacterComponent::execOnKillerLocallyObservedChanged)
	{
		P_GET_UBOOL(Z_Param_locallyObserved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerLocallyObservedChanged(Z_Param_locallyObserved);
		P_NATIVE_END;
	}
	static FName NAME_UChaserCharacterComponent_Multicast_OnAllChaseEnd = FName(TEXT("Multicast_OnAllChaseEnd"));
	void UChaserCharacterComponent::Multicast_OnAllChaseEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UChaserCharacterComponent_Multicast_OnAllChaseEnd),NULL);
	}
	static FName NAME_UChaserCharacterComponent_Multicast_OnChaseEnd = FName(TEXT("Multicast_OnChaseEnd"));
	void UChaserCharacterComponent::Multicast_OnChaseEnd(ACamperPlayer* survivor, const FChaseUpdateInfo chaseUpdateInfo)
	{
		ChaserCharacterComponent_eventMulticast_OnChaseEnd_Parms Parms;
		Parms.survivor=survivor;
		Parms.chaseUpdateInfo=chaseUpdateInfo;
		ProcessEvent(FindFunctionChecked(NAME_UChaserCharacterComponent_Multicast_OnChaseEnd),&Parms);
	}
	static FName NAME_UChaserCharacterComponent_Multicast_OnChaseStart = FName(TEXT("Multicast_OnChaseStart"));
	void UChaserCharacterComponent::Multicast_OnChaseStart(ACamperPlayer* survivor)
	{
		ChaserCharacterComponent_eventMulticast_OnChaseStart_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UChaserCharacterComponent_Multicast_OnChaseStart),&Parms);
	}
	void UChaserCharacterComponent::StaticRegisterNativesUChaserCharacterComponent()
	{
		UClass* Class = UChaserCharacterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnChaseTargetFound", &UChaserCharacterComponent::execAuthority_OnChaseTargetFound },
			{ "Multicast_OnAllChaseEnd", &UChaserCharacterComponent::execMulticast_OnAllChaseEnd },
			{ "Multicast_OnChaseEnd", &UChaserCharacterComponent::execMulticast_OnChaseEnd },
			{ "Multicast_OnChaseStart", &UChaserCharacterComponent::execMulticast_OnChaseStart },
			{ "OnKillerLocallyObservedChanged", &UChaserCharacterComponent::execOnKillerLocallyObservedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics
	{
		struct ChaserCharacterComponent_eventAuthority_OnChaseTargetFound_Parms
		{
			APawn* pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaserCharacterComponent_eventAuthority_OnChaseTargetFound_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaserCharacterComponent, nullptr, "Authority_OnChaseTargetFound", nullptr, nullptr, sizeof(ChaserCharacterComponent_eventAuthority_OnChaseTargetFound_Parms), Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnAllChaseEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnAllChaseEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnAllChaseEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaserCharacterComponent, nullptr, "Multicast_OnAllChaseEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnAllChaseEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnAllChaseEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnAllChaseEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnAllChaseEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chaseUpdateInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_chaseUpdateInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::NewProp_chaseUpdateInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::NewProp_chaseUpdateInfo = { "chaseUpdateInfo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaserCharacterComponent_eventMulticast_OnChaseEnd_Parms, chaseUpdateInfo), Z_Construct_UScriptStruct_FChaseUpdateInfo, METADATA_PARAMS(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::NewProp_chaseUpdateInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::NewProp_chaseUpdateInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaserCharacterComponent_eventMulticast_OnChaseEnd_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::NewProp_chaseUpdateInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaserCharacterComponent, nullptr, "Multicast_OnChaseEnd", nullptr, nullptr, sizeof(ChaserCharacterComponent_eventMulticast_OnChaseEnd_Parms), Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaserCharacterComponent_eventMulticast_OnChaseStart_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaserCharacterComponent, nullptr, "Multicast_OnChaseStart", nullptr, nullptr, sizeof(ChaserCharacterComponent_eventMulticast_OnChaseStart_Parms), Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics
	{
		struct ChaserCharacterComponent_eventOnKillerLocallyObservedChanged_Parms
		{
			bool locallyObserved;
		};
		static void NewProp_locallyObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_locallyObserved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::NewProp_locallyObserved_SetBit(void* Obj)
	{
		((ChaserCharacterComponent_eventOnKillerLocallyObservedChanged_Parms*)Obj)->locallyObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::NewProp_locallyObserved = { "locallyObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaserCharacterComponent_eventOnKillerLocallyObservedChanged_Parms), &Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::NewProp_locallyObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::NewProp_locallyObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaserCharacterComponent, nullptr, "OnKillerLocallyObservedChanged", nullptr, nullptr, sizeof(ChaserCharacterComponent_eventOnKillerLocallyObservedChanged_Parms), Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaserCharacterComponent_NoRegister()
	{
		return UChaserCharacterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaserCharacterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preventChaseTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__preventChaseTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chasedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__chasedPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chasedPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chaseUpdateInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__chaseUpdateInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chaseUpdateInfo_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chaseUpdateInfo_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperSensor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaserCharacterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaserCharacterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaserCharacterComponent_Authority_OnChaseTargetFound, "Authority_OnChaseTargetFound" }, // 3577491819
		{ &Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnAllChaseEnd, "Multicast_OnAllChaseEnd" }, // 739889546
		{ &Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseEnd, "Multicast_OnChaseEnd" }, // 1526286523
		{ &Z_Construct_UFunction_UChaserCharacterComponent_Multicast_OnChaseStart, "Multicast_OnChaseStart" }, // 3628506227
		{ &Z_Construct_UFunction_UChaserCharacterComponent_OnKillerLocallyObservedChanged, "OnKillerLocallyObservedChanged" }, // 1025930339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaserCharacterComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaserCharacterComponent.h" },
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__preventChaseTags_MetaData[] = {
		{ "Category", "ChaserCharacterComponent" },
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__preventChaseTags = { "_preventChaseTags", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaserCharacterComponent, _preventChaseTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__preventChaseTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__preventChaseTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase = { "_authority_survivorsWhoStunnedKillerByPalletDuringChase", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaserCharacterComponent, _authority_survivorsWhoStunnedKillerByPalletDuringChase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase_Inner = { "_authority_survivorsWhoStunnedKillerByPalletDuringChase", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chasedPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chasedPlayers = { "_chasedPlayers", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaserCharacterComponent, _chasedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chasedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chasedPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chasedPlayers_Inner = { "_chasedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo = { "_chaseUpdateInfo", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaserCharacterComponent, _chaseUpdateInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo_Key_KeyProp = { "_chaseUpdateInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo_ValueProp = { "_chaseUpdateInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChaseUpdateInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__camperSensor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaserCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__camperSensor = { "_camperSensor", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaserCharacterComponent, _camperSensor), Z_Construct_UClass_UDBDPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__camperSensor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__camperSensor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaserCharacterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__preventChaseTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__authority_survivorsWhoStunnedKillerByPalletDuringChase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chasedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chasedPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__chaseUpdateInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaserCharacterComponent_Statics::NewProp__camperSensor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaserCharacterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaserCharacterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaserCharacterComponent_Statics::ClassParams = {
		&UChaserCharacterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChaserCharacterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaserCharacterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChaserCharacterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaserCharacterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaserCharacterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaserCharacterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaserCharacterComponent, 401626169);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UChaserCharacterComponent>()
	{
		return UChaserCharacterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaserCharacterComponent(Z_Construct_UClass_UChaserCharacterComponent, &UChaserCharacterComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UChaserCharacterComponent"), false, nullptr, nullptr, nullptr);

	void UChaserCharacterComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__chasedPlayers(TEXT("_chasedPlayers"));

		const bool bIsValid = true
			&& Name__chasedPlayers == ClassReps[(int32)ENetFields_Private::_chasedPlayers].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UChaserCharacterComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaserCharacterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
