// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_IsInteractionAvailable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsInteractionAvailable() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsInteractionAvailable();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EIsInteractionAvailableOnFilter();
// End Cross Module References
	void UBTDecorator_IsInteractionAvailable::StaticRegisterNativesUBTDecorator_IsInteractionAvailable()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_NoRegister()
	{
		return UBTDecorator_IsInteractionAvailable::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailIfNotPerformingInteraction_MetaData[];
#endif
		static void NewProp_FailIfNotPerformingInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FailIfNotPerformingInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailIfAnotherOngoingInteraction_MetaData[];
#endif
		static void NewProp_FailIfAnotherOngoingInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FailIfAnotherOngoingInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnFilter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnFilter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractionIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractionIds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_IsInteractionAvailable.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsInteractionAvailable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfNotPerformingInteraction_MetaData[] = {
		{ "Category", "BTDecorator_IsInteractionAvailable" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsInteractionAvailable.h" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfNotPerformingInteraction_SetBit(void* Obj)
	{
		((UBTDecorator_IsInteractionAvailable*)Obj)->FailIfNotPerformingInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfNotPerformingInteraction = { "FailIfNotPerformingInteraction", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTDecorator_IsInteractionAvailable), &Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfNotPerformingInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfNotPerformingInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfNotPerformingInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfAnotherOngoingInteraction_MetaData[] = {
		{ "Category", "BTDecorator_IsInteractionAvailable" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsInteractionAvailable.h" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfAnotherOngoingInteraction_SetBit(void* Obj)
	{
		((UBTDecorator_IsInteractionAvailable*)Obj)->FailIfAnotherOngoingInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfAnotherOngoingInteraction = { "FailIfAnotherOngoingInteraction", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTDecorator_IsInteractionAvailable), &Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfAnotherOngoingInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfAnotherOngoingInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfAnotherOngoingInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_OnFilter_MetaData[] = {
		{ "Category", "BTDecorator_IsInteractionAvailable" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsInteractionAvailable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_OnFilter = { "OnFilter", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsInteractionAvailable, OnFilter), Z_Construct_UEnum_DBDBots_EIsInteractionAvailableOnFilter, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_OnFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_OnFilter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_OnFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_InteractionIds_MetaData[] = {
		{ "Category", "BTDecorator_IsInteractionAvailable" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsInteractionAvailable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_InteractionIds = { "InteractionIds", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsInteractionAvailable, InteractionIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_InteractionIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_InteractionIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_InteractionIds_Inner = { "InteractionIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfNotPerformingInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_FailIfAnotherOngoingInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_OnFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_OnFilter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_InteractionIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::NewProp_InteractionIds_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsInteractionAvailable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::ClassParams = {
		&UBTDecorator_IsInteractionAvailable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsInteractionAvailable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsInteractionAvailable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsInteractionAvailable, 1231089751);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_IsInteractionAvailable>()
	{
		return UBTDecorator_IsInteractionAvailable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsInteractionAvailable(Z_Construct_UClass_UBTDecorator_IsInteractionAvailable, &UBTDecorator_IsInteractionAvailable::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_IsInteractionAvailable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsInteractionAvailable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
