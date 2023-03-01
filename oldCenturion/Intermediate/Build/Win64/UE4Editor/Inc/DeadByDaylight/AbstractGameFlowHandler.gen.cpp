// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AbstractGameFlowHandler.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractGameFlowHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAbstractGameFlowHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAbstractGameFlowHandler();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAbstractGameFlowHandler::StaticRegisterNativesUAbstractGameFlowHandler()
	{
	}
	UClass* Z_Construct_UClass_UAbstractGameFlowHandler_NoRegister()
	{
		return UAbstractGameFlowHandler::StaticClass();
	}
	struct Z_Construct_UClass_UAbstractGameFlowHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbstractGameFlowHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractGameFlowHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbstractGameFlowHandler.h" },
		{ "ModuleRelativePath", "Public/AbstractGameFlowHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbstractGameFlowHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbstractGameFlowHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbstractGameFlowHandler_Statics::ClassParams = {
		&UAbstractGameFlowHandler::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAbstractGameFlowHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractGameFlowHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbstractGameFlowHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbstractGameFlowHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbstractGameFlowHandler, 3973626829);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAbstractGameFlowHandler>()
	{
		return UAbstractGameFlowHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbstractGameFlowHandler(Z_Construct_UClass_UAbstractGameFlowHandler, &UAbstractGameFlowHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAbstractGameFlowHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbstractGameFlowHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
