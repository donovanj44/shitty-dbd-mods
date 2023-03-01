// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DeadByDaylightGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadByDaylightGameMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADeadByDaylightGameMode_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADeadByDaylightGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ADeadByDaylightGameMode::StaticRegisterNativesADeadByDaylightGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADeadByDaylightGameMode_NoRegister()
	{
		return ADeadByDaylightGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADeadByDaylightGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeadByDaylightGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeadByDaylightGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DeadByDaylightGameMode.h" },
		{ "ModuleRelativePath", "Public/DeadByDaylightGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeadByDaylightGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeadByDaylightGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeadByDaylightGameMode_Statics::ClassParams = {
		&ADeadByDaylightGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADeadByDaylightGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeadByDaylightGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeadByDaylightGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeadByDaylightGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeadByDaylightGameMode, 3649210026);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADeadByDaylightGameMode>()
	{
		return ADeadByDaylightGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeadByDaylightGameMode(Z_Construct_UClass_ADeadByDaylightGameMode, &ADeadByDaylightGameMode::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADeadByDaylightGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeadByDaylightGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
