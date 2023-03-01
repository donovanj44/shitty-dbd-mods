// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentTrailDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentTrailDetectorComponent() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailDetectorComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailDetectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailPoint_NoRegister();
// End Cross Module References
	void UTormentTrailDetectorComponent::StaticRegisterNativesUTormentTrailDetectorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTormentTrailDetectorComponent_NoRegister()
	{
		return UTormentTrailDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTormentTrailDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inTormentTrailLastingEffectTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inTormentTrailLastingEffectTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInTormentTrailEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isInTormentTrailEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInTormentTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isInTormentTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlappedTrailPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__overlappedTrailPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__overlappedTrailPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TormentTrailDetectorComponent.h" },
		{ "ModuleRelativePath", "Public/TormentTrailDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__inTormentTrailLastingEffectTime_MetaData[] = {
		{ "Category", "TormentTrailDetectorComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__inTormentTrailLastingEffectTime = { "_inTormentTrailLastingEffectTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailDetectorComponent, _inTormentTrailLastingEffectTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__inTormentTrailLastingEffectTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__inTormentTrailLastingEffectTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrailEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentTrailDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrailEffect = { "_isInTormentTrailEffect", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailDetectorComponent, _isInTormentTrailEffect), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrailEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrailEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrail_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentTrailDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrail = { "_isInTormentTrail", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailDetectorComponent, _isInTormentTrail), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__overlappedTrailPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentTrailDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__overlappedTrailPoints = { "_overlappedTrailPoints", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailDetectorComponent, _overlappedTrailPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__overlappedTrailPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__overlappedTrailPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__overlappedTrailPoints_Inner = { "_overlappedTrailPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATormentTrailPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__inTormentTrailLastingEffectTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrailEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__isInTormentTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__overlappedTrailPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::NewProp__overlappedTrailPoints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTormentTrailDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::ClassParams = {
		&UTormentTrailDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTormentTrailDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTormentTrailDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTormentTrailDetectorComponent, 2098740907);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTormentTrailDetectorComponent>()
	{
		return UTormentTrailDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTormentTrailDetectorComponent(Z_Construct_UClass_UTormentTrailDetectorComponent, &UTormentTrailDetectorComponent::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTormentTrailDetectorComponent"), false, nullptr, nullptr, nullptr);

	void UTormentTrailDetectorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isInTormentTrail(TEXT("_isInTormentTrail"));
		static const FName Name__isInTormentTrailEffect(TEXT("_isInTormentTrailEffect"));

		const bool bIsValid = true
			&& Name__isInTormentTrail == ClassReps[(int32)ENetFields_Private::_isInTormentTrail].Property->GetFName()
			&& Name__isInTormentTrailEffect == ClassReps[(int32)ENetFields_Private::_isInTormentTrailEffect].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTormentTrailDetectorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTormentTrailDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
