// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrikeState_PossessGateway.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrikeState_PossessGateway() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeState_PossessGateway();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeBaseState();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UK25ChainStrikeState_PossessGateway::StaticRegisterNativesUK25ChainStrikeState_PossessGateway()
	{
	}
	UClass* Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_NoRegister()
	{
		return UK25ChainStrikeState_PossessGateway::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK25ChainStrikeBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainStrikeState_PossessGateway.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeState_PossessGateway.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrikeState_PossessGateway>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_Statics::ClassParams = {
		&UK25ChainStrikeState_PossessGateway::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrikeState_PossessGateway()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrikeState_PossessGateway_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrikeState_PossessGateway, 2240341981);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrikeState_PossessGateway>()
	{
		return UK25ChainStrikeState_PossessGateway::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrikeState_PossessGateway(Z_Construct_UClass_UK25ChainStrikeState_PossessGateway, &UK25ChainStrikeState_PossessGateway::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrikeState_PossessGateway"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrikeState_PossessGateway);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
