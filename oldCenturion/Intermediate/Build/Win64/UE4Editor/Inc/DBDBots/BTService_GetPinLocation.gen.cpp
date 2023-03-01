// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_GetPinLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_GetPinLocation() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_GetPinLocation_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_GetPinLocation();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_OnRelevantBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_GetPinLocation::StaticRegisterNativesUBTService_GetPinLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTService_GetPinLocation_NoRegister()
	{
		return UBTService_GetPinLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_GetPinLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBToSetKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBToSetKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_GetPinLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_OnRelevantBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_GetPinLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_GetPinLocation.h" },
		{ "ModuleRelativePath", "Public/BTService_GetPinLocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_PinTag_MetaData[] = {
		{ "Category", "BTService_GetPinLocation" },
		{ "ModuleRelativePath", "Public/BTService_GetPinLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_PinTag = { "PinTag", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_GetPinLocation, PinTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_PinTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_PinTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_BBToSetKey_MetaData[] = {
		{ "Category", "BTService_GetPinLocation" },
		{ "ModuleRelativePath", "Public/BTService_GetPinLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_BBToSetKey = { "BBToSetKey", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_GetPinLocation, BBToSetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_BBToSetKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_BBToSetKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_GetPinLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_PinTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_GetPinLocation_Statics::NewProp_BBToSetKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_GetPinLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_GetPinLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_GetPinLocation_Statics::ClassParams = {
		&UBTService_GetPinLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_GetPinLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_GetPinLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_GetPinLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_GetPinLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_GetPinLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_GetPinLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_GetPinLocation, 1909823259);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_GetPinLocation>()
	{
		return UBTService_GetPinLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_GetPinLocation(Z_Construct_UClass_UBTService_GetPinLocation, &UBTService_GetPinLocation::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_GetPinLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_GetPinLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
