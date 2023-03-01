// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/SetGroundPortalInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetGroundPortalInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_USetGroundPortalInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_USetGroundPortalInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADemogorgonPortal_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister();
// End Cross Module References
	void USetGroundPortalInteraction::StaticRegisterNativesUSetGroundPortalInteraction()
	{
	}
	UClass* Z_Construct_UClass_USetGroundPortalInteraction_NoRegister()
	{
		return USetGroundPortalInteraction::StaticClass();
	}
	struct Z_Construct_UClass_USetGroundPortalInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalClassToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__portalClassToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trapPlacerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trapPlacerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalPlacerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalPlacerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetGroundPortalInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGroundPortalInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SetGroundPortalInteraction.h" },
		{ "ModuleRelativePath", "Public/SetGroundPortalInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalClassToSpawn_MetaData[] = {
		{ "Category", "SetGroundPortalInteraction" },
		{ "ModuleRelativePath", "Public/SetGroundPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalClassToSpawn = { "_portalClassToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetGroundPortalInteraction, _portalClassToSpawn), Z_Construct_UClass_ADemogorgonPortal_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalClassToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__trapPlacerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SetGroundPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__trapPlacerComponent = { "_trapPlacerComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetGroundPortalInteraction, _trapPlacerComponent), Z_Construct_UClass_UObjectPlacerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__trapPlacerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__trapPlacerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalPlacerState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SetGroundPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalPlacerState = { "_portalPlacerState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetGroundPortalInteraction, _portalPlacerState), Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalPlacerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalPlacerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetGroundPortalInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalClassToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__trapPlacerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetGroundPortalInteraction_Statics::NewProp__portalPlacerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetGroundPortalInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetGroundPortalInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USetGroundPortalInteraction_Statics::ClassParams = {
		&USetGroundPortalInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USetGroundPortalInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USetGroundPortalInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USetGroundPortalInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetGroundPortalInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetGroundPortalInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USetGroundPortalInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USetGroundPortalInteraction, 821508710);
	template<> DBDINTERACTION_API UClass* StaticClass<USetGroundPortalInteraction>()
	{
		return USetGroundPortalInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USetGroundPortalInteraction(Z_Construct_UClass_USetGroundPortalInteraction, &USetGroundPortalInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("USetGroundPortalInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetGroundPortalInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
