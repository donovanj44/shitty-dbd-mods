// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/CharacterPositionRecorderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPositionRecorderComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterPositionRecorderComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterPositionRecorderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void UCharacterPositionRecorderComponent::StaticRegisterNativesUCharacterPositionRecorderComponent()
	{
	}
	UClass* Z_Construct_UClass_UCharacterPositionRecorderComponent_NoRegister()
	{
		return UCharacterPositionRecorderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cacheTimespan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cacheTimespan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterPositionRecorderComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterPositionRecorderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::NewProp__cacheTimespan_MetaData[] = {
		{ "Category", "CharacterPositionRecorderComponent" },
		{ "ModuleRelativePath", "Public/CharacterPositionRecorderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::NewProp__cacheTimespan = { "_cacheTimespan", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterPositionRecorderComponent, _cacheTimespan), METADATA_PARAMS(Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::NewProp__cacheTimespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::NewProp__cacheTimespan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::NewProp__cacheTimespan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterPositionRecorderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::ClassParams = {
		&UCharacterPositionRecorderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterPositionRecorderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterPositionRecorderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterPositionRecorderComponent, 3984002714);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UCharacterPositionRecorderComponent>()
	{
		return UCharacterPositionRecorderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterPositionRecorderComponent(Z_Construct_UClass_UCharacterPositionRecorderComponent, &UCharacterPositionRecorderComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UCharacterPositionRecorderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterPositionRecorderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
