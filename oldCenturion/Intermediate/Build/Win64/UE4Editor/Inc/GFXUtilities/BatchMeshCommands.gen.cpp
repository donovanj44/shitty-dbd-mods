// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/BatchMeshCommands.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatchMeshCommands() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBatchMeshCommands_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBatchMeshCommands();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState();
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialNamedGroup();
// End Cross Module References
	DEFINE_FUNCTION(UBatchMeshCommands::execBatchSetComponentTickEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BatchSetComponentTickEnabled(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execBatchSetSkipComponentAndChildrenTransformUpdate)
	{
		P_GET_UBOOL(Z_Param_skip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BatchSetSkipComponentAndChildrenTransformUpdate(Z_Param_skip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execBatchSetVisibility)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_UBOOL(Z_Param_bPropagateToChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BatchSetVisibility(Z_Param_bNewVisibility,Z_Param_bPropagateToChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execCopyFirstScalarParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_parameterName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CopyFirstScalarParameter(Z_Param_parameterName,Z_Param_Out_outValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execResetMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetAllToSameMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllToSameMaterial(Z_Param_materialInterface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetCastCinematicShadows)
	{
		P_GET_UBOOL(Z_Param_castCinematicShadows);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastCinematicShadows(Z_Param_castCinematicShadows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetColourParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_parameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_newValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColourParameter(Z_Param_parameterName,Z_Param_newValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetCustomDepthStencilValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_stencilValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomDepthStencilValue(Z_Param_stencilValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetLightingChannelForAllMeshes)
	{
		P_GET_STRUCT(FLightingChannels,Z_Param_lightingChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightingChannelForAllMeshes(Z_Param_lightingChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_groupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_groupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetReceivesDecals)
	{
		P_GET_UBOOL(Z_Param_receivesDecals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceivesDecals(Z_Param_receivesDecals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetRenderInCustomColourNoDepth)
	{
		P_GET_UBOOL(Z_Param_renderInCustomColour);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderInCustomColourNoDepth(Z_Param_renderInCustomColour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetRenderInCustomDepth)
	{
		P_GET_UBOOL(Z_Param_renderInCustomDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderInCustomDepth(Z_Param_renderInCustomDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetRenderInMainPass)
	{
		P_GET_UBOOL(Z_Param_inRenderInMainPass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderInMainPass(Z_Param_inRenderInMainPass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetScalarParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_parameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameter(Z_Param_parameterName,Z_Param_newValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetStencilIntegerScalarParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_parameterName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_newValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStencilIntegerScalarParameter(Z_Param_parameterName,Z_Param_Out_newValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetTextureParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_parameterName);
		P_GET_OBJECT(UTexture,Z_Param_newTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureParameter(Z_Param_parameterName,Z_Param_newTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execSetVectorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_parameterName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_newValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameter(Z_Param_parameterName,Z_Param_Out_newValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBatchMeshCommands::execUpdateMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMaterials();
		P_NATIVE_END;
	}
	void UBatchMeshCommands::StaticRegisterNativesUBatchMeshCommands()
	{
		UClass* Class = UBatchMeshCommands::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BatchSetComponentTickEnabled", &UBatchMeshCommands::execBatchSetComponentTickEnabled },
			{ "BatchSetSkipComponentAndChildrenTransformUpdate", &UBatchMeshCommands::execBatchSetSkipComponentAndChildrenTransformUpdate },
			{ "BatchSetVisibility", &UBatchMeshCommands::execBatchSetVisibility },
			{ "CopyFirstScalarParameter", &UBatchMeshCommands::execCopyFirstScalarParameter },
			{ "ResetMaterials", &UBatchMeshCommands::execResetMaterials },
			{ "SetAllToSameMaterial", &UBatchMeshCommands::execSetAllToSameMaterial },
			{ "SetCastCinematicShadows", &UBatchMeshCommands::execSetCastCinematicShadows },
			{ "SetColourParameter", &UBatchMeshCommands::execSetColourParameter },
			{ "SetCustomDepthStencilValue", &UBatchMeshCommands::execSetCustomDepthStencilValue },
			{ "SetLightingChannelForAllMeshes", &UBatchMeshCommands::execSetLightingChannelForAllMeshes },
			{ "SetMaterial", &UBatchMeshCommands::execSetMaterial },
			{ "SetReceivesDecals", &UBatchMeshCommands::execSetReceivesDecals },
			{ "SetRenderInCustomColourNoDepth", &UBatchMeshCommands::execSetRenderInCustomColourNoDepth },
			{ "SetRenderInCustomDepth", &UBatchMeshCommands::execSetRenderInCustomDepth },
			{ "SetRenderInMainPass", &UBatchMeshCommands::execSetRenderInMainPass },
			{ "SetScalarParameter", &UBatchMeshCommands::execSetScalarParameter },
			{ "SetStencilIntegerScalarParameter", &UBatchMeshCommands::execSetStencilIntegerScalarParameter },
			{ "SetTextureParameter", &UBatchMeshCommands::execSetTextureParameter },
			{ "SetVectorParameter", &UBatchMeshCommands::execSetVectorParameter },
			{ "UpdateMaterials", &UBatchMeshCommands::execUpdateMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics
	{
		struct BatchMeshCommands_eventBatchSetComponentTickEnabled_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventBatchSetComponentTickEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventBatchSetComponentTickEnabled_Parms), &Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "BatchSetComponentTickEnabled", nullptr, nullptr, sizeof(BatchMeshCommands_eventBatchSetComponentTickEnabled_Parms), Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics
	{
		struct BatchMeshCommands_eventBatchSetSkipComponentAndChildrenTransformUpdate_Parms
		{
			bool skip;
		};
		static void NewProp_skip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_skip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::NewProp_skip_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventBatchSetSkipComponentAndChildrenTransformUpdate_Parms*)Obj)->skip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::NewProp_skip = { "skip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventBatchSetSkipComponentAndChildrenTransformUpdate_Parms), &Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::NewProp_skip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::NewProp_skip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "BatchSetSkipComponentAndChildrenTransformUpdate", nullptr, nullptr, sizeof(BatchMeshCommands_eventBatchSetSkipComponentAndChildrenTransformUpdate_Parms), Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics
	{
		struct BatchMeshCommands_eventBatchSetVisibility_Parms
		{
			bool bNewVisibility;
			bool bPropagateToChildren;
		};
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventBatchSetVisibility_Parms*)Obj)->bPropagateToChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventBatchSetVisibility_Parms), &Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventBatchSetVisibility_Parms*)Obj)->bNewVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventBatchSetVisibility_Parms), &Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::NewProp_bPropagateToChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "BatchSetVisibility", nullptr, nullptr, sizeof(BatchMeshCommands_eventBatchSetVisibility_Parms), Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics
	{
		struct BatchMeshCommands_eventCopyFirstScalarParameter_Parms
		{
			FName parameterName;
			float outValue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_parameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventCopyFirstScalarParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventCopyFirstScalarParameter_Parms), &Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_outValue = { "outValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventCopyFirstScalarParameter_Parms, outValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_parameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_parameterName = { "parameterName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventCopyFirstScalarParameter_Parms, parameterName), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_parameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_parameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_outValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::NewProp_parameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "CopyFirstScalarParameter", nullptr, nullptr, sizeof(BatchMeshCommands_eventCopyFirstScalarParameter_Parms), Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_ResetMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_ResetMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_ResetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "ResetMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_ResetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_ResetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_ResetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_ResetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics
	{
		struct BatchMeshCommands_eventSetAllToSameMaterial_Parms
		{
			UMaterialInterface* materialInterface;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_materialInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::NewProp_materialInterface = { "materialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetAllToSameMaterial_Parms, materialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::NewProp_materialInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetAllToSameMaterial", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetAllToSameMaterial_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics
	{
		struct BatchMeshCommands_eventSetCastCinematicShadows_Parms
		{
			bool castCinematicShadows;
		};
		static void NewProp_castCinematicShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_castCinematicShadows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::NewProp_castCinematicShadows_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventSetCastCinematicShadows_Parms*)Obj)->castCinematicShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::NewProp_castCinematicShadows = { "castCinematicShadows", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventSetCastCinematicShadows_Parms), &Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::NewProp_castCinematicShadows_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::NewProp_castCinematicShadows,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetCastCinematicShadows", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetCastCinematicShadows_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics
	{
		struct BatchMeshCommands_eventSetColourParameter_Parms
		{
			FName parameterName;
			FLinearColor newValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_parameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_newValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetColourParameter_Parms, newValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_newValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_newValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_parameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_parameterName = { "parameterName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetColourParameter_Parms, parameterName), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_parameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_parameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_newValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::NewProp_parameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetColourParameter", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetColourParameter_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics
	{
		struct BatchMeshCommands_eventSetCustomDepthStencilValue_Parms
		{
			int32 stencilValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_stencilValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::NewProp_stencilValue = { "stencilValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetCustomDepthStencilValue_Parms, stencilValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::NewProp_stencilValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetCustomDepthStencilValue", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetCustomDepthStencilValue_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics
	{
		struct BatchMeshCommands_eventSetLightingChannelForAllMeshes_Parms
		{
			FLightingChannels lightingChannels;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lightingChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::NewProp_lightingChannels = { "lightingChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetLightingChannelForAllMeshes_Parms, lightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::NewProp_lightingChannels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetLightingChannelForAllMeshes", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetLightingChannelForAllMeshes_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics
	{
		struct BatchMeshCommands_eventSetMaterial_Parms
		{
			FString groupName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::NewProp_groupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::NewProp_groupName = { "groupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetMaterial_Parms, groupName), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::NewProp_groupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::NewProp_groupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::NewProp_groupName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetMaterial", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetMaterial_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics
	{
		struct BatchMeshCommands_eventSetReceivesDecals_Parms
		{
			bool receivesDecals;
		};
		static void NewProp_receivesDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_receivesDecals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::NewProp_receivesDecals_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventSetReceivesDecals_Parms*)Obj)->receivesDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::NewProp_receivesDecals = { "receivesDecals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventSetReceivesDecals_Parms), &Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::NewProp_receivesDecals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::NewProp_receivesDecals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetReceivesDecals", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetReceivesDecals_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics
	{
		struct BatchMeshCommands_eventSetRenderInCustomColourNoDepth_Parms
		{
			bool renderInCustomColour;
		};
		static void NewProp_renderInCustomColour_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_renderInCustomColour;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::NewProp_renderInCustomColour_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventSetRenderInCustomColourNoDepth_Parms*)Obj)->renderInCustomColour = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::NewProp_renderInCustomColour = { "renderInCustomColour", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventSetRenderInCustomColourNoDepth_Parms), &Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::NewProp_renderInCustomColour_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::NewProp_renderInCustomColour,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetRenderInCustomColourNoDepth", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetRenderInCustomColourNoDepth_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics
	{
		struct BatchMeshCommands_eventSetRenderInCustomDepth_Parms
		{
			bool renderInCustomDepth;
		};
		static void NewProp_renderInCustomDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_renderInCustomDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::NewProp_renderInCustomDepth_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventSetRenderInCustomDepth_Parms*)Obj)->renderInCustomDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::NewProp_renderInCustomDepth = { "renderInCustomDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventSetRenderInCustomDepth_Parms), &Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::NewProp_renderInCustomDepth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::NewProp_renderInCustomDepth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetRenderInCustomDepth", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetRenderInCustomDepth_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics
	{
		struct BatchMeshCommands_eventSetRenderInMainPass_Parms
		{
			bool inRenderInMainPass;
		};
		static void NewProp_inRenderInMainPass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRenderInMainPass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::NewProp_inRenderInMainPass_SetBit(void* Obj)
	{
		((BatchMeshCommands_eventSetRenderInMainPass_Parms*)Obj)->inRenderInMainPass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::NewProp_inRenderInMainPass = { "inRenderInMainPass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BatchMeshCommands_eventSetRenderInMainPass_Parms), &Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::NewProp_inRenderInMainPass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::NewProp_inRenderInMainPass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetRenderInMainPass", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetRenderInMainPass_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics
	{
		struct BatchMeshCommands_eventSetScalarParameter_Parms
		{
			FName parameterName;
			float newValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_parameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_newValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetScalarParameter_Parms, newValue), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_newValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_newValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_parameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_parameterName = { "parameterName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetScalarParameter_Parms, parameterName), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_parameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_parameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_newValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::NewProp_parameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetScalarParameter", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetScalarParameter_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics
	{
		struct BatchMeshCommands_eventSetStencilIntegerScalarParameter_Parms
		{
			FName parameterName;
			int32 newValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_parameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_newValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetStencilIntegerScalarParameter_Parms, newValue), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_newValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_newValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_parameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_parameterName = { "parameterName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetStencilIntegerScalarParameter_Parms, parameterName), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_parameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_parameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_newValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::NewProp_parameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetStencilIntegerScalarParameter", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetStencilIntegerScalarParameter_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics
	{
		struct BatchMeshCommands_eventSetTextureParameter_Parms
		{
			FName parameterName;
			UTexture* newTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_parameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::NewProp_newTexture = { "newTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetTextureParameter_Parms, newTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::NewProp_parameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::NewProp_parameterName = { "parameterName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetTextureParameter_Parms, parameterName), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::NewProp_parameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::NewProp_parameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::NewProp_newTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::NewProp_parameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetTextureParameter", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetTextureParameter_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics
	{
		struct BatchMeshCommands_eventSetVectorParameter_Parms
		{
			FName parameterName;
			FVector newValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_parameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_newValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetVectorParameter_Parms, newValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_newValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_newValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_parameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_parameterName = { "parameterName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatchMeshCommands_eventSetVectorParameter_Parms, parameterName), METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_parameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_parameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_newValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::NewProp_parameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "SetVectorParameter", nullptr, nullptr, sizeof(BatchMeshCommands_eventSetVectorParameter_Parms), Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBatchMeshCommands_UpdateMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBatchMeshCommands_UpdateMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchMeshCommands_UpdateMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchMeshCommands, nullptr, "UpdateMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBatchMeshCommands_UpdateMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchMeshCommands_UpdateMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBatchMeshCommands_UpdateMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBatchMeshCommands_UpdateMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBatchMeshCommands_NoRegister()
	{
		return UBatchMeshCommands::StaticClass();
	}
	struct Z_Construct_UClass_UBatchMeshCommands_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__materialGroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__materialGroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBatchMeshCommands_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBatchMeshCommands_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBatchMeshCommands_BatchSetComponentTickEnabled, "BatchSetComponentTickEnabled" }, // 1492471579
		{ &Z_Construct_UFunction_UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate, "BatchSetSkipComponentAndChildrenTransformUpdate" }, // 969104789
		{ &Z_Construct_UFunction_UBatchMeshCommands_BatchSetVisibility, "BatchSetVisibility" }, // 3937216849
		{ &Z_Construct_UFunction_UBatchMeshCommands_CopyFirstScalarParameter, "CopyFirstScalarParameter" }, // 1947640868
		{ &Z_Construct_UFunction_UBatchMeshCommands_ResetMaterials, "ResetMaterials" }, // 715648428
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetAllToSameMaterial, "SetAllToSameMaterial" }, // 3730541563
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetCastCinematicShadows, "SetCastCinematicShadows" }, // 2251610958
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetColourParameter, "SetColourParameter" }, // 2807781630
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetCustomDepthStencilValue, "SetCustomDepthStencilValue" }, // 3111236449
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetLightingChannelForAllMeshes, "SetLightingChannelForAllMeshes" }, // 270938196
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetMaterial, "SetMaterial" }, // 4152569996
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetReceivesDecals, "SetReceivesDecals" }, // 1132400252
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomColourNoDepth, "SetRenderInCustomColourNoDepth" }, // 3565650261
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetRenderInCustomDepth, "SetRenderInCustomDepth" }, // 2050670310
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetRenderInMainPass, "SetRenderInMainPass" }, // 1487716185
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetScalarParameter, "SetScalarParameter" }, // 3323997920
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetStencilIntegerScalarParameter, "SetStencilIntegerScalarParameter" }, // 612644458
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetTextureParameter, "SetTextureParameter" }, // 3971436312
		{ &Z_Construct_UFunction_UBatchMeshCommands_SetVectorParameter, "SetVectorParameter" }, // 1026554861
		{ &Z_Construct_UFunction_UBatchMeshCommands_UpdateMaterials, "UpdateMaterials" }, // 537224691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchMeshCommands_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BatchMeshCommands.h" },
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp__materialGroupName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp__materialGroupName = { "_materialGroupName", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBatchMeshCommands, _materialGroupName), METADATA_PARAMS(Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp__materialGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp__materialGroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_TargetMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_TargetMeshes = { "TargetMeshes", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBatchMeshCommands, TargetMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_TargetMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_TargetMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_TargetMeshes_Inner = { "TargetMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialHelperOriginalMeshState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_Groups_MetaData[] = {
		{ "Category", "BatchMeshCommands" },
		{ "ModuleRelativePath", "Public/BatchMeshCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBatchMeshCommands, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_Groups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialNamedGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBatchMeshCommands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp__materialGroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_TargetMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_TargetMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_Groups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchMeshCommands_Statics::NewProp_Groups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBatchMeshCommands_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBatchMeshCommands>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBatchMeshCommands_Statics::ClassParams = {
		&UBatchMeshCommands::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBatchMeshCommands_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBatchMeshCommands_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBatchMeshCommands_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchMeshCommands_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBatchMeshCommands()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBatchMeshCommands_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBatchMeshCommands, 1250601012);
	template<> GFXUTILITIES_API UClass* StaticClass<UBatchMeshCommands>()
	{
		return UBatchMeshCommands::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBatchMeshCommands(Z_Construct_UClass_UBatchMeshCommands, &UBatchMeshCommands::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UBatchMeshCommands"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBatchMeshCommands);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
