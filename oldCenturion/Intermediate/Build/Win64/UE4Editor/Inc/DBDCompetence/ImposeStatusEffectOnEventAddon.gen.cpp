// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ImposeStatusEffectOnEventAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImposeStatusEffectOnEventAddon() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UImposeStatusEffectOnEventAddon_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UImposeStatusEffectOnEventAddon();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DBDCOMPETENCE_API UEnum* Z_Construct_UEnum_DBDCompetence_EImposeEffectTo();
// End Cross Module References
	void UImposeStatusEffectOnEventAddon::StaticRegisterNativesUImposeStatusEffectOnEventAddon()
	{
	}
	UClass* Z_Construct_UClass_UImposeStatusEffectOnEventAddon_NoRegister()
	{
		return UImposeStatusEffectOnEventAddon::StaticClass();
	}
	struct Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__imposeEffectTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__imposeEffectTo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__imposeEffectTo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__statusEffectTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImposeStatusEffectOnEventAddon.h" },
		{ "ModuleRelativePath", "Public/ImposeStatusEffectOnEventAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__imposeEffectTo_MetaData[] = {
		{ "Category", "ImposeStatusEffectOnEventAddon" },
		{ "ModuleRelativePath", "Public/ImposeStatusEffectOnEventAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__imposeEffectTo = { "_imposeEffectTo", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImposeStatusEffectOnEventAddon, _imposeEffectTo), Z_Construct_UEnum_DBDCompetence_EImposeEffectTo, METADATA_PARAMS(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__imposeEffectTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__imposeEffectTo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__imposeEffectTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectName_MetaData[] = {
		{ "Category", "ImposeStatusEffectOnEventAddon" },
		{ "ModuleRelativePath", "Public/ImposeStatusEffectOnEventAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectName = { "_statusEffectName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImposeStatusEffectOnEventAddon, _statusEffectName), METADATA_PARAMS(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectTime_MetaData[] = {
		{ "Category", "ImposeStatusEffectOnEventAddon" },
		{ "ModuleRelativePath", "Public/ImposeStatusEffectOnEventAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectTime = { "_statusEffectTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImposeStatusEffectOnEventAddon, _statusEffectTime), METADATA_PARAMS(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__imposeEffectTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__imposeEffectTo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::NewProp__statusEffectTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImposeStatusEffectOnEventAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::ClassParams = {
		&UImposeStatusEffectOnEventAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImposeStatusEffectOnEventAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImposeStatusEffectOnEventAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImposeStatusEffectOnEventAddon, 3563143057);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UImposeStatusEffectOnEventAddon>()
	{
		return UImposeStatusEffectOnEventAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImposeStatusEffectOnEventAddon(Z_Construct_UClass_UImposeStatusEffectOnEventAddon, &UImposeStatusEffectOnEventAddon::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UImposeStatusEffectOnEventAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImposeStatusEffectOnEventAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
