// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DisplayStandCurrencyRequesterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayStandCurrencyRequesterComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UDisplayStandCurrencyRequesterComponent::StaticRegisterNativesUDisplayStandCurrencyRequesterComponent()
	{
	}
	UClass* Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_NoRegister()
	{
		return UDisplayStandCurrencyRequesterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__menuCurrencyDisplayableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__menuCurrencyDisplayableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayStandCurrencyRequesterComponent.h" },
		{ "ModuleRelativePath", "Public/DisplayStandCurrencyRequesterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::NewProp__menuCurrencyDisplayableClass_MetaData[] = {
		{ "Category", "DisplayStandCurrencyRequesterComponent" },
		{ "ModuleRelativePath", "Public/DisplayStandCurrencyRequesterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::NewProp__menuCurrencyDisplayableClass = { "_menuCurrencyDisplayableClass", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisplayStandCurrencyRequesterComponent, _menuCurrencyDisplayableClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::NewProp__menuCurrencyDisplayableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::NewProp__menuCurrencyDisplayableClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::NewProp__menuCurrencyDisplayableClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayStandCurrencyRequesterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::ClassParams = {
		&UDisplayStandCurrencyRequesterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisplayStandCurrencyRequesterComponent, 481091831);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDisplayStandCurrencyRequesterComponent>()
	{
		return UDisplayStandCurrencyRequesterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisplayStandCurrencyRequesterComponent(Z_Construct_UClass_UDisplayStandCurrencyRequesterComponent, &UDisplayStandCurrencyRequesterComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDisplayStandCurrencyRequesterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayStandCurrencyRequesterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
