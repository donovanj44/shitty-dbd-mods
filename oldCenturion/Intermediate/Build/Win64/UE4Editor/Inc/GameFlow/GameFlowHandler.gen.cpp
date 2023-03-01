// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFlow/Public/GameFlowHandler.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFlowHandler() {}
// Cross Module References
	GAMEFLOW_API UClass* Z_Construct_UClass_UGameFlowHandler_NoRegister();
	GAMEFLOW_API UClass* Z_Construct_UClass_UGameFlowHandler();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAbstractGameFlowHandler();
	UPackage* Z_Construct_UPackage__Script_GameFlow();
// End Cross Module References
	void UGameFlowHandler::StaticRegisterNativesUGameFlowHandler()
	{
	}
	UClass* Z_Construct_UClass_UGameFlowHandler_NoRegister()
	{
		return UGameFlowHandler::StaticClass();
	}
	struct Z_Construct_UClass_UGameFlowHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFlowHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractGameFlowHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFlow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFlowHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFlowHandler.h" },
		{ "ModuleRelativePath", "Public/GameFlowHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFlowHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFlowHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameFlowHandler_Statics::ClassParams = {
		&UGameFlowHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameFlowHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFlowHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFlowHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameFlowHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameFlowHandler, 4149518408);
	template<> GAMEFLOW_API UClass* StaticClass<UGameFlowHandler>()
	{
		return UGameFlowHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameFlowHandler(Z_Construct_UClass_UGameFlowHandler, &UGameFlowHandler::StaticClass, TEXT("/Script/GameFlow"), TEXT("UGameFlowHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFlowHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
