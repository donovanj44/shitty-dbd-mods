// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDEasyAntiCheatLinux.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEasyAntiCheatLinux() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEasyAntiCheatLinux_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEasyAntiCheatLinux();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEasyAntiCheatEnable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDEasyAntiCheatLinux::StaticRegisterNativesUDBDEasyAntiCheatLinux()
	{
	}
	UClass* Z_Construct_UClass_UDBDEasyAntiCheatLinux_NoRegister()
	{
		return UDBDEasyAntiCheatLinux::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEasyAntiCheatLinux_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEasyAntiCheatLinux_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDEasyAntiCheatEnable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEasyAntiCheatLinux_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDEasyAntiCheatLinux.h" },
		{ "ModuleRelativePath", "Public/DBDEasyAntiCheatLinux.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEasyAntiCheatLinux_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEasyAntiCheatLinux>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEasyAntiCheatLinux_Statics::ClassParams = {
		&UDBDEasyAntiCheatLinux::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDEasyAntiCheatLinux_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEasyAntiCheatLinux_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEasyAntiCheatLinux()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEasyAntiCheatLinux_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEasyAntiCheatLinux, 625673466);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDEasyAntiCheatLinux>()
	{
		return UDBDEasyAntiCheatLinux::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEasyAntiCheatLinux(Z_Construct_UClass_UDBDEasyAntiCheatLinux, &UDBDEasyAntiCheatLinux::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDEasyAntiCheatLinux"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEasyAntiCheatLinux);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
