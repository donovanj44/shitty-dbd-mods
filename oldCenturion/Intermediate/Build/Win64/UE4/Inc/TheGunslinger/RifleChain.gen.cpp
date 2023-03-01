// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/RifleChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifleChain() {}
// Cross Module References
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_ARifleChain_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_ARifleChain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URifleChainTensionComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URiflePlayerLinker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerHarpoon_NoRegister();
	DBDAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSoundLoop();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics
	{
		struct _Script_TheGunslinger_eventRifleChainOnIsCollidingChanged_Parms
		{
			bool isColliding;
		};
		static void NewProp_isColliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isColliding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::NewProp_isColliding_SetBit(void* Obj)
	{
		((_Script_TheGunslinger_eventRifleChainOnIsCollidingChanged_Parms*)Obj)->isColliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::NewProp_isColliding = { "isColliding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TheGunslinger_eventRifleChainOnIsCollidingChanged_Parms), &Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::NewProp_isColliding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::NewProp_isColliding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheGunslinger, nullptr, "RifleChainOnIsCollidingChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheGunslinger_eventRifleChainOnIsCollidingChanged_Parms), Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics
	{
		struct _Script_TheGunslinger_eventRifleChainOnProjectileSet_Parms
		{
			AActor* projectile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TheGunslinger_eventRifleChainOnProjectileSet_Parms, projectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheGunslinger, nullptr, "RifleChainOnProjectileSet__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheGunslinger_eventRifleChainOnProjectileSet_Parms), Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARifleChain::execGetChainEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetChainEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifleChain::execGetChainStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetChainStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifleChain::execGetChainTensionComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URifleChainTensionComponent**)Z_Param__Result=P_THIS->GetChainTensionComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifleChain::execGetFirstAndLastCollisionHits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHitResult>*)Z_Param__Result=P_THIS->GetFirstAndLastCollisionHits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifleChain::execGetRiflePlayerLinker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URiflePlayerLinker**)Z_Param__Result=P_THIS->GetRiflePlayerLinker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifleChain::execGetUnwindingSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUnwindingSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifleChain::execIsColliding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsColliding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifleChain::execSpawnChainPoints)
	{
		P_GET_STRUCT(FVector,Z_Param_start);
		P_GET_STRUCT(FVector,Z_Param_stop);
		P_GET_OBJECT(UCurveFloat,Z_Param_influenceCurve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_pointYPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_pointZPosition);
		P_GET_UBOOL(Z_Param_useOffset);
		P_GET_OBJECT(USplineComponent,Z_Param_spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SpawnChainPoints(Z_Param_start,Z_Param_stop,Z_Param_influenceCurve,Z_Param_pointYPosition,Z_Param_pointZPosition,Z_Param_useOffset,Z_Param_spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifleChain::execUpdateChainMesh)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_mesh);
		P_GET_OBJECT(USplineComponent,Z_Param_spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateChainMesh(Z_Param_mesh,Z_Param_spline,Z_Param_alpha);
		P_NATIVE_END;
	}
	static FName NAME_ARifleChain_OnAttachToPlayer = FName(TEXT("OnAttachToPlayer"));
	void ARifleChain::OnAttachToPlayer(ADBDPlayer* player)
	{
		RifleChain_eventOnAttachToPlayer_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_ARifleChain_OnAttachToPlayer),&Parms);
	}
	static FName NAME_ARifleChain_OnLaunch = FName(TEXT("OnLaunch"));
	void ARifleChain::OnLaunch()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARifleChain_OnLaunch),NULL);
	}
	static FName NAME_ARifleChain_OnReelBackToRifle = FName(TEXT("OnReelBackToRifle"));
	void ARifleChain::OnReelBackToRifle()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARifleChain_OnReelBackToRifle),NULL);
	}
	static FName NAME_ARifleChain_OnUnattachFromPlayer = FName(TEXT("OnUnattachFromPlayer"));
	void ARifleChain::OnUnattachFromPlayer(ADBDPlayer* player)
	{
		RifleChain_eventOnUnattachFromPlayer_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_ARifleChain_OnUnattachFromPlayer),&Parms);
	}
	void ARifleChain::StaticRegisterNativesARifleChain()
	{
		UClass* Class = ARifleChain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChainEnd", &ARifleChain::execGetChainEnd },
			{ "GetChainStart", &ARifleChain::execGetChainStart },
			{ "GetChainTensionComponent", &ARifleChain::execGetChainTensionComponent },
			{ "GetFirstAndLastCollisionHits", &ARifleChain::execGetFirstAndLastCollisionHits },
			{ "GetRiflePlayerLinker", &ARifleChain::execGetRiflePlayerLinker },
			{ "GetUnwindingSpeed", &ARifleChain::execGetUnwindingSpeed },
			{ "IsColliding", &ARifleChain::execIsColliding },
			{ "SpawnChainPoints", &ARifleChain::execSpawnChainPoints },
			{ "UpdateChainMesh", &ARifleChain::execUpdateChainMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics
	{
		struct RifleChain_eventGetChainEnd_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventGetChainEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "GetChainEnd", nullptr, nullptr, sizeof(RifleChain_eventGetChainEnd_Parms), Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_GetChainEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_GetChainEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_GetChainStart_Statics
	{
		struct RifleChain_eventGetChainStart_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventGetChainStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "GetChainStart", nullptr, nullptr, sizeof(RifleChain_eventGetChainStart_Parms), Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_GetChainStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_GetChainStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics
	{
		struct RifleChain_eventGetChainTensionComponent_Parms
		{
			URifleChainTensionComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventGetChainTensionComponent_Parms, ReturnValue), Z_Construct_UClass_URifleChainTensionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "GetChainTensionComponent", nullptr, nullptr, sizeof(RifleChain_eventGetChainTensionComponent_Parms), Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_GetChainTensionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_GetChainTensionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics
	{
		struct RifleChain_eventGetFirstAndLastCollisionHits_Parms
		{
			TArray<FHitResult> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventGetFirstAndLastCollisionHits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "GetFirstAndLastCollisionHits", nullptr, nullptr, sizeof(RifleChain_eventGetFirstAndLastCollisionHits_Parms), Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics
	{
		struct RifleChain_eventGetRiflePlayerLinker_Parms
		{
			URiflePlayerLinker* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventGetRiflePlayerLinker_Parms, ReturnValue), Z_Construct_UClass_URiflePlayerLinker_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "GetRiflePlayerLinker", nullptr, nullptr, sizeof(RifleChain_eventGetRiflePlayerLinker_Parms), Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics
	{
		struct RifleChain_eventGetUnwindingSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventGetUnwindingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "GetUnwindingSpeed", nullptr, nullptr, sizeof(RifleChain_eventGetUnwindingSpeed_Parms), Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_IsColliding_Statics
	{
		struct RifleChain_eventIsColliding_Parms
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
	void Z_Construct_UFunction_ARifleChain_IsColliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RifleChain_eventIsColliding_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARifleChain_IsColliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RifleChain_eventIsColliding_Parms), &Z_Construct_UFunction_ARifleChain_IsColliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_IsColliding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_IsColliding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_IsColliding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_IsColliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "IsColliding", nullptr, nullptr, sizeof(RifleChain_eventIsColliding_Parms), Z_Construct_UFunction_ARifleChain_IsColliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_IsColliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_IsColliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_IsColliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_IsColliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_IsColliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventOnAttachToPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "OnAttachToPlayer", nullptr, nullptr, sizeof(RifleChain_eventOnAttachToPlayer_Parms), Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_OnAttachToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_OnAttachToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_OnLaunch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_OnLaunch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_OnLaunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "OnLaunch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_OnLaunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_OnLaunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_OnLaunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_OnLaunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_OnReelBackToRifle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_OnReelBackToRifle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_OnReelBackToRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "OnReelBackToRifle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_OnReelBackToRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_OnReelBackToRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_OnReelBackToRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_OnReelBackToRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventOnUnattachFromPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "OnUnattachFromPlayer", nullptr, nullptr, sizeof(RifleChain_eventOnUnattachFromPlayer_Parms), Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics
	{
		struct RifleChain_eventSpawnChainPoints_Parms
		{
			FVector start;
			FVector stop;
			UCurveFloat* influenceCurve;
			float pointYPosition;
			float pointZPosition;
			bool useOffset;
			USplineComponent* spline;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spline;
		static void NewProp_useOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pointZPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pointYPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_influenceCurve;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stop;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventSpawnChainPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_spline = { "spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventSpawnChainPoints_Parms, spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_spline_MetaData)) };
	void Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_useOffset_SetBit(void* Obj)
	{
		((RifleChain_eventSpawnChainPoints_Parms*)Obj)->useOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_useOffset = { "useOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RifleChain_eventSpawnChainPoints_Parms), &Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_useOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_pointZPosition = { "pointZPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventSpawnChainPoints_Parms, pointZPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_pointYPosition = { "pointYPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventSpawnChainPoints_Parms, pointYPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_influenceCurve = { "influenceCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventSpawnChainPoints_Parms, influenceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_stop = { "stop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventSpawnChainPoints_Parms, stop), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventSpawnChainPoints_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_useOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_pointZPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_pointYPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_influenceCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_stop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "SpawnChainPoints", nullptr, nullptr, sizeof(RifleChain_eventSpawnChainPoints_Parms), Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_SpawnChainPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_SpawnChainPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics
	{
		struct RifleChain_eventUpdateChainMesh_Parms
		{
			UInstancedStaticMeshComponent* mesh;
			USplineComponent* spline;
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventUpdateChainMesh_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_spline = { "spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventUpdateChainMesh_Parms, spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_spline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RifleChain_eventUpdateChainMesh_Parms, mesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::NewProp_mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifleChain, nullptr, "UpdateChainMesh", nullptr, nullptr, sizeof(RifleChain_eventUpdateChainMesh_Parms), Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifleChain_UpdateChainMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifleChain_UpdateChainMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARifleChain_NoRegister()
	{
		return ARifleChain::StaticClass();
	}
	struct Z_Construct_UClass_ARifleChain_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__harpoon_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__harpoon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBetweenTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeBetweenTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sphereTraceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sphereTraceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionSoundLoops_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__collisionSoundLoops;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__collisionSoundLoops_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionLoopEndEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collisionLoopEndEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionLoopStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collisionLoopStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainCenterAkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainCenterAkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsCollidingChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsCollidingChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProjectileSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARifleChain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARifleChain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARifleChain_GetChainEnd, "GetChainEnd" }, // 2279039298
		{ &Z_Construct_UFunction_ARifleChain_GetChainStart, "GetChainStart" }, // 4163973450
		{ &Z_Construct_UFunction_ARifleChain_GetChainTensionComponent, "GetChainTensionComponent" }, // 398871416
		{ &Z_Construct_UFunction_ARifleChain_GetFirstAndLastCollisionHits, "GetFirstAndLastCollisionHits" }, // 1264485786
		{ &Z_Construct_UFunction_ARifleChain_GetRiflePlayerLinker, "GetRiflePlayerLinker" }, // 4222407606
		{ &Z_Construct_UFunction_ARifleChain_GetUnwindingSpeed, "GetUnwindingSpeed" }, // 3377390412
		{ &Z_Construct_UFunction_ARifleChain_IsColliding, "IsColliding" }, // 4153855509
		{ &Z_Construct_UFunction_ARifleChain_OnAttachToPlayer, "OnAttachToPlayer" }, // 1391077599
		{ &Z_Construct_UFunction_ARifleChain_OnLaunch, "OnLaunch" }, // 1838555634
		{ &Z_Construct_UFunction_ARifleChain_OnReelBackToRifle, "OnReelBackToRifle" }, // 2742081111
		{ &Z_Construct_UFunction_ARifleChain_OnUnattachFromPlayer, "OnUnattachFromPlayer" }, // 2087729175
		{ &Z_Construct_UFunction_ARifleChain_SpawnChainPoints, "SpawnChainPoints" }, // 1724968254
		{ &Z_Construct_UFunction_ARifleChain_UpdateChainMesh, "UpdateChainMesh" }, // 3801802526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RifleChain.h" },
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp__harpoon_MetaData[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp__harpoon = { "_harpoon", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, _harpoon), Z_Construct_UClass_UGunslingerHarpoon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp__harpoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp__harpoon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp__timeBetweenTrace_MetaData[] = {
		{ "Category", "RifleChain" },
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp__timeBetweenTrace = { "_timeBetweenTrace", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, _timeBetweenTrace), METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp__timeBetweenTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp__timeBetweenTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp__sphereTraceRadius_MetaData[] = {
		{ "Category", "RifleChain" },
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp__sphereTraceRadius = { "_sphereTraceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, _sphereTraceRadius), METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp__sphereTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp__sphereTraceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionSoundLoops_MetaData[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionSoundLoops = { "_collisionSoundLoops", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, _collisionSoundLoops), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionSoundLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionSoundLoops_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionSoundLoops_Inner = { "_collisionSoundLoops", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkSoundLoop, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopEndEvent_MetaData[] = {
		{ "Category", "RifleChain" },
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopEndEvent = { "_collisionLoopEndEvent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, _collisionLoopEndEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopEndEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopEndEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopStartEvent_MetaData[] = {
		{ "Category", "RifleChain" },
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopStartEvent = { "_collisionLoopStartEvent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, _collisionLoopStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp__chainCenterAkComponent_MetaData[] = {
		{ "Category", "RifleChain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp__chainCenterAkComponent = { "_chainCenterAkComponent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, _chainCenterAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp__chainCenterAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp__chainCenterAkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp_OnIsCollidingChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp_OnIsCollidingChanged = { "OnIsCollidingChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, OnIsCollidingChanged), Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp_OnIsCollidingChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp_OnIsCollidingChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleChain_Statics::NewProp_OnProjectileSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/RifleChain.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARifleChain_Statics::NewProp_OnProjectileSet = { "OnProjectileSet", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleChain, OnProjectileSet), Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::NewProp_OnProjectileSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::NewProp_OnProjectileSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARifleChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp__harpoon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp__timeBetweenTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp__sphereTraceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionSoundLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionSoundLoops_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopEndEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp__collisionLoopStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp__chainCenterAkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp_OnIsCollidingChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleChain_Statics::NewProp_OnProjectileSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARifleChain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifleChain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARifleChain_Statics::ClassParams = {
		&ARifleChain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARifleChain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARifleChain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleChain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARifleChain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARifleChain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARifleChain, 1234238908);
	template<> THEGUNSLINGER_API UClass* StaticClass<ARifleChain>()
	{
		return ARifleChain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARifleChain(Z_Construct_UClass_ARifleChain, &ARifleChain::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("ARifleChain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARifleChain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
