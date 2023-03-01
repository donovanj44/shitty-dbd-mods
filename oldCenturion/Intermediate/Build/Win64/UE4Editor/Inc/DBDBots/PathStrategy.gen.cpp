// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathStrategy() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_ADBDAIBTController_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIPathValidatorInterface_NoRegister();
// End Cross Module References
	void UPathStrategy::StaticRegisterNativesUPathStrategy()
	{
	}
	UClass* Z_Construct_UClass_UPathStrategy_NoRegister()
	{
		return UPathStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UPathStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathBuilders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pathBuilders;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pathBuilders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNextBranchBuildDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartNextBranchBuildDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshPartialPathDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshPartialPathDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPathBuilders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultPathBuilders;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultPathBuilders_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathStrategy.h" },
		{ "ModuleRelativePath", "Public/PathStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_Statics::NewProp__pathBuilders_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathStrategy_Statics::NewProp__pathBuilders = { "_pathBuilders", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy, _pathBuilders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_Statics::NewProp__pathBuilders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_Statics::NewProp__pathBuilders_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategy_Statics::NewProp__pathBuilders_Inner = { "_pathBuilders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPathBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_Statics::NewProp__aiOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategy_Statics::NewProp__aiOwner = { "_aiOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy, _aiOwner), Z_Construct_UClass_ADBDAIBTController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_Statics::NewProp__aiOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_Statics::NewProp__aiOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_Statics::NewProp_StartNextBranchBuildDelay_MetaData[] = {
		{ "Category", "PathStrategy" },
		{ "ModuleRelativePath", "Public/PathStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathStrategy_Statics::NewProp_StartNextBranchBuildDelay = { "StartNextBranchBuildDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy, StartNextBranchBuildDelay), METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_Statics::NewProp_StartNextBranchBuildDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_Statics::NewProp_StartNextBranchBuildDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_Statics::NewProp_RefreshPartialPathDelay_MetaData[] = {
		{ "Category", "PathStrategy" },
		{ "ModuleRelativePath", "Public/PathStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathStrategy_Statics::NewProp_RefreshPartialPathDelay = { "RefreshPartialPathDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy, RefreshPartialPathDelay), METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_Statics::NewProp_RefreshPartialPathDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_Statics::NewProp_RefreshPartialPathDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_Statics::NewProp_DefaultPathBuilders_MetaData[] = {
		{ "Category", "PathStrategy" },
		{ "ModuleRelativePath", "Public/PathStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathStrategy_Statics::NewProp_DefaultPathBuilders = { "DefaultPathBuilders", nullptr, (EPropertyFlags)0x0010000000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategy, DefaultPathBuilders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_Statics::NewProp_DefaultPathBuilders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_Statics::NewProp_DefaultPathBuilders_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategy_Statics::NewProp_DefaultPathBuilders_Inner = { "DefaultPathBuilders", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPathBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_Statics::NewProp__pathBuilders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_Statics::NewProp__pathBuilders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_Statics::NewProp__aiOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_Statics::NewProp_StartNextBranchBuildDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_Statics::NewProp_RefreshPartialPathDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_Statics::NewProp_DefaultPathBuilders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategy_Statics::NewProp_DefaultPathBuilders_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPathStrategy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UPathStrategy, IAIDisplayDebugInterface), false },
			{ Z_Construct_UClass_UAIPathValidatorInterface_NoRegister, (int32)VTABLE_OFFSET(UPathStrategy, IAIPathValidatorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathStrategy_Statics::ClassParams = {
		&UPathStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathStrategy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathStrategy, 802491732);
	template<> DBDBOTS_API UClass* StaticClass<UPathStrategy>()
	{
		return UPathStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathStrategy(Z_Construct_UClass_UPathStrategy, &UPathStrategy::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
