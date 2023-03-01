// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_SetRandomNavPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetRandomNavPoint() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_SetRandomNavPoint_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_SetRandomNavPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_SetRandomNavPoint::StaticRegisterNativesUBTTask_SetRandomNavPoint()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SetRandomNavPoint_NoRegister()
	{
		return UBTTask_SetRandomNavPoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNbAttempts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNbAttempts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAroundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAroundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAroundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAroundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBToLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBToLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBFromLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBFromLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_SetRandomNavPoint.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetRandomNavPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "BTTask_SetRandomNavPoint" },
		{ "ModuleRelativePath", "Public/BTTask_SetRandomNavPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetRandomNavPoint, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxNbAttempts_MetaData[] = {
		{ "Category", "BTTask_SetRandomNavPoint" },
		{ "ModuleRelativePath", "Public/BTTask_SetRandomNavPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxNbAttempts = { "MaxNbAttempts", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetRandomNavPoint, MaxNbAttempts), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxNbAttempts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxNbAttempts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxAroundRadius_MetaData[] = {
		{ "Category", "BTTask_SetRandomNavPoint" },
		{ "ModuleRelativePath", "Public/BTTask_SetRandomNavPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxAroundRadius = { "MaxAroundRadius", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetRandomNavPoint, MaxAroundRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxAroundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxAroundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MinAroundRadius_MetaData[] = {
		{ "Category", "BTTask_SetRandomNavPoint" },
		{ "ModuleRelativePath", "Public/BTTask_SetRandomNavPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MinAroundRadius = { "MinAroundRadius", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetRandomNavPoint, MinAroundRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MinAroundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MinAroundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBToLocation_MetaData[] = {
		{ "Category", "BTTask_SetRandomNavPoint" },
		{ "ModuleRelativePath", "Public/BTTask_SetRandomNavPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBToLocation = { "BBToLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetRandomNavPoint, BBToLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBToLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBToLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBFromLocation_MetaData[] = {
		{ "Category", "BTTask_SetRandomNavPoint" },
		{ "ModuleRelativePath", "Public/BTTask_SetRandomNavPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBFromLocation = { "BBFromLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetRandomNavPoint, BBFromLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBFromLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBFromLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxNbAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MaxAroundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_MinAroundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBToLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::NewProp_BBFromLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetRandomNavPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::ClassParams = {
		&UBTTask_SetRandomNavPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetRandomNavPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_SetRandomNavPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_SetRandomNavPoint, 1608677533);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_SetRandomNavPoint>()
	{
		return UBTTask_SetRandomNavPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SetRandomNavPoint(Z_Construct_UClass_UBTTask_SetRandomNavPoint, &UBTTask_SetRandomNavPoint::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_SetRandomNavPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetRandomNavPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
