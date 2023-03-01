// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightAnimInstance() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightAnimInstance_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	THEBLIGHT_API UEnum* Z_Construct_UEnum_TheBlight_EWallGrabState();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateComponent_NoRegister();
// End Cross Module References
	void UBlightAnimInstance::StaticRegisterNativesUBlightAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UBlightAnimInstance_NoRegister()
	{
		return UBlightAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBlightAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lookAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lookAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateTimeRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__stateTimeRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__powerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__powerState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerStateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blightPowerStateComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BlightAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BlightAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__lookAngle_MetaData[] = {
		{ "Category", "BlightAnimInstance" },
		{ "ModuleRelativePath", "Public/BlightAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__lookAngle = { "_lookAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightAnimInstance, _lookAngle), METADATA_PARAMS(Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__lookAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__lookAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__stateTimeRemaining_MetaData[] = {
		{ "Category", "BlightAnimInstance" },
		{ "ModuleRelativePath", "Public/BlightAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__stateTimeRemaining = { "_stateTimeRemaining", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightAnimInstance, _stateTimeRemaining), METADATA_PARAMS(Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__stateTimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__stateTimeRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__powerState_MetaData[] = {
		{ "Category", "BlightAnimInstance" },
		{ "ModuleRelativePath", "Public/BlightAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__powerState = { "_powerState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightAnimInstance, _powerState), Z_Construct_UEnum_TheBlight_EWallGrabState, METADATA_PARAMS(Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__powerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__powerState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__powerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__blightPowerStateComponent_MetaData[] = {
		{ "Category", "BlightAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__blightPowerStateComponent = { "_blightPowerStateComponent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightAnimInstance, _blightPowerStateComponent), Z_Construct_UClass_UBlightPowerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__blightPowerStateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__blightPowerStateComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__lookAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__stateTimeRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__powerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__powerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightAnimInstance_Statics::NewProp__blightPowerStateComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightAnimInstance_Statics::ClassParams = {
		&UBlightAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlightAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightAnimInstance, 4056626940);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightAnimInstance>()
	{
		return UBlightAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightAnimInstance(Z_Construct_UClass_UBlightAnimInstance, &UBlightAnimInstance::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
