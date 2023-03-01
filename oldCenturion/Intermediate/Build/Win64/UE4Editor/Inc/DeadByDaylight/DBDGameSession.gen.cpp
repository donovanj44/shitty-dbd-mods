// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGameSession() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameSession_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ADBDGameSession::StaticRegisterNativesADBDGameSession()
	{
	}
	UClass* Z_Construct_UClass_ADBDGameSession_NoRegister()
	{
		return ADBDGameSession::StaticClass();
	}
	struct Z_Construct_UClass_ADBDGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameSession,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGameSession_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDGameSession.h" },
		{ "ModuleRelativePath", "Public/DBDGameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDGameSession_Statics::ClassParams = {
		&ADBDGameSession::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDGameSession, 2087559082);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDGameSession>()
	{
		return ADBDGameSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDGameSession(Z_Construct_UClass_ADBDGameSession, &ADBDGameSession::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
