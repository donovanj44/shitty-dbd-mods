// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/DetectionFanComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectionFanComponent() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UDetectionFanComponent_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UDetectionFanComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	void UDetectionFanComponent::StaticRegisterNativesUDetectionFanComponent()
	{
	}
	UClass* Z_Construct_UClass_UDetectionFanComponent_NoRegister()
	{
		return UDetectionFanComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDetectionFanComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__meshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__collisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultRingRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__defaultRingRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfSpots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfSpots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originWorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__originWorldOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__angleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__angleRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetectionFanComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionFanComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DetectionFanComponent.h" },
		{ "ModuleRelativePath", "Public/DetectionFanComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__meshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DetectionFanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__meshComponent = { "_meshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionFanComponent, _meshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__meshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__collisionChannel_MetaData[] = {
		{ "Category", "DetectionFanComponent" },
		{ "ModuleRelativePath", "Public/DetectionFanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__collisionChannel = { "_collisionChannel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionFanComponent, _collisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__collisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__collisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__defaultRingRadius_MetaData[] = {
		{ "Category", "DetectionFanComponent" },
		{ "ModuleRelativePath", "Public/DetectionFanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__defaultRingRadius = { "_defaultRingRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionFanComponent, _defaultRingRadius), METADATA_PARAMS(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__defaultRingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__defaultRingRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__numberOfSpots_MetaData[] = {
		{ "Category", "DetectionFanComponent" },
		{ "ModuleRelativePath", "Public/DetectionFanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__numberOfSpots = { "_numberOfSpots", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionFanComponent, _numberOfSpots), METADATA_PARAMS(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__numberOfSpots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__numberOfSpots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__originWorldOffset_MetaData[] = {
		{ "Category", "DetectionFanComponent" },
		{ "ModuleRelativePath", "Public/DetectionFanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__originWorldOffset = { "_originWorldOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionFanComponent, _originWorldOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__originWorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__originWorldOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__angleRange_MetaData[] = {
		{ "Category", "DetectionFanComponent" },
		{ "ModuleRelativePath", "Public/DetectionFanComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__angleRange = { "_angleRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionFanComponent, _angleRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__angleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__angleRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetectionFanComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__meshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__collisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__defaultRingRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__numberOfSpots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__originWorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionFanComponent_Statics::NewProp__angleRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetectionFanComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectionFanComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetectionFanComponent_Statics::ClassParams = {
		&UDetectionFanComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDetectionFanComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionFanComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDetectionFanComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionFanComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetectionFanComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetectionFanComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetectionFanComponent, 447196212);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UDetectionFanComponent>()
	{
		return UDetectionFanComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetectionFanComponent(Z_Construct_UClass_UDetectionFanComponent, &UDetectionFanComponent::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UDetectionFanComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectionFanComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
