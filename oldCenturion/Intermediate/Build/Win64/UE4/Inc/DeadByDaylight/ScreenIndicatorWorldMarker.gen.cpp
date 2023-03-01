// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScreenIndicatorWorldMarker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenIndicatorWorldMarker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AScreenIndicatorWorldMarker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AScreenIndicatorWorldMarker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AScreenIndicatorWorldMarker::StaticRegisterNativesAScreenIndicatorWorldMarker()
	{
	}
	UClass* Z_Construct_UClass_AScreenIndicatorWorldMarker_NoRegister()
	{
		return AScreenIndicatorWorldMarker::StaticClass();
	}
	struct Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleDistanceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibleDistanceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudScreenIndicatorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HudScreenIndicatorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HudScreenIndicatorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudScreenIndicatorIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HudScreenIndicatorIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenIndicatorWorldMarker.h" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorWorldMarker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_VisibleDistanceRange_MetaData[] = {
		{ "Category", "ScreenIndicatorWorldMarker" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorWorldMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_VisibleDistanceRange = { "VisibleDistanceRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScreenIndicatorWorldMarker, VisibleDistanceRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_VisibleDistanceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_VisibleDistanceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorType_MetaData[] = {
		{ "Category", "ScreenIndicatorWorldMarker" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorWorldMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorType = { "HudScreenIndicatorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScreenIndicatorWorldMarker, HudScreenIndicatorType), Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType, METADATA_PARAMS(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorIcon_MetaData[] = {
		{ "Category", "ScreenIndicatorWorldMarker" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorWorldMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorIcon = { "HudScreenIndicatorIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScreenIndicatorWorldMarker, HudScreenIndicatorIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_VisibleDistanceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::NewProp_HudScreenIndicatorIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreenIndicatorWorldMarker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::ClassParams = {
		&AScreenIndicatorWorldMarker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScreenIndicatorWorldMarker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScreenIndicatorWorldMarker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScreenIndicatorWorldMarker, 1150696275);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AScreenIndicatorWorldMarker>()
	{
		return AScreenIndicatorWorldMarker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScreenIndicatorWorldMarker(Z_Construct_UClass_AScreenIndicatorWorldMarker, &AScreenIndicatorWorldMarker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AScreenIndicatorWorldMarker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScreenIndicatorWorldMarker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
