// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkHudWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkHudWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkHudWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkHudWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkActionButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPerkHudWidget::execRemoveExistingPerk)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_perkID);
		P_GET_UBOOL(Z_Param_isExternal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveExistingPerk(Z_Param_perkID,Z_Param_isExternal);
		P_NATIVE_END;
	}
	static FName NAME_UPerkHudWidget_OnPerkClickedHandler = FName(TEXT("OnPerkClickedHandler"));
	void UPerkHudWidget::OnPerkClickedHandler(FName perkID)
	{
		PerkHudWidget_eventOnPerkClickedHandler_Parms Parms;
		Parms.perkID=perkID;
		ProcessEvent(FindFunctionChecked(NAME_UPerkHudWidget_OnPerkClickedHandler),&Parms);
	}
	void UPerkHudWidget::StaticRegisterNativesUPerkHudWidget()
	{
		UClass* Class = UPerkHudWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveExistingPerk", &UPerkHudWidget::execRemoveExistingPerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_perkID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::NewProp_perkID = { "perkID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkHudWidget_eventOnPerkClickedHandler_Parms, perkID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::NewProp_perkID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkHudWidget, nullptr, "OnPerkClickedHandler", nullptr, nullptr, sizeof(PerkHudWidget_eventOnPerkClickedHandler_Parms), Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics
	{
		struct PerkHudWidget_eventRemoveExistingPerk_Parms
		{
			FName perkID;
			bool isExternal;
		};
		static void NewProp_isExternal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isExternal;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_perkID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::NewProp_isExternal_SetBit(void* Obj)
	{
		((PerkHudWidget_eventRemoveExistingPerk_Parms*)Obj)->isExternal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::NewProp_isExternal = { "isExternal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerkHudWidget_eventRemoveExistingPerk_Parms), &Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::NewProp_isExternal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::NewProp_perkID = { "perkID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkHudWidget_eventRemoveExistingPerk_Parms, perkID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::NewProp_isExternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::NewProp_perkID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkHudWidget, nullptr, "RemoveExistingPerk", nullptr, nullptr, sizeof(PerkHudWidget_eventRemoveExistingPerk_Parms), Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkHudWidget_NoRegister()
	{
		return UPerkHudWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPerkHudWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__externalPerksMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__externalPerksMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__externalPerksMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__externalPerksMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__clickablePerksMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__clickablePerksMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__clickablePerksMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__clickablePerksMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaPerkActionButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AtlantaPerkActionButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksExternal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerksExternal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksClickable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerksClickable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkHudWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkHudWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkHudWidget_OnPerkClickedHandler, "OnPerkClickedHandler" }, // 3882268463
		{ &Z_Construct_UFunction_UPerkHudWidget_RemoveExistingPerk, "RemoveExistingPerk" }, // 2305062271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkHudWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkHudWidget.h" },
		{ "ModuleRelativePath", "Public/PerkHudWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap = { "_externalPerksMap", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkHudWidget, _externalPerksMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap_Key_KeyProp = { "_externalPerksMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap_ValueProp = { "_externalPerksMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPerkActionButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap = { "_clickablePerksMap", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkHudWidget, _clickablePerksMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap_Key_KeyProp = { "_clickablePerksMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap_ValueProp = { "_clickablePerksMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPerkActionButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_AtlantaPerkActionButtonClass_MetaData[] = {
		{ "Category", "PerkHudWidget" },
		{ "ModuleRelativePath", "Public/PerkHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_AtlantaPerkActionButtonClass = { "AtlantaPerkActionButtonClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkHudWidget, AtlantaPerkActionButtonClass), Z_Construct_UClass_UPerkActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_AtlantaPerkActionButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_AtlantaPerkActionButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksExternal_MetaData[] = {
		{ "Category", "PerkHudWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksExternal = { "PerksExternal", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkHudWidget, PerksExternal), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksExternal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksExternal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksClickable_MetaData[] = {
		{ "Category", "PerkHudWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksClickable = { "PerksClickable", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkHudWidget, PerksClickable), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksClickable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksClickable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkHudWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__externalPerksMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp__clickablePerksMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_AtlantaPerkActionButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksExternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkHudWidget_Statics::NewProp_PerksClickable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkHudWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkHudWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkHudWidget_Statics::ClassParams = {
		&UPerkHudWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPerkHudWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerkHudWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkHudWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkHudWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkHudWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkHudWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkHudWidget, 1587486143);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkHudWidget>()
	{
		return UPerkHudWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkHudWidget(Z_Construct_UClass_UPerkHudWidget, &UPerkHudWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkHudWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkHudWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
