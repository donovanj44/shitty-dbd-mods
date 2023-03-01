// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MontagePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMontagePlayer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMontageInstanceInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventMontagePlayerOnMontageEnded_Parms
		{
			FAnimationMontageDescriptor animMontageID;
			bool interrupted;
		};
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animMontageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_animMontageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventMontagePlayerOnMontageEnded_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventMontagePlayerOnMontageEnded_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_animMontageID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_animMontageID = { "animMontageID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventMontagePlayerOnMontageEnded_Parms, animMontageID), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_animMontageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_animMontageID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::NewProp_animMontageID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "MontagePlayerOnMontageEnded__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventMontagePlayerOnMontageEnded_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventMontagePlayerOnMontageStarted_Parms
		{
			FAnimationMontageDescriptor animMontageID;
			float PlayRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animMontageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_animMontageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_PlayRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventMontagePlayerOnMontageStarted_Parms, PlayRate), METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_animMontageID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_animMontageID = { "animMontageID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventMontagePlayerOnMontageStarted_Parms, animMontageID), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_animMontageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_animMontageID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::NewProp_animMontageID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "MontagePlayerOnMontageStarted__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventMontagePlayerOnMontageStarted_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMontagePlayer::execGetAnimInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execIsPlaying)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_montageDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(Z_Param_montageDescriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execIsPlayingAnyMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingAnyMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execJumpToSection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_sectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToSection(Z_Param_sectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execJumpToSectionEnd)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_sectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToSectionEnd(Z_Param_sectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execOnMontageBlendingOutInternal)
	{
		P_GET_STRUCT(FGuid,Z_Param_guid);
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_GET_UBOOL(Z_Param_interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOutInternal(Z_Param_guid,Z_Param_montage,Z_Param_interrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execOnMontageEndedInternal)
	{
		P_GET_STRUCT(FGuid,Z_Param_guid);
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_GET_UBOOL(Z_Param_interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEndedInternal(Z_Param_guid,Z_Param_montage,Z_Param_interrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execPlay)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_animMontageID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_playRate);
		P_GET_UBOOL(Z_Param_isFollower);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->Play(Z_Param_animMontageID,Z_Param_playRate,Z_Param_isFollower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execPlayLoopForDuration)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_animMontageID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_playRate);
		P_GET_PROPERTY(FNameProperty,Z_Param_out);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlayLoopForDuration(Z_Param_animMontageID,Z_Param_duration,Z_Param_playRate,Z_Param_out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_playRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_playRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execSetSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMesh(Z_Param_skeletalMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execSignalAnimInstanceChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SignalAnimInstanceChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMontagePlayer::execStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_blendOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop(Z_Param_blendOutTime);
		P_NATIVE_END;
	}
	void UMontagePlayer::StaticRegisterNativesUMontagePlayer()
	{
		UClass* Class = UMontagePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimInstance", &UMontagePlayer::execGetAnimInstance },
			{ "IsPlaying", &UMontagePlayer::execIsPlaying },
			{ "IsPlayingAnyMontage", &UMontagePlayer::execIsPlayingAnyMontage },
			{ "JumpToSection", &UMontagePlayer::execJumpToSection },
			{ "JumpToSectionEnd", &UMontagePlayer::execJumpToSectionEnd },
			{ "OnMontageBlendingOutInternal", &UMontagePlayer::execOnMontageBlendingOutInternal },
			{ "OnMontageEndedInternal", &UMontagePlayer::execOnMontageEndedInternal },
			{ "Play", &UMontagePlayer::execPlay },
			{ "PlayLoopForDuration", &UMontagePlayer::execPlayLoopForDuration },
			{ "SetPlayRate", &UMontagePlayer::execSetPlayRate },
			{ "SetSkeletalMesh", &UMontagePlayer::execSetSkeletalMesh },
			{ "SignalAnimInstanceChanged", &UMontagePlayer::execSignalAnimInstanceChanged },
			{ "Stop", &UMontagePlayer::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics
	{
		struct MontagePlayer_eventGetAnimInstance_Parms
		{
			UAnimInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventGetAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "GetAnimInstance", nullptr, nullptr, sizeof(MontagePlayer_eventGetAnimInstance_Parms), Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_GetAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_GetAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics
	{
		struct MontagePlayer_eventIsPlaying_Parms
		{
			FAnimationMontageDescriptor montageDescriptor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montageDescriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MontagePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MontagePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::NewProp_montageDescriptor = { "montageDescriptor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventIsPlaying_Parms, montageDescriptor), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::NewProp_montageDescriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(MontagePlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics
	{
		struct MontagePlayer_eventIsPlayingAnyMontage_Parms
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
	void Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MontagePlayer_eventIsPlayingAnyMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MontagePlayer_eventIsPlayingAnyMontage_Parms), &Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "IsPlayingAnyMontage", nullptr, nullptr, sizeof(MontagePlayer_eventIsPlayingAnyMontage_Parms), Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics
	{
		struct MontagePlayer_eventJumpToSection_Parms
		{
			FName sectionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_sectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::NewProp_sectionName = { "sectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventJumpToSection_Parms, sectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::NewProp_sectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "JumpToSection", nullptr, nullptr, sizeof(MontagePlayer_eventJumpToSection_Parms), Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_JumpToSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_JumpToSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics
	{
		struct MontagePlayer_eventJumpToSectionEnd_Parms
		{
			FName sectionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_sectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::NewProp_sectionName = { "sectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventJumpToSectionEnd_Parms, sectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::NewProp_sectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "JumpToSectionEnd", nullptr, nullptr, sizeof(MontagePlayer_eventJumpToSectionEnd_Parms), Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics
	{
		struct MontagePlayer_eventOnMontageBlendingOutInternal_Parms
		{
			FGuid guid;
			UAnimMontage* montage;
			bool interrupted;
		};
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((MontagePlayer_eventOnMontageBlendingOutInternal_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MontagePlayer_eventOnMontageBlendingOutInternal_Parms), &Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventOnMontageBlendingOutInternal_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::NewProp_guid = { "guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventOnMontageBlendingOutInternal_Parms, guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::NewProp_montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::NewProp_guid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "OnMontageBlendingOutInternal", nullptr, nullptr, sizeof(MontagePlayer_eventOnMontageBlendingOutInternal_Parms), Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics
	{
		struct MontagePlayer_eventOnMontageEndedInternal_Parms
		{
			FGuid guid;
			UAnimMontage* montage;
			bool interrupted;
		};
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((MontagePlayer_eventOnMontageEndedInternal_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MontagePlayer_eventOnMontageEndedInternal_Parms), &Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventOnMontageEndedInternal_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::NewProp_guid = { "guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventOnMontageEndedInternal_Parms, guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::NewProp_montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::NewProp_guid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "OnMontageEndedInternal", nullptr, nullptr, sizeof(MontagePlayer_eventOnMontageEndedInternal_Parms), Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_Play_Statics
	{
		struct MontagePlayer_eventPlay_Parms
		{
			FAnimationMontageDescriptor animMontageID;
			float playRate;
			bool isFollower;
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_isFollower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFollower;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_animMontageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventPlay_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_isFollower_SetBit(void* Obj)
	{
		((MontagePlayer_eventPlay_Parms*)Obj)->isFollower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_isFollower = { "isFollower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MontagePlayer_eventPlay_Parms), &Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_isFollower_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_playRate = { "playRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventPlay_Parms, playRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_animMontageID = { "animMontageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventPlay_Parms, animMontageID), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_isFollower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_playRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_Play_Statics::NewProp_animMontageID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "Play", nullptr, nullptr, sizeof(MontagePlayer_eventPlay_Parms), Z_Construct_UFunction_UMontagePlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics
	{
		struct MontagePlayer_eventPlayLoopForDuration_Parms
		{
			FAnimationMontageDescriptor animMontageID;
			float duration;
			float playRate;
			FName out;
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_out;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_animMontageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventPlayLoopForDuration_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_out = { "out", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventPlayLoopForDuration_Parms, out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_playRate = { "playRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventPlayLoopForDuration_Parms, playRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventPlayLoopForDuration_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_animMontageID = { "animMontageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventPlayLoopForDuration_Parms, animMontageID), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_playRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::NewProp_animMontageID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "PlayLoopForDuration", nullptr, nullptr, sizeof(MontagePlayer_eventPlayLoopForDuration_Parms), Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics
	{
		struct MontagePlayer_eventSetPlayRate_Parms
		{
			float playRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::NewProp_playRate = { "playRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventSetPlayRate_Parms, playRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::NewProp_playRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(MontagePlayer_eventSetPlayRate_Parms), Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics
	{
		struct MontagePlayer_eventSetSkeletalMesh_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventSetSkeletalMesh_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::NewProp_skeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "SetSkeletalMesh", nullptr, nullptr, sizeof(MontagePlayer_eventSetSkeletalMesh_Parms), Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_SignalAnimInstanceChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_SignalAnimInstanceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_SignalAnimInstanceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "SignalAnimInstanceChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_SignalAnimInstanceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_SignalAnimInstanceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_SignalAnimInstanceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_SignalAnimInstanceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMontagePlayer_Stop_Statics
	{
		struct MontagePlayer_eventStop_Parms
		{
			float blendOutTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_blendOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMontagePlayer_Stop_Statics::NewProp_blendOutTime = { "blendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MontagePlayer_eventStop_Parms, blendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMontagePlayer_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMontagePlayer_Stop_Statics::NewProp_blendOutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMontagePlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMontagePlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMontagePlayer, nullptr, "Stop", nullptr, nullptr, sizeof(MontagePlayer_eventStop_Parms), Z_Construct_UFunction_UMontagePlayer_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMontagePlayer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMontagePlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMontagePlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMontagePlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMontagePlayer_NoRegister()
	{
		return UMontagePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UMontagePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montageToNameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__montageToNameMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montageToNameMap_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__montageToNameMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBeforeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeBeforeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outSectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__outSectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeMontagesInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__activeMontagesInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activeMontagesInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentlyPlayingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentlyPlayingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerSpecificMappingsTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerSpecificMappingsTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationMappingsTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animationMappingsTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMontageEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMontageStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMontagePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMontagePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMontagePlayer_GetAnimInstance, "GetAnimInstance" }, // 1669825749
		{ &Z_Construct_UFunction_UMontagePlayer_IsPlaying, "IsPlaying" }, // 3668970906
		{ &Z_Construct_UFunction_UMontagePlayer_IsPlayingAnyMontage, "IsPlayingAnyMontage" }, // 2481180738
		{ &Z_Construct_UFunction_UMontagePlayer_JumpToSection, "JumpToSection" }, // 3195004415
		{ &Z_Construct_UFunction_UMontagePlayer_JumpToSectionEnd, "JumpToSectionEnd" }, // 306668660
		{ &Z_Construct_UFunction_UMontagePlayer_OnMontageBlendingOutInternal, "OnMontageBlendingOutInternal" }, // 3134661538
		{ &Z_Construct_UFunction_UMontagePlayer_OnMontageEndedInternal, "OnMontageEndedInternal" }, // 1193385851
		{ &Z_Construct_UFunction_UMontagePlayer_Play, "Play" }, // 158109578
		{ &Z_Construct_UFunction_UMontagePlayer_PlayLoopForDuration, "PlayLoopForDuration" }, // 488641770
		{ &Z_Construct_UFunction_UMontagePlayer_SetPlayRate, "SetPlayRate" }, // 2367619304
		{ &Z_Construct_UFunction_UMontagePlayer_SetSkeletalMesh, "SetSkeletalMesh" }, // 690694180
		{ &Z_Construct_UFunction_UMontagePlayer_SignalAnimInstanceChanged, "SignalAnimInstanceChanged" }, // 340054896
		{ &Z_Construct_UFunction_UMontagePlayer_Stop, "Stop" }, // 817583607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MontagePlayer.h" },
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap = { "_montageToNameMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, _montageToNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap_Key_KeyProp = { "_montageToNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap_ValueProp = { "_montageToNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp__skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__skeletalMeshComponent = { "_skeletalMeshComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, _skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__skeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp__timeBeforeOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__timeBeforeOut = { "_timeBeforeOut", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, _timeBeforeOut), METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__timeBeforeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__timeBeforeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp__outSectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__outSectionName = { "_outSectionName", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, _outSectionName), METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__outSectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__outSectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp__activeMontagesInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__activeMontagesInfo = { "_activeMontagesInfo", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, _activeMontagesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__activeMontagesInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__activeMontagesInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__activeMontagesInfo_Inner = { "_activeMontagesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMontageInstanceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp__currentlyPlayingMontage_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__currentlyPlayingMontage = { "_currentlyPlayingMontage", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, _currentlyPlayingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__currentlyPlayingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__currentlyPlayingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp__playerSpecificMappingsTable_MetaData[] = {
		{ "Category", "MontagePlayer" },
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__playerSpecificMappingsTable = { "_playerSpecificMappingsTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, _playerSpecificMappingsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__playerSpecificMappingsTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__playerSpecificMappingsTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp__animationMappingsTable_MetaData[] = {
		{ "Category", "MontagePlayer" },
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp__animationMappingsTable = { "_animationMappingsTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, _animationMappingsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__animationMappingsTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp__animationMappingsTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageEnded = { "OnMontageEnded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, OnMontageEnded), Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontagePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageStarted = { "OnMontageStarted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMontagePlayer, OnMontageStarted), Z_Construct_UDelegateFunction_DeadByDaylight_MontagePlayerOnMontageStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMontagePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__montageToNameMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__timeBeforeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__outSectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__activeMontagesInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__activeMontagesInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__currentlyPlayingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__playerSpecificMappingsTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp__animationMappingsTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMontagePlayer_Statics::NewProp_OnMontageStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMontagePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMontagePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMontagePlayer_Statics::ClassParams = {
		&UMontagePlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMontagePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMontagePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMontagePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMontagePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMontagePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMontagePlayer, 3627841967);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMontagePlayer>()
	{
		return UMontagePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMontagePlayer(Z_Construct_UClass_UMontagePlayer, &UMontagePlayer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMontagePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMontagePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
