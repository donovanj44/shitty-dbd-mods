// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/WallGrabInteractionDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallGrabInteractionDefinition() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UWallGrabInteractionDefinition_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UWallGrabInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEBLIGHT_API UClass* Z_Construct_UClass_ABlightPowerEstimatedCollisionIndicator_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateComponent_NoRegister();
// End Cross Module References
	void UWallGrabInteractionDefinition::StaticRegisterNativesUWallGrabInteractionDefinition()
	{
	}
	UClass* Z_Construct_UClass_UWallGrabInteractionDefinition_NoRegister()
	{
		return UWallGrabInteractionDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UWallGrabInteractionDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionIndicatorActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__collisionIndicatorActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerCollisionIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blightPowerCollisionIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wallDashAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__wallDashAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerStateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blightPowerStateComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "WallGrabInteractionDefinition.h" },
		{ "ModuleRelativePath", "Public/WallGrabInteractionDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__collisionIndicatorActorClass_MetaData[] = {
		{ "Category", "WallGrabInteractionDefinition" },
		{ "ModuleRelativePath", "Public/WallGrabInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__collisionIndicatorActorClass = { "_collisionIndicatorActorClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallGrabInteractionDefinition, _collisionIndicatorActorClass), Z_Construct_UClass_ABlightPowerEstimatedCollisionIndicator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__collisionIndicatorActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__collisionIndicatorActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerCollisionIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/WallGrabInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerCollisionIndicator = { "_blightPowerCollisionIndicator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallGrabInteractionDefinition, _blightPowerCollisionIndicator), Z_Construct_UClass_ABlightPowerEstimatedCollisionIndicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerCollisionIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerCollisionIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__wallDashAccelerationMultiplier_MetaData[] = {
		{ "Category", "WallGrabInteractionDefinition" },
		{ "ModuleRelativePath", "Public/WallGrabInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__wallDashAccelerationMultiplier = { "_wallDashAccelerationMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallGrabInteractionDefinition, _wallDashAccelerationMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__wallDashAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__wallDashAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerStateComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WallGrabInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerStateComponent = { "_blightPowerStateComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallGrabInteractionDefinition, _blightPowerStateComponent), Z_Construct_UClass_UBlightPowerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerStateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerStateComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__collisionIndicatorActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerCollisionIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__wallDashAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::NewProp__blightPowerStateComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWallGrabInteractionDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::ClassParams = {
		&UWallGrabInteractionDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWallGrabInteractionDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWallGrabInteractionDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWallGrabInteractionDefinition, 3776340261);
	template<> THEBLIGHT_API UClass* StaticClass<UWallGrabInteractionDefinition>()
	{
		return UWallGrabInteractionDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWallGrabInteractionDefinition(Z_Construct_UClass_UWallGrabInteractionDefinition, &UWallGrabInteractionDefinition::StaticClass, TEXT("/Script/TheBlight"), TEXT("UWallGrabInteractionDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWallGrabInteractionDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
