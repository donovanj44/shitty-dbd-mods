// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAggregateParticleSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAggregateParticleSystemComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAggregateParticleSystemComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAggregateParticleSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void UDBDAggregateParticleSystemComponent::StaticRegisterNativesUDBDAggregateParticleSystemComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDAggregateParticleSystemComponent_NoRegister()
	{
		return UDBDAggregateParticleSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingReset_MetaData[];
#endif
		static void NewProp_PendingReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PendingReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorComponentCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_LocatorComponentCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocatorComponentCache_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleSystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "DBDAggregateParticleSystemComponent.h" },
		{ "ModuleRelativePath", "Public/DBDAggregateParticleSystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_PendingReset_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAggregateParticleSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_PendingReset_SetBit(void* Obj)
	{
		((UDBDAggregateParticleSystemComponent*)Obj)->PendingReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_PendingReset = { "PendingReset", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDAggregateParticleSystemComponent), &Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_PendingReset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_PendingReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_PendingReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_LocatorComponentCache_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAggregateParticleSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_LocatorComponentCache = { "LocatorComponentCache", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAggregateParticleSystemComponent, LocatorComponentCache), METADATA_PARAMS(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_LocatorComponentCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_LocatorComponentCache_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_LocatorComponentCache_ElementProp = { "LocatorComponentCache", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_EndFadeDistance_MetaData[] = {
		{ "Category", "DBDAggregateParticleSystemComponent" },
		{ "ModuleRelativePath", "Public/DBDAggregateParticleSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_EndFadeDistance = { "EndFadeDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAggregateParticleSystemComponent, EndFadeDistance), METADATA_PARAMS(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_EndFadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_EndFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_CullAngle_MetaData[] = {
		{ "Category", "DBDAggregateParticleSystemComponent" },
		{ "ModuleRelativePath", "Public/DBDAggregateParticleSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_CullAngle = { "CullAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAggregateParticleSystemComponent, CullAngle), METADATA_PARAMS(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_CullAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_CullAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_PendingReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_LocatorComponentCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_LocatorComponentCache_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_EndFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::NewProp_CullAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAggregateParticleSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::ClassParams = {
		&UDBDAggregateParticleSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAggregateParticleSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAggregateParticleSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAggregateParticleSystemComponent, 4110883462);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAggregateParticleSystemComponent>()
	{
		return UDBDAggregateParticleSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAggregateParticleSystemComponent(Z_Construct_UClass_UDBDAggregateParticleSystemComponent, &UDBDAggregateParticleSystemComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAggregateParticleSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAggregateParticleSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
