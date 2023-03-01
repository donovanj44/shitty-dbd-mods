// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26CrowPlacementValidatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26CrowPlacementValidatorComponent() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26CrowPlacementValidatorComponent_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26CrowPlacementValidatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_NoRegister();
// End Cross Module References
	void UK26CrowPlacementValidatorComponent::StaticRegisterNativesUK26CrowPlacementValidatorComponent()
	{
	}
	UClass* Z_Construct_UClass_UK26CrowPlacementValidatorComponent_NoRegister()
	{
		return UK26CrowPlacementValidatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectPlacementValidationStrategyWithRestrictions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectPlacementValidationStrategyWithRestrictions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26CrowPlacementValidatorComponent.h" },
		{ "ModuleRelativePath", "Public/K26CrowPlacementValidatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::NewProp__objectPlacementValidationStrategyWithRestrictions_MetaData[] = {
		{ "Category", "K26CrowPlacementValidatorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26CrowPlacementValidatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::NewProp__objectPlacementValidationStrategyWithRestrictions = { "_objectPlacementValidationStrategyWithRestrictions", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26CrowPlacementValidatorComponent, _objectPlacementValidationStrategyWithRestrictions), Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::NewProp__objectPlacementValidationStrategyWithRestrictions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::NewProp__objectPlacementValidationStrategyWithRestrictions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::NewProp__objectPlacementValidationStrategyWithRestrictions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26CrowPlacementValidatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::ClassParams = {
		&UK26CrowPlacementValidatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26CrowPlacementValidatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26CrowPlacementValidatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26CrowPlacementValidatorComponent, 1784783395);
	template<> THEK26_API UClass* StaticClass<UK26CrowPlacementValidatorComponent>()
	{
		return UK26CrowPlacementValidatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26CrowPlacementValidatorComponent(Z_Construct_UClass_UK26CrowPlacementValidatorComponent, &UK26CrowPlacementValidatorComponent::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26CrowPlacementValidatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26CrowPlacementValidatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
