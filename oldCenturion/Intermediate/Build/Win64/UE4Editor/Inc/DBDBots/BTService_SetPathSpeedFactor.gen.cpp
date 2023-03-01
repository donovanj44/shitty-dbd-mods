// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_SetPathSpeedFactor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_SetPathSpeedFactor() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_SetPathSpeedFactor_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_SetPathSpeedFactor();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UBTService_SetPathSpeedFactor::StaticRegisterNativesUBTService_SetPathSpeedFactor()
	{
	}
	UClass* Z_Construct_UClass_UBTService_SetPathSpeedFactor_NoRegister()
	{
		return UBTService_SetPathSpeedFactor::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_SetPathSpeedFactor.h" },
		{ "ModuleRelativePath", "Public/BTService_SetPathSpeedFactor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::NewProp_SpeedFactor_MetaData[] = {
		{ "Category", "BTService_SetPathSpeedFactor" },
		{ "ModuleRelativePath", "Public/BTService_SetPathSpeedFactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::NewProp_SpeedFactor = { "SpeedFactor", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_SetPathSpeedFactor, SpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::NewProp_SpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::NewProp_SpeedFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::NewProp_SpeedFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SetPathSpeedFactor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::ClassParams = {
		&UBTService_SetPathSpeedFactor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_SetPathSpeedFactor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_SetPathSpeedFactor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_SetPathSpeedFactor, 778102061);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_SetPathSpeedFactor>()
	{
		return UBTService_SetPathSpeedFactor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_SetPathSpeedFactor(Z_Construct_UClass_UBTService_SetPathSpeedFactor, &UBTService_SetPathSpeedFactor::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_SetPathSpeedFactor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_SetPathSpeedFactor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
