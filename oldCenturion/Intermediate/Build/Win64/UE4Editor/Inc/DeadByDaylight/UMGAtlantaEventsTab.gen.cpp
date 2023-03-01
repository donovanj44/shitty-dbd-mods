// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaEventsTab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaEventsTab() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaEventsTab_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaEventsTab();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_UUMGAtlantaEventsTab_SetHotTag = FName(TEXT("SetHotTag"));
	void UUMGAtlantaEventsTab::SetHotTag()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaEventsTab_SetHotTag),NULL);
	}
	static FName NAME_UUMGAtlantaEventsTab_SetNewTag = FName(TEXT("SetNewTag"));
	void UUMGAtlantaEventsTab::SetNewTag()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaEventsTab_SetNewTag),NULL);
	}
	static FName NAME_UUMGAtlantaEventsTab_SetSelectionVisuals = FName(TEXT("SetSelectionVisuals"));
	void UUMGAtlantaEventsTab::SetSelectionVisuals(bool isSelected)
	{
		UMGAtlantaEventsTab_eventSetSelectionVisuals_Parms Parms;
		Parms.isSelected=isSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaEventsTab_SetSelectionVisuals),&Parms);
	}
	void UUMGAtlantaEventsTab::StaticRegisterNativesUUMGAtlantaEventsTab()
	{
	}
	struct Z_Construct_UFunction_UUMGAtlantaEventsTab_SetHotTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsTab_SetHotTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsTab.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaEventsTab_SetHotTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaEventsTab, nullptr, "SetHotTag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsTab_SetHotTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsTab_SetHotTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaEventsTab_SetHotTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaEventsTab_SetHotTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaEventsTab_SetNewTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsTab_SetNewTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsTab.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaEventsTab_SetNewTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaEventsTab, nullptr, "SetNewTag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsTab_SetNewTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsTab_SetNewTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaEventsTab_SetNewTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaEventsTab_SetNewTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics
	{
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGAtlantaEventsTab_eventSetSelectionVisuals_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaEventsTab_eventSetSelectionVisuals_Parms), &Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsTab.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaEventsTab, nullptr, "SetSelectionVisuals", nullptr, nullptr, sizeof(UMGAtlantaEventsTab_eventSetSelectionVisuals_Parms), Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaEventsTab_NoRegister()
	{
		return UUMGAtlantaEventsTab::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaEventsTab_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTagText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTagText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotTagText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HotTagText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__eventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaEventsTab_SetHotTag, "SetHotTag" }, // 4077386487
		{ &Z_Construct_UFunction_UUMGAtlantaEventsTab_SetNewTag, "SetNewTag" }, // 2208182309
		{ &Z_Construct_UFunction_UUMGAtlantaEventsTab_SetSelectionVisuals, "SetSelectionVisuals" }, // 1258112386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaEventsTab.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsTab.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_NewTagText_MetaData[] = {
		{ "Category", "UMGAtlantaEventsTab" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsTab.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_NewTagText = { "NewTagText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsTab, NewTagText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_NewTagText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_NewTagText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_HotTagText_MetaData[] = {
		{ "Category", "UMGAtlantaEventsTab" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsTab.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_HotTagText = { "HotTagText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsTab, HotTagText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_HotTagText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_HotTagText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp__eventId_MetaData[] = {
		{ "Category", "UMGAtlantaEventsTab" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsTab.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp__eventId = { "_eventId", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsTab, _eventId), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp__eventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp__eventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_NewTagText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp_HotTagText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::NewProp__eventId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaEventsTab>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::ClassParams = {
		&UUMGAtlantaEventsTab::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaEventsTab()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaEventsTab_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaEventsTab, 2847327839);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaEventsTab>()
	{
		return UUMGAtlantaEventsTab::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaEventsTab(Z_Construct_UClass_UUMGAtlantaEventsTab, &UUMGAtlantaEventsTab::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaEventsTab"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaEventsTab);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
