// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/PlayerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ACTIVATION_API UScriptStruct* Z_Construct_UScriptStruct_FActivationDefinition();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceSelector();
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedAnimCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimEffectHandler_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimEffectBlackBoard_NoRegister();
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerAnimInstance::execGetOwningPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetOwningPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execHasBeenNotified)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_animNotify);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBeenNotified(Z_Param_animNotify);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execOnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
	{
		UClass* Class = UPlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningPlayer", &UPlayerAnimInstance::execGetOwningPlayer },
			{ "HasBeenNotified", &UPlayerAnimInstance::execHasBeenNotified },
			{ "OnIntroCompleted", &UPlayerAnimInstance::execOnIntroCompleted },
			{ "OnLevelReadyToPlay", &UPlayerAnimInstance::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics
	{
		struct PlayerAnimInstance_eventGetOwningPlayer_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnimInstance_eventGetOwningPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "GetOwningPlayer", nullptr, nullptr, sizeof(PlayerAnimInstance_eventGetOwningPlayer_Parms), Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics
	{
		struct PlayerAnimInstance_eventHasBeenNotified_Parms
		{
			FName animNotify;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_animNotify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerAnimInstance_eventHasBeenNotified_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerAnimInstance_eventHasBeenNotified_Parms), &Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_animNotify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_animNotify = { "animNotify", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAnimInstance_eventHasBeenNotified_Parms, animNotify), METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_animNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_animNotify_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::NewProp_animNotify,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "HasBeenNotified", nullptr, nullptr, sizeof(PlayerAnimInstance_eventHasBeenNotified_Parms), Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimInstance_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimInstance_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activationDefinition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isLevelReadyToPlay_MetaData[];
#endif
		static void NewProp__isLevelReadyToPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLevelReadyToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIntroCompleted_MetaData[];
#endif
		static void NewProp__isIntroCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIntroCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInParadise_MetaData[];
#endif
		static void NewProp__isInParadise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInParadise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__selectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__selectors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__selectors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimoffsets1d_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__aimoffsets1d;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimoffsets1d_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimoffsets1d_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blendspaces1d_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__blendspaces1d;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blendspaces1d_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blendspaces1d_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimoffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__aimoffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimoffsets_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimoffsets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blendspaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__blendspaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blendspaces_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blendspaces_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__animations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__animations_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animations_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedAnimCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__taggedAnimCollections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animEffectHandlerClassForVFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__animEffectHandlerClassForVFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animEffectHandlerClassForSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__animEffectHandlerClassForSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animEffectHandlerForVFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animEffectHandlerForVFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animEffectHandlerForSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animEffectHandlerForSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animEffectBlackBoard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animEffectBlackBoard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInstance_GetOwningPlayer, "GetOwningPlayer" }, // 1166543743
		{ &Z_Construct_UFunction_UPlayerAnimInstance_HasBeenNotified, "HasBeenNotified" }, // 3068670684
		{ &Z_Construct_UFunction_UPlayerAnimInstance_OnIntroCompleted, "OnIntroCompleted" }, // 3171110130
		{ &Z_Construct_UFunction_UPlayerAnimInstance_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1692625791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__activationDefinition_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__activationDefinition = { "_activationDefinition", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _activationDefinition), Z_Construct_UScriptStruct_FActivationDefinition, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__activationDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__activationDefinition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isLevelReadyToPlay_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isLevelReadyToPlay_SetBit(void* Obj)
	{
		((UPlayerAnimInstance*)Obj)->_isLevelReadyToPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isLevelReadyToPlay = { "_isLevelReadyToPlay", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isLevelReadyToPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isLevelReadyToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isLevelReadyToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isIntroCompleted_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isIntroCompleted_SetBit(void* Obj)
	{
		((UPlayerAnimInstance*)Obj)->_isIntroCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isIntroCompleted = { "_isIntroCompleted", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isIntroCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isIntroCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isIntroCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isInParadise_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isInParadise_SetBit(void* Obj)
	{
		((UPlayerAnimInstance*)Obj)->_isInParadise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isInParadise = { "_isInParadise", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isInParadise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isInParadise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isInParadise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors = { "_selectors", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _selectors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors_Key_KeyProp = { "_selectors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors_ValueProp = { "_selectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d = { "_aimoffsets1d", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _aimoffsets1d), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d_Key_KeyProp = { "_aimoffsets1d_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d_ValueProp = { "_aimoffsets1d", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d = { "_blendspaces1d", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _blendspaces1d), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d_Key_KeyProp = { "_blendspaces1d_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d_ValueProp = { "_blendspaces1d", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBlendSpace1D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets = { "_aimoffsets", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _aimoffsets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets_Key_KeyProp = { "_aimoffsets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets_ValueProp = { "_aimoffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces = { "_blendspaces", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _blendspaces), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces_Key_KeyProp = { "_blendspaces_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces_ValueProp = { "_blendspaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations = { "_animations", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _animations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations_Key_KeyProp = { "_animations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations_ValueProp = { "_animations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__taggedAnimCollections_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__taggedAnimCollections = { "_taggedAnimCollections", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _taggedAnimCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__taggedAnimCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__taggedAnimCollections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__taggedAnimCollections_Inner = { "_taggedAnimCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaggedAnimCollection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForVFX_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForVFX = { "_animEffectHandlerClassForVFX", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _animEffectHandlerClassForVFX), Z_Construct_UClass_UAnimEffectHandler_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForVFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForSFX_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForSFX = { "_animEffectHandlerClassForSFX", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _animEffectHandlerClassForSFX), Z_Construct_UClass_UAnimEffectHandler_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForVFX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForVFX = { "_animEffectHandlerForVFX", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _animEffectHandlerForVFX), Z_Construct_UClass_UAnimEffectHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForVFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForSFX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForSFX = { "_animEffectHandlerForSFX", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _animEffectHandlerForSFX), Z_Construct_UClass_UAnimEffectHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectBlackBoard_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectBlackBoard = { "_animEffectBlackBoard", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _animEffectBlackBoard), Z_Construct_UClass_UAnimEffectBlackBoard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectBlackBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectBlackBoard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__owningPlayer_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__owningPlayer = { "_owningPlayer", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstance, _owningPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__owningPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__owningPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__activationDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isLevelReadyToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isIntroCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__isInParadise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__selectors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets1d_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces1d_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__aimoffsets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__blendspaces_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__taggedAnimCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__taggedAnimCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForVFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerClassForSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForVFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectHandlerForSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__animEffectBlackBoard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp__owningPlayer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPlayerAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UActivatable_NoRegister, (int32)VTABLE_OFFSET(UPlayerAnimInstance, IActivatable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
		&UPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnimInstance, 1094506826);
	template<> DBDANIMATION_API UClass* StaticClass<UPlayerAnimInstance>()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnimInstance(Z_Construct_UClass_UPlayerAnimInstance, &UPlayerAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UPlayerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
