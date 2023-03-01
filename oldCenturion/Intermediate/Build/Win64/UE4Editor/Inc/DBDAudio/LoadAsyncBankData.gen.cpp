// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAudio/Public/LoadAsyncBankData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadAsyncBankData() {}
// Cross Module References
	DBDAUDIO_API UClass* Z_Construct_UClass_ULoadAsyncBankData_NoRegister();
	DBDAUDIO_API UClass* Z_Construct_UClass_ULoadAsyncBankData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDAudio();
	DBDAUDIO_API UClass* Z_Construct_UClass_USoundBankLoader_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	void ULoadAsyncBankData::StaticRegisterNativesULoadAsyncBankData()
	{
	}
	UClass* Z_Construct_UClass_ULoadAsyncBankData_NoRegister()
	{
		return ULoadAsyncBankData::StaticClass();
	}
	struct Z_Construct_UClass_ULoadAsyncBankData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBankLoader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBankLoader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadAsyncBankData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadAsyncBankData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadAsyncBankData.h" },
		{ "ModuleRelativePath", "Public/LoadAsyncBankData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_SoundBankLoader_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadAsyncBankData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_SoundBankLoader = { "SoundBankLoader", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadAsyncBankData, SoundBankLoader), Z_Construct_UClass_USoundBankLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_SoundBankLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_SoundBankLoader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_Bank_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadAsyncBankData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadAsyncBankData, Bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_Bank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_Bank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadAsyncBankData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_SoundBankLoader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadAsyncBankData_Statics::NewProp_Bank,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadAsyncBankData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadAsyncBankData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadAsyncBankData_Statics::ClassParams = {
		&ULoadAsyncBankData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadAsyncBankData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadAsyncBankData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadAsyncBankData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadAsyncBankData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadAsyncBankData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadAsyncBankData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadAsyncBankData, 1434149874);
	template<> DBDAUDIO_API UClass* StaticClass<ULoadAsyncBankData>()
	{
		return ULoadAsyncBankData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadAsyncBankData(Z_Construct_UClass_ULoadAsyncBankData, &ULoadAsyncBankData::StaticClass, TEXT("/Script/DBDAudio"), TEXT("ULoadAsyncBankData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadAsyncBankData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
