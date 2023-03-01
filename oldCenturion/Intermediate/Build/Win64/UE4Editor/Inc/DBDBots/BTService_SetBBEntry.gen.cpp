// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_SetBBEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_SetBBEntry() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_SetBBEntry_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_SetBBEntry();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_OnRelevantBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_SetBBEntry::StaticRegisterNativesUBTService_SetBBEntry()
	{
	}
	UClass* Z_Construct_UClass_UBTService_SetBBEntry_NoRegister()
	{
		return UBTService_SetBBEntry::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_SetBBEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSetChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomSetChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToSetValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToSetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBToSetKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBToSetKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_SetBBEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_OnRelevantBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetBBEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_SetBBEntry.h" },
		{ "ModuleRelativePath", "Public/BTService_SetBBEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_RandomSetChance_MetaData[] = {
		{ "Category", "BTService_SetBBEntry" },
		{ "ModuleRelativePath", "Public/BTService_SetBBEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_RandomSetChance = { "RandomSetChance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_SetBBEntry, RandomSetChance), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_RandomSetChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_RandomSetChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_ToSetValue_MetaData[] = {
		{ "Category", "BTService_SetBBEntry" },
		{ "ModuleRelativePath", "Public/BTService_SetBBEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_ToSetValue = { "ToSetValue", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_SetBBEntry, ToSetValue), METADATA_PARAMS(Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_ToSetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_ToSetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_BBToSetKey_MetaData[] = {
		{ "Category", "BTService_SetBBEntry" },
		{ "ModuleRelativePath", "Public/BTService_SetBBEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_BBToSetKey = { "BBToSetKey", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_SetBBEntry, BBToSetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_BBToSetKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_BBToSetKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SetBBEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_RandomSetChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_ToSetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetBBEntry_Statics::NewProp_BBToSetKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_SetBBEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SetBBEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SetBBEntry_Statics::ClassParams = {
		&UBTService_SetBBEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_SetBBEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetBBEntry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_SetBBEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetBBEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_SetBBEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_SetBBEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_SetBBEntry, 766636349);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_SetBBEntry>()
	{
		return UBTService_SetBBEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_SetBBEntry(Z_Construct_UClass_UBTService_SetBBEntry, &UBTService_SetBBEntry::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_SetBBEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_SetBBEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
