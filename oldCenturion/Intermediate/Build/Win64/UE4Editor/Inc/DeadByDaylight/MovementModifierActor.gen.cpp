// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MovementModifierActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementModifierActor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMovementModifierActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMovementModifierActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void AMovementModifierActor::StaticRegisterNativesAMovementModifierActor()
	{
	}
	UClass* Z_Construct_UClass_AMovementModifierActor_NoRegister()
	{
		return AMovementModifierActor::StaticClass();
	}
	struct Z_Construct_UClass_AMovementModifierActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovementModifierActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovementModifierActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovementModifierActor.h" },
		{ "ModuleRelativePath", "Public/MovementModifierActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovementModifierActor_Statics::NewProp_MaxSpeedMultiplier_MetaData[] = {
		{ "Category", "MovementModifierActor" },
		{ "ModuleRelativePath", "Public/MovementModifierActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementModifierActor_Statics::NewProp_MaxSpeedMultiplier = { "MaxSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovementModifierActor, MaxSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMovementModifierActor_Statics::NewProp_MaxSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovementModifierActor_Statics::NewProp_MaxSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovementModifierActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementModifierActor_Statics::NewProp_MaxSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovementModifierActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementModifierActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovementModifierActor_Statics::ClassParams = {
		&AMovementModifierActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovementModifierActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovementModifierActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovementModifierActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovementModifierActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovementModifierActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovementModifierActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovementModifierActor, 871715965);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AMovementModifierActor>()
	{
		return AMovementModifierActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovementModifierActor(Z_Construct_UClass_AMovementModifierActor, &AMovementModifierActor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AMovementModifierActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementModifierActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
