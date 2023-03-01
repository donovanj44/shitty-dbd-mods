// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinJumpAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinJumpAttackMissSubstate() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinJumpAttackMissSubstate_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinJumpAttackMissSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinJumpAttackMissSubstate::StaticRegisterNativesUTwinJumpAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UTwinJumpAttackMissSubstate_NoRegister()
	{
		return UTwinJumpAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UTwinJumpAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinJumpAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinJumpAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/TwinJumpAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinJumpAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinJumpAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinJumpAttackMissSubstate_Statics::ClassParams = {
		&UTwinJumpAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinJumpAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinJumpAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinJumpAttackMissSubstate, 3531900537);
	template<> THETWINS_API UClass* StaticClass<UTwinJumpAttackMissSubstate>()
	{
		return UTwinJumpAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinJumpAttackMissSubstate(Z_Construct_UClass_UTwinJumpAttackMissSubstate, &UTwinJumpAttackMissSubstate::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinJumpAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinJumpAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
