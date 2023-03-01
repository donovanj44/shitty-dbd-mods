// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_CopyBBEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_CopyBBEntry() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_CopyBBEntry_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_CopyBBEntry();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_OnRelevantBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_CopyBBEntry::StaticRegisterNativesUBTService_CopyBBEntry()
	{
	}
	UClass* Z_Construct_UClass_UBTService_CopyBBEntry_NoRegister()
	{
		return UBTService_CopyBBEntry::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_CopyBBEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyOnlyValidKeyValue_MetaData[];
#endif
		static void NewProp_CopyOnlyValidKeyValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CopyOnlyValidKeyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBFrom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_CopyBBEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_OnRelevantBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CopyBBEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_CopyBBEntry.h" },
		{ "ModuleRelativePath", "Public/BTService_CopyBBEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_CopyOnlyValidKeyValue_MetaData[] = {
		{ "Category", "BTService_CopyBBEntry" },
		{ "ModuleRelativePath", "Public/BTService_CopyBBEntry.h" },
	};
#endif
	void Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_CopyOnlyValidKeyValue_SetBit(void* Obj)
	{
		((UBTService_CopyBBEntry*)Obj)->CopyOnlyValidKeyValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_CopyOnlyValidKeyValue = { "CopyOnlyValidKeyValue", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTService_CopyBBEntry), &Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_CopyOnlyValidKeyValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_CopyOnlyValidKeyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_CopyOnlyValidKeyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBTo_MetaData[] = {
		{ "Category", "BTService_CopyBBEntry" },
		{ "ModuleRelativePath", "Public/BTService_CopyBBEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBTo = { "BBTo", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_CopyBBEntry, BBTo), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBFrom_MetaData[] = {
		{ "Category", "BTService_CopyBBEntry" },
		{ "ModuleRelativePath", "Public/BTService_CopyBBEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBFrom = { "BBFrom", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_CopyBBEntry, BBFrom), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBFrom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_CopyBBEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_CopyOnlyValidKeyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CopyBBEntry_Statics::NewProp_BBFrom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_CopyBBEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_CopyBBEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_CopyBBEntry_Statics::ClassParams = {
		&UBTService_CopyBBEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_CopyBBEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CopyBBEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_CopyBBEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_CopyBBEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_CopyBBEntry, 1530774829);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_CopyBBEntry>()
	{
		return UBTService_CopyBBEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_CopyBBEntry(Z_Construct_UClass_UBTService_CopyBBEntry, &UBTService_CopyBBEntry::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_CopyBBEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CopyBBEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
