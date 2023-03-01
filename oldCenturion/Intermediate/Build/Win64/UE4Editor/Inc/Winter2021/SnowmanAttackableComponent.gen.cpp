// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/SnowmanAttackableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowmanAttackableComponent() {}
// Cross Module References
	WINTER2021_API UClass* Z_Construct_UClass_USnowmanAttackableComponent_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_USnowmanAttackableComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAttackableComponent();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USnowmanAttackableComponent::StaticRegisterNativesUSnowmanAttackableComponent()
	{
	}
	UClass* Z_Construct_UClass_USnowmanAttackableComponent_NoRegister()
	{
		return USnowmanAttackableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USnowmanAttackableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerProjectilesThatCanDamageSnowman_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__killerProjectilesThatCanDamageSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnowmanAttackableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttackableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAttackableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SnowmanAttackableComponent.h" },
		{ "ModuleRelativePath", "Public/SnowmanAttackableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanAttackableComponent_Statics::NewProp__killerProjectilesThatCanDamageSnowman_MetaData[] = {
		{ "Category", "SnowmanAttackableComponent" },
		{ "ModuleRelativePath", "Public/SnowmanAttackableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanAttackableComponent_Statics::NewProp__killerProjectilesThatCanDamageSnowman = { "_killerProjectilesThatCanDamageSnowman", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanAttackableComponent, _killerProjectilesThatCanDamageSnowman), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USnowmanAttackableComponent_Statics::NewProp__killerProjectilesThatCanDamageSnowman_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAttackableComponent_Statics::NewProp__killerProjectilesThatCanDamageSnowman_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnowmanAttackableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanAttackableComponent_Statics::NewProp__killerProjectilesThatCanDamageSnowman,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnowmanAttackableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnowmanAttackableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USnowmanAttackableComponent_Statics::ClassParams = {
		&USnowmanAttackableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnowmanAttackableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAttackableComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USnowmanAttackableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanAttackableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnowmanAttackableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USnowmanAttackableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USnowmanAttackableComponent, 2269115516);
	template<> WINTER2021_API UClass* StaticClass<USnowmanAttackableComponent>()
	{
		return USnowmanAttackableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USnowmanAttackableComponent(Z_Construct_UClass_USnowmanAttackableComponent, &USnowmanAttackableComponent::StaticClass, TEXT("/Script/Winter2021"), TEXT("USnowmanAttackableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnowmanAttackableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
