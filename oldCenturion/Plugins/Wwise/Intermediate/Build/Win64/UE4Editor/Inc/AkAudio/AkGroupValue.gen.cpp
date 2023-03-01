// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGroupValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGroupValue() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkGroupValue::StaticRegisterNativesUAkGroupValue()
	{
	}
	UClass* Z_Construct_UClass_UAkGroupValue_NoRegister()
	{
		return UAkGroupValue::StaticClass();
	}
	struct Z_Construct_UClass_UAkGroupValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupShortID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GroupShortID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGroupValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkGroupValue.h" },
		{ "ModuleRelativePath", "Public/AkGroupValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Public/AkGroupValue.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID = { "GroupShortID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGroupValue, GroupShortID), METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGroupValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGroupValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGroupValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkGroupValue_Statics::ClassParams = {
		&UAkGroupValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkGroupValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGroupValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkGroupValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGroupValue, 2375833832);
	template<> AKAUDIO_API UClass* StaticClass<UAkGroupValue>()
	{
		return UAkGroupValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGroupValue(Z_Construct_UClass_UAkGroupValue, &UAkGroupValue::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGroupValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGroupValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
