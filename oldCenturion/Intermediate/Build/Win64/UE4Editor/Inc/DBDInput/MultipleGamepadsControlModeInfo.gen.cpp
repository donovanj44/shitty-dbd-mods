// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/MultipleGamepadsControlModeInfo.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultipleGamepadsControlModeInfo() {}
// Cross Module References
	DBDINPUT_API UClass* Z_Construct_UClass_UMultipleGamepadsControlModeInfo_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UMultipleGamepadsControlModeInfo();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
// End Cross Module References
	void UMultipleGamepadsControlModeInfo::StaticRegisterNativesUMultipleGamepadsControlModeInfo()
	{
	}
	UClass* Z_Construct_UClass_UMultipleGamepadsControlModeInfo_NoRegister()
	{
		return UMultipleGamepadsControlModeInfo::StaticClass();
	}
	struct Z_Construct_UClass_UMultipleGamepadsControlModeInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultipleGamepadsControlModeInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipleGamepadsControlModeInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultipleGamepadsControlModeInfo.h" },
		{ "ModuleRelativePath", "Public/MultipleGamepadsControlModeInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultipleGamepadsControlModeInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultipleGamepadsControlModeInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultipleGamepadsControlModeInfo_Statics::ClassParams = {
		&UMultipleGamepadsControlModeInfo::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultipleGamepadsControlModeInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipleGamepadsControlModeInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultipleGamepadsControlModeInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultipleGamepadsControlModeInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultipleGamepadsControlModeInfo, 608278945);
	template<> DBDINPUT_API UClass* StaticClass<UMultipleGamepadsControlModeInfo>()
	{
		return UMultipleGamepadsControlModeInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultipleGamepadsControlModeInfo(Z_Construct_UClass_UMultipleGamepadsControlModeInfo, &UMultipleGamepadsControlModeInfo::StaticClass, TEXT("/Script/DBDInput"), TEXT("UMultipleGamepadsControlModeInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultipleGamepadsControlModeInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
