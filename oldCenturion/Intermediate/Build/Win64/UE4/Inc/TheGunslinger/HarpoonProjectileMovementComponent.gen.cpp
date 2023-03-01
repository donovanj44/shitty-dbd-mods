// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HarpoonProjectileMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarpoonProjectileMovementComponent() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonProjectileMovementComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonProjectileMovementComponent();
	PROJECTILE_API UClass* Z_Construct_UClass_UPhysicsBasedProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UHarpoonProjectileMovementComponent::StaticRegisterNativesUHarpoonProjectileMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UHarpoonProjectileMovementComponent_NoRegister()
	{
		return UHarpoonProjectileMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTravelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxTravelDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicsBasedProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HarpoonProjectileMovementComponent.h" },
		{ "ModuleRelativePath", "Public/HarpoonProjectileMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::NewProp__maxTravelDistance_MetaData[] = {
		{ "Category", "HarpoonProjectileMovementComponent" },
		{ "ModuleRelativePath", "Public/HarpoonProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::NewProp__maxTravelDistance = { "_maxTravelDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonProjectileMovementComponent, _maxTravelDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::NewProp__maxTravelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::NewProp__maxTravelDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::NewProp__maxTravelDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHarpoonProjectileMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::ClassParams = {
		&UHarpoonProjectileMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHarpoonProjectileMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHarpoonProjectileMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHarpoonProjectileMovementComponent, 3417733261);
	template<> THEGUNSLINGER_API UClass* StaticClass<UHarpoonProjectileMovementComponent>()
	{
		return UHarpoonProjectileMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHarpoonProjectileMovementComponent(Z_Construct_UClass_UHarpoonProjectileMovementComponent, &UHarpoonProjectileMovementComponent::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UHarpoonProjectileMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHarpoonProjectileMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
