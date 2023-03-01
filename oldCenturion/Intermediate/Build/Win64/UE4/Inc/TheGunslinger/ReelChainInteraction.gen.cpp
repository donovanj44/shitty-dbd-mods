// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/ReelChainInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReelChainInteraction() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UReelChainInteraction_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UReelChainInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	void UReelChainInteraction::StaticRegisterNativesUReelChainInteraction()
	{
	}
	UClass* Z_Construct_UClass_UReelChainInteraction_NoRegister()
	{
		return UReelChainInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UReelChainInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__linkedPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumFrontVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumFrontVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__frontMovementAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__frontMovementAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReelChainInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReelChainInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ReelChainInteraction.h" },
		{ "ModuleRelativePath", "Public/ReelChainInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__linkedPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReelChainInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__linkedPlayer = { "_linkedPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReelChainInteraction, _linkedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__linkedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__linkedPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__minimumFrontVelocity_MetaData[] = {
		{ "Category", "ReelChainInteraction" },
		{ "ModuleRelativePath", "Public/ReelChainInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__minimumFrontVelocity = { "_minimumFrontVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReelChainInteraction, _minimumFrontVelocity), METADATA_PARAMS(Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__minimumFrontVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__minimumFrontVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__frontMovementAngle_MetaData[] = {
		{ "Category", "ReelChainInteraction" },
		{ "ModuleRelativePath", "Public/ReelChainInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__frontMovementAngle = { "_frontMovementAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReelChainInteraction, _frontMovementAngle), METADATA_PARAMS(Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__frontMovementAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__frontMovementAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReelChainInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__linkedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__minimumFrontVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReelChainInteraction_Statics::NewProp__frontMovementAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReelChainInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReelChainInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReelChainInteraction_Statics::ClassParams = {
		&UReelChainInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReelChainInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReelChainInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReelChainInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReelChainInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReelChainInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReelChainInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReelChainInteraction, 2873326281);
	template<> THEGUNSLINGER_API UClass* StaticClass<UReelChainInteraction>()
	{
		return UReelChainInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReelChainInteraction(Z_Construct_UClass_UReelChainInteraction, &UReelChainInteraction::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UReelChainInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReelChainInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
