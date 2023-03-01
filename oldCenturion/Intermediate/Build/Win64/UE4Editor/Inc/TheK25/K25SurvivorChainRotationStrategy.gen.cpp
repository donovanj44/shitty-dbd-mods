// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25SurvivorChainRotationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25SurvivorChainRotationStrategy() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainRotationStrategy_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainRotationStrategy();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBaseCharacterRotationStrategy();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	void UK25SurvivorChainRotationStrategy::StaticRegisterNativesUK25SurvivorChainRotationStrategy()
	{
	}
	UClass* Z_Construct_UClass_UK25SurvivorChainRotationStrategy_NoRegister()
	{
		return UK25SurvivorChainRotationStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedChainAttachmentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cachedChainAttachmentComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__cachedSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCharacterRotationStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25SurvivorChainRotationStrategy.h" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainRotationStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedChainAttachmentComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainRotationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedChainAttachmentComponent = { "_cachedChainAttachmentComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainRotationStrategy, _cachedChainAttachmentComponent), Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedChainAttachmentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedChainAttachmentComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainRotationStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedSurvivor = { "_cachedSurvivor", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainRotationStrategy, _cachedSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedChainAttachmentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::NewProp__cachedSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25SurvivorChainRotationStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::ClassParams = {
		&UK25SurvivorChainRotationStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25SurvivorChainRotationStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25SurvivorChainRotationStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25SurvivorChainRotationStrategy, 3416740465);
	template<> THEK25_API UClass* StaticClass<UK25SurvivorChainRotationStrategy>()
	{
		return UK25SurvivorChainRotationStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25SurvivorChainRotationStrategy(Z_Construct_UClass_UK25SurvivorChainRotationStrategy, &UK25SurvivorChainRotationStrategy::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25SurvivorChainRotationStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25SurvivorChainRotationStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
