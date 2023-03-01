// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StorefrontConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorefrontConfiguration() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStorefrontConfiguration_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStorefrontConfiguration();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EStorefrontState();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStorefrontStateData();
// End Cross Module References
	void UStorefrontConfiguration::StaticRegisterNativesUStorefrontConfiguration()
	{
	}
	UClass* Z_Construct_UClass_UStorefrontConfiguration_NoRegister()
	{
		return UStorefrontConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UStorefrontConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_States_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_States_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorefrontConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorefrontConfiguration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StorefrontConfiguration.h" },
		{ "ModuleRelativePath", "Public/StorefrontConfiguration.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_MetaData[] = {
		{ "Category", "StorefrontConfiguration" },
		{ "ModuleRelativePath", "Public/StorefrontConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStorefrontConfiguration, States), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_Key_KeyProp = { "States_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EStorefrontState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_ValueProp = { "States", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FStorefrontStateData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStorefrontConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorefrontConfiguration_Statics::NewProp_States_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorefrontConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStorefrontConfiguration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStorefrontConfiguration_Statics::ClassParams = {
		&UStorefrontConfiguration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStorefrontConfiguration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStorefrontConfiguration_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStorefrontConfiguration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorefrontConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorefrontConfiguration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStorefrontConfiguration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStorefrontConfiguration, 1341409701);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStorefrontConfiguration>()
	{
		return UStorefrontConfiguration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStorefrontConfiguration(Z_Construct_UClass_UStorefrontConfiguration, &UStorefrontConfiguration::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStorefrontConfiguration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorefrontConfiguration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
