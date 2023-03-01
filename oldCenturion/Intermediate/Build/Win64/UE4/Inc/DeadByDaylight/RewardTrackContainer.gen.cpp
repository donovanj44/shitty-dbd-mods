// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RewardTrackContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardTrackContainer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URewardTrackContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URewardTrackContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void URewardTrackContainer::StaticRegisterNativesURewardTrackContainer()
	{
	}
	UClass* Z_Construct_UClass_URewardTrackContainer_NoRegister()
	{
		return URewardTrackContainer::StaticClass();
	}
	struct Z_Construct_UClass_URewardTrackContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URewardTrackContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewardTrackContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RewardTrackContainer.h" },
		{ "ModuleRelativePath", "Public/RewardTrackContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URewardTrackContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URewardTrackContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URewardTrackContainer_Statics::ClassParams = {
		&URewardTrackContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URewardTrackContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URewardTrackContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URewardTrackContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URewardTrackContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URewardTrackContainer, 1739086236);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URewardTrackContainer>()
	{
		return URewardTrackContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URewardTrackContainer(Z_Construct_UClass_URewardTrackContainer, &URewardTrackContainer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URewardTrackContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URewardTrackContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
