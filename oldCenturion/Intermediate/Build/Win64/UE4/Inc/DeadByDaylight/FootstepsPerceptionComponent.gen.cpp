// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FootstepsPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepsPerceptionComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFootstepsPerceptionComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFootstepsPerceptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UFootstepsPerceptionComponent::StaticRegisterNativesUFootstepsPerceptionComponent()
	{
	}
	UClass* Z_Construct_UClass_UFootstepsPerceptionComponent_NoRegister()
	{
		return UFootstepsPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepsPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disallowFootstepsSeenPerkFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__disallowFootstepsSeenPerkFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__disallowFootstepsSeenPerkFlags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowFootstepsSeenPerkFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__allowFootstepsSeenPerkFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__allowFootstepsSeenPerkFlags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FootstepsPerceptionComponent.h" },
		{ "ModuleRelativePath", "Public/FootstepsPerceptionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__disallowFootstepsSeenPerkFlags_MetaData[] = {
		{ "Category", "FootstepsPerceptionComponent" },
		{ "ModuleRelativePath", "Public/FootstepsPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__disallowFootstepsSeenPerkFlags = { "_disallowFootstepsSeenPerkFlags", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsPerceptionComponent, _disallowFootstepsSeenPerkFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__disallowFootstepsSeenPerkFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__disallowFootstepsSeenPerkFlags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__disallowFootstepsSeenPerkFlags_Inner = { "_disallowFootstepsSeenPerkFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__allowFootstepsSeenPerkFlags_MetaData[] = {
		{ "Category", "FootstepsPerceptionComponent" },
		{ "ModuleRelativePath", "Public/FootstepsPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__allowFootstepsSeenPerkFlags = { "_allowFootstepsSeenPerkFlags", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsPerceptionComponent, _allowFootstepsSeenPerkFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__allowFootstepsSeenPerkFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__allowFootstepsSeenPerkFlags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__allowFootstepsSeenPerkFlags_Inner = { "_allowFootstepsSeenPerkFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__disallowFootstepsSeenPerkFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__disallowFootstepsSeenPerkFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__allowFootstepsSeenPerkFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::NewProp__allowFootstepsSeenPerkFlags_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepsPerceptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::ClassParams = {
		&UFootstepsPerceptionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstepsPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstepsPerceptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstepsPerceptionComponent, 129813187);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFootstepsPerceptionComponent>()
	{
		return UFootstepsPerceptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstepsPerceptionComponent(Z_Construct_UClass_UFootstepsPerceptionComponent, &UFootstepsPerceptionComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFootstepsPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepsPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
