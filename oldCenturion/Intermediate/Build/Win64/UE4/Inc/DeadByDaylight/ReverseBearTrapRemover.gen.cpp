// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ReverseBearTrapRemover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverseBearTrapRemover() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AReverseBearTrapRemover_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AReverseBearTrapRemover();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AReverseBearTrap_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapActorComponent_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AReverseBearTrapRemover::execAddKey)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_keyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddKey(Z_Param_keyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrapRemover::execAddSearchedKey)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_keyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSearchedKey(Z_Param_keyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrapRemover::execGetAttachedRBT)
	{
		P_GET_OBJECT(AActor,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AReverseBearTrap**)Z_Param__Result=P_THIS->GetAttachedRBT(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrapRemover::execGetInteractorPrimitiveComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetInteractorPrimitiveComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrapRemover::execGetMapActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMapActorComponent**)Z_Param__Result=P_THIS->GetMapActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrapRemover::execHasKey)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_keyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKey(Z_Param_keyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReverseBearTrapRemover::execHasSearchedForKey)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_keyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSearchedForKey(Z_Param_keyId);
		P_NATIVE_END;
	}
	static FName NAME_AReverseBearTrapRemover_GetInteractorPrimitiveComponent = FName(TEXT("GetInteractorPrimitiveComponent"));
	UPrimitiveComponent* AReverseBearTrapRemover::GetInteractorPrimitiveComponent() const
	{
		ReverseBearTrapRemover_eventGetInteractorPrimitiveComponent_Parms Parms;
		const_cast<AReverseBearTrapRemover*>(this)->ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrapRemover_GetInteractorPrimitiveComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AReverseBearTrapRemover_PlayRemoveFailMontage = FName(TEXT("PlayRemoveFailMontage"));
	void AReverseBearTrapRemover::PlayRemoveFailMontage()
	{
		ProcessEvent(FindFunctionChecked(NAME_AReverseBearTrapRemover_PlayRemoveFailMontage),NULL);
	}
	void AReverseBearTrapRemover::StaticRegisterNativesAReverseBearTrapRemover()
	{
		UClass* Class = AReverseBearTrapRemover::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKey", &AReverseBearTrapRemover::execAddKey },
			{ "AddSearchedKey", &AReverseBearTrapRemover::execAddSearchedKey },
			{ "GetAttachedRBT", &AReverseBearTrapRemover::execGetAttachedRBT },
			{ "GetInteractorPrimitiveComponent", &AReverseBearTrapRemover::execGetInteractorPrimitiveComponent },
			{ "GetMapActor", &AReverseBearTrapRemover::execGetMapActor },
			{ "HasKey", &AReverseBearTrapRemover::execHasKey },
			{ "HasSearchedForKey", &AReverseBearTrapRemover::execHasSearchedForKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics
	{
		struct ReverseBearTrapRemover_eventAddKey_Parms
		{
			int32 keyId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_keyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::NewProp_keyId = { "keyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapRemover_eventAddKey_Parms, keyId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::NewProp_keyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrapRemover, nullptr, "AddKey", nullptr, nullptr, sizeof(ReverseBearTrapRemover_eventAddKey_Parms), Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrapRemover_AddKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrapRemover_AddKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics
	{
		struct ReverseBearTrapRemover_eventAddSearchedKey_Parms
		{
			int32 keyId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_keyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::NewProp_keyId = { "keyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapRemover_eventAddSearchedKey_Parms, keyId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::NewProp_keyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrapRemover, nullptr, "AddSearchedKey", nullptr, nullptr, sizeof(ReverseBearTrapRemover_eventAddSearchedKey_Parms), Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics
	{
		struct ReverseBearTrapRemover_eventGetAttachedRBT_Parms
		{
			AActor* player;
			AReverseBearTrap* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapRemover_eventGetAttachedRBT_Parms, ReturnValue), Z_Construct_UClass_AReverseBearTrap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapRemover_eventGetAttachedRBT_Parms, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrapRemover, nullptr, "GetAttachedRBT", nullptr, nullptr, sizeof(ReverseBearTrapRemover_eventGetAttachedRBT_Parms), Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapRemover_eventGetInteractorPrimitiveComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrapRemover, nullptr, "GetInteractorPrimitiveComponent", nullptr, nullptr, sizeof(ReverseBearTrapRemover_eventGetInteractorPrimitiveComponent_Parms), Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics
	{
		struct ReverseBearTrapRemover_eventGetMapActor_Parms
		{
			UMapActorComponent* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapRemover_eventGetMapActor_Parms, ReturnValue), Z_Construct_UClass_UMapActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrapRemover, nullptr, "GetMapActor", nullptr, nullptr, sizeof(ReverseBearTrapRemover_eventGetMapActor_Parms), Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics
	{
		struct ReverseBearTrapRemover_eventHasKey_Parms
		{
			int32 keyId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_keyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrapRemover_eventHasKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrapRemover_eventHasKey_Parms), &Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::NewProp_keyId = { "keyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapRemover_eventHasKey_Parms, keyId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::NewProp_keyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrapRemover, nullptr, "HasKey", nullptr, nullptr, sizeof(ReverseBearTrapRemover_eventHasKey_Parms), Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrapRemover_HasKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrapRemover_HasKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics
	{
		struct ReverseBearTrapRemover_eventHasSearchedForKey_Parms
		{
			int32 keyId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_keyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReverseBearTrapRemover_eventHasSearchedForKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReverseBearTrapRemover_eventHasSearchedForKey_Parms), &Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::NewProp_keyId = { "keyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapRemover_eventHasSearchedForKey_Parms, keyId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::NewProp_keyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrapRemover, nullptr, "HasSearchedForKey", nullptr, nullptr, sizeof(ReverseBearTrapRemover_eventHasSearchedForKey_Parms), Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReverseBearTrapRemover_PlayRemoveFailMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReverseBearTrapRemover_PlayRemoveFailMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReverseBearTrapRemover_PlayRemoveFailMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReverseBearTrapRemover, nullptr, "PlayRemoveFailMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReverseBearTrapRemover_PlayRemoveFailMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReverseBearTrapRemover_PlayRemoveFailMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReverseBearTrapRemover_PlayRemoveFailMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReverseBearTrapRemover_PlayRemoveFailMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AReverseBearTrapRemover_NoRegister()
	{
		return AReverseBearTrapRemover::StaticClass();
	}
	struct Z_Construct_UClass_AReverseBearTrapRemover_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mapActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mapActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__keys;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__keys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReverseBearTrapRemover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReverseBearTrapRemover_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReverseBearTrapRemover_AddKey, "AddKey" }, // 935253244
		{ &Z_Construct_UFunction_AReverseBearTrapRemover_AddSearchedKey, "AddSearchedKey" }, // 789982950
		{ &Z_Construct_UFunction_AReverseBearTrapRemover_GetAttachedRBT, "GetAttachedRBT" }, // 2692965549
		{ &Z_Construct_UFunction_AReverseBearTrapRemover_GetInteractorPrimitiveComponent, "GetInteractorPrimitiveComponent" }, // 3923782529
		{ &Z_Construct_UFunction_AReverseBearTrapRemover_GetMapActor, "GetMapActor" }, // 1178850167
		{ &Z_Construct_UFunction_AReverseBearTrapRemover_HasKey, "HasKey" }, // 2979214853
		{ &Z_Construct_UFunction_AReverseBearTrapRemover_HasSearchedForKey, "HasSearchedForKey" }, // 457850861
		{ &Z_Construct_UFunction_AReverseBearTrapRemover_PlayRemoveFailMontage, "PlayRemoveFailMontage" }, // 4001803373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrapRemover_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReverseBearTrapRemover.h" },
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__mapActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReverseBearTrapRemover" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__mapActor = { "_mapActor", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReverseBearTrapRemover, _mapActor), Z_Construct_UClass_UMapActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__mapActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__mapActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__keys_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapRemover.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__keys = { "_keys", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReverseBearTrapRemover, _keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__keys_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__keys_Inner = { "_keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReverseBearTrapRemover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__mapActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReverseBearTrapRemover_Statics::NewProp__keys_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AReverseBearTrapRemover_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AReverseBearTrapRemover, IAIInteractableTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReverseBearTrapRemover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReverseBearTrapRemover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReverseBearTrapRemover_Statics::ClassParams = {
		&AReverseBearTrapRemover::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AReverseBearTrapRemover_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrapRemover_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReverseBearTrapRemover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReverseBearTrapRemover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReverseBearTrapRemover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReverseBearTrapRemover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReverseBearTrapRemover, 2787540561);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AReverseBearTrapRemover>()
	{
		return AReverseBearTrapRemover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReverseBearTrapRemover(Z_Construct_UClass_AReverseBearTrapRemover, &AReverseBearTrapRemover::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AReverseBearTrapRemover"), false, nullptr, nullptr, nullptr);

	void AReverseBearTrapRemover::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__keys(TEXT("_keys"));

		const bool bIsValid = true
			&& Name__keys == ClassReps[(int32)ENetFields_Private::_keys].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AReverseBearTrapRemover"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReverseBearTrapRemover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
