// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/OpenHatchInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenHatchInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UOpenHatchInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UOpenHatchInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
// End Cross Module References
	void UOpenHatchInteraction::StaticRegisterNativesUOpenHatchInteraction()
	{
	}
	UClass* Z_Construct_UClass_UOpenHatchInteraction_NoRegister()
	{
		return UOpenHatchInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UOpenHatchInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionSucceedMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionSucceedMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStoppedMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionStoppedMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapToEscapeLocationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapToEscapeLocationDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenHatchInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenHatchInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OpenHatchInteraction.h" },
		{ "ModuleRelativePath", "Public/OpenHatchInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionSucceedMontage_MetaData[] = {
		{ "Category", "OpenHatchInteraction" },
		{ "ModuleRelativePath", "Public/OpenHatchInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionSucceedMontage = { "InteractionSucceedMontage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenHatchInteraction, InteractionSucceedMontage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionSucceedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionSucceedMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionStoppedMontage_MetaData[] = {
		{ "Category", "OpenHatchInteraction" },
		{ "ModuleRelativePath", "Public/OpenHatchInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionStoppedMontage = { "InteractionStoppedMontage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenHatchInteraction, InteractionStoppedMontage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionStoppedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionStoppedMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_SnapToEscapeLocationDuration_MetaData[] = {
		{ "Category", "OpenHatchInteraction" },
		{ "ModuleRelativePath", "Public/OpenHatchInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_SnapToEscapeLocationDuration = { "SnapToEscapeLocationDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenHatchInteraction, SnapToEscapeLocationDuration), METADATA_PARAMS(Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_SnapToEscapeLocationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_SnapToEscapeLocationDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenHatchInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionSucceedMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_InteractionStoppedMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenHatchInteraction_Statics::NewProp_SnapToEscapeLocationDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenHatchInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenHatchInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenHatchInteraction_Statics::ClassParams = {
		&UOpenHatchInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenHatchInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenHatchInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenHatchInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenHatchInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenHatchInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenHatchInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenHatchInteraction, 1069271884);
	template<> DBDINTERACTION_API UClass* StaticClass<UOpenHatchInteraction>()
	{
		return UOpenHatchInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenHatchInteraction(Z_Construct_UClass_UOpenHatchInteraction, &UOpenHatchInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UOpenHatchInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenHatchInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
