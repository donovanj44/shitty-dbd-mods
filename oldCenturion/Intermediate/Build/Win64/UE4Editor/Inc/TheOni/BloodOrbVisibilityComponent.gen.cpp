// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbVisibilityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbVisibilityComponent() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbVisibilityComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbVisibilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
	THEONI_API UEnum* Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode();
// End Cross Module References
	DEFINE_FUNCTION(UBloodOrbVisibilityComponent::execOnBloodOrbSpawned)
	{
		P_GET_OBJECT(ABloodOrb,Z_Param_bloodOrb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBloodOrbSpawned(Z_Param_bloodOrb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbVisibilityComponent::execSetAuraVisibilityRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_auraVisibilityRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAuraVisibilityRange(Z_Param_auraVisibilityRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbVisibilityComponent::execSetShowAttractedBloodOrbsAuras)
	{
		P_GET_UBOOL(Z_Param_show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowAttractedBloodOrbsAuras(Z_Param_show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbVisibilityComponent::execSetVisibilityMode)
	{
		P_GET_ENUM(EBloodOrbVisibilityMode,Z_Param_visibilityMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityMode(EBloodOrbVisibilityMode(Z_Param_visibilityMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbVisibilityComponent::execSetVisibilityRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_visibilityRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityRange(Z_Param_visibilityRange);
		P_NATIVE_END;
	}
	void UBloodOrbVisibilityComponent::StaticRegisterNativesUBloodOrbVisibilityComponent()
	{
		UClass* Class = UBloodOrbVisibilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBloodOrbSpawned", &UBloodOrbVisibilityComponent::execOnBloodOrbSpawned },
			{ "SetAuraVisibilityRange", &UBloodOrbVisibilityComponent::execSetAuraVisibilityRange },
			{ "SetShowAttractedBloodOrbsAuras", &UBloodOrbVisibilityComponent::execSetShowAttractedBloodOrbsAuras },
			{ "SetVisibilityMode", &UBloodOrbVisibilityComponent::execSetVisibilityMode },
			{ "SetVisibilityRange", &UBloodOrbVisibilityComponent::execSetVisibilityRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics
	{
		struct BloodOrbVisibilityComponent_eventOnBloodOrbSpawned_Parms
		{
			const ABloodOrb* bloodOrb;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bloodOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb = { "bloodOrb", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbVisibilityComponent_eventOnBloodOrbSpawned_Parms, bloodOrb), Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::NewProp_bloodOrb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbVisibilityComponent, nullptr, "OnBloodOrbSpawned", nullptr, nullptr, sizeof(BloodOrbVisibilityComponent_eventOnBloodOrbSpawned_Parms), Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics
	{
		struct BloodOrbVisibilityComponent_eventSetAuraVisibilityRange_Parms
		{
			float auraVisibilityRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_auraVisibilityRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_auraVisibilityRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::NewProp_auraVisibilityRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::NewProp_auraVisibilityRange = { "auraVisibilityRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbVisibilityComponent_eventSetAuraVisibilityRange_Parms, auraVisibilityRange), METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::NewProp_auraVisibilityRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::NewProp_auraVisibilityRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::NewProp_auraVisibilityRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbVisibilityComponent, nullptr, "SetAuraVisibilityRange", nullptr, nullptr, sizeof(BloodOrbVisibilityComponent_eventSetAuraVisibilityRange_Parms), Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics
	{
		struct BloodOrbVisibilityComponent_eventSetShowAttractedBloodOrbsAuras_Parms
		{
			bool show;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_show_MetaData[];
#endif
		static void NewProp_show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_show;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::NewProp_show_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::NewProp_show_SetBit(void* Obj)
	{
		((BloodOrbVisibilityComponent_eventSetShowAttractedBloodOrbsAuras_Parms*)Obj)->show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::NewProp_show = { "show", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BloodOrbVisibilityComponent_eventSetShowAttractedBloodOrbsAuras_Parms), &Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::NewProp_show_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::NewProp_show_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::NewProp_show_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::NewProp_show,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbVisibilityComponent, nullptr, "SetShowAttractedBloodOrbsAuras", nullptr, nullptr, sizeof(BloodOrbVisibilityComponent_eventSetShowAttractedBloodOrbsAuras_Parms), Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics
	{
		struct BloodOrbVisibilityComponent_eventSetVisibilityMode_Parms
		{
			EBloodOrbVisibilityMode visibilityMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visibilityMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_visibilityMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_visibilityMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::NewProp_visibilityMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::NewProp_visibilityMode = { "visibilityMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbVisibilityComponent_eventSetVisibilityMode_Parms, visibilityMode), Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::NewProp_visibilityMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::NewProp_visibilityMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::NewProp_visibilityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::NewProp_visibilityMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::NewProp_visibilityMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbVisibilityComponent, nullptr, "SetVisibilityMode", nullptr, nullptr, sizeof(BloodOrbVisibilityComponent_eventSetVisibilityMode_Parms), Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics
	{
		struct BloodOrbVisibilityComponent_eventSetVisibilityRange_Parms
		{
			float visibilityRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visibilityRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_visibilityRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::NewProp_visibilityRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::NewProp_visibilityRange = { "visibilityRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbVisibilityComponent_eventSetVisibilityRange_Parms, visibilityRange), METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::NewProp_visibilityRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::NewProp_visibilityRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::NewProp_visibilityRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbVisibilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbVisibilityComponent, nullptr, "SetVisibilityRange", nullptr, nullptr, sizeof(BloodOrbVisibilityComponent_eventSetVisibilityRange_Parms), Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodOrbVisibilityComponent_NoRegister()
	{
		return UBloodOrbVisibilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodOrbVisibilityComponent_OnBloodOrbSpawned, "OnBloodOrbSpawned" }, // 1554588380
		{ &Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetAuraVisibilityRange, "SetAuraVisibilityRange" }, // 3157341735
		{ &Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras, "SetShowAttractedBloodOrbsAuras" }, // 2555889271
		{ &Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityMode, "SetVisibilityMode" }, // 1602414712
		{ &Z_Construct_UFunction_UBloodOrbVisibilityComponent_SetVisibilityRange, "SetVisibilityRange" }, // 2600966856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BloodOrbVisibilityComponent.h" },
		{ "ModuleRelativePath", "Public/BloodOrbVisibilityComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbVisibilityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics::ClassParams = {
		&UBloodOrbVisibilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbVisibilityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbVisibilityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbVisibilityComponent, 2108883765);
	template<> THEONI_API UClass* StaticClass<UBloodOrbVisibilityComponent>()
	{
		return UBloodOrbVisibilityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbVisibilityComponent(Z_Construct_UClass_UBloodOrbVisibilityComponent, &UBloodOrbVisibilityComponent::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbVisibilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbVisibilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
