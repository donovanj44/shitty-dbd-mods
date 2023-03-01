// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathStrategySelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathStrategySelector() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategySelector_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_ADBDAIBTController_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
// End Cross Module References
	void UPathStrategySelector::StaticRegisterNativesUPathStrategySelector()
	{
	}
	UClass* Z_Construct_UClass_UPathStrategySelector_NoRegister()
	{
		return UPathStrategySelector::StaticClass();
	}
	struct Z_Construct_UClass_UPathStrategySelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nextPathStrategies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__nextPathStrategies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__nextPathStrategies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activePathStrategies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__activePathStrategies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activePathStrategies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathStrategySelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategySelector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathStrategySelector.h" },
		{ "ModuleRelativePath", "Public/PathStrategySelector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__nextPathStrategies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathStrategySelector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__nextPathStrategies = { "_nextPathStrategies", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategySelector, _nextPathStrategies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__nextPathStrategies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__nextPathStrategies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__nextPathStrategies_Inner = { "_nextPathStrategies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPathStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__activePathStrategies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathStrategySelector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__activePathStrategies = { "_activePathStrategies", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategySelector, _activePathStrategies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__activePathStrategies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__activePathStrategies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__activePathStrategies_Inner = { "_activePathStrategies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPathStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__aiOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathStrategySelector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__aiOwner = { "_aiOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategySelector, _aiOwner), Z_Construct_UClass_ADBDAIBTController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__aiOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__aiOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathStrategySelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__nextPathStrategies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__nextPathStrategies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__activePathStrategies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__activePathStrategies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Statics::NewProp__aiOwner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPathStrategySelector_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UPathStrategySelector, IAIDisplayDebugInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathStrategySelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathStrategySelector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathStrategySelector_Statics::ClassParams = {
		&UPathStrategySelector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathStrategySelector_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPathStrategySelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathStrategySelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathStrategySelector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathStrategySelector, 4242974438);
	template<> DBDBOTS_API UClass* StaticClass<UPathStrategySelector>()
	{
		return UPathStrategySelector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathStrategySelector(Z_Construct_UClass_UPathStrategySelector, &UPathStrategySelector::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathStrategySelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathStrategySelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
