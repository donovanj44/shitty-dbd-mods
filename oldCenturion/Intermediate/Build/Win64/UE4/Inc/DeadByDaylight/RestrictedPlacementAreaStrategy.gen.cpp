// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RestrictedPlacementAreaStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestrictedPlacementAreaStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URestrictedPlacementAreaStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URestrictedPlacementAreaStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void URestrictedPlacementAreaStrategy::StaticRegisterNativesURestrictedPlacementAreaStrategy()
	{
	}
	UClass* Z_Construct_UClass_URestrictedPlacementAreaStrategy_NoRegister()
	{
		return URestrictedPlacementAreaStrategy::StaticClass();
	}
	struct Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeightRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeightRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestrictedRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RestrictedPlacementAreaStrategy.h" },
		{ "ModuleRelativePath", "Public/RestrictedPlacementAreaStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_MaxHeightRestriction_MetaData[] = {
		{ "Category", "RestrictedPlacementAreaStrategy" },
		{ "ModuleRelativePath", "Public/RestrictedPlacementAreaStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_MaxHeightRestriction = { "MaxHeightRestriction", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URestrictedPlacementAreaStrategy, MaxHeightRestriction), METADATA_PARAMS(Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_MaxHeightRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_MaxHeightRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_RestrictedRadius_MetaData[] = {
		{ "Category", "RestrictedPlacementAreaStrategy" },
		{ "ModuleRelativePath", "Public/RestrictedPlacementAreaStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_RestrictedRadius = { "RestrictedRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URestrictedPlacementAreaStrategy, RestrictedRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_RestrictedRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_RestrictedRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_MaxHeightRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::NewProp_RestrictedRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestrictedPlacementAreaStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::ClassParams = {
		&URestrictedPlacementAreaStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URestrictedPlacementAreaStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URestrictedPlacementAreaStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URestrictedPlacementAreaStrategy, 1047307483);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URestrictedPlacementAreaStrategy>()
	{
		return URestrictedPlacementAreaStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URestrictedPlacementAreaStrategy(Z_Construct_UClass_URestrictedPlacementAreaStrategy, &URestrictedPlacementAreaStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URestrictedPlacementAreaStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URestrictedPlacementAreaStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
