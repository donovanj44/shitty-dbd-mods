// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/YellowGlyphComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYellowGlyphComponent() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UYellowGlyphComponent_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UYellowGlyphComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Archives();
	ARCHIVES_API UClass* Z_Construct_UClass_AGlyph_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileSpawnPoint_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYellowGlyphComponent::execAuthority_TeleportGlyph)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxNumberOfTries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Authority_TeleportGlyph(Z_Param_maxNumberOfTries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYellowGlyphComponent::execGetOwningGlyph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGlyph**)Z_Param__Result=P_THIS->GetOwningGlyph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYellowGlyphComponent::execMulticast_TeleportGlyph)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TeleportGlyph_Implementation(Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYellowGlyphComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYellowGlyphComponent::execOnSkillCheck)
	{
		P_GET_UBOOL(Z_Param_hadInput);
		P_GET_UBOOL(Z_Param_success);
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkillCheck(Z_Param_hadInput,Z_Param_success,Z_Param_bonus,ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYellowGlyphComponent::execTriggerSkillCheck)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentTickerLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerSkillCheck(Z_Param_currentTickerLocation);
		P_NATIVE_END;
	}
	static FName NAME_UYellowGlyphComponent_Multicast_TeleportGlyph = FName(TEXT("Multicast_TeleportGlyph"));
	void UYellowGlyphComponent::Multicast_TeleportGlyph(FVector location)
	{
		YellowGlyphComponent_eventMulticast_TeleportGlyph_Parms Parms;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_UYellowGlyphComponent_Multicast_TeleportGlyph),&Parms);
	}
	static FName NAME_UYellowGlyphComponent_StartGlyphPostTeleportVFX = FName(TEXT("StartGlyphPostTeleportVFX"));
	void UYellowGlyphComponent::StartGlyphPostTeleportVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYellowGlyphComponent_StartGlyphPostTeleportVFX),NULL);
	}
	static FName NAME_UYellowGlyphComponent_StartGlyphPreTeleportVFX = FName(TEXT("StartGlyphPreTeleportVFX"));
	void UYellowGlyphComponent::StartGlyphPreTeleportVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYellowGlyphComponent_StartGlyphPreTeleportVFX),NULL);
	}
	void UYellowGlyphComponent::StaticRegisterNativesUYellowGlyphComponent()
	{
		UClass* Class = UYellowGlyphComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_TeleportGlyph", &UYellowGlyphComponent::execAuthority_TeleportGlyph },
			{ "GetOwningGlyph", &UYellowGlyphComponent::execGetOwningGlyph },
			{ "Multicast_TeleportGlyph", &UYellowGlyphComponent::execMulticast_TeleportGlyph },
			{ "OnLevelReadyToPlay", &UYellowGlyphComponent::execOnLevelReadyToPlay },
			{ "OnSkillCheck", &UYellowGlyphComponent::execOnSkillCheck },
			{ "TriggerSkillCheck", &UYellowGlyphComponent::execTriggerSkillCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics
	{
		struct YellowGlyphComponent_eventAuthority_TeleportGlyph_Parms
		{
			int32 maxNumberOfTries;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxNumberOfTries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YellowGlyphComponent_eventAuthority_TeleportGlyph_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YellowGlyphComponent_eventAuthority_TeleportGlyph_Parms), &Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::NewProp_maxNumberOfTries = { "maxNumberOfTries", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YellowGlyphComponent_eventAuthority_TeleportGlyph_Parms, maxNumberOfTries), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::NewProp_maxNumberOfTries,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYellowGlyphComponent, nullptr, "Authority_TeleportGlyph", nullptr, nullptr, sizeof(YellowGlyphComponent_eventAuthority_TeleportGlyph_Parms), Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics
	{
		struct YellowGlyphComponent_eventGetOwningGlyph_Parms
		{
			AGlyph* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YellowGlyphComponent_eventGetOwningGlyph_Parms, ReturnValue), Z_Construct_UClass_AGlyph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYellowGlyphComponent, nullptr, "GetOwningGlyph", nullptr, nullptr, sizeof(YellowGlyphComponent_eventGetOwningGlyph_Parms), Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YellowGlyphComponent_eventMulticast_TeleportGlyph_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYellowGlyphComponent, nullptr, "Multicast_TeleportGlyph", nullptr, nullptr, sizeof(YellowGlyphComponent_eventMulticast_TeleportGlyph_Parms), Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYellowGlyphComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYellowGlyphComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYellowGlyphComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYellowGlyphComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYellowGlyphComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYellowGlyphComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYellowGlyphComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics
	{
		struct YellowGlyphComponent_eventOnSkillCheck_Parms
		{
			bool hadInput;
			bool success;
			bool bonus;
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static void NewProp_bonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bonus;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static void NewProp_hadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hadInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YellowGlyphComponent_eventOnSkillCheck_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((YellowGlyphComponent_eventOnSkillCheck_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YellowGlyphComponent_eventOnSkillCheck_Parms), &Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_success_SetBit(void* Obj)
	{
		((YellowGlyphComponent_eventOnSkillCheck_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YellowGlyphComponent_eventOnSkillCheck_Parms), &Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((YellowGlyphComponent_eventOnSkillCheck_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YellowGlyphComponent_eventOnSkillCheck_Parms), &Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::NewProp_hadInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYellowGlyphComponent, nullptr, "OnSkillCheck", nullptr, nullptr, sizeof(YellowGlyphComponent_eventOnSkillCheck_Parms), Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPostTeleportVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPostTeleportVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPostTeleportVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYellowGlyphComponent, nullptr, "StartGlyphPostTeleportVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPostTeleportVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPostTeleportVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPostTeleportVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPostTeleportVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPreTeleportVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPreTeleportVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPreTeleportVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYellowGlyphComponent, nullptr, "StartGlyphPreTeleportVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPreTeleportVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPreTeleportVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPreTeleportVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPreTeleportVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics
	{
		struct YellowGlyphComponent_eventTriggerSkillCheck_Parms
		{
			float currentTickerLocation;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentTickerLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::NewProp_currentTickerLocation = { "currentTickerLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YellowGlyphComponent_eventTriggerSkillCheck_Parms, currentTickerLocation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::NewProp_currentTickerLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYellowGlyphComponent, nullptr, "TriggerSkillCheck", nullptr, nullptr, sizeof(YellowGlyphComponent_eventTriggerSkillCheck_Parms), Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYellowGlyphComponent_NoRegister()
	{
		return UYellowGlyphComponent::StaticClass();
	}
	struct Z_Construct_UClass_UYellowGlyphComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allGlyphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__allGlyphs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__allGlyphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorSpawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorSpawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__teleportDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__teleportDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckDistanceVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skillCheckDistanceVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckAverageDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skillCheckAverageDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skillCheckDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckZoneLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skillCheckZoneLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skillCheckDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentlyInteractingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentlyInteractingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYellowGlyphComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYellowGlyphComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYellowGlyphComponent_Authority_TeleportGlyph, "Authority_TeleportGlyph" }, // 1864408486
		{ &Z_Construct_UFunction_UYellowGlyphComponent_GetOwningGlyph, "GetOwningGlyph" }, // 4102568715
		{ &Z_Construct_UFunction_UYellowGlyphComponent_Multicast_TeleportGlyph, "Multicast_TeleportGlyph" }, // 1472615529
		{ &Z_Construct_UFunction_UYellowGlyphComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 4031238724
		{ &Z_Construct_UFunction_UYellowGlyphComponent_OnSkillCheck, "OnSkillCheck" }, // 947578468
		{ &Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPostTeleportVFX, "StartGlyphPostTeleportVFX" }, // 1245896611
		{ &Z_Construct_UFunction_UYellowGlyphComponent_StartGlyphPreTeleportVFX, "StartGlyphPreTeleportVFX" }, // 2830971440
		{ &Z_Construct_UFunction_UYellowGlyphComponent_TriggerSkillCheck, "TriggerSkillCheck" }, // 12173746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YellowGlyphComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__allGlyphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__allGlyphs = { "_allGlyphs", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _allGlyphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__allGlyphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__allGlyphs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__allGlyphs_Inner = { "_allGlyphs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGlyph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__survivorSpawns_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__survivorSpawns = { "_survivorSpawns", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _survivorSpawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__survivorSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__survivorSpawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__survivorSpawns_Inner = { "_survivorSpawns", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTileSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__teleportDelay_MetaData[] = {
		{ "Category", "YellowGlyphComponent" },
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__teleportDelay = { "_teleportDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _teleportDelay), METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__teleportDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__teleportDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDistanceVariance_MetaData[] = {
		{ "Category", "YellowGlyphComponent" },
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDistanceVariance = { "_skillCheckDistanceVariance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckDistanceVariance), METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDistanceVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDistanceVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckAverageDistance_MetaData[] = {
		{ "Category", "YellowGlyphComponent" },
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckAverageDistance = { "_skillCheckAverageDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckAverageDistance), METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckAverageDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckAverageDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDelay_MetaData[] = {
		{ "Category", "YellowGlyphComponent" },
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDelay = { "_skillCheckDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckDelay), METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckZoneLength_MetaData[] = {
		{ "Category", "YellowGlyphComponent" },
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckZoneLength = { "_skillCheckZoneLength", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckZoneLength), METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckZoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckZoneLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDuration_MetaData[] = {
		{ "Category", "YellowGlyphComponent" },
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDuration = { "_skillCheckDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckDuration), METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__currentlyInteractingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/YellowGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__currentlyInteractingPlayer = { "_currentlyInteractingPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYellowGlyphComponent, _currentlyInteractingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__currentlyInteractingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__currentlyInteractingPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYellowGlyphComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__allGlyphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__allGlyphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__survivorSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__survivorSpawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__teleportDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDistanceVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckAverageDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckZoneLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__skillCheckDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYellowGlyphComponent_Statics::NewProp__currentlyInteractingPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYellowGlyphComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYellowGlyphComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYellowGlyphComponent_Statics::ClassParams = {
		&UYellowGlyphComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYellowGlyphComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UYellowGlyphComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYellowGlyphComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYellowGlyphComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYellowGlyphComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYellowGlyphComponent, 1439504738);
	template<> ARCHIVES_API UClass* StaticClass<UYellowGlyphComponent>()
	{
		return UYellowGlyphComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYellowGlyphComponent(Z_Construct_UClass_UYellowGlyphComponent, &UYellowGlyphComponent::StaticClass, TEXT("/Script/Archives"), TEXT("UYellowGlyphComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYellowGlyphComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
