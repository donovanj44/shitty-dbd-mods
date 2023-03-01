// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ParticleSystemDistanceFaderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemDistanceFaderComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UParticleSystemDistanceFaderComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UParticleSystemDistanceFaderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void UParticleSystemDistanceFaderComponent::StaticRegisterNativesUParticleSystemDistanceFaderComponent()
	{
	}
	UClass* Z_Construct_UClass_UParticleSystemDistanceFaderComponent_NoRegister()
	{
		return UParticleSystemDistanceFaderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OpacityParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ParticleSystemDistanceFaderComponent.h" },
		{ "ModuleRelativePath", "Public/ParticleSystemDistanceFaderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_EndFadeDistance_MetaData[] = {
		{ "Category", "ParticleSystemDistanceFaderComponent" },
		{ "ModuleRelativePath", "Public/ParticleSystemDistanceFaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_EndFadeDistance = { "EndFadeDistance", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystemDistanceFaderComponent, EndFadeDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_EndFadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_EndFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_StartFadeDistance_MetaData[] = {
		{ "Category", "ParticleSystemDistanceFaderComponent" },
		{ "ModuleRelativePath", "Public/ParticleSystemDistanceFaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_StartFadeDistance = { "StartFadeDistance", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystemDistanceFaderComponent, StartFadeDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_StartFadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_StartFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_OpacityParameterName_MetaData[] = {
		{ "Category", "ParticleSystemDistanceFaderComponent" },
		{ "ModuleRelativePath", "Public/ParticleSystemDistanceFaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_OpacityParameterName = { "OpacityParameterName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystemDistanceFaderComponent, OpacityParameterName), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_OpacityParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_OpacityParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "ParticleSystemDistanceFaderComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParticleSystemDistanceFaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystemDistanceFaderComponent, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_ParticleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_ParticleSystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_EndFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_StartFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_OpacityParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::NewProp_ParticleSystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemDistanceFaderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::ClassParams = {
		&UParticleSystemDistanceFaderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystemDistanceFaderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleSystemDistanceFaderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleSystemDistanceFaderComponent, 2006528350);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UParticleSystemDistanceFaderComponent>()
	{
		return UParticleSystemDistanceFaderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleSystemDistanceFaderComponent(Z_Construct_UClass_UParticleSystemDistanceFaderComponent, &UParticleSystemDistanceFaderComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UParticleSystemDistanceFaderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemDistanceFaderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
