// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/WalesCypherHandler.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalesCypherHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWalesCypherHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWalesCypherHandler();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWalesCypherParameters_NoRegister();
// End Cross Module References
	void UWalesCypherHandler::StaticRegisterNativesUWalesCypherHandler()
	{
	}
	UClass* Z_Construct_UClass_UWalesCypherHandler_NoRegister()
	{
		return UWalesCypherHandler::StaticClass();
	}
	struct Z_Construct_UClass_UWalesCypherHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walesCypherParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__walesCypherParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWalesCypherHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalesCypherHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WalesCypherHandler.h" },
		{ "ModuleRelativePath", "Public/WalesCypherHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalesCypherHandler_Statics::NewProp__walesCypherParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalesCypherHandler_Statics::NewProp__walesCypherParams = { "_walesCypherParams", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalesCypherHandler, _walesCypherParams), Z_Construct_UClass_UWalesCypherParameters_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalesCypherHandler_Statics::NewProp__walesCypherParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalesCypherHandler_Statics::NewProp__walesCypherParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWalesCypherHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalesCypherHandler_Statics::NewProp__walesCypherParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWalesCypherHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalesCypherHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWalesCypherHandler_Statics::ClassParams = {
		&UWalesCypherHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWalesCypherHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWalesCypherHandler_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWalesCypherHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWalesCypherHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWalesCypherHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWalesCypherHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWalesCypherHandler, 3565186107);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UWalesCypherHandler>()
	{
		return UWalesCypherHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWalesCypherHandler(Z_Construct_UClass_UWalesCypherHandler, &UWalesCypherHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UWalesCypherHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWalesCypherHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
