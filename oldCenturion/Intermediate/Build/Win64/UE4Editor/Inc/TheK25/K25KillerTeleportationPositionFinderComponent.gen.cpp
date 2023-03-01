// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25KillerTeleportationPositionFinderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25KillerTeleportationPositionFinderComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeDoor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25TeleportLocationStatus();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UK25KillerTeleportationPositionFinderComponent::StaticRegisterNativesUK25KillerTeleportationPositionFinderComponent()
	{
	}
	UClass* Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_NoRegister()
	{
		return UK25KillerTeleportationPositionFinderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapeDoors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__escapeDoors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__escapeDoors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bestTeleportLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__bestTeleportLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__teleportLocationStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__teleportLocationStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__teleportLocationStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBetweenFailsafeChecks_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeBetweenFailsafeChecks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistanceFromLamentConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxDistanceFromLamentConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDistanceFromLamentConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minDistanceFromLamentConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deltaHeightThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__deltaHeightThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerInRangeMaxRangePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__killerInRangeMaxRangePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerInRangeMinimumDistanceCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__killerInRangeMinimumDistanceCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rayCastLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rayCastLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rayCastZOffet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rayCastZOffet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K25KillerTeleportationPositionFinderComponent.h" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__escapeDoors_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__escapeDoors = { "_escapeDoors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _escapeDoors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__escapeDoors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__escapeDoors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__escapeDoors_Inner = { "_escapeDoors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEscapeDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__bestTeleportLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__bestTeleportLocation = { "_bestTeleportLocation", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _bestTeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__bestTeleportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__bestTeleportLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__teleportLocationStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__teleportLocationStatus = { "_teleportLocationStatus", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _teleportLocationStatus), Z_Construct_UEnum_TheK25_EK25TeleportLocationStatus, METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__teleportLocationStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__teleportLocationStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__teleportLocationStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__timeBetweenFailsafeChecks_MetaData[] = {
		{ "Category", "K25KillerTeleportationPositionFinderComponent" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__timeBetweenFailsafeChecks = { "_timeBetweenFailsafeChecks", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _timeBetweenFailsafeChecks), METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__timeBetweenFailsafeChecks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__timeBetweenFailsafeChecks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__maxDistanceFromLamentConfiguration_MetaData[] = {
		{ "Category", "K25KillerTeleportationPositionFinderComponent" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__maxDistanceFromLamentConfiguration = { "_maxDistanceFromLamentConfiguration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _maxDistanceFromLamentConfiguration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__maxDistanceFromLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__maxDistanceFromLamentConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__minDistanceFromLamentConfiguration_MetaData[] = {
		{ "Category", "K25KillerTeleportationPositionFinderComponent" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__minDistanceFromLamentConfiguration = { "_minDistanceFromLamentConfiguration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _minDistanceFromLamentConfiguration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__minDistanceFromLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__minDistanceFromLamentConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__deltaHeightThreshold_MetaData[] = {
		{ "Category", "K25KillerTeleportationPositionFinderComponent" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__deltaHeightThreshold = { "_deltaHeightThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _deltaHeightThreshold), METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__deltaHeightThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__deltaHeightThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMaxRangePercentage_MetaData[] = {
		{ "Category", "K25KillerTeleportationPositionFinderComponent" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMaxRangePercentage = { "_killerInRangeMaxRangePercentage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _killerInRangeMaxRangePercentage), METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMaxRangePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMaxRangePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMinimumDistanceCheck_MetaData[] = {
		{ "Category", "K25KillerTeleportationPositionFinderComponent" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMinimumDistanceCheck = { "_killerInRangeMinimumDistanceCheck", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _killerInRangeMinimumDistanceCheck), METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMinimumDistanceCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMinimumDistanceCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastLength_MetaData[] = {
		{ "Category", "K25KillerTeleportationPositionFinderComponent" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastLength = { "_rayCastLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _rayCastLength), METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastZOffet_MetaData[] = {
		{ "Category", "K25KillerTeleportationPositionFinderComponent" },
		{ "ModuleRelativePath", "Public/K25KillerTeleportationPositionFinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastZOffet = { "_rayCastZOffet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25KillerTeleportationPositionFinderComponent, _rayCastZOffet), METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastZOffet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastZOffet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__escapeDoors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__escapeDoors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__bestTeleportLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__teleportLocationStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__teleportLocationStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__timeBetweenFailsafeChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__maxDistanceFromLamentConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__minDistanceFromLamentConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__deltaHeightThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMaxRangePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__killerInRangeMinimumDistanceCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::NewProp__rayCastZOffet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25KillerTeleportationPositionFinderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::ClassParams = {
		&UK25KillerTeleportationPositionFinderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25KillerTeleportationPositionFinderComponent, 97461702);
	template<> THEK25_API UClass* StaticClass<UK25KillerTeleportationPositionFinderComponent>()
	{
		return UK25KillerTeleportationPositionFinderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25KillerTeleportationPositionFinderComponent(Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent, &UK25KillerTeleportationPositionFinderComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25KillerTeleportationPositionFinderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25KillerTeleportationPositionFinderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
