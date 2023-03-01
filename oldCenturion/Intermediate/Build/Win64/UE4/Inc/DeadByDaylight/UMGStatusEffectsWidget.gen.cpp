// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGStatusEffectsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGStatusEffectsWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStatusEffectsWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStatusEffectsWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStatusEffectIcon_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGStatusEffectsWidget::execRemoveExistingStatusEffect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_statusEffectID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveExistingStatusEffect(Z_Param_statusEffectID);
		P_NATIVE_END;
	}
	void UUMGStatusEffectsWidget::StaticRegisterNativesUUMGStatusEffectsWidget()
	{
		UClass* Class = UUMGStatusEffectsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveExistingStatusEffect", &UUMGStatusEffectsWidget::execRemoveExistingStatusEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics
	{
		struct UMGStatusEffectsWidget_eventRemoveExistingStatusEffect_Parms
		{
			FString statusEffectID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusEffectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statusEffectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::NewProp_statusEffectID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::NewProp_statusEffectID = { "statusEffectID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGStatusEffectsWidget_eventRemoveExistingStatusEffect_Parms, statusEffectID), METADATA_PARAMS(Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::NewProp_statusEffectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::NewProp_statusEffectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::NewProp_statusEffectID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStatusEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStatusEffectsWidget, nullptr, "RemoveExistingStatusEffect", nullptr, nullptr, sizeof(UMGStatusEffectsWidget_eventRemoveExistingStatusEffect_Parms), Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGStatusEffectsWidget_NoRegister()
	{
		return UUMGStatusEffectsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGStatusEffectsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__statusEffectsMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectsMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusEffectsMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectsBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusEffectsBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaStatusEffectIconClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AtlantaStatusEffectIconClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGStatusEffectsWidget_RemoveExistingStatusEffect, "RemoveExistingStatusEffect" }, // 15364027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGStatusEffectsWidget.h" },
		{ "ModuleRelativePath", "Public/UMGStatusEffectsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap_MetaData[] = {
		{ "Category", "UMGStatusEffectsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStatusEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap = { "_statusEffectsMap", nullptr, (EPropertyFlags)0x002008800000201c, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStatusEffectsWidget, _statusEffectsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap_Key_KeyProp = { "_statusEffectsMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap_ValueProp = { "_statusEffectsMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUMGStatusEffectIcon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_StatusEffectsBox_MetaData[] = {
		{ "Category", "UMGStatusEffectsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStatusEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_StatusEffectsBox = { "StatusEffectsBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStatusEffectsWidget, StatusEffectsBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_StatusEffectsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_StatusEffectsBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_AtlantaStatusEffectIconClass_MetaData[] = {
		{ "Category", "UMGStatusEffectsWidget" },
		{ "ModuleRelativePath", "Public/UMGStatusEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_AtlantaStatusEffectIconClass = { "AtlantaStatusEffectIconClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStatusEffectsWidget, AtlantaStatusEffectIconClass), Z_Construct_UClass_UUMGStatusEffectIcon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_AtlantaStatusEffectIconClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_AtlantaStatusEffectIconClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp__statusEffectsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_StatusEffectsBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::NewProp_AtlantaStatusEffectIconClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGStatusEffectsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::ClassParams = {
		&UUMGStatusEffectsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGStatusEffectsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGStatusEffectsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGStatusEffectsWidget, 1485375168);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGStatusEffectsWidget>()
	{
		return UUMGStatusEffectsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGStatusEffectsWidget(Z_Construct_UClass_UUMGStatusEffectsWidget, &UUMGStatusEffectsWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGStatusEffectsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGStatusEffectsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
