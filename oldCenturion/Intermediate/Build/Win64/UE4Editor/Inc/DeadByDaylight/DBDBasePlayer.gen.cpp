// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDBasePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBasePlayer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBasePlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBasePlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizedAudioComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UBaseGroundDetectorComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDBasePlayerOnCustomizationChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execDBD_SwapCosmetics)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_cosmeticId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SwapCosmetics(Z_Param_cosmeticId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetAudioComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=P_THIS->GetAudioComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetCharacterIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCharacterIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetCharacterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCharacterName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetCustomizedAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomizedAudioComponent**)Z_Param__Result=P_THIS->GetCustomizedAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetLeftFootAudioSurfaceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLeftFootAudioSurfaceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetLeftFootSurfaceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=P_THIS->GetLeftFootSurfaceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetRightFootAudioSurfaceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRightFootAudioSurfaceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetRightFootSurfaceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=P_THIS->GetRightFootSurfaceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetSemanticTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSemanticTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execGetShowBlindDebugInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShowBlindDebugInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execMulticast_SwapCosmetics)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_cosmeticId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SwapCosmetics_Implementation(Z_Param_cosmeticId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBasePlayer::execTeleportWithClothHandling)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
		P_GET_UBOOL(Z_Param_checkCollisions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TeleportWithClothHandling(Z_Param_Out_location,Z_Param_Out_rotation,Z_Param_checkCollisions);
		P_NATIVE_END;
	}
	static FName NAME_ADBDBasePlayer_Multicast_SwapCosmetics = FName(TEXT("Multicast_SwapCosmetics"));
	void ADBDBasePlayer::Multicast_SwapCosmetics(FName cosmeticId)
	{
		DBDBasePlayer_eventMulticast_SwapCosmetics_Parms Parms;
		Parms.cosmeticId=cosmeticId;
		ProcessEvent(FindFunctionChecked(NAME_ADBDBasePlayer_Multicast_SwapCosmetics),&Parms);
	}
	void ADBDBasePlayer::StaticRegisterNativesADBDBasePlayer()
	{
		UClass* Class = ADBDBasePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_SwapCosmetics", &ADBDBasePlayer::execDBD_SwapCosmetics },
			{ "GetAudioComponent", &ADBDBasePlayer::execGetAudioComponent },
			{ "GetCharacterIndex", &ADBDBasePlayer::execGetCharacterIndex },
			{ "GetCharacterName", &ADBDBasePlayer::execGetCharacterName },
			{ "GetCustomizedAudio", &ADBDBasePlayer::execGetCustomizedAudio },
			{ "GetLeftFootAudioSurfaceName", &ADBDBasePlayer::execGetLeftFootAudioSurfaceName },
			{ "GetLeftFootSurfaceType", &ADBDBasePlayer::execGetLeftFootSurfaceType },
			{ "GetRightFootAudioSurfaceName", &ADBDBasePlayer::execGetRightFootAudioSurfaceName },
			{ "GetRightFootSurfaceType", &ADBDBasePlayer::execGetRightFootSurfaceType },
			{ "GetSemanticTag", &ADBDBasePlayer::execGetSemanticTag },
			{ "GetShowBlindDebugInfo", &ADBDBasePlayer::execGetShowBlindDebugInfo },
			{ "Multicast_SwapCosmetics", &ADBDBasePlayer::execMulticast_SwapCosmetics },
			{ "TeleportWithClothHandling", &ADBDBasePlayer::execTeleportWithClothHandling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics
	{
		struct DBDBasePlayer_eventDBD_SwapCosmetics_Parms
		{
			FName cosmeticId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_cosmeticId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::NewProp_cosmeticId = { "cosmeticId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventDBD_SwapCosmetics_Parms, cosmeticId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::NewProp_cosmeticId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "DBD_SwapCosmetics", nullptr, nullptr, sizeof(DBDBasePlayer_eventDBD_SwapCosmetics_Parms), Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics
	{
		struct DBDBasePlayer_eventGetAudioComponent_Parms
		{
			UAkComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetAudioComponent", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetAudioComponent_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics
	{
		struct DBDBasePlayer_eventGetCharacterIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetCharacterIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetCharacterIndex", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetCharacterIndex_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics
	{
		struct DBDBasePlayer_eventGetCharacterName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetCharacterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetCharacterName", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetCharacterName_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics
	{
		struct DBDBasePlayer_eventGetCustomizedAudio_Parms
		{
			UCustomizedAudioComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetCustomizedAudio_Parms, ReturnValue), Z_Construct_UClass_UCustomizedAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetCustomizedAudio", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetCustomizedAudio_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics
	{
		struct DBDBasePlayer_eventGetLeftFootAudioSurfaceName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetLeftFootAudioSurfaceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetLeftFootAudioSurfaceName", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetLeftFootAudioSurfaceName_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics
	{
		struct DBDBasePlayer_eventGetLeftFootSurfaceType_Parms
		{
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetLeftFootSurfaceType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetLeftFootSurfaceType", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetLeftFootSurfaceType_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics
	{
		struct DBDBasePlayer_eventGetRightFootAudioSurfaceName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetRightFootAudioSurfaceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetRightFootAudioSurfaceName", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetRightFootAudioSurfaceName_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics
	{
		struct DBDBasePlayer_eventGetRightFootSurfaceType_Parms
		{
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetRightFootSurfaceType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetRightFootSurfaceType", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetRightFootSurfaceType_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics
	{
		struct DBDBasePlayer_eventGetSemanticTag_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventGetSemanticTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetSemanticTag", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetSemanticTag_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics
	{
		struct DBDBasePlayer_eventGetShowBlindDebugInfo_Parms
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
	void Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDBasePlayer_eventGetShowBlindDebugInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDBasePlayer_eventGetShowBlindDebugInfo_Parms), &Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "GetShowBlindDebugInfo", nullptr, nullptr, sizeof(DBDBasePlayer_eventGetShowBlindDebugInfo_Parms), Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_cosmeticId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::NewProp_cosmeticId = { "cosmeticId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventMulticast_SwapCosmetics_Parms, cosmeticId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::NewProp_cosmeticId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "Multicast_SwapCosmetics", nullptr, nullptr, sizeof(DBDBasePlayer_eventMulticast_SwapCosmetics_Parms), Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics
	{
		struct DBDBasePlayer_eventTeleportWithClothHandling_Parms
		{
			FVector location;
			FRotator rotation;
			bool checkCollisions;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_checkCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checkCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDBasePlayer_eventTeleportWithClothHandling_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDBasePlayer_eventTeleportWithClothHandling_Parms), &Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_checkCollisions_SetBit(void* Obj)
	{
		((DBDBasePlayer_eventTeleportWithClothHandling_Parms*)Obj)->checkCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_checkCollisions = { "checkCollisions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDBasePlayer_eventTeleportWithClothHandling_Parms), &Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_checkCollisions_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventTeleportWithClothHandling_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBasePlayer_eventTeleportWithClothHandling_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_checkCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBasePlayer, nullptr, "TeleportWithClothHandling", nullptr, nullptr, sizeof(DBDBasePlayer_eventTeleportWithClothHandling_Parms), Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDBasePlayer_NoRegister()
	{
		return ADBDBasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_ADBDBasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__characterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightFootGroundDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rightFootGroundDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftFootGroundDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__leftFootGroundDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__semanticGameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__semanticGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCustomizationChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomizationChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDBasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDBasePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDBasePlayer_DBD_SwapCosmetics, "DBD_SwapCosmetics" }, // 3903624648
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetAudioComponent, "GetAudioComponent" }, // 1403758678
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetCharacterIndex, "GetCharacterIndex" }, // 913855698
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetCharacterName, "GetCharacterName" }, // 529269235
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetCustomizedAudio, "GetCustomizedAudio" }, // 101320885
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootAudioSurfaceName, "GetLeftFootAudioSurfaceName" }, // 376571912
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetLeftFootSurfaceType, "GetLeftFootSurfaceType" }, // 4084264818
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetRightFootAudioSurfaceName, "GetRightFootAudioSurfaceName" }, // 2441389087
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetRightFootSurfaceType, "GetRightFootSurfaceType" }, // 3839654881
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetSemanticTag, "GetSemanticTag" }, // 3199657866
		{ &Z_Construct_UFunction_ADBDBasePlayer_GetShowBlindDebugInfo, "GetShowBlindDebugInfo" }, // 2313763293
		{ &Z_Construct_UFunction_ADBDBasePlayer_Multicast_SwapCosmetics, "Multicast_SwapCosmetics" }, // 1747305118
		{ &Z_Construct_UFunction_ADBDBasePlayer_TeleportWithClothHandling, "TeleportWithClothHandling" }, // 3414207158
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBasePlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DBDBasePlayer.h" },
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__characterIndex_MetaData[] = {
		{ "Category", "DBDBasePlayer" },
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__characterIndex = { "_characterIndex", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBasePlayer, _characterIndex), METADATA_PARAMS(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__characterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__characterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__rightFootGroundDetector_MetaData[] = {
		{ "Category", "DBDBasePlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__rightFootGroundDetector = { "_rightFootGroundDetector", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBasePlayer, _rightFootGroundDetector), Z_Construct_UClass_UBaseGroundDetectorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__rightFootGroundDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__rightFootGroundDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__leftFootGroundDetector_MetaData[] = {
		{ "Category", "DBDBasePlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__leftFootGroundDetector = { "_leftFootGroundDetector", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBasePlayer, _leftFootGroundDetector), Z_Construct_UClass_UBaseGroundDetectorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__leftFootGroundDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__leftFootGroundDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__semanticGameplayTags_MetaData[] = {
		{ "Category", "DBDBasePlayer" },
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__semanticGameplayTags = { "_semanticGameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBasePlayer, _semanticGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__semanticGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__semanticGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp_OnCustomizationChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp_OnCustomizationChanged = { "OnCustomizationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBasePlayer, OnCustomizationChanged), Z_Construct_UDelegateFunction_DeadByDaylight_DBDBasePlayerOnCustomizationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp_OnCustomizationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp_OnCustomizationChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDBasePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__characterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__rightFootGroundDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__leftFootGroundDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp__semanticGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBasePlayer_Statics::NewProp_OnCustomizationChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDBasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDBasePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDBasePlayer_Statics::ClassParams = {
		&ADBDBasePlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDBasePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBasePlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDBasePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDBasePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDBasePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDBasePlayer, 3368228959);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDBasePlayer>()
	{
		return ADBDBasePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDBasePlayer(Z_Construct_UClass_ADBDBasePlayer, &ADBDBasePlayer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDBasePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDBasePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
