// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/Addon_K24_04.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_K24_04() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UAddon_K24_04_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UAddon_K24_04();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UAddon_K24_04::StaticRegisterNativesUAddon_K24_04()
	{
	}
	UClass* Z_Construct_UClass_UAddon_K24_04_NoRegister()
	{
		return UAddon_K24_04::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_K24_04_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__effectTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_K24_04_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K24_04_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_K24_04.h" },
		{ "ModuleRelativePath", "Public/Addon_K24_04.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K24_04_Statics::NewProp_outlineColor_MetaData[] = {
		{ "Category", "Addon_K24_04" },
		{ "ModuleRelativePath", "Public/Addon_K24_04.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAddon_K24_04_Statics::NewProp_outlineColor = { "outlineColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_K24_04, outlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAddon_K24_04_Statics::NewProp_outlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K24_04_Statics::NewProp_outlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K24_04_Statics::NewProp__effectTime_MetaData[] = {
		{ "Category", "Addon_K24_04" },
		{ "ModuleRelativePath", "Public/Addon_K24_04.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_K24_04_Statics::NewProp__effectTime = { "_effectTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_K24_04, _effectTime), METADATA_PARAMS(Z_Construct_UClass_UAddon_K24_04_Statics::NewProp__effectTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K24_04_Statics::NewProp__effectTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_K24_04_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_K24_04_Statics::NewProp_outlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_K24_04_Statics::NewProp__effectTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_K24_04_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_K24_04>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_K24_04_Statics::ClassParams = {
		&UAddon_K24_04::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_K24_04_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K24_04_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_K24_04_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K24_04_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_K24_04()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_K24_04_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_K24_04, 1489641920);
	template<> THEK24_API UClass* StaticClass<UAddon_K24_04>()
	{
		return UAddon_K24_04::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_K24_04(Z_Construct_UClass_UAddon_K24_04, &UAddon_K24_04::StaticClass, TEXT("/Script/TheK24"), TEXT("UAddon_K24_04"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_K24_04);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
