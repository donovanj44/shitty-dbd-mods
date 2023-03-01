// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/SmashHit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmashHit() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_USmashHit_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_USmashHit();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	void USmashHit::StaticRegisterNativesUSmashHit()
	{
	}
	UClass* Z_Construct_UClass_USmashHit_NoRegister()
	{
		return USmashHit::StaticClass();
	}
	struct Z_Construct_UClass_USmashHit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasteTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hasteTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exhaustedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmashHit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmashHit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmashHit.h" },
		{ "ModuleRelativePath", "Public/SmashHit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmashHit_Statics::NewProp__hasteTime_MetaData[] = {
		{ "Category", "SmashHit" },
		{ "ModuleRelativePath", "Public/SmashHit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmashHit_Statics::NewProp__hasteTime = { "_hasteTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_hasteTime, USmashHit), STRUCT_OFFSET(USmashHit, _hasteTime), METADATA_PARAMS(Z_Construct_UClass_USmashHit_Statics::NewProp__hasteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmashHit_Statics::NewProp__hasteTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmashHit_Statics::NewProp__exhaustedTime_MetaData[] = {
		{ "Category", "SmashHit" },
		{ "ModuleRelativePath", "Public/SmashHit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmashHit_Statics::NewProp__exhaustedTime = { "_exhaustedTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exhaustedTime, USmashHit), STRUCT_OFFSET(USmashHit, _exhaustedTime), METADATA_PARAMS(Z_Construct_UClass_USmashHit_Statics::NewProp__exhaustedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmashHit_Statics::NewProp__exhaustedTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmashHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmashHit_Statics::NewProp__hasteTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmashHit_Statics::NewProp__exhaustedTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmashHit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmashHit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USmashHit_Statics::ClassParams = {
		&USmashHit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmashHit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmashHit_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USmashHit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmashHit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmashHit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USmashHit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USmashHit, 1886456596);
	template<> THEK23_API UClass* StaticClass<USmashHit>()
	{
		return USmashHit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmashHit(Z_Construct_UClass_USmashHit, &USmashHit::StaticClass, TEXT("/Script/TheK23"), TEXT("USmashHit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmashHit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
