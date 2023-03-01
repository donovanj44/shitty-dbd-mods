// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGRoleSwitcherWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGRoleSwitcherWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRoleSwitcherWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRoleSwitcherWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UUMGRoleSwitcherWidget::StaticRegisterNativesUUMGRoleSwitcherWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGRoleSwitcherWidget_NoRegister()
	{
		return UUMGRoleSwitcherWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__touchDeltaTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__touchDeltaTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCurrentRoleRoleSwitcher_MetaData[];
#endif
		static void NewProp__isCurrentRoleRoleSwitcher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCurrentRoleRoleSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGRoleSwitcherWidget.h" },
		{ "ModuleRelativePath", "Public/UMGRoleSwitcherWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__touchDeltaTolerance_MetaData[] = {
		{ "Category", "UMGRoleSwitcherWidget" },
		{ "ModuleRelativePath", "Public/UMGRoleSwitcherWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__touchDeltaTolerance = { "_touchDeltaTolerance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGRoleSwitcherWidget, _touchDeltaTolerance), METADATA_PARAMS(Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__touchDeltaTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__touchDeltaTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__isCurrentRoleRoleSwitcher_MetaData[] = {
		{ "Category", "UMGRoleSwitcherWidget" },
		{ "ModuleRelativePath", "Public/UMGRoleSwitcherWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__isCurrentRoleRoleSwitcher_SetBit(void* Obj)
	{
		((UUMGRoleSwitcherWidget*)Obj)->_isCurrentRoleRoleSwitcher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__isCurrentRoleRoleSwitcher = { "_isCurrentRoleRoleSwitcher", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGRoleSwitcherWidget), &Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__isCurrentRoleRoleSwitcher_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__isCurrentRoleRoleSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__isCurrentRoleRoleSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__touchDeltaTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::NewProp__isCurrentRoleRoleSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGRoleSwitcherWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::ClassParams = {
		&UUMGRoleSwitcherWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGRoleSwitcherWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGRoleSwitcherWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGRoleSwitcherWidget, 2025759176);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGRoleSwitcherWidget>()
	{
		return UUMGRoleSwitcherWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGRoleSwitcherWidget(Z_Construct_UClass_UUMGRoleSwitcherWidget, &UUMGRoleSwitcherWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGRoleSwitcherWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGRoleSwitcherWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
