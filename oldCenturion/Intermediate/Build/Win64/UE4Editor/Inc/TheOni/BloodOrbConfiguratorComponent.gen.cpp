// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbConfiguratorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbConfiguratorComponent() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbConfiguratorComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbConfiguratorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbAbsorberComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbVisibilityComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEONI_API UClass* Z_Construct_UClass_AMobileBloodOrbRenderer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	THEONI_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBloodOrbConfiguratorComponent::execAuthority_UpdateSurvivorBloodOrbDropperOnCrouchModifier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbConfiguratorComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbConfiguratorComponent::execUpdateBloodOrbAttractSpeed)
	{
		P_GET_OBJECT(UBloodOrbAbsorberComponent,Z_Param_bloodOrbAbsorberComponent);
		P_GET_OBJECT(ADBDPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBloodOrbAttractSpeed(Z_Param_bloodOrbAbsorberComponent,Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbConfiguratorComponent::execUpdateKillerBloodOrbVisiblityRanges)
	{
		P_GET_OBJECT(UBloodOrbVisibilityComponent,Z_Param_bloodOrbVisibilityComponent);
		P_GET_OBJECT(ADBDPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateKillerBloodOrbVisiblityRanges(Z_Param_bloodOrbVisibilityComponent,Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbConfiguratorComponent::execUpdateSurvivorBloodOrbVisibilityRange)
	{
		P_GET_OBJECT(UBloodOrbVisibilityComponent,Z_Param_bloodOrbVisibilityComponent);
		P_GET_OBJECT(ADBDPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurvivorBloodOrbVisibilityRange(Z_Param_bloodOrbVisibilityComponent,Z_Param_killer);
		P_NATIVE_END;
	}
	void UBloodOrbConfiguratorComponent::StaticRegisterNativesUBloodOrbConfiguratorComponent()
	{
		UClass* Class = UBloodOrbConfiguratorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier", &UBloodOrbConfiguratorComponent::execAuthority_UpdateSurvivorBloodOrbDropperOnCrouchModifier },
			{ "OnLevelReadyToPlay", &UBloodOrbConfiguratorComponent::execOnLevelReadyToPlay },
			{ "UpdateBloodOrbAttractSpeed", &UBloodOrbConfiguratorComponent::execUpdateBloodOrbAttractSpeed },
			{ "UpdateKillerBloodOrbVisiblityRanges", &UBloodOrbConfiguratorComponent::execUpdateKillerBloodOrbVisiblityRanges },
			{ "UpdateSurvivorBloodOrbVisibilityRange", &UBloodOrbConfiguratorComponent::execUpdateSurvivorBloodOrbVisibilityRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics
	{
		struct BloodOrbConfiguratorComponent_eventAuthority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Parms
		{
			const ADBDPlayer* killer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::NewProp_killer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbConfiguratorComponent_eventAuthority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Parms, killer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::NewProp_killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::NewProp_killer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbConfiguratorComponent, nullptr, "Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier", nullptr, nullptr, sizeof(BloodOrbConfiguratorComponent_eventAuthority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Parms), Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbConfiguratorComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbConfiguratorComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics
	{
		struct BloodOrbConfiguratorComponent_eventUpdateBloodOrbAttractSpeed_Parms
		{
			UBloodOrbAbsorberComponent* bloodOrbAbsorberComponent;
			ADBDPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bloodOrbAbsorberComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrbAbsorberComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbConfiguratorComponent_eventUpdateBloodOrbAttractSpeed_Parms, killer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::NewProp_bloodOrbAbsorberComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::NewProp_bloodOrbAbsorberComponent = { "bloodOrbAbsorberComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbConfiguratorComponent_eventUpdateBloodOrbAttractSpeed_Parms, bloodOrbAbsorberComponent), Z_Construct_UClass_UBloodOrbAbsorberComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::NewProp_bloodOrbAbsorberComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::NewProp_bloodOrbAbsorberComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::NewProp_killer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::NewProp_bloodOrbAbsorberComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbConfiguratorComponent, nullptr, "UpdateBloodOrbAttractSpeed", nullptr, nullptr, sizeof(BloodOrbConfiguratorComponent_eventUpdateBloodOrbAttractSpeed_Parms), Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics
	{
		struct BloodOrbConfiguratorComponent_eventUpdateKillerBloodOrbVisiblityRanges_Parms
		{
			UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent;
			ADBDPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bloodOrbVisibilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrbVisibilityComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbConfiguratorComponent_eventUpdateKillerBloodOrbVisiblityRanges_Parms, killer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::NewProp_bloodOrbVisibilityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::NewProp_bloodOrbVisibilityComponent = { "bloodOrbVisibilityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbConfiguratorComponent_eventUpdateKillerBloodOrbVisiblityRanges_Parms, bloodOrbVisibilityComponent), Z_Construct_UClass_UBloodOrbVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::NewProp_bloodOrbVisibilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::NewProp_bloodOrbVisibilityComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::NewProp_killer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::NewProp_bloodOrbVisibilityComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbConfiguratorComponent, nullptr, "UpdateKillerBloodOrbVisiblityRanges", nullptr, nullptr, sizeof(BloodOrbConfiguratorComponent_eventUpdateKillerBloodOrbVisiblityRanges_Parms), Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics
	{
		struct BloodOrbConfiguratorComponent_eventUpdateSurvivorBloodOrbVisibilityRange_Parms
		{
			UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent;
			const ADBDPlayer* killer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bloodOrbVisibilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrbVisibilityComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_killer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbConfiguratorComponent_eventUpdateSurvivorBloodOrbVisibilityRange_Parms, killer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_killer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_bloodOrbVisibilityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_bloodOrbVisibilityComponent = { "bloodOrbVisibilityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbConfiguratorComponent_eventUpdateSurvivorBloodOrbVisibilityRange_Parms, bloodOrbVisibilityComponent), Z_Construct_UClass_UBloodOrbVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_bloodOrbVisibilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_bloodOrbVisibilityComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_killer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::NewProp_bloodOrbVisibilityComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbConfiguratorComponent, nullptr, "UpdateSurvivorBloodOrbVisibilityRange", nullptr, nullptr, sizeof(BloodOrbConfiguratorComponent_eventUpdateSurvivorBloodOrbVisibilityRange_Parms), Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodOrbConfiguratorComponent_NoRegister()
	{
		return UBloodOrbConfiguratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mobileBloodOrbRendererClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__mobileBloodOrbRendererClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodOrbVisibilityRangeInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__bloodOrbVisibilityRangeInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodOrbAttractedAuraColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__bloodOrbAttractedAuraColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodOrbAuraColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__bloodOrbAuraColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__initialFadeOutDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__initialFadeOutDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fadeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodOrbDropGameEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__bloodOrbDropGameEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__bloodOrbDropGameEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodOrbClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__bloodOrbClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier, "Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier" }, // 2646096393
		{ &Z_Construct_UFunction_UBloodOrbConfiguratorComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 2882894870
		{ &Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed, "UpdateBloodOrbAttractSpeed" }, // 3522643453
		{ &Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges, "UpdateKillerBloodOrbVisiblityRanges" }, // 1299816446
		{ &Z_Construct_UFunction_UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange, "UpdateSurvivorBloodOrbVisibilityRange" }, // 1850224468
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodOrbConfiguratorComponent.h" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__mobileBloodOrbRendererClass_MetaData[] = {
		{ "Category", "BloodOrbConfiguratorComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__mobileBloodOrbRendererClass = { "_mobileBloodOrbRendererClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _mobileBloodOrbRendererClass), Z_Construct_UClass_AMobileBloodOrbRenderer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__mobileBloodOrbRendererClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__mobileBloodOrbRendererClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbVisibilityRangeInterpolationSpeed_MetaData[] = {
		{ "Category", "BloodOrbConfiguratorComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbVisibilityRangeInterpolationSpeed = { "_bloodOrbVisibilityRangeInterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbVisibilityRangeInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbVisibilityRangeInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbVisibilityRangeInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAttractedAuraColor_MetaData[] = {
		{ "Category", "BloodOrbConfiguratorComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAttractedAuraColor = { "_bloodOrbAttractedAuraColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbAttractedAuraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAttractedAuraColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAttractedAuraColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAuraColor_MetaData[] = {
		{ "Category", "BloodOrbConfiguratorComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAuraColor = { "_bloodOrbAuraColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbAuraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAuraColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAuraColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__initialFadeOutDelay_MetaData[] = {
		{ "Category", "BloodOrbConfiguratorComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__initialFadeOutDelay = { "_initialFadeOutDelay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _initialFadeOutDelay), METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__initialFadeOutDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__initialFadeOutDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__fadeDuration_MetaData[] = {
		{ "Category", "BloodOrbConfiguratorComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__fadeDuration = { "_fadeDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _fadeDuration), METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__fadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__fadeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbDropGameEvents_MetaData[] = {
		{ "Category", "BloodOrbConfiguratorComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbDropGameEvents = { "_bloodOrbDropGameEvents", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbDropGameEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbDropGameEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbDropGameEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbDropGameEvents_Inner = { "_bloodOrbDropGameEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbClass_MetaData[] = {
		{ "Category", "BloodOrbConfiguratorComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbConfiguratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbClass = { "_bloodOrbClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbClass), Z_Construct_UClass_ABloodOrb_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__mobileBloodOrbRendererClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbVisibilityRangeInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAttractedAuraColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbAuraColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__initialFadeOutDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__fadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbDropGameEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbDropGameEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::NewProp__bloodOrbClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbConfiguratorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::ClassParams = {
		&UBloodOrbConfiguratorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbConfiguratorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbConfiguratorComponent, 503402778);
	template<> THEONI_API UClass* StaticClass<UBloodOrbConfiguratorComponent>()
	{
		return UBloodOrbConfiguratorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbConfiguratorComponent(Z_Construct_UClass_UBloodOrbConfiguratorComponent, &UBloodOrbConfiguratorComponent::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbConfiguratorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbConfiguratorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
