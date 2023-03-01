// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FoliageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageActor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFoliageActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFoliageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFoliageDensityHISM_NoRegister();
// End Cross Module References
	void AFoliageActor::StaticRegisterNativesAFoliageActor()
	{
	}
	UClass* Z_Construct_UClass_AFoliageActor_NoRegister()
	{
		return AFoliageActor::StaticClass();
	}
	struct Z_Construct_UClass_AFoliageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__foliageHISM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__foliageHISM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoliageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoliageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoliageActor.h" },
		{ "ModuleRelativePath", "Public/FoliageActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoliageActor_Statics::NewProp__foliageHISM_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFoliageActor_Statics::NewProp__foliageHISM = { "_foliageHISM", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoliageActor, _foliageHISM), Z_Construct_UClass_UFoliageDensityHISM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFoliageActor_Statics::NewProp__foliageHISM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageActor_Statics::NewProp__foliageHISM_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFoliageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoliageActor_Statics::NewProp__foliageHISM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoliageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoliageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoliageActor_Statics::ClassParams = {
		&AFoliageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFoliageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFoliageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoliageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoliageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoliageActor, 3886964737);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AFoliageActor>()
	{
		return AFoliageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoliageActor(Z_Construct_UClass_AFoliageActor, &AFoliageActor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AFoliageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoliageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
