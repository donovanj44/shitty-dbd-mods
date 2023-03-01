// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArmIKSensorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmIKSensorComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArmIKSensorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArmIKSensorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EArm();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArmIKSensorDatum();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void UArmIKSensorComponent::StaticRegisterNativesUArmIKSensorComponent()
	{
	}
	UClass* Z_Construct_UClass_UArmIKSensorComponent_NoRegister()
	{
		return UArmIKSensorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArmIKSensorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__traceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__traceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__capsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__capsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__capsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__capsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__arms_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__arms;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__arms_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__arms_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__arms_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArmIKSensorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSensorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmIKSensorComponent.h" },
		{ "ModuleRelativePath", "Public/ArmIKSensorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__owningCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArmIKSensorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__owningCamera = { "_owningCamera", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSensorComponent, _owningCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__owningCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__owningCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__traceLength_MetaData[] = {
		{ "Category", "ArmIKSensorComponent" },
		{ "ModuleRelativePath", "Public/ArmIKSensorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__traceLength = { "_traceLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSensorComponent, _traceLength), METADATA_PARAMS(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__traceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__traceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleHalfHeight_MetaData[] = {
		{ "Category", "ArmIKSensorComponent" },
		{ "ModuleRelativePath", "Public/ArmIKSensorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleHalfHeight = { "_capsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSensorComponent, _capsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleRadius_MetaData[] = {
		{ "Category", "ArmIKSensorComponent" },
		{ "ModuleRelativePath", "Public/ArmIKSensorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleRadius = { "_capsuleRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSensorComponent, _capsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_MetaData[] = {
		{ "Category", "ArmIKSensorComponent" },
		{ "ModuleRelativePath", "Public/ArmIKSensorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms = { "_arms", nullptr, (EPropertyFlags)0x0020080000000041, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSensorComponent, _arms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_Key_KeyProp = { "_arms_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EArm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_ValueProp = { "_arms", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FArmIKSensorDatum, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArmIKSensorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__mesh = { "_mesh", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmIKSensorComponent, _mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArmIKSensorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__owningCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__traceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__capsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__arms_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmIKSensorComponent_Statics::NewProp__mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArmIKSensorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArmIKSensorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArmIKSensorComponent_Statics::ClassParams = {
		&UArmIKSensorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArmIKSensorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSensorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArmIKSensorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArmIKSensorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArmIKSensorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArmIKSensorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArmIKSensorComponent, 2989639882);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArmIKSensorComponent>()
	{
		return UArmIKSensorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArmIKSensorComponent(Z_Construct_UClass_UArmIKSensorComponent, &UArmIKSensorComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArmIKSensorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArmIKSensorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
