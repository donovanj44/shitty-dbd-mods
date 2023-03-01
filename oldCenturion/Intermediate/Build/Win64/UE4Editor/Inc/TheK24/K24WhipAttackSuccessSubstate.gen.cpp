// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24WhipAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24WhipAttackSuccessSubstate() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24WhipAttackSuccessSubstate_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24WhipAttackSuccessSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UK24WhipAttackSuccessSubstate::StaticRegisterNativesUK24WhipAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UK24WhipAttackSuccessSubstate_NoRegister()
	{
		return UK24WhipAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UK24WhipAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24WhipAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24WhipAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K24WhipAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/K24WhipAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24WhipAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24WhipAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24WhipAttackSuccessSubstate_Statics::ClassParams = {
		&UK24WhipAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK24WhipAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24WhipAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24WhipAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24WhipAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24WhipAttackSuccessSubstate, 643947987);
	template<> THEK24_API UClass* StaticClass<UK24WhipAttackSuccessSubstate>()
	{
		return UK24WhipAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24WhipAttackSuccessSubstate(Z_Construct_UClass_UK24WhipAttackSuccessSubstate, &UK24WhipAttackSuccessSubstate::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24WhipAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24WhipAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
