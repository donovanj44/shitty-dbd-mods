// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/ThrowRockInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowRockInteraction() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_UThrowRockInteraction_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_UThrowRockInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UThrowRockInteraction::StaticRegisterNativesUThrowRockInteraction()
	{
	}
	UClass* Z_Construct_UClass_UThrowRockInteraction_NoRegister()
	{
		return UThrowRockInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UThrowRockInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__diversionHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__diversionHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scratchMarksCountToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__scratchMarksCountToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scratchMarksApplicationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__scratchMarksApplicationDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loudNoiseAudioRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__loudNoiseAudioRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowRockInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowRockInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ThrowRockInteraction.h" },
		{ "ModuleRelativePath", "Public/ThrowRockInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__diversionHeightOffset_MetaData[] = {
		{ "Category", "ThrowRockInteraction" },
		{ "ModuleRelativePath", "Public/ThrowRockInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__diversionHeightOffset = { "_diversionHeightOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrowRockInteraction, _diversionHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__diversionHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__diversionHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksCountToSpawn_MetaData[] = {
		{ "Category", "ThrowRockInteraction" },
		{ "ModuleRelativePath", "Public/ThrowRockInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksCountToSpawn = { "_scratchMarksCountToSpawn", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrowRockInteraction, _scratchMarksCountToSpawn), METADATA_PARAMS(Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksCountToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksCountToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksApplicationDelay_MetaData[] = {
		{ "Category", "ThrowRockInteraction" },
		{ "ModuleRelativePath", "Public/ThrowRockInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksApplicationDelay = { "_scratchMarksApplicationDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrowRockInteraction, _scratchMarksApplicationDelay), METADATA_PARAMS(Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksApplicationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksApplicationDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__loudNoiseAudioRange_MetaData[] = {
		{ "Category", "ThrowRockInteraction" },
		{ "ModuleRelativePath", "Public/ThrowRockInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__loudNoiseAudioRange = { "_loudNoiseAudioRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrowRockInteraction, _loudNoiseAudioRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__loudNoiseAudioRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__loudNoiseAudioRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrowRockInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__diversionHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksCountToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__scratchMarksApplicationDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowRockInteraction_Statics::NewProp__loudNoiseAudioRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowRockInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowRockInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThrowRockInteraction_Statics::ClassParams = {
		&UThrowRockInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UThrowRockInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UThrowRockInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UThrowRockInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowRockInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThrowRockInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThrowRockInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThrowRockInteraction, 3911204794);
	template<> THESPIRIT_API UClass* StaticClass<UThrowRockInteraction>()
	{
		return UThrowRockInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThrowRockInteraction(Z_Construct_UClass_UThrowRockInteraction, &UThrowRockInteraction::StaticClass, TEXT("/Script/TheSpirit"), TEXT("UThrowRockInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowRockInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
