// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPawnSensingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPawnSensingComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPawnSensingComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPawnSensingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDPawnSensingComponent::StaticRegisterNativesUDBDPawnSensingComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDPawnSensingComponent_NoRegister()
	{
		return UDBDPawnSensingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDPawnSensingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartiallyHiddenSensingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartiallyHiddenSensingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSenseEverywhere_MetaData[];
#endif
		static void NewProp_bSenseEverywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSenseEverywhere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDPawnSensingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnSensingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPawnSensingComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "DBDPawnSensingComponent.h" },
		{ "ModuleRelativePath", "Public/DBDPawnSensingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_PartiallyHiddenSensingDistance_MetaData[] = {
		{ "Category", "DBDPawnSensingComponent" },
		{ "ModuleRelativePath", "Public/DBDPawnSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_PartiallyHiddenSensingDistance = { "PartiallyHiddenSensingDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPawnSensingComponent, PartiallyHiddenSensingDistance), METADATA_PARAMS(Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_PartiallyHiddenSensingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_PartiallyHiddenSensingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_bSenseEverywhere_MetaData[] = {
		{ "Category", "DBDPawnSensingComponent" },
		{ "ModuleRelativePath", "Public/DBDPawnSensingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_bSenseEverywhere_SetBit(void* Obj)
	{
		((UDBDPawnSensingComponent*)Obj)->bSenseEverywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_bSenseEverywhere = { "bSenseEverywhere", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDPawnSensingComponent), &Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_bSenseEverywhere_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_bSenseEverywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_bSenseEverywhere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDPawnSensingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_PartiallyHiddenSensingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPawnSensingComponent_Statics::NewProp_bSenseEverywhere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDPawnSensingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDPawnSensingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDPawnSensingComponent_Statics::ClassParams = {
		&UDBDPawnSensingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDPawnSensingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPawnSensingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDPawnSensingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPawnSensingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDPawnSensingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDPawnSensingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDPawnSensingComponent, 1401912197);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDPawnSensingComponent>()
	{
		return UDBDPawnSensingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDPawnSensingComponent(Z_Construct_UClass_UDBDPawnSensingComponent, &UDBDPawnSensingComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDPawnSensingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDPawnSensingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
