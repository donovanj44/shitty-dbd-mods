// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDNavModifierComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDNavModifierComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNavModifierComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNavModifierComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDNavModifierComponent::StaticRegisterNativesUDBDNavModifierComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDNavModifierComponent_NoRegister()
	{
		return UDBDNavModifierComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDNavModifierComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelevantPassiveMode_MetaData[];
#endif
		static void NewProp_RelevantPassiveMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RelevantPassiveMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysTickToCheckTransform_MetaData[];
#endif
		static void NewProp_AlwaysTickToCheckTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysTickToCheckTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNavigationRelevant_MetaData[];
#endif
		static void NewProp_StartNavigationRelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartNavigationRelevant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateModifierInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateModifierInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceUseFailsafeExtent_MetaData[];
#endif
		static void NewProp_ForceUseFailsafeExtent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceUseFailsafeExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDNavModifierComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavModifierComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavModifierComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation" },
		{ "IncludePath", "DBDNavModifierComponent.h" },
		{ "ModuleRelativePath", "Public/DBDNavModifierComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_RelevantPassiveMode_MetaData[] = {
		{ "Category", "DBDNavModifierComponent" },
		{ "ModuleRelativePath", "Public/DBDNavModifierComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_RelevantPassiveMode_SetBit(void* Obj)
	{
		((UDBDNavModifierComponent*)Obj)->RelevantPassiveMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_RelevantPassiveMode = { "RelevantPassiveMode", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavModifierComponent), &Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_RelevantPassiveMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_RelevantPassiveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_RelevantPassiveMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_AlwaysTickToCheckTransform_MetaData[] = {
		{ "Category", "DBDNavModifierComponent" },
		{ "ModuleRelativePath", "Public/DBDNavModifierComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_AlwaysTickToCheckTransform_SetBit(void* Obj)
	{
		((UDBDNavModifierComponent*)Obj)->AlwaysTickToCheckTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_AlwaysTickToCheckTransform = { "AlwaysTickToCheckTransform", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavModifierComponent), &Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_AlwaysTickToCheckTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_AlwaysTickToCheckTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_AlwaysTickToCheckTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_StartNavigationRelevant_MetaData[] = {
		{ "Category", "DBDNavModifierComponent" },
		{ "ModuleRelativePath", "Public/DBDNavModifierComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_StartNavigationRelevant_SetBit(void* Obj)
	{
		((UDBDNavModifierComponent*)Obj)->StartNavigationRelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_StartNavigationRelevant = { "StartNavigationRelevant", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavModifierComponent), &Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_StartNavigationRelevant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_StartNavigationRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_StartNavigationRelevant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_UpdateModifierInterval_MetaData[] = {
		{ "Category", "DBDNavModifierComponent" },
		{ "ModuleRelativePath", "Public/DBDNavModifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_UpdateModifierInterval = { "UpdateModifierInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavModifierComponent, UpdateModifierInterval), METADATA_PARAMS(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_UpdateModifierInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_UpdateModifierInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_ForceUseFailsafeExtent_MetaData[] = {
		{ "Category", "DBDNavModifierComponent" },
		{ "ModuleRelativePath", "Public/DBDNavModifierComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_ForceUseFailsafeExtent_SetBit(void* Obj)
	{
		((UDBDNavModifierComponent*)Obj)->ForceUseFailsafeExtent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_ForceUseFailsafeExtent = { "ForceUseFailsafeExtent", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavModifierComponent), &Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_ForceUseFailsafeExtent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_ForceUseFailsafeExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_ForceUseFailsafeExtent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDNavModifierComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_RelevantPassiveMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_AlwaysTickToCheckTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_StartNavigationRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_UpdateModifierInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavModifierComponent_Statics::NewProp_ForceUseFailsafeExtent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDNavModifierComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDNavModifierComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDNavModifierComponent_Statics::ClassParams = {
		&UDBDNavModifierComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDNavModifierComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavModifierComponent_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDNavModifierComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavModifierComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDNavModifierComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDNavModifierComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDNavModifierComponent, 3759360660);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDNavModifierComponent>()
	{
		return UDBDNavModifierComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDNavModifierComponent(Z_Construct_UClass_UDBDNavModifierComponent, &UDBDNavModifierComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDNavModifierComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDNavModifierComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
