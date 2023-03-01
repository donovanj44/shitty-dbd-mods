// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGDragWidget_HudEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGDragWidget_HudEditor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget_HudEditor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorDragConstraintWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UUMGDragWidget_HudEditor::execGetCustomWrapper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomWidgetWrapper_HudEditor**)Z_Param__Result=P_THIS->GetCustomWrapper();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGDragWidget_HudEditor::execSetOnSelection)
	{
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnSelection_Implementation(Z_Param_isSelected);
		P_NATIVE_END;
	}
	static FName NAME_UUMGDragWidget_HudEditor_SetOnSelection = FName(TEXT("SetOnSelection"));
	void UUMGDragWidget_HudEditor::SetOnSelection(bool isSelected)
	{
		UMGDragWidget_HudEditor_eventSetOnSelection_Parms Parms;
		Parms.isSelected=isSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGDragWidget_HudEditor_SetOnSelection),&Parms);
	}
	void UUMGDragWidget_HudEditor::StaticRegisterNativesUUMGDragWidget_HudEditor()
	{
		UClass* Class = UUMGDragWidget_HudEditor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomWrapper", &UUMGDragWidget_HudEditor::execGetCustomWrapper },
			{ "SetOnSelection", &UUMGDragWidget_HudEditor::execSetOnSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics
	{
		struct UMGDragWidget_HudEditor_eventGetCustomWrapper_Parms
		{
			UCustomWidgetWrapper_HudEditor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGDragWidget_HudEditor_eventGetCustomWrapper_Parms, ReturnValue), Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGDragWidget_HudEditor, nullptr, "GetCustomWrapper", nullptr, nullptr, sizeof(UMGDragWidget_HudEditor_eventGetCustomWrapper_Parms), Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics
	{
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGDragWidget_HudEditor_eventSetOnSelection_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGDragWidget_HudEditor_eventSetOnSelection_Parms), &Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGDragWidget_HudEditor, nullptr, "SetOnSelection", nullptr, nullptr, sizeof(UMGDragWidget_HudEditor_eventSetOnSelection_Parms), Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister()
	{
		return UUMGDragWidget_HudEditor::StaticClass();
	}
	struct Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__childLinkWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__childLinkWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__parentLinkWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__parentLinkWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dragLinkWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dragLinkWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selectionWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__customWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragLinkWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DragLinkWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OnSelectionWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGDragWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGDragWidget_HudEditor_GetCustomWrapper, "GetCustomWrapper" }, // 3994952130
		{ &Z_Construct_UFunction_UUMGDragWidget_HudEditor_SetOnSelection, "SetOnSelection" }, // 2818300539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGDragWidget_HudEditor.h" },
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__childLinkWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__childLinkWidget = { "_childLinkWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDragWidget_HudEditor, _childLinkWidget), Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__childLinkWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__childLinkWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__parentLinkWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__parentLinkWidget = { "_parentLinkWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDragWidget_HudEditor, _parentLinkWidget), Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__parentLinkWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__parentLinkWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__dragLinkWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__dragLinkWidget = { "_dragLinkWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDragWidget_HudEditor, _dragLinkWidget), Z_Construct_UClass_UUMGHudEditorDragConstraintWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__dragLinkWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__dragLinkWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__selectionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__selectionWidget = { "_selectionWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDragWidget_HudEditor, _selectionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__selectionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__selectionWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__customWrapper_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__customWrapper = { "_customWrapper", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDragWidget_HudEditor, _customWrapper), Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__customWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__customWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_DragLinkWidgetClass_MetaData[] = {
		{ "Category", "UMGDragWidget_HudEditor" },
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_DragLinkWidgetClass = { "DragLinkWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDragWidget_HudEditor, DragLinkWidgetClass), Z_Construct_UClass_UUMGHudEditorDragConstraintWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_DragLinkWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_DragLinkWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_OnSelectionWidgetClass_MetaData[] = {
		{ "Category", "UMGDragWidget_HudEditor" },
		{ "ModuleRelativePath", "Public/UMGDragWidget_HudEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_OnSelectionWidgetClass = { "OnSelectionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDragWidget_HudEditor, OnSelectionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_OnSelectionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_OnSelectionWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__childLinkWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__parentLinkWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__dragLinkWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__selectionWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp__customWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_DragLinkWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::NewProp_OnSelectionWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGDragWidget_HudEditor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::ClassParams = {
		&UUMGDragWidget_HudEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGDragWidget_HudEditor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGDragWidget_HudEditor, 884758312);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGDragWidget_HudEditor>()
	{
		return UUMGDragWidget_HudEditor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGDragWidget_HudEditor(Z_Construct_UClass_UUMGDragWidget_HudEditor, &UUMGDragWidget_HudEditor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGDragWidget_HudEditor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGDragWidget_HudEditor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
