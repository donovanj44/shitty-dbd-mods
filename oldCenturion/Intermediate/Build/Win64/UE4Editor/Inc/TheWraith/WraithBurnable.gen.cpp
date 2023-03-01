// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheWraith/Public/WraithBurnable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWraithBurnable() {}
// Cross Module References
	THEWRAITH_API UClass* Z_Construct_UClass_UWraithBurnable_NoRegister();
	THEWRAITH_API UClass* Z_Construct_UClass_UWraithBurnable();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerLightBurnable();
	UPackage* Z_Construct_UPackage__Script_TheWraith();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UWraithBurnable::StaticRegisterNativesUWraithBurnable()
	{
	}
	UClass* Z_Construct_UClass_UWraithBurnable_NoRegister()
	{
		return UWraithBurnable::StaticClass();
	}
	struct Z_Construct_UClass_UWraithBurnable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlightEvasionScoreCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__flashlightEvasionScoreCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWraithBurnable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerLightBurnable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheWraith,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithBurnable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WraithBurnable.h" },
		{ "ModuleRelativePath", "Public/WraithBurnable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithBurnable_Statics::NewProp__flashlightEvasionScoreCooldown_MetaData[] = {
		{ "Category", "WraithBurnable" },
		{ "ModuleRelativePath", "Public/WraithBurnable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWraithBurnable_Statics::NewProp__flashlightEvasionScoreCooldown = { "_flashlightEvasionScoreCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWraithBurnable, _flashlightEvasionScoreCooldown), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UWraithBurnable_Statics::NewProp__flashlightEvasionScoreCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithBurnable_Statics::NewProp__flashlightEvasionScoreCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWraithBurnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithBurnable_Statics::NewProp__flashlightEvasionScoreCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWraithBurnable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWraithBurnable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWraithBurnable_Statics::ClassParams = {
		&UWraithBurnable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWraithBurnable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWraithBurnable_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWraithBurnable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithBurnable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWraithBurnable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWraithBurnable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWraithBurnable, 890836870);
	template<> THEWRAITH_API UClass* StaticClass<UWraithBurnable>()
	{
		return UWraithBurnable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWraithBurnable(Z_Construct_UClass_UWraithBurnable, &UWraithBurnable::StaticClass, TEXT("/Script/TheWraith"), TEXT("UWraithBurnable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWraithBurnable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
