// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "S3Command/Public/AccessKeys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccessKeys() {}
// Cross Module References
	S3COMMAND_API UClass* Z_Construct_UClass_UAccessKeys_NoRegister();
	S3COMMAND_API UClass* Z_Construct_UClass_UAccessKeys();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_S3Command();
	S3COMMAND_API UScriptStruct* Z_Construct_UScriptStruct_FAccessKey();
// End Cross Module References
	void UAccessKeys::StaticRegisterNativesUAccessKeys()
	{
	}
	UClass* Z_Construct_UClass_UAccessKeys_NoRegister()
	{
		return UAccessKeys::StaticClass();
	}
	struct Z_Construct_UClass_UAccessKeys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AccessKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccessKeys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccessKeys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_S3Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccessKeys_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AccessKeys.h" },
		{ "ModuleRelativePath", "Public/AccessKeys.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccessKeys_Statics::NewProp_AccessKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/AccessKeys.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAccessKeys_Statics::NewProp_AccessKeys = { "AccessKeys", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAccessKeys, AccessKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAccessKeys_Statics::NewProp_AccessKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAccessKeys_Statics::NewProp_AccessKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAccessKeys_Statics::NewProp_AccessKeys_Inner = { "AccessKeys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccessKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAccessKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAccessKeys_Statics::NewProp_AccessKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAccessKeys_Statics::NewProp_AccessKeys_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccessKeys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccessKeys>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccessKeys_Statics::ClassParams = {
		&UAccessKeys::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAccessKeys_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAccessKeys_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAccessKeys_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccessKeys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccessKeys()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccessKeys_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccessKeys, 1560420595);
	template<> S3COMMAND_API UClass* StaticClass<UAccessKeys>()
	{
		return UAccessKeys::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccessKeys(Z_Construct_UClass_UAccessKeys, &UAccessKeys::StaticClass, TEXT("/Script/S3Command"), TEXT("UAccessKeys"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccessKeys);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
