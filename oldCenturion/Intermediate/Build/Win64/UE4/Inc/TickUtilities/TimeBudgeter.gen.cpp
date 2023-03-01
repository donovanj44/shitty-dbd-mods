// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TickUtilities/Public/TimeBudgeter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeBudgeter() {}
// Cross Module References
	TICKUTILITIES_API UClass* Z_Construct_UClass_UTimeBudgeter_NoRegister();
	TICKUTILITIES_API UClass* Z_Construct_UClass_UTimeBudgeter();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_TickUtilities();
// End Cross Module References
	void UTimeBudgeter::StaticRegisterNativesUTimeBudgeter()
	{
	}
	UClass* Z_Construct_UClass_UTimeBudgeter_NoRegister()
	{
		return UTimeBudgeter::StaticClass();
	}
	struct Z_Construct_UClass_UTimeBudgeter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeBudgeter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TickUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeBudgeter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeBudgeter.h" },
		{ "ModuleRelativePath", "Public/TimeBudgeter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeBudgeter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeBudgeter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeBudgeter_Statics::ClassParams = {
		&UTimeBudgeter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimeBudgeter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBudgeter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeBudgeter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeBudgeter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeBudgeter, 677410150);
	template<> TICKUTILITIES_API UClass* StaticClass<UTimeBudgeter>()
	{
		return UTimeBudgeter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeBudgeter(Z_Construct_UClass_UTimeBudgeter, &UTimeBudgeter::StaticClass, TEXT("/Script/TickUtilities"), TEXT("UTimeBudgeter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeBudgeter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
