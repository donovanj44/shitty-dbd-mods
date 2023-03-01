// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDOutlineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDOutlineComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBatchMeshCommands();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBaseOutlineRenderStrategy_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBatchMeshCommands_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector();
// End Cross Module References
	DEFINE_FUNCTION(UDBDOutlineComponent::execInitBatcher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitBatcher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execRefreshOutlineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshOutlineComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execResetToTransparent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToTransparent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execSetFadeIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFadeIntensity(Z_Param_fadeIntensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execSetFadeTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_inFadeTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFadeTexture(Z_Param_inFadeTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execSetIsOccludingOutlines)
	{
		P_GET_UBOOL(Z_Param_isOccluding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsOccludingOutlines(Z_Param_isOccluding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execSetMaterialCopyTarget)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_inMaterialToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialCopyTarget(Z_Param_inMaterialToCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execSetMinimumOutlineDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumOutlineDistance(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execSetOutlineIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_outlineIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutlineIntensity(Z_Param_outlineIntensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDOutlineComponent::execSetTargetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetColor(Z_Param_color);
		P_NATIVE_END;
	}
	void UDBDOutlineComponent::StaticRegisterNativesUDBDOutlineComponent()
	{
		UClass* Class = UDBDOutlineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitBatcher", &UDBDOutlineComponent::execInitBatcher },
			{ "OnLevelReadyToPlay", &UDBDOutlineComponent::execOnLevelReadyToPlay },
			{ "RefreshOutlineComponent", &UDBDOutlineComponent::execRefreshOutlineComponent },
			{ "ResetToTransparent", &UDBDOutlineComponent::execResetToTransparent },
			{ "SetFadeIntensity", &UDBDOutlineComponent::execSetFadeIntensity },
			{ "SetFadeTexture", &UDBDOutlineComponent::execSetFadeTexture },
			{ "SetIsOccludingOutlines", &UDBDOutlineComponent::execSetIsOccludingOutlines },
			{ "SetMaterialCopyTarget", &UDBDOutlineComponent::execSetMaterialCopyTarget },
			{ "SetMinimumOutlineDistance", &UDBDOutlineComponent::execSetMinimumOutlineDistance },
			{ "SetOutlineIntensity", &UDBDOutlineComponent::execSetOutlineIntensity },
			{ "SetTargetColor", &UDBDOutlineComponent::execSetTargetColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_InitBatcher_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_InitBatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_InitBatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "InitBatcher", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_InitBatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_InitBatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_InitBatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_InitBatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_RefreshOutlineComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_RefreshOutlineComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_RefreshOutlineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "RefreshOutlineComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_RefreshOutlineComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_RefreshOutlineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_RefreshOutlineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_RefreshOutlineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_ResetToTransparent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_ResetToTransparent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_ResetToTransparent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "ResetToTransparent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_ResetToTransparent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_ResetToTransparent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_ResetToTransparent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_ResetToTransparent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics
	{
		struct DBDOutlineComponent_eventSetFadeIntensity_Parms
		{
			float fadeIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::NewProp_fadeIntensity = { "fadeIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDOutlineComponent_eventSetFadeIntensity_Parms, fadeIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::NewProp_fadeIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "SetFadeIntensity", nullptr, nullptr, sizeof(DBDOutlineComponent_eventSetFadeIntensity_Parms), Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics
	{
		struct DBDOutlineComponent_eventSetFadeTexture_Parms
		{
			UTexture* inFadeTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inFadeTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::NewProp_inFadeTexture = { "inFadeTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDOutlineComponent_eventSetFadeTexture_Parms, inFadeTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::NewProp_inFadeTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "SetFadeTexture", nullptr, nullptr, sizeof(DBDOutlineComponent_eventSetFadeTexture_Parms), Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics
	{
		struct DBDOutlineComponent_eventSetIsOccludingOutlines_Parms
		{
			bool isOccluding;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOccluding_MetaData[];
#endif
		static void NewProp_isOccluding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOccluding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::NewProp_isOccluding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::NewProp_isOccluding_SetBit(void* Obj)
	{
		((DBDOutlineComponent_eventSetIsOccludingOutlines_Parms*)Obj)->isOccluding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::NewProp_isOccluding = { "isOccluding", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDOutlineComponent_eventSetIsOccludingOutlines_Parms), &Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::NewProp_isOccluding_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::NewProp_isOccluding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::NewProp_isOccluding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::NewProp_isOccluding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "SetIsOccludingOutlines", nullptr, nullptr, sizeof(DBDOutlineComponent_eventSetIsOccludingOutlines_Parms), Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics
	{
		struct DBDOutlineComponent_eventSetMaterialCopyTarget_Parms
		{
			UMaterialInterface* inMaterialToCopy;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMaterialToCopy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::NewProp_inMaterialToCopy = { "inMaterialToCopy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDOutlineComponent_eventSetMaterialCopyTarget_Parms, inMaterialToCopy), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::NewProp_inMaterialToCopy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "SetMaterialCopyTarget", nullptr, nullptr, sizeof(DBDOutlineComponent_eventSetMaterialCopyTarget_Parms), Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics
	{
		struct DBDOutlineComponent_eventSetMinimumOutlineDistance_Parms
		{
			float distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDOutlineComponent_eventSetMinimumOutlineDistance_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "SetMinimumOutlineDistance", nullptr, nullptr, sizeof(DBDOutlineComponent_eventSetMinimumOutlineDistance_Parms), Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics
	{
		struct DBDOutlineComponent_eventSetOutlineIntensity_Parms
		{
			float outlineIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outlineIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::NewProp_outlineIntensity = { "outlineIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDOutlineComponent_eventSetOutlineIntensity_Parms, outlineIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::NewProp_outlineIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "SetOutlineIntensity", nullptr, nullptr, sizeof(DBDOutlineComponent_eventSetOutlineIntensity_Parms), Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics
	{
		struct DBDOutlineComponent_eventSetTargetColor_Parms
		{
			FLinearColor color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDOutlineComponent_eventSetTargetColor_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDOutlineComponent, nullptr, "SetTargetColor", nullptr, nullptr, sizeof(DBDOutlineComponent_eventSetTargetColor_Parms), Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister()
	{
		return UDBDOutlineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDOutlineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__renderingStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__renderingStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__batchMeshCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__batchMeshCommands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__renderStrategySelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__renderStrategySelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutlineName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumOutlineDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumOutlineDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAlwaysVisible_MetaData[];
#endif
		static void NewProp_IsAlwaysVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAlwaysVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutAsClosingIn_MetaData[];
#endif
		static void NewProp_FadeOutAsClosingIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FadeOutAsClosingIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitToCustomDepthObjects_MetaData[];
#endif
		static void NewProp_LimitToCustomDepthObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LimitToCustomDepthObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceOutlineFarAway_MetaData[];
#endif
		static void NewProp_ForceOutlineFarAway_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceOutlineFarAway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldBeAboveOutlines_MetaData[];
#endif
		static void NewProp_ShouldBeAboveOutlines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldBeAboveOutlines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDOutlineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBatchMeshCommands,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDOutlineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDOutlineComponent_InitBatcher, "InitBatcher" }, // 1617852828
		{ &Z_Construct_UFunction_UDBDOutlineComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3825048933
		{ &Z_Construct_UFunction_UDBDOutlineComponent_RefreshOutlineComponent, "RefreshOutlineComponent" }, // 3370429674
		{ &Z_Construct_UFunction_UDBDOutlineComponent_ResetToTransparent, "ResetToTransparent" }, // 2051422153
		{ &Z_Construct_UFunction_UDBDOutlineComponent_SetFadeIntensity, "SetFadeIntensity" }, // 875025428
		{ &Z_Construct_UFunction_UDBDOutlineComponent_SetFadeTexture, "SetFadeTexture" }, // 128428138
		{ &Z_Construct_UFunction_UDBDOutlineComponent_SetIsOccludingOutlines, "SetIsOccludingOutlines" }, // 3043418684
		{ &Z_Construct_UFunction_UDBDOutlineComponent_SetMaterialCopyTarget, "SetMaterialCopyTarget" }, // 3589829865
		{ &Z_Construct_UFunction_UDBDOutlineComponent_SetMinimumOutlineDistance, "SetMinimumOutlineDistance" }, // 2475995533
		{ &Z_Construct_UFunction_UDBDOutlineComponent_SetOutlineIntensity, "SetOutlineIntensity" }, // 2982596429
		{ &Z_Construct_UFunction_UDBDOutlineComponent_SetTargetColor, "SetTargetColor" }, // 3025983001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DBDOutlineComponent.h" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderingStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderingStrategy = { "_renderingStrategy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponent, _renderingStrategy), Z_Construct_UClass_UBaseOutlineRenderStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderingStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderingStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__batchMeshCommands_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__batchMeshCommands = { "_batchMeshCommands", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponent, _batchMeshCommands), Z_Construct_UClass_UBatchMeshCommands_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__batchMeshCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__batchMeshCommands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderStrategySelector_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderStrategySelector = { "_renderStrategySelector", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponent, _renderStrategySelector), Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderStrategySelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderStrategySelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_OutlineName_MetaData[] = {
		{ "Category", "DBDOutlineComponent" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_OutlineName = { "OutlineName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponent, OutlineName), METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_OutlineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_OutlineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_MinimumOutlineDistance_MetaData[] = {
		{ "Category", "DBDOutlineComponent" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_MinimumOutlineDistance = { "MinimumOutlineDistance", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponent, MinimumOutlineDistance), METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_MinimumOutlineDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_MinimumOutlineDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_IsAlwaysVisible_MetaData[] = {
		{ "Category", "DBDOutlineComponent" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_IsAlwaysVisible_SetBit(void* Obj)
	{
		((UDBDOutlineComponent*)Obj)->IsAlwaysVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_IsAlwaysVisible = { "IsAlwaysVisible", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDOutlineComponent), &Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_IsAlwaysVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_IsAlwaysVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_IsAlwaysVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_FadeOutAsClosingIn_MetaData[] = {
		{ "Category", "DBDOutlineComponent" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_FadeOutAsClosingIn_SetBit(void* Obj)
	{
		((UDBDOutlineComponent*)Obj)->FadeOutAsClosingIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_FadeOutAsClosingIn = { "FadeOutAsClosingIn", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDOutlineComponent), &Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_FadeOutAsClosingIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_FadeOutAsClosingIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_FadeOutAsClosingIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_LimitToCustomDepthObjects_MetaData[] = {
		{ "Category", "DBDOutlineComponent" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_LimitToCustomDepthObjects_SetBit(void* Obj)
	{
		((UDBDOutlineComponent*)Obj)->LimitToCustomDepthObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_LimitToCustomDepthObjects = { "LimitToCustomDepthObjects", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDOutlineComponent), &Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_LimitToCustomDepthObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_LimitToCustomDepthObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_LimitToCustomDepthObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ForceOutlineFarAway_MetaData[] = {
		{ "Category", "DBDOutlineComponent" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ForceOutlineFarAway_SetBit(void* Obj)
	{
		((UDBDOutlineComponent*)Obj)->ForceOutlineFarAway = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ForceOutlineFarAway = { "ForceOutlineFarAway", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDOutlineComponent), &Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ForceOutlineFarAway_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ForceOutlineFarAway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ForceOutlineFarAway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ShouldBeAboveOutlines_MetaData[] = {
		{ "Category", "DBDOutlineComponent" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ShouldBeAboveOutlines_SetBit(void* Obj)
	{
		((UDBDOutlineComponent*)Obj)->ShouldBeAboveOutlines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ShouldBeAboveOutlines = { "ShouldBeAboveOutlines", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDOutlineComponent), &Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ShouldBeAboveOutlines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ShouldBeAboveOutlines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ShouldBeAboveOutlines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "DBDOutlineComponent" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponent, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_InterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_InterpolationSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDOutlineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderingStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__batchMeshCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp__renderStrategySelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_OutlineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_MinimumOutlineDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_IsAlwaysVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_FadeOutAsClosingIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_LimitToCustomDepthObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ForceOutlineFarAway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_ShouldBeAboveOutlines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponent_Statics::NewProp_InterpolationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDOutlineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDOutlineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDOutlineComponent_Statics::ClassParams = {
		&UDBDOutlineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDOutlineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDOutlineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDOutlineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDOutlineComponent, 2544500986);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDOutlineComponent>()
	{
		return UDBDOutlineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDOutlineComponent(Z_Construct_UClass_UDBDOutlineComponent, &UDBDOutlineComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDOutlineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDOutlineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
