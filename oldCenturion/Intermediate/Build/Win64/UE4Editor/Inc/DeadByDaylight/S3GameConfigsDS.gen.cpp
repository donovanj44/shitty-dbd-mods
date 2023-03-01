// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/S3GameConfigsDS.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS3GameConfigsDS() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_US3GameConfigsDS_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_US3GameConfigsDS();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void US3GameConfigsDS::StaticRegisterNativesUS3GameConfigsDS()
	{
	}
	UClass* Z_Construct_UClass_US3GameConfigsDS_NoRegister()
	{
		return US3GameConfigsDS::StaticClass();
	}
	struct Z_Construct_UClass_US3GameConfigsDS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_US3GameConfigsDS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US3GameConfigsDS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S3GameConfigsDS.h" },
		{ "ModuleRelativePath", "Public/S3GameConfigsDS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_US3GameConfigsDS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<US3GameConfigsDS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_US3GameConfigsDS_Statics::ClassParams = {
		&US3GameConfigsDS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_US3GameConfigsDS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_US3GameConfigsDS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_US3GameConfigsDS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_US3GameConfigsDS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(US3GameConfigsDS, 2635645717);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<US3GameConfigsDS>()
	{
		return US3GameConfigsDS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_US3GameConfigsDS(Z_Construct_UClass_US3GameConfigsDS, &US3GameConfigsDS::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("US3GameConfigsDS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(US3GameConfigsDS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
