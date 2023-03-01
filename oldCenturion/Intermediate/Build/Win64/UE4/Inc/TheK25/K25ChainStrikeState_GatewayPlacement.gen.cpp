// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrikeState_GatewayPlacement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrikeState_GatewayPlacement() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeBaseState();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UK25ChainStrikeState_GatewayPlacement::StaticRegisterNativesUK25ChainStrikeState_GatewayPlacement()
	{
	}
	UClass* Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_NoRegister()
	{
		return UK25ChainStrikeState_GatewayPlacement::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK25ChainStrikeBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainStrikeState_GatewayPlacement.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeState_GatewayPlacement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrikeState_GatewayPlacement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_Statics::ClassParams = {
		&UK25ChainStrikeState_GatewayPlacement::StaticClass,
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
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrikeState_GatewayPlacement, 1131346143);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrikeState_GatewayPlacement>()
	{
		return UK25ChainStrikeState_GatewayPlacement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrikeState_GatewayPlacement(Z_Construct_UClass_UK25ChainStrikeState_GatewayPlacement, &UK25ChainStrikeState_GatewayPlacement::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrikeState_GatewayPlacement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrikeState_GatewayPlacement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
