// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/SurvivorAimableArmSensor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorAimableArmSensor() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_USurvivorAimableArmSensor_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_USurvivorAimableArmSensor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArmIKSensorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
// End Cross Module References
	void USurvivorAimableArmSensor::StaticRegisterNativesUSurvivorAimableArmSensor()
	{
	}
	UClass* Z_Construct_UClass_USurvivorAimableArmSensor_NoRegister()
	{
		return USurvivorAimableArmSensor::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorAimableArmSensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimableCollectable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimableCollectable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorAimableArmSensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArmIKSensorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableArmSensor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorAimableArmSensor.h" },
		{ "ModuleRelativePath", "Public/SurvivorAimableArmSensor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurvivorAimableArmSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimable = { "_aimable", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAimableArmSensor, _aimable), Z_Construct_UClass_UAimableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimableCollectable_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorAimableArmSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimableCollectable = { "_aimableCollectable", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAimableArmSensor, _aimableCollectable), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimableCollectable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimableCollectable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorAimableArmSensor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimableArmSensor_Statics::NewProp__aimableCollectable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorAimableArmSensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorAimableArmSensor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorAimableArmSensor_Statics::ClassParams = {
		&USurvivorAimableArmSensor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USurvivorAimableArmSensor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableArmSensor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableArmSensor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableArmSensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorAimableArmSensor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorAimableArmSensor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorAimableArmSensor, 1442410441);
	template<> DBDANIMATION_API UClass* StaticClass<USurvivorAimableArmSensor>()
	{
		return USurvivorAimableArmSensor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorAimableArmSensor(Z_Construct_UClass_USurvivorAimableArmSensor, &USurvivorAimableArmSensor::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("USurvivorAimableArmSensor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorAimableArmSensor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
