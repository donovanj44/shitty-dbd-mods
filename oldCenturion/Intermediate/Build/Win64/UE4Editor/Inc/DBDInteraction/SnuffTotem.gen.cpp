// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/SnuffTotem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnuffTotem() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_USnuffTotem_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_USnuffTotem();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
// End Cross Module References
	void USnuffTotem::StaticRegisterNativesUSnuffTotem()
	{
	}
	UClass* Z_Construct_UClass_USnuffTotem_NoRegister()
	{
		return USnuffTotem::StaticClass();
	}
	struct Z_Construct_UClass_USnuffTotem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slasherFacingTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__slasherFacingTolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnuffTotem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnuffTotem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SnuffTotem.h" },
		{ "ModuleRelativePath", "Public/SnuffTotem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnuffTotem_Statics::NewProp__slasherFacingTolerance_MetaData[] = {
		{ "Category", "SnuffTotem" },
		{ "ModuleRelativePath", "Public/SnuffTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnuffTotem_Statics::NewProp__slasherFacingTolerance = { "_slasherFacingTolerance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnuffTotem, _slasherFacingTolerance), METADATA_PARAMS(Z_Construct_UClass_USnuffTotem_Statics::NewProp__slasherFacingTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnuffTotem_Statics::NewProp__slasherFacingTolerance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnuffTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnuffTotem_Statics::NewProp__slasherFacingTolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnuffTotem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnuffTotem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USnuffTotem_Statics::ClassParams = {
		&USnuffTotem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnuffTotem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnuffTotem_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USnuffTotem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnuffTotem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnuffTotem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USnuffTotem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USnuffTotem, 2036643569);
	template<> DBDINTERACTION_API UClass* StaticClass<USnuffTotem>()
	{
		return USnuffTotem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USnuffTotem(Z_Construct_UClass_USnuffTotem, &USnuffTotem::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("USnuffTotem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnuffTotem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
