// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDBaseInputHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBaseInputHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBaseInputHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBaseInputHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void UDBDBaseInputHandler::StaticRegisterNativesUDBDBaseInputHandler()
	{
	}
	UClass* Z_Construct_UClass_UDBDBaseInputHandler_NoRegister()
	{
		return UDBDBaseInputHandler::StaticClass();
	}
	struct Z_Construct_UClass_UDBDBaseInputHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDBaseInputHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBaseInputHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDBaseInputHandler.h" },
		{ "ModuleRelativePath", "Public/DBDBaseInputHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__cameraBoom_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDBaseInputHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__cameraBoom = { "_cameraBoom", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBaseInputHandler, _cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__cameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__cameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBaseInputHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__pawn = { "_pawn", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBaseInputHandler, _pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDBaseInputHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__cameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBaseInputHandler_Statics::NewProp__pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDBaseInputHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDBaseInputHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDBaseInputHandler_Statics::ClassParams = {
		&UDBDBaseInputHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDBaseInputHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBaseInputHandler_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDBaseInputHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBaseInputHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDBaseInputHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDBaseInputHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDBaseInputHandler, 2475255784);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDBaseInputHandler>()
	{
		return UDBDBaseInputHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDBaseInputHandler(Z_Construct_UClass_UDBDBaseInputHandler, &UDBDBaseInputHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDBaseInputHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDBaseInputHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
