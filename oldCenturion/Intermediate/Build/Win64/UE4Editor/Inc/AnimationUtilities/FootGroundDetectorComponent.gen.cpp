// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/FootGroundDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootGroundDetectorComponent() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UFootGroundDetectorComponent_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UFootGroundDetectorComponent();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UBaseGroundDetectorComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UFootGroundDetectorComponent::StaticRegisterNativesUFootGroundDetectorComponent()
	{
	}
	UClass* Z_Construct_UClass_UFootGroundDetectorComponent_NoRegister()
	{
		return UFootGroundDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFootGroundDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__movementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxWalkableSlopeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxWalkableSlopeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__traceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__traceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__footLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__footLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slopeStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__slopeStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hipTransformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__hipTransformName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootGroundDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseGroundDetectorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootGroundDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FootGroundDetectorComponent.h" },
		{ "ModuleRelativePath", "Public/FootGroundDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__movementComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FootGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__movementComp = { "_movementComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootGroundDetectorComponent, _movementComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__movementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__movementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__maxWalkableSlopeAngle_MetaData[] = {
		{ "Category", "FootGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/FootGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__maxWalkableSlopeAngle = { "_maxWalkableSlopeAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootGroundDetectorComponent, _maxWalkableSlopeAngle), METADATA_PARAMS(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__maxWalkableSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__maxWalkableSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__traceRadius_MetaData[] = {
		{ "Category", "FootGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/FootGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__traceRadius = { "_traceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootGroundDetectorComponent, _traceRadius), METADATA_PARAMS(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__traceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__traceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__footLength_MetaData[] = {
		{ "Category", "FootGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/FootGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__footLength = { "_footLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootGroundDetectorComponent, _footLength), METADATA_PARAMS(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__footLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__footLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__slopeStartOffset_MetaData[] = {
		{ "Category", "FootGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/FootGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__slopeStartOffset = { "_slopeStartOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootGroundDetectorComponent, _slopeStartOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__slopeStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__slopeStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__hipTransformName_MetaData[] = {
		{ "Category", "FootGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/FootGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__hipTransformName = { "_hipTransformName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootGroundDetectorComponent, _hipTransformName), METADATA_PARAMS(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__hipTransformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__hipTransformName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootGroundDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__movementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__maxWalkableSlopeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__traceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__footLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__slopeStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootGroundDetectorComponent_Statics::NewProp__hipTransformName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootGroundDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootGroundDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootGroundDetectorComponent_Statics::ClassParams = {
		&UFootGroundDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFootGroundDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootGroundDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootGroundDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootGroundDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootGroundDetectorComponent, 1030064913);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UFootGroundDetectorComponent>()
	{
		return UFootGroundDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootGroundDetectorComponent(Z_Construct_UClass_UFootGroundDetectorComponent, &UFootGroundDetectorComponent::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UFootGroundDetectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootGroundDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
