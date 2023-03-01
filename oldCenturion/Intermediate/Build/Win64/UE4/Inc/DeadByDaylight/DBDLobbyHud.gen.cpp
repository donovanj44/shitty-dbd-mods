// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDLobbyHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDLobbyHud() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDLobbyHud_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDLobbyHud();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseHud();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ADBDLobbyHud::StaticRegisterNativesADBDLobbyHud()
	{
	}
	UClass* Z_Construct_UClass_ADBDLobbyHud_NoRegister()
	{
		return ADBDLobbyHud::StaticClass();
	}
	struct Z_Construct_UClass_ADBDLobbyHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDLobbyHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBaseHud,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDLobbyHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DBDLobbyHud.h" },
		{ "ModuleRelativePath", "Public/DBDLobbyHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDLobbyHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDLobbyHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDLobbyHud_Statics::ClassParams = {
		&ADBDLobbyHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDLobbyHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDLobbyHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDLobbyHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDLobbyHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDLobbyHud, 2656307428);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDLobbyHud>()
	{
		return ADBDLobbyHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDLobbyHud(Z_Construct_UClass_ADBDLobbyHud, &ADBDLobbyHud::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDLobbyHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDLobbyHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
