// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Highlightable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighlightable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHighlightable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHighlightable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UHighlightable::StaticRegisterNativesUHighlightable()
	{
	}
	UClass* Z_Construct_UClass_UHighlightable_NoRegister()
	{
		return UHighlightable::StaticClass();
	}
	struct Z_Construct_UClass_UHighlightable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighlightable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Highlightable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighlightable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHighlightable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighlightable_Statics::ClassParams = {
		&UHighlightable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHighlightable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighlightable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighlightable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighlightable, 1073521546);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHighlightable>()
	{
		return UHighlightable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighlightable(Z_Construct_UClass_UHighlightable, &UHighlightable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHighlightable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
