// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RenderingFeaturesSequencer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderingFeaturesSequencer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URenderingFeaturesSequencer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URenderingFeaturesSequencer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_NoRegister();
// End Cross Module References
	void URenderingFeaturesSequencer::StaticRegisterNativesURenderingFeaturesSequencer()
	{
	}
	UClass* Z_Construct_UClass_URenderingFeaturesSequencer_NoRegister()
	{
		return URenderingFeaturesSequencer::StaticClass();
	}
	struct Z_Construct_UClass_URenderingFeaturesSequencer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__world_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__world;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aggregateCullDistanceVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aggregateCullDistanceVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderingFeaturesSequencer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderingFeaturesSequencer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RenderingFeaturesSequencer.h" },
		{ "ModuleRelativePath", "Public/RenderingFeaturesSequencer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__world_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenderingFeaturesSequencer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__world = { "_world", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderingFeaturesSequencer, _world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__world_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__world_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__aggregateCullDistanceVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenderingFeaturesSequencer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__aggregateCullDistanceVolumes = { "_aggregateCullDistanceVolumes", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderingFeaturesSequencer, _aggregateCullDistanceVolumes), Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__aggregateCullDistanceVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__aggregateCullDistanceVolumes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderingFeaturesSequencer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__world,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderingFeaturesSequencer_Statics::NewProp__aggregateCullDistanceVolumes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderingFeaturesSequencer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderingFeaturesSequencer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URenderingFeaturesSequencer_Statics::ClassParams = {
		&URenderingFeaturesSequencer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderingFeaturesSequencer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderingFeaturesSequencer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderingFeaturesSequencer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderingFeaturesSequencer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderingFeaturesSequencer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URenderingFeaturesSequencer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URenderingFeaturesSequencer, 2717827272);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URenderingFeaturesSequencer>()
	{
		return URenderingFeaturesSequencer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URenderingFeaturesSequencer(Z_Construct_UClass_URenderingFeaturesSequencer, &URenderingFeaturesSequencer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URenderingFeaturesSequencer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderingFeaturesSequencer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
