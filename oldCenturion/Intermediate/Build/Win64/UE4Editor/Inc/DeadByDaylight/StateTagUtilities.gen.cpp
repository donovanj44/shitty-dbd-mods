// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StateTagUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTagUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStateTagUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStateTagUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UStateTagUtilities::execAddStateTagToPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT(FGameplayTag,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStateTagUtilities::AddStateTagToPlayer(Z_Param_player,Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTagUtilities::execCurrentInteractionHasAnyStateTag)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStateTagUtilities::CurrentInteractionHasAnyStateTag(Z_Param_player,Z_Param_Out_tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTagUtilities::execCurrentInteractionHasStateTag)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT(FGameplayTag,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStateTagUtilities::CurrentInteractionHasStateTag(Z_Param_player,Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTagUtilities::execHasAnyStateTag)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStateTagUtilities::HasAnyStateTag(Z_Param_player,Z_Param_Out_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTagUtilities::execHasStateTag)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT(FGameplayTag,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStateTagUtilities::HasStateTag(Z_Param_player,Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTagUtilities::execRemoveStateTagToPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT(FGameplayTag,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStateTagUtilities::RemoveStateTagToPlayer(Z_Param_player,Z_Param_tag);
		P_NATIVE_END;
	}
	void UStateTagUtilities::StaticRegisterNativesUStateTagUtilities()
	{
		UClass* Class = UStateTagUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStateTagToPlayer", &UStateTagUtilities::execAddStateTagToPlayer },
			{ "CurrentInteractionHasAnyStateTag", &UStateTagUtilities::execCurrentInteractionHasAnyStateTag },
			{ "CurrentInteractionHasStateTag", &UStateTagUtilities::execCurrentInteractionHasStateTag },
			{ "HasAnyStateTag", &UStateTagUtilities::execHasAnyStateTag },
			{ "HasStateTag", &UStateTagUtilities::execHasStateTag },
			{ "RemoveStateTagToPlayer", &UStateTagUtilities::execRemoveStateTagToPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics
	{
		struct StateTagUtilities_eventAddStateTagToPlayer_Parms
		{
			const ADBDPlayer* player;
			FGameplayTag tag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventAddStateTagToPlayer_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventAddStateTagToPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTagUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTagUtilities, nullptr, "AddStateTagToPlayer", nullptr, nullptr, sizeof(StateTagUtilities_eventAddStateTagToPlayer_Parms), Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics
	{
		struct StateTagUtilities_eventCurrentInteractionHasAnyStateTag_Parms
		{
			const ADBDPlayer* player;
			FGameplayTagContainer tags;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tags;
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
	void Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateTagUtilities_eventCurrentInteractionHasAnyStateTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StateTagUtilities_eventCurrentInteractionHasAnyStateTag_Parms), &Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventCurrentInteractionHasAnyStateTag_Parms, tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventCurrentInteractionHasAnyStateTag_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTagUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTagUtilities, nullptr, "CurrentInteractionHasAnyStateTag", nullptr, nullptr, sizeof(StateTagUtilities_eventCurrentInteractionHasAnyStateTag_Parms), Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics
	{
		struct StateTagUtilities_eventCurrentInteractionHasStateTag_Parms
		{
			const ADBDPlayer* player;
			FGameplayTag tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
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
	void Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateTagUtilities_eventCurrentInteractionHasStateTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StateTagUtilities_eventCurrentInteractionHasStateTag_Parms), &Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventCurrentInteractionHasStateTag_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventCurrentInteractionHasStateTag_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTagUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTagUtilities, nullptr, "CurrentInteractionHasStateTag", nullptr, nullptr, sizeof(StateTagUtilities_eventCurrentInteractionHasStateTag_Parms), Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics
	{
		struct StateTagUtilities_eventHasAnyStateTag_Parms
		{
			const ADBDPlayer* player;
			FGameplayTagContainer tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
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
	void Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateTagUtilities_eventHasAnyStateTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StateTagUtilities_eventHasAnyStateTag_Parms), &Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventHasAnyStateTag_Parms, tag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventHasAnyStateTag_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTagUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTagUtilities, nullptr, "HasAnyStateTag", nullptr, nullptr, sizeof(StateTagUtilities_eventHasAnyStateTag_Parms), Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics
	{
		struct StateTagUtilities_eventHasStateTag_Parms
		{
			const ADBDPlayer* player;
			FGameplayTag tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
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
	void Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateTagUtilities_eventHasStateTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StateTagUtilities_eventHasStateTag_Parms), &Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventHasStateTag_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventHasStateTag_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTagUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTagUtilities, nullptr, "HasStateTag", nullptr, nullptr, sizeof(StateTagUtilities_eventHasStateTag_Parms), Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTagUtilities_HasStateTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateTagUtilities_HasStateTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics
	{
		struct StateTagUtilities_eventRemoveStateTagToPlayer_Parms
		{
			const ADBDPlayer* player;
			FGameplayTag tag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventRemoveStateTagToPlayer_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateTagUtilities_eventRemoveStateTagToPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTagUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTagUtilities, nullptr, "RemoveStateTagToPlayer", nullptr, nullptr, sizeof(StateTagUtilities_eventRemoveStateTagToPlayer_Parms), Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStateTagUtilities_NoRegister()
	{
		return UStateTagUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UStateTagUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTagUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateTagUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTagUtilities_AddStateTagToPlayer, "AddStateTagToPlayer" }, // 3692743983
		{ &Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasAnyStateTag, "CurrentInteractionHasAnyStateTag" }, // 2378980850
		{ &Z_Construct_UFunction_UStateTagUtilities_CurrentInteractionHasStateTag, "CurrentInteractionHasStateTag" }, // 2872990338
		{ &Z_Construct_UFunction_UStateTagUtilities_HasAnyStateTag, "HasAnyStateTag" }, // 965317257
		{ &Z_Construct_UFunction_UStateTagUtilities_HasStateTag, "HasStateTag" }, // 2594655534
		{ &Z_Construct_UFunction_UStateTagUtilities_RemoveStateTagToPlayer, "RemoveStateTagToPlayer" }, // 1349384180
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTagUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StateTagUtilities.h" },
		{ "ModuleRelativePath", "Public/StateTagUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTagUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTagUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateTagUtilities_Statics::ClassParams = {
		&UStateTagUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTagUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTagUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTagUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateTagUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateTagUtilities, 4027602044);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStateTagUtilities>()
	{
		return UStateTagUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateTagUtilities(Z_Construct_UClass_UStateTagUtilities, &UStateTagUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStateTagUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTagUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
