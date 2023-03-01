// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ChatSimulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatSimulator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChatSimulator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChatSimulator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UChatSimulator::StaticRegisterNativesUChatSimulator()
	{
	}
	UClass* Z_Construct_UClass_UChatSimulator_NoRegister()
	{
		return UChatSimulator::StaticClass();
	}
	struct Z_Construct_UClass_UChatSimulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChatSimulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatSimulator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChatSimulator.h" },
		{ "ModuleRelativePath", "Public/ChatSimulator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChatSimulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatSimulator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChatSimulator_Statics::ClassParams = {
		&UChatSimulator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChatSimulator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChatSimulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChatSimulator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChatSimulator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChatSimulator, 382932061);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UChatSimulator>()
	{
		return UChatSimulator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChatSimulator(Z_Construct_UClass_UChatSimulator, &UChatSimulator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UChatSimulator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChatSimulator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
