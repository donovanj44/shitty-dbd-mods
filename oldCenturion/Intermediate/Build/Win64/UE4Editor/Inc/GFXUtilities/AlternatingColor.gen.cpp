// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/AlternatingColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlternatingColor() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UAlternatingColor_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UAlternatingColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UAlternatingColor::StaticRegisterNativesUAlternatingColor()
	{
	}
	UClass* Z_Construct_UClass_UAlternatingColor_NoRegister()
	{
		return UAlternatingColor::StaticClass();
	}
	struct Z_Construct_UClass_UAlternatingColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorChangePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorChangePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlternatingColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlternatingColor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlternatingColor.h" },
		{ "ModuleRelativePath", "Public/AlternatingColor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlternatingColor_Statics::NewProp_ColorChangePeriod_MetaData[] = {
		{ "Category", "AlternatingColor" },
		{ "ModuleRelativePath", "Public/AlternatingColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlternatingColor_Statics::NewProp_ColorChangePeriod = { "ColorChangePeriod", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAlternatingColor, ColorChangePeriod), METADATA_PARAMS(Z_Construct_UClass_UAlternatingColor_Statics::NewProp_ColorChangePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlternatingColor_Statics::NewProp_ColorChangePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlternatingColor_Statics::NewProp_SecondColor_MetaData[] = {
		{ "Category", "AlternatingColor" },
		{ "ModuleRelativePath", "Public/AlternatingColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlternatingColor_Statics::NewProp_SecondColor = { "SecondColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAlternatingColor, SecondColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAlternatingColor_Statics::NewProp_SecondColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlternatingColor_Statics::NewProp_SecondColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlternatingColor_Statics::NewProp_FirstColor_MetaData[] = {
		{ "Category", "AlternatingColor" },
		{ "ModuleRelativePath", "Public/AlternatingColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlternatingColor_Statics::NewProp_FirstColor = { "FirstColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAlternatingColor, FirstColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAlternatingColor_Statics::NewProp_FirstColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlternatingColor_Statics::NewProp_FirstColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlternatingColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlternatingColor_Statics::NewProp_ColorChangePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlternatingColor_Statics::NewProp_SecondColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlternatingColor_Statics::NewProp_FirstColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlternatingColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlternatingColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAlternatingColor_Statics::ClassParams = {
		&UAlternatingColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlternatingColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlternatingColor_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAlternatingColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlternatingColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlternatingColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAlternatingColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAlternatingColor, 962176798);
	template<> GFXUTILITIES_API UClass* StaticClass<UAlternatingColor>()
	{
		return UAlternatingColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAlternatingColor(Z_Construct_UClass_UAlternatingColor, &UAlternatingColor::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UAlternatingColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlternatingColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
