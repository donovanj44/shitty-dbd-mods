// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsExtensions/Public/GMAdaptiveShadowMapControllerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMAdaptiveShadowMapControllerComponent() {}
// Cross Module References
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsExtensions();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSource_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapController_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	DEFINE_FUNCTION(UGMAdaptiveShadowMapControllerComponent::execDumpDebugInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpDebugInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMAdaptiveShadowMapControllerComponent::execGetTileCountX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileCountX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMAdaptiveShadowMapControllerComponent::execGetTileCountY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileCountY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMAdaptiveShadowMapControllerComponent::execGetTileSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMAdaptiveShadowMapControllerComponent::execIsControllerDonePreallocatingTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControllerDonePreallocatingTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGMAdaptiveShadowMapControllerComponent::execRebuildAtlas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebuildAtlas();
		P_NATIVE_END;
	}
	void UGMAdaptiveShadowMapControllerComponent::StaticRegisterNativesUGMAdaptiveShadowMapControllerComponent()
	{
		UClass* Class = UGMAdaptiveShadowMapControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DumpDebugInfo", &UGMAdaptiveShadowMapControllerComponent::execDumpDebugInfo },
			{ "GetTileCountX", &UGMAdaptiveShadowMapControllerComponent::execGetTileCountX },
			{ "GetTileCountY", &UGMAdaptiveShadowMapControllerComponent::execGetTileCountY },
			{ "GetTileSize", &UGMAdaptiveShadowMapControllerComponent::execGetTileSize },
			{ "IsControllerDonePreallocatingTiles", &UGMAdaptiveShadowMapControllerComponent::execIsControllerDonePreallocatingTiles },
			{ "RebuildAtlas", &UGMAdaptiveShadowMapControllerComponent::execRebuildAtlas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent, nullptr, "DumpDebugInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics
	{
		struct GMAdaptiveShadowMapControllerComponent_eventGetTileCountX_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMAdaptiveShadowMapControllerComponent_eventGetTileCountX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent, nullptr, "GetTileCountX", nullptr, nullptr, sizeof(GMAdaptiveShadowMapControllerComponent_eventGetTileCountX_Parms), Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics
	{
		struct GMAdaptiveShadowMapControllerComponent_eventGetTileCountY_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMAdaptiveShadowMapControllerComponent_eventGetTileCountY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent, nullptr, "GetTileCountY", nullptr, nullptr, sizeof(GMAdaptiveShadowMapControllerComponent_eventGetTileCountY_Parms), Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics
	{
		struct GMAdaptiveShadowMapControllerComponent_eventGetTileSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMAdaptiveShadowMapControllerComponent_eventGetTileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent, nullptr, "GetTileSize", nullptr, nullptr, sizeof(GMAdaptiveShadowMapControllerComponent_eventGetTileSize_Parms), Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics
	{
		struct GMAdaptiveShadowMapControllerComponent_eventIsControllerDonePreallocatingTiles_Parms
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
	void Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMAdaptiveShadowMapControllerComponent_eventIsControllerDonePreallocatingTiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMAdaptiveShadowMapControllerComponent_eventIsControllerDonePreallocatingTiles_Parms), &Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent, nullptr, "IsControllerDonePreallocatingTiles", nullptr, nullptr, sizeof(GMAdaptiveShadowMapControllerComponent_eventIsControllerDonePreallocatingTiles_Parms), Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent, nullptr, "RebuildAtlas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_RebuildAtlas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_NoRegister()
	{
		return UGMAdaptiveShadowMapControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightFunctionMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lightFunctionMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shadowMapSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__shadowMapSources;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__shadowMapSources_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__shadowMapSources_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewOnly_MetaData[];
#endif
		static void NewProp_bPreviewOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullShadowIfPixelSizeLessThan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullShadowIfPixelSizeLessThan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightFunctionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsSpotLights_MetaData[];
#endif
		static void NewProp_bSupportsSpotLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsSpotLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDirectionalLights_MetaData[];
#endif
		static void NewProp_bSupportsDirectionalLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDirectionalLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedTilesPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedTilesPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileCountY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileCountY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileCountX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileCountX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsExtensions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo, "DumpDebugInfo" }, // 2581762615
		{ &Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountX, "GetTileCountX" }, // 1852508677
		{ &Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileCountY, "GetTileCountY" }, // 1271312563
		{ &Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_GetTileSize, "GetTileSize" }, // 192150012
		{ &Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles, "IsControllerDonePreallocatingTiles" }, // 865620557
		{ &Z_Construct_UFunction_UGMAdaptiveShadowMapControllerComponent_RebuildAtlas, "RebuildAtlas" }, // 3787788257
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GMAdaptiveShadowMapControllerComponent.h" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__lightFunctionMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__lightFunctionMaterialInstance = { "_lightFunctionMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, _lightFunctionMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__lightFunctionMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__lightFunctionMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources = { "_shadowMapSources", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, _shadowMapSources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources_Key_KeyProp = { "_shadowMapSources_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources_ValueProp = { "_shadowMapSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UGMAdaptiveShadowMapSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__controller = { "_controller", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, _controller), Z_Construct_UClass_UGMAdaptiveShadowMapController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__atlas_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__atlas = { "_atlas", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, _atlas), Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__atlas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bPreviewOnly_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bPreviewOnly_SetBit(void* Obj)
	{
		((UGMAdaptiveShadowMapControllerComponent*)Obj)->bPreviewOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bPreviewOnly = { "bPreviewOnly", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGMAdaptiveShadowMapControllerComponent), &Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bPreviewOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bPreviewOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bPreviewOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_CullShadowIfPixelSizeLessThan_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_CullShadowIfPixelSizeLessThan = { "CullShadowIfPixelSizeLessThan", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, CullShadowIfPixelSizeLessThan), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_CullShadowIfPixelSizeLessThan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_CullShadowIfPixelSizeLessThan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_LightFunctionMaterial_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_LightFunctionMaterial = { "LightFunctionMaterial", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, LightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_LightFunctionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_LightFunctionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsSpotLights_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsSpotLights_SetBit(void* Obj)
	{
		((UGMAdaptiveShadowMapControllerComponent*)Obj)->bSupportsSpotLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsSpotLights = { "bSupportsSpotLights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGMAdaptiveShadowMapControllerComponent), &Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsSpotLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsSpotLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsSpotLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsDirectionalLights_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//FBHVRPerDetailModeInt MaxPreallocatedTilesPerFrame;\n" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nFBHVRPerDetailModeInt MaxPreallocatedTilesPerFrame;" },
	};
#endif
	void Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsDirectionalLights_SetBit(void* Obj)
	{
		((UGMAdaptiveShadowMapControllerComponent*)Obj)->bSupportsDirectionalLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsDirectionalLights = { "bSupportsDirectionalLights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGMAdaptiveShadowMapControllerComponent), &Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsDirectionalLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsDirectionalLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsDirectionalLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GeneratedTilesPerFrame_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GeneratedTilesPerFrame = { "GeneratedTilesPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, GeneratedTilesPerFrame), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GeneratedTilesPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GeneratedTilesPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountY_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountY = { "TileCountY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, TileCountY), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountX_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapControllerComponent" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//FBHVRPerDetailModeInt TileSize;\n" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapControllerComponent.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nFBHVRPerDetailModeInt TileSize;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountX = { "TileCountX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, TileCountX), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__lightFunctionMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__shadowMapSources_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp__atlas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bPreviewOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_CullShadowIfPixelSizeLessThan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_LightFunctionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsSpotLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_bSupportsDirectionalLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GeneratedTilesPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_GridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::NewProp_TileCountX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMAdaptiveShadowMapControllerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::ClassParams = {
		&UGMAdaptiveShadowMapControllerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGMAdaptiveShadowMapControllerComponent, 4006020841);
	template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<UGMAdaptiveShadowMapControllerComponent>()
	{
		return UGMAdaptiveShadowMapControllerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGMAdaptiveShadowMapControllerComponent(Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent, &UGMAdaptiveShadowMapControllerComponent::StaticClass, TEXT("/Script/GraphicsExtensions"), TEXT("UGMAdaptiveShadowMapControllerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMAdaptiveShadowMapControllerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
