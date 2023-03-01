// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_ExtWait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ExtWait() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_ExtWait_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_ExtWait();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
// End Cross Module References
	void UBTTask_ExtWait::StaticRegisterNativesUBTTask_ExtWait()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_ExtWait_NoRegister()
	{
		return UBTTask_ExtWait::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ExtWait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitRandomDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaitRandomDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaitTimeInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ExtWait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtWait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_ExtWait.h" },
		{ "ModuleRelativePath", "Public/BTTask_ExtWait.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitRandomDeviation_MetaData[] = {
		{ "Category", "BTTask_ExtWait" },
		{ "ModuleRelativePath", "Public/BTTask_ExtWait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitRandomDeviation = { "WaitRandomDeviation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtWait, WaitRandomDeviation), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitRandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitRandomDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitTimeInterval_MetaData[] = {
		{ "Category", "BTTask_ExtWait" },
		{ "ModuleRelativePath", "Public/BTTask_ExtWait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitTimeInterval = { "WaitTimeInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_ExtWait, WaitTimeInterval), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitTimeInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ExtWait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitRandomDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ExtWait_Statics::NewProp_WaitTimeInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ExtWait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ExtWait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ExtWait_Statics::ClassParams = {
		&UBTTask_ExtWait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_ExtWait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtWait_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_ExtWait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ExtWait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_ExtWait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_ExtWait_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_ExtWait, 1939638413);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_ExtWait>()
	{
		return UBTTask_ExtWait::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_ExtWait(Z_Construct_UClass_UBTTask_ExtWait, &UBTTask_ExtWait::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_ExtWait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ExtWait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
