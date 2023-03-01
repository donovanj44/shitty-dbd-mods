// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_IsLocationInPressureZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsLocationInPressureZone() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_IsLocationInPressureZone::StaticRegisterNativesUBTDecorator_IsLocationInPressureZone()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_NoRegister()
	{
		return UBTDecorator_IsLocationInPressureZone::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBAtLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_IsLocationInPressureZone.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsLocationInPressureZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::NewProp_BBAtLocation_MetaData[] = {
		{ "Category", "BTDecorator_IsLocationInPressureZone" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsLocationInPressureZone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::NewProp_BBAtLocation = { "BBAtLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsLocationInPressureZone, BBAtLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::NewProp_BBAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::NewProp_BBAtLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::NewProp_BBAtLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsLocationInPressureZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::ClassParams = {
		&UBTDecorator_IsLocationInPressureZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsLocationInPressureZone, 4128738026);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_IsLocationInPressureZone>()
	{
		return UBTDecorator_IsLocationInPressureZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsLocationInPressureZone(Z_Construct_UClass_UBTDecorator_IsLocationInPressureZone, &UBTDecorator_IsLocationInPressureZone::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_IsLocationInPressureZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsLocationInPressureZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
