// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomizationDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationDescription() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizationDescription_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizationDescription();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedMeshPart();
// End Cross Module References
	void UCustomizationDescription::StaticRegisterNativesUCustomizationDescription()
	{
	}
	UClass* Z_Construct_UClass_UCustomizationDescription_NoRegister()
	{
		return UCustomizationDescription::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizationDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizationDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationDescription_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomizationDescription.h" },
		{ "ModuleRelativePath", "Public/CustomizationDescription.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationDescription_Statics::NewProp_Parts_MetaData[] = {
		{ "Category", "CustomizationDescription" },
		{ "ModuleRelativePath", "Public/CustomizationDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizationDescription_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationDescription, Parts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizationDescription_Statics::NewProp_Parts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationDescription_Statics::NewProp_Parts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizationDescription_Statics::NewProp_Parts_Inner = { "Parts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomizedMeshPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizationDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationDescription_Statics::NewProp_Parts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationDescription_Statics::NewProp_Parts_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizationDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizationDescription>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizationDescription_Statics::ClassParams = {
		&UCustomizationDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizationDescription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationDescription_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizationDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizationDescription()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizationDescription_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizationDescription, 977265145);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCustomizationDescription>()
	{
		return UCustomizationDescription::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizationDescription(Z_Construct_UClass_UCustomizationDescription, &UCustomizationDescription::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCustomizationDescription"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizationDescription);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
