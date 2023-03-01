// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/CruelConfinement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCruelConfinement() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UCruelConfinement_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UCruelConfinement();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DBDCOMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FWindowBlockableList();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UCruelConfinement::StaticRegisterNativesUCruelConfinement()
	{
	}
	UClass* Z_Construct_UClass_UCruelConfinement_NoRegister()
	{
		return UCruelConfinement::StaticClass();
	}
	struct Z_Construct_UClass_UCruelConfinement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockableLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__blockableLists;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blockableLists_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blockableLists_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__windowAuraColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__windowAuraColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__blockDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectiveRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__effectiveRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCruelConfinement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCruelConfinement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CruelConfinement.h" },
		{ "ModuleRelativePath", "Public/CruelConfinement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists_MetaData[] = {
		{ "ModuleRelativePath", "Public/CruelConfinement.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists = { "_blockableLists", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCruelConfinement, _blockableLists), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists_Key_KeyProp = { "_blockableLists_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists_ValueProp = { "_blockableLists", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FWindowBlockableList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCruelConfinement_Statics::NewProp__windowAuraColor_MetaData[] = {
		{ "Category", "CruelConfinement" },
		{ "ModuleRelativePath", "Public/CruelConfinement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCruelConfinement_Statics::NewProp__windowAuraColor = { "_windowAuraColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCruelConfinement, _windowAuraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCruelConfinement_Statics::NewProp__windowAuraColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCruelConfinement_Statics::NewProp__windowAuraColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockDuration_MetaData[] = {
		{ "Category", "CruelConfinement" },
		{ "ModuleRelativePath", "Public/CruelConfinement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockDuration = { "_blockDuration", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_blockDuration, UCruelConfinement), STRUCT_OFFSET(UCruelConfinement, _blockDuration), METADATA_PARAMS(Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCruelConfinement_Statics::NewProp__effectiveRadius_MetaData[] = {
		{ "Category", "CruelConfinement" },
		{ "ModuleRelativePath", "Public/CruelConfinement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCruelConfinement_Statics::NewProp__effectiveRadius = { "_effectiveRadius", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_effectiveRadius, UCruelConfinement), STRUCT_OFFSET(UCruelConfinement, _effectiveRadius), METADATA_PARAMS(Z_Construct_UClass_UCruelConfinement_Statics::NewProp__effectiveRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCruelConfinement_Statics::NewProp__effectiveRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCruelConfinement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockableLists_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCruelConfinement_Statics::NewProp__windowAuraColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCruelConfinement_Statics::NewProp__blockDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCruelConfinement_Statics::NewProp__effectiveRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCruelConfinement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCruelConfinement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCruelConfinement_Statics::ClassParams = {
		&UCruelConfinement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCruelConfinement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCruelConfinement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCruelConfinement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCruelConfinement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCruelConfinement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCruelConfinement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCruelConfinement, 3958538088);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UCruelConfinement>()
	{
		return UCruelConfinement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCruelConfinement(Z_Construct_UClass_UCruelConfinement, &UCruelConfinement::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UCruelConfinement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCruelConfinement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
