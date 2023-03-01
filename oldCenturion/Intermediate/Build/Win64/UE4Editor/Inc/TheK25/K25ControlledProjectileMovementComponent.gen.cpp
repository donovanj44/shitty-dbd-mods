// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ControlledProjectileMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ControlledProjectileMovementComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ControlledProjectileMovementComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ControlledProjectileMovementComponent();
	PROJECTILE_API UClass* Z_Construct_UClass_UPhysicsBasedProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UK25ControlledProjectileMovementComponent::StaticRegisterNativesUK25ControlledProjectileMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UK25ControlledProjectileMovementComponent_NoRegister()
	{
		return UK25ControlledProjectileMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totaldistanceTravelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__totaldistanceTravelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileSpeedIncreaseMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__projectileSpeedIncreaseMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumTravelDistanceStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumTravelDistanceStat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileSpeedIncreaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__projectileSpeedIncreaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseProjectileMaximumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseProjectileMaximumDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileBaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__projectileBaseSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicsBasedProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ControlledProjectileMovementComponent.h" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectileMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__totaldistanceTravelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ControlledProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__totaldistanceTravelled = { "_totaldistanceTravelled", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ControlledProjectileMovementComponent, _totaldistanceTravelled), METADATA_PARAMS(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__totaldistanceTravelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__totaldistanceTravelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseMultiplier_MetaData[] = {
		{ "Category", "K25ControlledProjectileMovementComponent" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseMultiplier = { "_projectileSpeedIncreaseMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ControlledProjectileMovementComponent, _projectileSpeedIncreaseMultiplier), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__maximumTravelDistanceStat_MetaData[] = {
		{ "Category", "K25ControlledProjectileMovementComponent" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__maximumTravelDistanceStat = { "_maximumTravelDistanceStat", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ControlledProjectileMovementComponent, _maximumTravelDistanceStat), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__maximumTravelDistanceStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__maximumTravelDistanceStat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseTime_MetaData[] = {
		{ "Category", "K25ControlledProjectileMovementComponent" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseTime = { "_projectileSpeedIncreaseTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ControlledProjectileMovementComponent, _projectileSpeedIncreaseTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__baseProjectileMaximumDistance_MetaData[] = {
		{ "Category", "K25ControlledProjectileMovementComponent" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__baseProjectileMaximumDistance = { "_baseProjectileMaximumDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ControlledProjectileMovementComponent, _baseProjectileMaximumDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__baseProjectileMaximumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__baseProjectileMaximumDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileBaseSpeed_MetaData[] = {
		{ "Category", "K25ControlledProjectileMovementComponent" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileBaseSpeed = { "_projectileBaseSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ControlledProjectileMovementComponent, _projectileBaseSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileBaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileBaseSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__totaldistanceTravelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__maximumTravelDistanceStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileSpeedIncreaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__baseProjectileMaximumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::NewProp__projectileBaseSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ControlledProjectileMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::ClassParams = {
		&UK25ControlledProjectileMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ControlledProjectileMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ControlledProjectileMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ControlledProjectileMovementComponent, 1072741037);
	template<> THEK25_API UClass* StaticClass<UK25ControlledProjectileMovementComponent>()
	{
		return UK25ControlledProjectileMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ControlledProjectileMovementComponent(Z_Construct_UClass_UK25ControlledProjectileMovementComponent, &UK25ControlledProjectileMovementComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ControlledProjectileMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ControlledProjectileMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
