// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePlague/Public/PlagueSurvivorAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlagueSurvivorAnalyticsComponent() {}
// Cross Module References
	THEPLAGUE_API UClass* Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_NoRegister();
	THEPLAGUE_API UClass* Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ThePlague();
// End Cross Module References
	void UPlagueSurvivorAnalyticsComponent::StaticRegisterNativesUPlagueSurvivorAnalyticsComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_NoRegister()
	{
		return UPlagueSurvivorAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicatedRegularVomitHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__replicatedRegularVomitHits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ThePlague,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlagueSurvivorAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalyticsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::NewProp__replicatedRegularVomitHits_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::NewProp__replicatedRegularVomitHits = { "_replicatedRegularVomitHits", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlagueSurvivorAnalyticsComponent, _replicatedRegularVomitHits), METADATA_PARAMS(Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::NewProp__replicatedRegularVomitHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::NewProp__replicatedRegularVomitHits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::NewProp__replicatedRegularVomitHits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlagueSurvivorAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::ClassParams = {
		&UPlagueSurvivorAnalyticsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlagueSurvivorAnalyticsComponent, 825914844);
	template<> THEPLAGUE_API UClass* StaticClass<UPlagueSurvivorAnalyticsComponent>()
	{
		return UPlagueSurvivorAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlagueSurvivorAnalyticsComponent(Z_Construct_UClass_UPlagueSurvivorAnalyticsComponent, &UPlagueSurvivorAnalyticsComponent::StaticClass, TEXT("/Script/ThePlague"), TEXT("UPlagueSurvivorAnalyticsComponent"), false, nullptr, nullptr, nullptr);

	void UPlagueSurvivorAnalyticsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__replicatedRegularVomitHits(TEXT("_replicatedRegularVomitHits"));

		const bool bIsValid = true
			&& Name__replicatedRegularVomitHits == ClassReps[(int32)ENetFields_Private::_replicatedRegularVomitHits].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlagueSurvivorAnalyticsComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlagueSurvivorAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
