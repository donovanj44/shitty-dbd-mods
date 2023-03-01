// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24WhipAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24WhipAttackMissSubstate() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24WhipAttackMissSubstate_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24WhipAttackMissSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UK24WhipAttackMissSubstate::StaticRegisterNativesUK24WhipAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UK24WhipAttackMissSubstate_NoRegister()
	{
		return UK24WhipAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UK24WhipAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24WhipAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24WhipAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K24WhipAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/K24WhipAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24WhipAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24WhipAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24WhipAttackMissSubstate_Statics::ClassParams = {
		&UK24WhipAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK24WhipAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24WhipAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24WhipAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24WhipAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24WhipAttackMissSubstate, 841500774);
	template<> THEK24_API UClass* StaticClass<UK24WhipAttackMissSubstate>()
	{
		return UK24WhipAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24WhipAttackMissSubstate(Z_Construct_UClass_UK24WhipAttackMissSubstate, &UK24WhipAttackMissSubstate::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24WhipAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24WhipAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
