// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlockElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockElement() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockElement_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockElement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBlockElement::StaticRegisterNativesUBlockElement()
	{
	}
	UClass* Z_Construct_UClass_UBlockElement_NoRegister()
	{
		return UBlockElement::StaticClass();
	}
	struct Z_Construct_UClass_UBlockElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__affectedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__affectedPlayers;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__affectedPlayers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__source_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockElement.h" },
		{ "ModuleRelativePath", "Public/BlockElement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockElement_Statics::NewProp__affectedPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockElement.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBlockElement_Statics::NewProp__affectedPlayers = { "_affectedPlayers", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockElement, _affectedPlayers), METADATA_PARAMS(Z_Construct_UClass_UBlockElement_Statics::NewProp__affectedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockElement_Statics::NewProp__affectedPlayers_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBlockElement_Statics::NewProp__affectedPlayers_ElementProp = { "_affectedPlayers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockElement_Statics::NewProp__source_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockElement.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBlockElement_Statics::NewProp__source = { "_source", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockElement, _source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlockElement_Statics::NewProp__source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockElement_Statics::NewProp__source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockElement_Statics::NewProp__affectedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockElement_Statics::NewProp__affectedPlayers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockElement_Statics::NewProp__source,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockElement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlockElement_Statics::ClassParams = {
		&UBlockElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlockElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlockElement_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlockElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlockElement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlockElement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlockElement, 2641108123);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlockElement>()
	{
		return UBlockElement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlockElement(Z_Construct_UClass_UBlockElement, &UBlockElement::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlockElement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockElement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
