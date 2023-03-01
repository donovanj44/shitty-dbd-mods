// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerOverlapHISMComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerOverlapHISMComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerOverlapHISMComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerOverlapHISMComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UPlayerOverlapHISMComponent::StaticRegisterNativesUPlayerOverlapHISMComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerOverlapHISMComponent_NoRegister()
	{
		return UPlayerOverlapHISMComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerOverlapOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playerOverlapOverrides;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerOverlapOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerInfluenceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__playerInfluenceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerOverlapHISMComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerOverlapHISMComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerOverlapOverrides_MetaData[] = {
		{ "Category", "PlayerOverlapHISMComponent" },
		{ "ModuleRelativePath", "Public/PlayerOverlapHISMComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerOverlapOverrides = { "_playerOverlapOverrides", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlapHISMComponent, _playerOverlapOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerOverlapOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerOverlapOverrides_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerOverlapOverrides_Inner = { "_playerOverlapOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerInfluenceRadius_MetaData[] = {
		{ "Category", "PlayerOverlapHISMComponent" },
		{ "ModuleRelativePath", "Public/PlayerOverlapHISMComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerInfluenceRadius = { "_playerInfluenceRadius", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlapHISMComponent, _playerInfluenceRadius), METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerInfluenceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerInfluenceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerOverlapOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerOverlapOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::NewProp__playerInfluenceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerOverlapHISMComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::ClassParams = {
		&UPlayerOverlapHISMComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerOverlapHISMComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerOverlapHISMComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerOverlapHISMComponent, 2457617986);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPlayerOverlapHISMComponent>()
	{
		return UPlayerOverlapHISMComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerOverlapHISMComponent(Z_Construct_UClass_UPlayerOverlapHISMComponent, &UPlayerOverlapHISMComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPlayerOverlapHISMComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerOverlapHISMComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
