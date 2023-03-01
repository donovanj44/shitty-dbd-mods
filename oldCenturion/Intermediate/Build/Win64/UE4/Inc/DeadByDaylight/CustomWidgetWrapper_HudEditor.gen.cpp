// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomWidgetWrapper_HudEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomWidgetWrapper_HudEditor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper_HudEditor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execAddToTranslation)
	{
		P_GET_STRUCT(FVector2D,Z_Param_translation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToTranslation(Z_Param_translation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execApplyScaleWithOverlappingWrappers)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_OBJECT(UWidget,Z_Param_widget);
		P_GET_TARRAY_REF(UCustomWidgetWrapper_HudEditor*,Z_Param_Out_allEditableWrappers);
		P_GET_UBOOL(Z_Param_needDetectOverlapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyScaleWithOverlappingWrappers(Z_Param_scale,Z_Param_widget,Z_Param_Out_allEditableWrappers,Z_Param_needDetectOverlapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execCanEditOpacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEditOpacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execCanEditScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEditScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execClampToViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClampToViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execFlipPositionWithChildLinkWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlipPositionWithChildLinkWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execFlipScreenPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlipScreenPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execGetOpacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOpacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper_HudEditor::execGetScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScale();
		P_NATIVE_END;
	}
	void UCustomWidgetWrapper_HudEditor::StaticRegisterNativesUCustomWidgetWrapper_HudEditor()
	{
		UClass* Class = UCustomWidgetWrapper_HudEditor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToTranslation", &UCustomWidgetWrapper_HudEditor::execAddToTranslation },
			{ "ApplyScaleWithOverlappingWrappers", &UCustomWidgetWrapper_HudEditor::execApplyScaleWithOverlappingWrappers },
			{ "CanEditOpacity", &UCustomWidgetWrapper_HudEditor::execCanEditOpacity },
			{ "CanEditScale", &UCustomWidgetWrapper_HudEditor::execCanEditScale },
			{ "ClampToViewport", &UCustomWidgetWrapper_HudEditor::execClampToViewport },
			{ "FlipPositionWithChildLinkWidget", &UCustomWidgetWrapper_HudEditor::execFlipPositionWithChildLinkWidget },
			{ "FlipScreenPosition", &UCustomWidgetWrapper_HudEditor::execFlipScreenPosition },
			{ "GetOpacity", &UCustomWidgetWrapper_HudEditor::execGetOpacity },
			{ "GetScale", &UCustomWidgetWrapper_HudEditor::execGetScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics
	{
		struct CustomWidgetWrapper_HudEditor_eventAddToTranslation_Parms
		{
			FVector2D translation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_translation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::NewProp_translation = { "translation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_HudEditor_eventAddToTranslation_Parms, translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::NewProp_translation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "AddToTranslation", nullptr, nullptr, sizeof(CustomWidgetWrapper_HudEditor_eventAddToTranslation_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics
	{
		struct CustomWidgetWrapper_HudEditor_eventApplyScaleWithOverlappingWrappers_Parms
		{
			float scale;
			UWidget* widget;
			TArray<UCustomWidgetWrapper_HudEditor*> allEditableWrappers;
			bool needDetectOverlapping;
		};
		static void NewProp_needDetectOverlapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_needDetectOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_allEditableWrappers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_allEditableWrappers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_allEditableWrappers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_needDetectOverlapping_SetBit(void* Obj)
	{
		((CustomWidgetWrapper_HudEditor_eventApplyScaleWithOverlappingWrappers_Parms*)Obj)->needDetectOverlapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_needDetectOverlapping = { "needDetectOverlapping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWidgetWrapper_HudEditor_eventApplyScaleWithOverlappingWrappers_Parms), &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_needDetectOverlapping_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_allEditableWrappers_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_allEditableWrappers = { "allEditableWrappers", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_HudEditor_eventApplyScaleWithOverlappingWrappers_Parms, allEditableWrappers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_allEditableWrappers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_allEditableWrappers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_allEditableWrappers_Inner = { "allEditableWrappers", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_HudEditor_eventApplyScaleWithOverlappingWrappers_Parms, widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_widget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_HudEditor_eventApplyScaleWithOverlappingWrappers_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_needDetectOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_allEditableWrappers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_allEditableWrappers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "ApplyScaleWithOverlappingWrappers", nullptr, nullptr, sizeof(CustomWidgetWrapper_HudEditor_eventApplyScaleWithOverlappingWrappers_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics
	{
		struct CustomWidgetWrapper_HudEditor_eventCanEditOpacity_Parms
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
	void Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWidgetWrapper_HudEditor_eventCanEditOpacity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWidgetWrapper_HudEditor_eventCanEditOpacity_Parms), &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "CanEditOpacity", nullptr, nullptr, sizeof(CustomWidgetWrapper_HudEditor_eventCanEditOpacity_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics
	{
		struct CustomWidgetWrapper_HudEditor_eventCanEditScale_Parms
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
	void Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWidgetWrapper_HudEditor_eventCanEditScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWidgetWrapper_HudEditor_eventCanEditScale_Parms), &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "CanEditScale", nullptr, nullptr, sizeof(CustomWidgetWrapper_HudEditor_eventCanEditScale_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ClampToViewport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ClampToViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ClampToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "ClampToViewport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ClampToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ClampToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ClampToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ClampToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipPositionWithChildLinkWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipPositionWithChildLinkWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipPositionWithChildLinkWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "FlipPositionWithChildLinkWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipPositionWithChildLinkWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipPositionWithChildLinkWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipPositionWithChildLinkWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipPositionWithChildLinkWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipScreenPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipScreenPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipScreenPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "FlipScreenPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipScreenPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipScreenPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipScreenPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipScreenPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics
	{
		struct CustomWidgetWrapper_HudEditor_eventGetOpacity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_HudEditor_eventGetOpacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "GetOpacity", nullptr, nullptr, sizeof(CustomWidgetWrapper_HudEditor_eventGetOpacity_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics
	{
		struct CustomWidgetWrapper_HudEditor_eventGetScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_HudEditor_eventGetScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, nullptr, "GetScale", nullptr, nullptr, sizeof(CustomWidgetWrapper_HudEditor_eventGetScale_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister()
	{
		return UCustomWidgetWrapper_HudEditor::StaticClass();
	}
	struct Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapStatusTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapStatusTintColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEditingHudByInput_MetaData[];
#endif
		static void NewProp_IsEditingHudByInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEditingHudByInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentDragLimitY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentDragLimitY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentDragLimitX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentDragLimitX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreOverlapIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoreOverlapIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapAboveSizeRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapAboveSizeRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenStatusOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HiddenStatusOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenStatusTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HiddenStatusTintColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideUnderOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HideUnderOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbVersions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbVersions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomWidgetWrapper,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_AddToTranslation, "AddToTranslation" }, // 3473302246
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ApplyScaleWithOverlappingWrappers, "ApplyScaleWithOverlappingWrappers" }, // 1201447534
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditOpacity, "CanEditOpacity" }, // 2671765378
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_CanEditScale, "CanEditScale" }, // 2597864636
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_ClampToViewport, "ClampToViewport" }, // 3435947683
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipPositionWithChildLinkWidget, "FlipPositionWithChildLinkWidget" }, // 3514771202
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_FlipScreenPosition, "FlipScreenPosition" }, // 173869732
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetOpacity, "GetOpacity" }, // 8932779
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_HudEditor_GetScale, "GetScale" }, // 4145495908
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomWidgetWrapper_HudEditor.h" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapStatusTintColor_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapStatusTintColor = { "OverlapStatusTintColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, OverlapStatusTintColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapStatusTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapStatusTintColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IsEditingHudByInput_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	void Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IsEditingHudByInput_SetBit(void* Obj)
	{
		((UCustomWidgetWrapper_HudEditor*)Obj)->IsEditingHudByInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IsEditingHudByInput = { "IsEditingHudByInput", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomWidgetWrapper_HudEditor), &Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IsEditingHudByInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IsEditingHudByInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IsEditingHudByInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitY_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitY = { "ParentDragLimitY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, ParentDragLimitY), Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitX_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitX = { "ParentDragLimitX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, ParentDragLimitX), Z_Construct_UScriptStruct_FHudEditorDragFromParentAxisLimit, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IgnoreOverlapIds_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IgnoreOverlapIds = { "IgnoreOverlapIds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, IgnoreOverlapIds), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IgnoreOverlapIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IgnoreOverlapIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapAboveSizeRatio_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapAboveSizeRatio = { "OverlapAboveSizeRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, OverlapAboveSizeRatio), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapAboveSizeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapAboveSizeRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusOpacity_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusOpacity = { "HiddenStatusOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, HiddenStatusOpacity), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusTintColor_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusTintColor = { "HiddenStatusTintColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, HiddenStatusTintColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusTintColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HideUnderOpacity_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HideUnderOpacity = { "HideUnderOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, HideUnderOpacity), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HideUnderOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HideUnderOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_NbVersions_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_NbVersions = { "NbVersions", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, NbVersions), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_NbVersions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_NbVersions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, MaxScale), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinScale_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, MinScale), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxOpacity_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxOpacity = { "MaxOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, MaxOpacity), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinOpacity_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_HudEditor" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinOpacity = { "MinOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_HudEditor, MinOpacity), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinOpacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapStatusTintColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IsEditingHudByInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_ParentDragLimitX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_IgnoreOverlapIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_OverlapAboveSizeRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HiddenStatusTintColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_HideUnderOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_NbVersions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MaxOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::NewProp_MinOpacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomWidgetWrapper_HudEditor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::ClassParams = {
		&UCustomWidgetWrapper_HudEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomWidgetWrapper_HudEditor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomWidgetWrapper_HudEditor, 3328596151);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCustomWidgetWrapper_HudEditor>()
	{
		return UCustomWidgetWrapper_HudEditor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomWidgetWrapper_HudEditor(Z_Construct_UClass_UCustomWidgetWrapper_HudEditor, &UCustomWidgetWrapper_HudEditor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCustomWidgetWrapper_HudEditor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomWidgetWrapper_HudEditor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
