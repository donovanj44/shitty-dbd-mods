// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyChainsawAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyChainsawAttack() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttack_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UHillbillyChainsawAttack::StaticRegisterNativesUHillbillyChainsawAttack()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyChainsawAttack_NoRegister()
	{
		return UHillbillyChainsawAttack::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyChainsawAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawAttemptGameEventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawAttemptGameEventTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawHitGameEventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainsawHitGameEventTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyChainsawAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HillbillyChainsawAttack.h" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawAttemptGameEventTag_MetaData[] = {
		{ "Category", "HillbillyChainsawAttack" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawAttemptGameEventTag = { "_chainsawAttemptGameEventTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHillbillyChainsawAttack, _chainsawAttemptGameEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawAttemptGameEventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawAttemptGameEventTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawHitGameEventTag_MetaData[] = {
		{ "Category", "HillbillyChainsawAttack" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawHitGameEventTag = { "_chainsawHitGameEventTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHillbillyChainsawAttack, _chainsawHitGameEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawHitGameEventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawHitGameEventTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHillbillyChainsawAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawAttemptGameEventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHillbillyChainsawAttack_Statics::NewProp__chainsawHitGameEventTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyChainsawAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyChainsawAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyChainsawAttack_Statics::ClassParams = {
		&UHillbillyChainsawAttack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHillbillyChainsawAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttack_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyChainsawAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyChainsawAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyChainsawAttack, 229763153);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyChainsawAttack>()
	{
		return UHillbillyChainsawAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyChainsawAttack(Z_Construct_UClass_UHillbillyChainsawAttack, &UHillbillyChainsawAttack::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyChainsawAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyChainsawAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
