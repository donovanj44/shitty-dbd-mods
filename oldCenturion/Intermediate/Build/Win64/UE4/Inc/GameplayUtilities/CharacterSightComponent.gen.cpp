// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/CharacterSightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSightComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterSightComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterSightComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ACTIVATION_API UScriptStruct* Z_Construct_UScriptStruct_FActivationDefinition();
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDiscernibleCharacter();
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterSightComponent::execOnRep_CanSee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CanSee();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSightComponent::execOnRep_DiscernibleCharacters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DiscernibleCharacters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSightComponent::execServer_UpdateDiscernedCharacters)
	{
		P_GET_TARRAY(ACharacter*,Z_Param_characters);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_UpdateDiscernedCharacters_Validate(Z_Param_characters))
		{
			RPC_ValidateFailed(TEXT("Server_UpdateDiscernedCharacters_Validate"));
			return;
		}
		P_THIS->Server_UpdateDiscernedCharacters_Implementation(Z_Param_characters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSightComponent::execSetMaximumSightDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximumSightDistance(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSightComponent::execSetMinimumCharacterScreenPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumCharacterScreenPercent(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSightComponent::execSetMinimumCharacterVisiblePixelsPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumCharacterVisiblePixelsPercent(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSightComponent::execSetScreenVisibilityZoneRadiusPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScreenVisibilityZoneRadiusPercent(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_UCharacterSightComponent_Server_UpdateDiscernedCharacters = FName(TEXT("Server_UpdateDiscernedCharacters"));
	void UCharacterSightComponent::Server_UpdateDiscernedCharacters(TArray<ACharacter*> const& characters)
	{
		CharacterSightComponent_eventServer_UpdateDiscernedCharacters_Parms Parms;
		Parms.characters=characters;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterSightComponent_Server_UpdateDiscernedCharacters),&Parms);
	}
	void UCharacterSightComponent::StaticRegisterNativesUCharacterSightComponent()
	{
		UClass* Class = UCharacterSightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CanSee", &UCharacterSightComponent::execOnRep_CanSee },
			{ "OnRep_DiscernibleCharacters", &UCharacterSightComponent::execOnRep_DiscernibleCharacters },
			{ "Server_UpdateDiscernedCharacters", &UCharacterSightComponent::execServer_UpdateDiscernedCharacters },
			{ "SetMaximumSightDistance", &UCharacterSightComponent::execSetMaximumSightDistance },
			{ "SetMinimumCharacterScreenPercent", &UCharacterSightComponent::execSetMinimumCharacterScreenPercent },
			{ "SetMinimumCharacterVisiblePixelsPercent", &UCharacterSightComponent::execSetMinimumCharacterVisiblePixelsPercent },
			{ "SetScreenVisibilityZoneRadiusPercent", &UCharacterSightComponent::execSetScreenVisibilityZoneRadiusPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterSightComponent_OnRep_CanSee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightComponent_OnRep_CanSee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSightComponent_OnRep_CanSee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSightComponent, nullptr, "OnRep_CanSee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightComponent_OnRep_CanSee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_OnRep_CanSee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSightComponent_OnRep_CanSee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSightComponent_OnRep_CanSee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSightComponent_OnRep_DiscernibleCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightComponent_OnRep_DiscernibleCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSightComponent_OnRep_DiscernibleCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSightComponent, nullptr, "OnRep_DiscernibleCharacters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightComponent_OnRep_DiscernibleCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_OnRep_DiscernibleCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSightComponent_OnRep_DiscernibleCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSightComponent_OnRep_DiscernibleCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::NewProp_characters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::NewProp_characters = { "characters", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterSightComponent_eventServer_UpdateDiscernedCharacters_Parms, characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::NewProp_characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::NewProp_characters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::NewProp_characters_Inner = { "characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::NewProp_characters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::NewProp_characters_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSightComponent, nullptr, "Server_UpdateDiscernedCharacters", nullptr, nullptr, sizeof(CharacterSightComponent_eventServer_UpdateDiscernedCharacters_Parms), Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics
	{
		struct CharacterSightComponent_eventSetMaximumSightDistance_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterSightComponent_eventSetMaximumSightDistance_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSightComponent, nullptr, "SetMaximumSightDistance", nullptr, nullptr, sizeof(CharacterSightComponent_eventSetMaximumSightDistance_Parms), Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics
	{
		struct CharacterSightComponent_eventSetMinimumCharacterScreenPercent_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterSightComponent_eventSetMinimumCharacterScreenPercent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSightComponent, nullptr, "SetMinimumCharacterScreenPercent", nullptr, nullptr, sizeof(CharacterSightComponent_eventSetMinimumCharacterScreenPercent_Parms), Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics
	{
		struct CharacterSightComponent_eventSetMinimumCharacterVisiblePixelsPercent_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterSightComponent_eventSetMinimumCharacterVisiblePixelsPercent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSightComponent, nullptr, "SetMinimumCharacterVisiblePixelsPercent", nullptr, nullptr, sizeof(CharacterSightComponent_eventSetMinimumCharacterVisiblePixelsPercent_Parms), Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics
	{
		struct CharacterSightComponent_eventSetScreenVisibilityZoneRadiusPercent_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterSightComponent_eventSetScreenVisibilityZoneRadiusPercent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSightComponent, nullptr, "SetScreenVisibilityZoneRadiusPercent", nullptr, nullptr, sizeof(CharacterSightComponent_eventSetScreenVisibilityZoneRadiusPercent_Parms), Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterSightComponent_NoRegister()
	{
		return UCharacterSightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterSightComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canSee_MetaData[];
#endif
		static void NewProp__canSee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canSee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugMode_MetaData[];
#endif
		static void NewProp__debugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__debugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localDiscernibleCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__localDiscernibleCharacters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__localDiscernibleCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__discernedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__discernedCharacters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__discernedCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sightableCharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__sightableCharacterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__undiscerningDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__undiscerningDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__discerningDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__discerningDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sightingDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sightingDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screenVisibilityZoneRadiusPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__screenVisibilityZoneRadiusPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumSightDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maximumSightDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumCharacterVisiblePixelsPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumCharacterVisiblePixelsPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumCharacterScreenPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumCharacterScreenPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterSightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterSightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSightComponent_OnRep_CanSee, "OnRep_CanSee" }, // 2233539611
		{ &Z_Construct_UFunction_UCharacterSightComponent_OnRep_DiscernibleCharacters, "OnRep_DiscernibleCharacters" }, // 1848117909
		{ &Z_Construct_UFunction_UCharacterSightComponent_Server_UpdateDiscernedCharacters, "Server_UpdateDiscernedCharacters" }, // 2924351820
		{ &Z_Construct_UFunction_UCharacterSightComponent_SetMaximumSightDistance, "SetMaximumSightDistance" }, // 2559814393
		{ &Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterScreenPercent, "SetMinimumCharacterScreenPercent" }, // 2814110161
		{ &Z_Construct_UFunction_UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent, "SetMinimumCharacterVisiblePixelsPercent" }, // 861970063
		{ &Z_Construct_UFunction_UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent, "SetScreenVisibilityZoneRadiusPercent" }, // 627921004
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterSightComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__activationDefinition_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__activationDefinition = { "_activationDefinition", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _activationDefinition), Z_Construct_UScriptStruct_FActivationDefinition, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__activationDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__activationDefinition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__canSee_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__canSee_SetBit(void* Obj)
	{
		((UCharacterSightComponent*)Obj)->_canSee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__canSee = { "_canSee", "OnRep_CanSee", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterSightComponent), &Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__canSee_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__canSee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__canSee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__debugMode_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__debugMode_SetBit(void* Obj)
	{
		((UCharacterSightComponent*)Obj)->_debugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__debugMode = { "_debugMode", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterSightComponent), &Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__debugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__debugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__debugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__localDiscernibleCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__localDiscernibleCharacters = { "_localDiscernibleCharacters", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _localDiscernibleCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__localDiscernibleCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__localDiscernibleCharacters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__localDiscernibleCharacters_Inner = { "_localDiscernibleCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDiscernibleCharacter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discernedCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discernedCharacters = { "_discernedCharacters", "OnRep_DiscernibleCharacters", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _discernedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discernedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discernedCharacters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discernedCharacters_Inner = { "_discernedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightableCharacterClass_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightableCharacterClass = { "_sightableCharacterClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _sightableCharacterClass), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightableCharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightableCharacterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__undiscerningDelay_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__undiscerningDelay = { "_undiscerningDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _undiscerningDelay), METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__undiscerningDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__undiscerningDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discerningDelay_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discerningDelay = { "_discerningDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _discerningDelay), METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discerningDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discerningDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightingDelay_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightingDelay = { "_sightingDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _sightingDelay), METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightingDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightingDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__screenVisibilityZoneRadiusPercent_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__screenVisibilityZoneRadiusPercent = { "_screenVisibilityZoneRadiusPercent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _screenVisibilityZoneRadiusPercent), METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__screenVisibilityZoneRadiusPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__screenVisibilityZoneRadiusPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__maximumSightDistance_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__maximumSightDistance = { "_maximumSightDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _maximumSightDistance), METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__maximumSightDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__maximumSightDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterVisiblePixelsPercent_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterVisiblePixelsPercent = { "_minimumCharacterVisiblePixelsPercent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _minimumCharacterVisiblePixelsPercent), METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterVisiblePixelsPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterVisiblePixelsPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterScreenPercent_MetaData[] = {
		{ "Category", "CharacterSightComponent" },
		{ "ModuleRelativePath", "Public/CharacterSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterScreenPercent = { "_minimumCharacterScreenPercent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightComponent, _minimumCharacterScreenPercent), METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterScreenPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterScreenPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__activationDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__canSee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__debugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__localDiscernibleCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__localDiscernibleCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discernedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discernedCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightableCharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__undiscerningDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__discerningDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__sightingDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__screenVisibilityZoneRadiusPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__maximumSightDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterVisiblePixelsPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightComponent_Statics::NewProp__minimumCharacterScreenPercent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCharacterSightComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UActivatable_NoRegister, (int32)VTABLE_OFFSET(UCharacterSightComponent, IActivatable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterSightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSightComponent_Statics::ClassParams = {
		&UCharacterSightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterSightComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterSightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterSightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterSightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterSightComponent, 674816447);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UCharacterSightComponent>()
	{
		return UCharacterSightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterSightComponent(Z_Construct_UClass_UCharacterSightComponent, &UCharacterSightComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UCharacterSightComponent"), false, nullptr, nullptr, nullptr);

	void UCharacterSightComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__discernedCharacters(TEXT("_discernedCharacters"));
		static const FName Name__canSee(TEXT("_canSee"));

		const bool bIsValid = true
			&& Name__discernedCharacters == ClassReps[(int32)ENetFields_Private::_discernedCharacters].Property->GetFName()
			&& Name__canSee == ClassReps[(int32)ENetFields_Private::_canSee].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCharacterSightComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
