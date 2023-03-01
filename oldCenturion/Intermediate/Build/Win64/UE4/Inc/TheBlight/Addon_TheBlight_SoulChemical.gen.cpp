// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/Addon_TheBlight_SoulChemical.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_TheBlight_SoulChemical() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UAddon_TheBlight_SoulChemical_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UAddon_TheBlight_SoulChemical();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
// End Cross Module References
	void UAddon_TheBlight_SoulChemical::StaticRegisterNativesUAddon_TheBlight_SoulChemical()
	{
	}
	UClass* Z_Construct_UClass_UAddon_TheBlight_SoulChemical_NoRegister()
	{
		return UAddon_TheBlight_SoulChemical::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerStateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blightPowerStateTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionSemantics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionSemantics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__skillCheckType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__skillCheckType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__triggerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__triggerDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_TheBlight_SoulChemical.h" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_SoulChemical.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__blightPowerStateTag_MetaData[] = {
		{ "Category", "Addon_TheBlight_SoulChemical" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_SoulChemical.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__blightPowerStateTag = { "_blightPowerStateTag", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TheBlight_SoulChemical, _blightPowerStateTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__blightPowerStateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__blightPowerStateTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__interactionSemantics_MetaData[] = {
		{ "Category", "Addon_TheBlight_SoulChemical" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_SoulChemical.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__interactionSemantics = { "_interactionSemantics", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TheBlight_SoulChemical, _interactionSemantics), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__interactionSemantics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__interactionSemantics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__skillCheckType_MetaData[] = {
		{ "Category", "Addon_TheBlight_SoulChemical" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_SoulChemical.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__skillCheckType = { "_skillCheckType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TheBlight_SoulChemical, _skillCheckType), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__skillCheckType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__skillCheckType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__skillCheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__triggerDistance_MetaData[] = {
		{ "Category", "Addon_TheBlight_SoulChemical" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_SoulChemical.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__triggerDistance = { "_triggerDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TheBlight_SoulChemical, _triggerDistance), METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__triggerDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__triggerDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__blightPowerStateTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__interactionSemantics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__skillCheckType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__skillCheckType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::NewProp__triggerDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_TheBlight_SoulChemical>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::ClassParams = {
		&UAddon_TheBlight_SoulChemical::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_TheBlight_SoulChemical()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_TheBlight_SoulChemical_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_TheBlight_SoulChemical, 4074759299);
	template<> THEBLIGHT_API UClass* StaticClass<UAddon_TheBlight_SoulChemical>()
	{
		return UAddon_TheBlight_SoulChemical::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_TheBlight_SoulChemical(Z_Construct_UClass_UAddon_TheBlight_SoulChemical, &UAddon_TheBlight_SoulChemical::StaticClass, TEXT("/Script/TheBlight"), TEXT("UAddon_TheBlight_SoulChemical"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_TheBlight_SoulChemical);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
