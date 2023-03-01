// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_AroundEQS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_AroundEQS() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_AroundEQS_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_AroundEQS();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_RunEQS();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_AroundEQS::StaticRegisterNativesUBTService_AroundEQS()
	{
	}
	UClass* Z_Construct_UClass_UBTService_AroundEQS_NoRegister()
	{
		return UBTService_AroundEQS::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_AroundEQS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidateLocationUnderTargetDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvalidateLocationUnderTargetDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidLocationRefreshInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvalidLocationRefreshInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidLocationRefreshInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValidLocationRefreshInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBAroundLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBAroundLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBAroundObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBAroundObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_AroundEQS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_RunEQS,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_AroundEQS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_AroundEQS.h" },
		{ "ModuleRelativePath", "Public/BTService_AroundEQS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidateLocationUnderTargetDistance_MetaData[] = {
		{ "Category", "BTService_AroundEQS" },
		{ "ModuleRelativePath", "Public/BTService_AroundEQS.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidateLocationUnderTargetDistance = { "InvalidateLocationUnderTargetDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_AroundEQS, InvalidateLocationUnderTargetDistance), METADATA_PARAMS(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidateLocationUnderTargetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidateLocationUnderTargetDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidLocationRefreshInterval_MetaData[] = {
		{ "Category", "BTService_AroundEQS" },
		{ "ModuleRelativePath", "Public/BTService_AroundEQS.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidLocationRefreshInterval = { "InvalidLocationRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_AroundEQS, InvalidLocationRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidLocationRefreshInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidLocationRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_ValidLocationRefreshInterval_MetaData[] = {
		{ "Category", "BTService_AroundEQS" },
		{ "ModuleRelativePath", "Public/BTService_AroundEQS.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_ValidLocationRefreshInterval = { "ValidLocationRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_AroundEQS, ValidLocationRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_ValidLocationRefreshInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_ValidLocationRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundLocation_MetaData[] = {
		{ "Category", "BTService_AroundEQS" },
		{ "ModuleRelativePath", "Public/BTService_AroundEQS.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundLocation = { "BBAroundLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_AroundEQS, BBAroundLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundObj_MetaData[] = {
		{ "Category", "BTService_AroundEQS" },
		{ "ModuleRelativePath", "Public/BTService_AroundEQS.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundObj = { "BBAroundObj", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_AroundEQS, BBAroundObj), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_AroundEQS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidateLocationUnderTargetDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_InvalidLocationRefreshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_ValidLocationRefreshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AroundEQS_Statics::NewProp_BBAroundObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_AroundEQS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_AroundEQS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_AroundEQS_Statics::ClassParams = {
		&UBTService_AroundEQS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_AroundEQS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AroundEQS_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_AroundEQS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AroundEQS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_AroundEQS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_AroundEQS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_AroundEQS, 2000384558);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_AroundEQS>()
	{
		return UBTService_AroundEQS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_AroundEQS(Z_Construct_UClass_UBTService_AroundEQS, &UBTService_AroundEQS::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_AroundEQS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_AroundEQS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
