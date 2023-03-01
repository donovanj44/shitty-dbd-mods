// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BaseCameraTargetingStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCameraTargetingStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseCameraTargetingStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseCameraTargetingStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UViewRotationStrategy_NoRegister();
// End Cross Module References
	void UBaseCameraTargetingStrategy::StaticRegisterNativesUBaseCameraTargetingStrategy()
	{
	}
	UClass* Z_Construct_UClass_UBaseCameraTargetingStrategy_NoRegister()
	{
		return UBaseCameraTargetingStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interpolationSpeedOutsideFreeMoveZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__interpolationSpeedOutsideFreeMoveZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__interpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxInputRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxInputRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxFreeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxFreeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseCameraTargetingStrategy.h" },
		{ "ModuleRelativePath", "Public/BaseCameraTargetingStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__target_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseCameraTargetingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__target = { "_target", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCameraTargetingStrategy, _target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeedOutsideFreeMoveZone_MetaData[] = {
		{ "Category", "BaseCameraTargetingStrategy" },
		{ "ModuleRelativePath", "Public/BaseCameraTargetingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeedOutsideFreeMoveZone = { "_interpolationSpeedOutsideFreeMoveZone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCameraTargetingStrategy, _interpolationSpeedOutsideFreeMoveZone), METADATA_PARAMS(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeedOutsideFreeMoveZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeedOutsideFreeMoveZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeed_MetaData[] = {
		{ "Category", "BaseCameraTargetingStrategy" },
		{ "ModuleRelativePath", "Public/BaseCameraTargetingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeed = { "_interpolationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCameraTargetingStrategy, _interpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxInputRotation_MetaData[] = {
		{ "Category", "BaseCameraTargetingStrategy" },
		{ "ModuleRelativePath", "Public/BaseCameraTargetingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxInputRotation = { "_maxInputRotation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCameraTargetingStrategy, _maxInputRotation), METADATA_PARAMS(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxInputRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxInputRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxFreeAngle_MetaData[] = {
		{ "Category", "BaseCameraTargetingStrategy" },
		{ "ModuleRelativePath", "Public/BaseCameraTargetingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxFreeAngle = { "_maxFreeAngle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCameraTargetingStrategy, _maxFreeAngle), METADATA_PARAMS(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxFreeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxFreeAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeedOutsideFreeMoveZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__interpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxInputRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::NewProp__maxFreeAngle,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UViewRotationStrategy_NoRegister, (int32)VTABLE_OFFSET(UBaseCameraTargetingStrategy, IViewRotationStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCameraTargetingStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::ClassParams = {
		&UBaseCameraTargetingStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCameraTargetingStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseCameraTargetingStrategy, 3318197471);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBaseCameraTargetingStrategy>()
	{
		return UBaseCameraTargetingStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseCameraTargetingStrategy(Z_Construct_UClass_UBaseCameraTargetingStrategy, &UBaseCameraTargetingStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBaseCameraTargetingStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCameraTargetingStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
