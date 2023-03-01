// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathStrategySelector_Flee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathStrategySelector_Flee() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategySelector_Flee_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategySelector_Flee();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategySelector();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIFleePathStrategy();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_NoRegister();
// End Cross Module References
	void UPathStrategySelector_Flee::StaticRegisterNativesUPathStrategySelector_Flee()
	{
	}
	UClass* Z_Construct_UClass_UPathStrategySelector_Flee_NoRegister()
	{
		return UPathStrategySelector_Flee::StaticClass();
	}
	struct Z_Construct_UClass_UPathStrategySelector_Flee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeFleePathStrategiesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__activeFleePathStrategiesMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__activeFleePathStrategiesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__activeFleePathStrategiesMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeFleePathStrategiesMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleePathStrategies_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FleePathStrategies;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FleePathStrategies_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FleePathStrategies_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FleePathStrategies_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathStrategySelector_Flee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathStrategySelector,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategySelector_Flee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathStrategySelector_Flee.h" },
		{ "ModuleRelativePath", "Public/PathStrategySelector_Flee.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathStrategySelector_Flee.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap = { "_activeFleePathStrategiesMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategySelector_Flee, _activeFleePathStrategiesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_Key_KeyProp = { "_activeFleePathStrategiesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDBots_EAIFleePathStrategy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_ValueProp = { "_activeFleePathStrategiesMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPathStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_MetaData[] = {
		{ "Category", "PathStrategySelector_Flee" },
		{ "ModuleRelativePath", "Public/PathStrategySelector_Flee.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies = { "FleePathStrategies", nullptr, (EPropertyFlags)0x0010000000010009, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathStrategySelector_Flee, FleePathStrategies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_Key_KeyProp = { "FleePathStrategies_Key", nullptr, (EPropertyFlags)0x0000000000000009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDBots_EAIFleePathStrategy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_ValueProp = { "FleePathStrategies", nullptr, (EPropertyFlags)0x0000000000000009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPathStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathStrategySelector_Flee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp__activeFleePathStrategiesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathStrategySelector_Flee_Statics::NewProp_FleePathStrategies_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathStrategySelector_Flee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathStrategySelector_Flee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathStrategySelector_Flee_Statics::ClassParams = {
		&UPathStrategySelector_Flee::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathStrategySelector_Flee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Flee_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPathStrategySelector_Flee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategySelector_Flee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathStrategySelector_Flee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathStrategySelector_Flee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathStrategySelector_Flee, 1122122220);
	template<> DBDBOTS_API UClass* StaticClass<UPathStrategySelector_Flee>()
	{
		return UPathStrategySelector_Flee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathStrategySelector_Flee(Z_Construct_UClass_UPathStrategySelector_Flee, &UPathStrategySelector_Flee::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathStrategySelector_Flee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathStrategySelector_Flee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
