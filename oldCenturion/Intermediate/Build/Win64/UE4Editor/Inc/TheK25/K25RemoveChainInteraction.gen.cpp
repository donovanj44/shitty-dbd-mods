// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25RemoveChainInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25RemoveChainInteraction() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25RemoveChainInteraction_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25RemoveChainInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UK25RemoveChainInteraction::StaticRegisterNativesUK25RemoveChainInteraction()
	{
	}
	UClass* Z_Construct_UClass_UK25RemoveChainInteraction_NoRegister()
	{
		return UK25RemoveChainInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UK25RemoveChainInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAttachmentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__chainAttachmentComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainBeingRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__chainBeingRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedSurvivorChainAttachmentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cachedSurvivorChainAttachmentComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionTimePerChainsAttached_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionTimePerChainsAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25RemoveChainInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25RemoveChainInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "K25RemoveChainInteraction.h" },
		{ "ModuleRelativePath", "Public/K25RemoveChainInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainAttachmentComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25RemoveChainInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainAttachmentComponent = { "_chainAttachmentComponent", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25RemoveChainInteraction, _chainAttachmentComponent), Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainAttachmentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainAttachmentComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainBeingRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25RemoveChainInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainBeingRemoved = { "_chainBeingRemoved", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25RemoveChainInteraction, _chainBeingRemoved), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainBeingRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainBeingRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__cachedSurvivorChainAttachmentComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25RemoveChainInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__cachedSurvivorChainAttachmentComponent = { "_cachedSurvivorChainAttachmentComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25RemoveChainInteraction, _cachedSurvivorChainAttachmentComponent), Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__cachedSurvivorChainAttachmentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__cachedSurvivorChainAttachmentComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__interactionTimePerChainsAttached_MetaData[] = {
		{ "Category", "K25RemoveChainInteraction" },
		{ "ModuleRelativePath", "Public/K25RemoveChainInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__interactionTimePerChainsAttached = { "_interactionTimePerChainsAttached", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25RemoveChainInteraction, _interactionTimePerChainsAttached), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__interactionTimePerChainsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__interactionTimePerChainsAttached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25RemoveChainInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainAttachmentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__chainBeingRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__cachedSurvivorChainAttachmentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25RemoveChainInteraction_Statics::NewProp__interactionTimePerChainsAttached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25RemoveChainInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25RemoveChainInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25RemoveChainInteraction_Statics::ClassParams = {
		&UK25RemoveChainInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25RemoveChainInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25RemoveChainInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25RemoveChainInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25RemoveChainInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25RemoveChainInteraction, 1810573761);
	template<> THEK25_API UClass* StaticClass<UK25RemoveChainInteraction>()
	{
		return UK25RemoveChainInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25RemoveChainInteraction(Z_Construct_UClass_UK25RemoveChainInteraction, &UK25RemoveChainInteraction::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25RemoveChainInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25RemoveChainInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
