// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterEscapeCarried.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterEscapeCarried() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterEscapeCarried_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterEscapeCarried();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterEscapeCarriedData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	void UAICharacterEscapeCarried::StaticRegisterNativesUAICharacterEscapeCarried()
	{
	}
	UClass* Z_Construct_UClass_UAICharacterEscapeCarried_NoRegister()
	{
		return UAICharacterEscapeCarried::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterEscapeCarried_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__behaviourData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__behaviourData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterEscapeCarried_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterEscapeCarried_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AICharacterEscapeCarried.h" },
		{ "ModuleRelativePath", "Public/AICharacterEscapeCarried.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__behaviourData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterEscapeCarried.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__behaviourData = { "_behaviourData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterEscapeCarried, _behaviourData), Z_Construct_UClass_UAICharacterEscapeCarriedData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__behaviourData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__behaviourData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__camperPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterEscapeCarried.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__camperPlayer = { "_camperPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterEscapeCarried, _camperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__camperPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__camperPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAICharacterEscapeCarried_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__behaviourData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterEscapeCarried_Statics::NewProp__camperPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterEscapeCarried_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterEscapeCarried>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterEscapeCarried_Statics::ClassParams = {
		&UAICharacterEscapeCarried::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAICharacterEscapeCarried_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEscapeCarried_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterEscapeCarried_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEscapeCarried_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterEscapeCarried()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterEscapeCarried_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterEscapeCarried, 4100499686);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterEscapeCarried>()
	{
		return UAICharacterEscapeCarried::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterEscapeCarried(Z_Construct_UClass_UAICharacterEscapeCarried, &UAICharacterEscapeCarried::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterEscapeCarried"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterEscapeCarried);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
