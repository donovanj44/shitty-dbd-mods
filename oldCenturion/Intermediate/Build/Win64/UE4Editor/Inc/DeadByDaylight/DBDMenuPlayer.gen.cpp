// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDMenuPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDMenuPlayer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMenuPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMenuPlayer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBasePlayer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharmSpawnerComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EItemHandPosition();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStandDisplayable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharmAttachable_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDMenuPlayerOnItemEquipped__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADBDMenuPlayer::execBeginDestroySequence_Internal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDestroySequence_Internal_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDMenuPlayer::execGetCharmSpawnerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharmSpawnerComponent**)Z_Param__Result=P_THIS->GetCharmSpawnerComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDMenuPlayer::execGetHandPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EItemHandPosition*)Z_Param__Result=P_THIS->GetHandPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDMenuPlayer::execShouldApplyPositionOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldApplyPositionOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDMenuPlayer::execShouldShowSpawnAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldShowSpawnAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDMenuPlayer::execWrappedOnDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WrappedOnDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	static FName NAME_ADBDMenuPlayer_BeginCreateSequence = FName(TEXT("BeginCreateSequence"));
	void ADBDMenuPlayer::BeginCreateSequence()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDMenuPlayer_BeginCreateSequence),NULL);
	}
	static FName NAME_ADBDMenuPlayer_BeginDestroySequence_Internal = FName(TEXT("BeginDestroySequence_Internal"));
	void ADBDMenuPlayer::BeginDestroySequence_Internal()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDMenuPlayer_BeginDestroySequence_Internal),NULL);
	}
	static FName NAME_ADBDMenuPlayer_GetCharmSpawnerComponent = FName(TEXT("GetCharmSpawnerComponent"));
	UCharmSpawnerComponent* ADBDMenuPlayer::GetCharmSpawnerComponent()
	{
		DBDMenuPlayer_eventGetCharmSpawnerComponent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADBDMenuPlayer_GetCharmSpawnerComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ADBDMenuPlayer_IsInMenuPlayer = FName(TEXT("IsInMenuPlayer"));
	bool ADBDMenuPlayer::IsInMenuPlayer()
	{
		DBDMenuPlayer_eventIsInMenuPlayer_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADBDMenuPlayer_IsInMenuPlayer),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ADBDMenuPlayer_OnCustomizationTransactionCompleted = FName(TEXT("OnCustomizationTransactionCompleted"));
	void ADBDMenuPlayer::OnCustomizationTransactionCompleted(ECustomizationCategory category)
	{
		DBDMenuPlayer_eventOnCustomizationTransactionCompleted_Parms Parms;
		Parms.category=category;
		ProcessEvent(FindFunctionChecked(NAME_ADBDMenuPlayer_OnCustomizationTransactionCompleted),&Parms);
	}
	static FName NAME_ADBDMenuPlayer_RestartInSequence_Internal = FName(TEXT("RestartInSequence_Internal"));
	void ADBDMenuPlayer::RestartInSequence_Internal()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDMenuPlayer_RestartInSequence_Internal),NULL);
	}
	void ADBDMenuPlayer::StaticRegisterNativesADBDMenuPlayer()
	{
		UClass* Class = ADBDMenuPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDestroySequence_Internal", &ADBDMenuPlayer::execBeginDestroySequence_Internal },
			{ "GetCharmSpawnerComponent", &ADBDMenuPlayer::execGetCharmSpawnerComponent },
			{ "GetHandPosition", &ADBDMenuPlayer::execGetHandPosition },
			{ "ShouldApplyPositionOffset", &ADBDMenuPlayer::execShouldApplyPositionOffset },
			{ "ShouldShowSpawnAnimation", &ADBDMenuPlayer::execShouldShowSpawnAnimation },
			{ "WrappedOnDestroyed", &ADBDMenuPlayer::execWrappedOnDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_BeginCreateSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_BeginCreateSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_BeginCreateSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "BeginCreateSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_BeginCreateSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_BeginCreateSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_BeginCreateSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_BeginCreateSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_BeginDestroySequence_Internal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_BeginDestroySequence_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_BeginDestroySequence_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "BeginDestroySequence_Internal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_BeginDestroySequence_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_BeginDestroySequence_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_BeginDestroySequence_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_BeginDestroySequence_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMenuPlayer_eventGetCharmSpawnerComponent_Parms, ReturnValue), Z_Construct_UClass_UCharmSpawnerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "GetCharmSpawnerComponent", nullptr, nullptr, sizeof(DBDMenuPlayer_eventGetCharmSpawnerComponent_Parms), Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics
	{
		struct DBDMenuPlayer_eventGetHandPosition_Parms
		{
			EItemHandPosition ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMenuPlayer_eventGetHandPosition_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_EItemHandPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "GetHandPosition", nullptr, nullptr, sizeof(DBDMenuPlayer_eventGetHandPosition_Parms), Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDMenuPlayer_eventIsInMenuPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDMenuPlayer_eventIsInMenuPlayer_Parms), &Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "IsInMenuPlayer", nullptr, nullptr, sizeof(DBDMenuPlayer_eventIsInMenuPlayer_Parms), Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMenuPlayer_eventOnCustomizationTransactionCompleted_Parms, category), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::NewProp_category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::NewProp_category_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "OnCustomizationTransactionCompleted", nullptr, nullptr, sizeof(DBDMenuPlayer_eventOnCustomizationTransactionCompleted_Parms), Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_RestartInSequence_Internal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_RestartInSequence_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_RestartInSequence_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "RestartInSequence_Internal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_RestartInSequence_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_RestartInSequence_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_RestartInSequence_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_RestartInSequence_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics
	{
		struct DBDMenuPlayer_eventShouldApplyPositionOffset_Parms
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
	void Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDMenuPlayer_eventShouldApplyPositionOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDMenuPlayer_eventShouldApplyPositionOffset_Parms), &Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "ShouldApplyPositionOffset", nullptr, nullptr, sizeof(DBDMenuPlayer_eventShouldApplyPositionOffset_Parms), Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics
	{
		struct DBDMenuPlayer_eventShouldShowSpawnAnimation_Parms
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
	void Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDMenuPlayer_eventShouldShowSpawnAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDMenuPlayer_eventShouldShowSpawnAnimation_Parms), &Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "ShouldShowSpawnAnimation", nullptr, nullptr, sizeof(DBDMenuPlayer_eventShouldShowSpawnAnimation_Parms), Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics
	{
		struct DBDMenuPlayer_eventWrappedOnDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMenuPlayer_eventWrappedOnDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMenuPlayer, nullptr, "WrappedOnDestroyed", nullptr, nullptr, sizeof(DBDMenuPlayer_eventWrappedOnDestroyed_Parms), Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDMenuPlayer_NoRegister()
	{
		return ADBDMenuPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ADBDMenuPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__equippedItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__equippedItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__handPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__handPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__handPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DarkMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DarkMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOnline_MetaData[];
#endif
		static void NewProp_IsOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleSelected_MetaData[];
#endif
		static void NewProp_RoleSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RoleSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDMenuPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBasePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDMenuPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDMenuPlayer_BeginCreateSequence, "BeginCreateSequence" }, // 3175783907
		{ &Z_Construct_UFunction_ADBDMenuPlayer_BeginDestroySequence_Internal, "BeginDestroySequence_Internal" }, // 2217264845
		{ &Z_Construct_UFunction_ADBDMenuPlayer_GetCharmSpawnerComponent, "GetCharmSpawnerComponent" }, // 327583136
		{ &Z_Construct_UFunction_ADBDMenuPlayer_GetHandPosition, "GetHandPosition" }, // 3053511911
		{ &Z_Construct_UFunction_ADBDMenuPlayer_IsInMenuPlayer, "IsInMenuPlayer" }, // 1787954724
		{ &Z_Construct_UFunction_ADBDMenuPlayer_OnCustomizationTransactionCompleted, "OnCustomizationTransactionCompleted" }, // 3537967085
		{ &Z_Construct_UFunction_ADBDMenuPlayer_RestartInSequence_Internal, "RestartInSequence_Internal" }, // 3546110899
		{ &Z_Construct_UFunction_ADBDMenuPlayer_ShouldApplyPositionOffset, "ShouldApplyPositionOffset" }, // 1516084136
		{ &Z_Construct_UFunction_ADBDMenuPlayer_ShouldShowSpawnAnimation, "ShouldShowSpawnAnimation" }, // 3001985332
		{ &Z_Construct_UFunction_ADBDMenuPlayer_WrappedOnDestroyed, "WrappedOnDestroyed" }, // 2716552256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DBDMenuPlayer.h" },
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__equippedItemName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__equippedItemName = { "_equippedItemName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDMenuPlayer, _equippedItemName), METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__equippedItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__equippedItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_MaterialHelper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDMenuPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_MaterialHelper = { "MaterialHelper", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDMenuPlayer, MaterialHelper), Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_MaterialHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_MaterialHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDMenuPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDMenuPlayer, ItemMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__handPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__handPosition = { "_handPosition", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDMenuPlayer, _handPosition), Z_Construct_UEnum_DeadByDaylight_EItemHandPosition, METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__handPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__handPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__handPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_DarkMaterial_MetaData[] = {
		{ "Category", "DBDMenuPlayer" },
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_DarkMaterial = { "DarkMaterial", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDMenuPlayer, DarkMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_DarkMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_DarkMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_OnItemEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_OnItemEquipped = { "OnItemEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDMenuPlayer, OnItemEquipped), Z_Construct_UDelegateFunction_DeadByDaylight_DBDMenuPlayerOnItemEquipped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_OnItemEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_OnItemEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_IsOnline_MetaData[] = {
		{ "Category", "DBDMenuPlayer" },
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_IsOnline_SetBit(void* Obj)
	{
		((ADBDMenuPlayer*)Obj)->IsOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_IsOnline = { "IsOnline", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDMenuPlayer), &Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_IsOnline_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_IsOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_IsOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_RoleSelected_MetaData[] = {
		{ "Category", "DBDMenuPlayer" },
		{ "ModuleRelativePath", "Public/DBDMenuPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_RoleSelected_SetBit(void* Obj)
	{
		((ADBDMenuPlayer*)Obj)->RoleSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_RoleSelected = { "RoleSelected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDMenuPlayer), &Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_RoleSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_RoleSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_RoleSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDMenuPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__equippedItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_MaterialHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_ItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__handPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp__handPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_DarkMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_OnItemEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_IsOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDMenuPlayer_Statics::NewProp_RoleSelected,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADBDMenuPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStandDisplayable_NoRegister, (int32)VTABLE_OFFSET(ADBDMenuPlayer, IStandDisplayable), false },
			{ Z_Construct_UClass_UCharmAttachable_NoRegister, (int32)VTABLE_OFFSET(ADBDMenuPlayer, ICharmAttachable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDMenuPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDMenuPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDMenuPlayer_Statics::ClassParams = {
		&ADBDMenuPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDMenuPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDMenuPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMenuPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDMenuPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDMenuPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDMenuPlayer, 3374826946);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDMenuPlayer>()
	{
		return ADBDMenuPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDMenuPlayer(Z_Construct_UClass_ADBDMenuPlayer, &ADBDMenuPlayer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDMenuPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDMenuPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
