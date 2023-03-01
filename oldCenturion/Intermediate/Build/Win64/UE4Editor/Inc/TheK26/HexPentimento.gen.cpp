// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/HexPentimento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexPentimento() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UHexPentimento_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UHexPentimento();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEK26_API UClass* Z_Construct_UClass_URekindleTotemInteraction_NoRegister();
// End Cross Module References
	void UHexPentimento::StaticRegisterNativesUHexPentimento()
	{
	}
	UClass* Z_Construct_UClass_UHexPentimento_NoRegister()
	{
		return UHexPentimento::StaticClass();
	}
	struct Z_Construct_UClass_UHexPentimento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockedTotems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__blockedTotems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blockedTotems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rekindleInteractionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__rekindleInteractionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__statusEffectNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectNames_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexPentimento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHexPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexPentimento_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HexPentimento.h" },
		{ "ModuleRelativePath", "Public/HexPentimento.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexPentimento_Statics::NewProp__blockedTotems_MetaData[] = {
		{ "ModuleRelativePath", "Public/HexPentimento.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHexPentimento_Statics::NewProp__blockedTotems = { "_blockedTotems", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexPentimento, _blockedTotems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHexPentimento_Statics::NewProp__blockedTotems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexPentimento_Statics::NewProp__blockedTotems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHexPentimento_Statics::NewProp__blockedTotems_Inner = { "_blockedTotems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexPentimento_Statics::NewProp__rekindleInteractionClass_MetaData[] = {
		{ "Category", "HexPentimento" },
		{ "ModuleRelativePath", "Public/HexPentimento.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHexPentimento_Statics::NewProp__rekindleInteractionClass = { "_rekindleInteractionClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexPentimento, _rekindleInteractionClass), Z_Construct_UClass_URekindleTotemInteraction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHexPentimento_Statics::NewProp__rekindleInteractionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexPentimento_Statics::NewProp__rekindleInteractionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexPentimento_Statics::NewProp__statusEffectNames_MetaData[] = {
		{ "Category", "HexPentimento" },
		{ "ModuleRelativePath", "Public/HexPentimento.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHexPentimento_Statics::NewProp__statusEffectNames = { "_statusEffectNames", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexPentimento, _statusEffectNames), METADATA_PARAMS(Z_Construct_UClass_UHexPentimento_Statics::NewProp__statusEffectNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexPentimento_Statics::NewProp__statusEffectNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHexPentimento_Statics::NewProp__statusEffectNames_ElementProp = { "_statusEffectNames", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexPentimento_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexPentimento_Statics::NewProp__blockedTotems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexPentimento_Statics::NewProp__blockedTotems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexPentimento_Statics::NewProp__rekindleInteractionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexPentimento_Statics::NewProp__statusEffectNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexPentimento_Statics::NewProp__statusEffectNames_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexPentimento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexPentimento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexPentimento_Statics::ClassParams = {
		&UHexPentimento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHexPentimento_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHexPentimento_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHexPentimento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexPentimento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexPentimento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexPentimento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexPentimento, 669484678);
	template<> THEK26_API UClass* StaticClass<UHexPentimento>()
	{
		return UHexPentimento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexPentimento(Z_Construct_UClass_UHexPentimento, &UHexPentimento::StaticClass, TEXT("/Script/TheK26"), TEXT("UHexPentimento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexPentimento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
