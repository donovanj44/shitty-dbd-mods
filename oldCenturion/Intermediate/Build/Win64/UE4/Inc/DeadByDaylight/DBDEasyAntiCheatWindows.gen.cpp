// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDEasyAntiCheatWindows.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEasyAntiCheatWindows() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEasyAntiCheatWindows_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEasyAntiCheatWindows();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEasyAntiCheatEnable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDEasyAntiCheatWindows::StaticRegisterNativesUDBDEasyAntiCheatWindows()
	{
	}
	UClass* Z_Construct_UClass_UDBDEasyAntiCheatWindows_NoRegister()
	{
		return UDBDEasyAntiCheatWindows::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEasyAntiCheatWindows_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEasyAntiCheatWindows_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDEasyAntiCheatEnable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEasyAntiCheatWindows_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDEasyAntiCheatWindows.h" },
		{ "ModuleRelativePath", "Public/DBDEasyAntiCheatWindows.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEasyAntiCheatWindows_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEasyAntiCheatWindows>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEasyAntiCheatWindows_Statics::ClassParams = {
		&UDBDEasyAntiCheatWindows::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDEasyAntiCheatWindows_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEasyAntiCheatWindows_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEasyAntiCheatWindows()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEasyAntiCheatWindows_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEasyAntiCheatWindows, 638796757);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDEasyAntiCheatWindows>()
	{
		return UDBDEasyAntiCheatWindows::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEasyAntiCheatWindows(Z_Construct_UClass_UDBDEasyAntiCheatWindows, &UDBDEasyAntiCheatWindows::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDEasyAntiCheatWindows"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEasyAntiCheatWindows);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
