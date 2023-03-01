// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActorSpawnerRandomizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawnerRandomizer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawnerRandomizer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawnerRandomizer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectRandomizer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnerElement();
// End Cross Module References
	void UActorSpawnerRandomizer::StaticRegisterNativesUActorSpawnerRandomizer()
	{
	}
	UClass* Z_Construct_UClass_UActorSpawnerRandomizer_NoRegister()
	{
		return UActorSpawnerRandomizer::StaticClass();
	}
	struct Z_Construct_UClass_UActorSpawnerRandomizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivatedSpawnerContentLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeactivatedSpawnerContentLists;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeactivatedSpawnerContentLists_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedSpawnerContentLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActivatedSpawnerContentLists;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivatedSpawnerContentLists_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSpawnerRandomizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectRandomizer,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerRandomizer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorSpawnerRandomizer.h" },
		{ "ModuleRelativePath", "Public/ActorSpawnerRandomizer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_DeactivatedSpawnerContentLists_MetaData[] = {
		{ "Category", "ActorSpawnerRandomizer" },
		{ "ModuleRelativePath", "Public/ActorSpawnerRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_DeactivatedSpawnerContentLists = { "DeactivatedSpawnerContentLists", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawnerRandomizer, DeactivatedSpawnerContentLists), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_DeactivatedSpawnerContentLists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_DeactivatedSpawnerContentLists_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_DeactivatedSpawnerContentLists_Inner = { "DeactivatedSpawnerContentLists", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnerElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_ActivatedSpawnerContentLists_MetaData[] = {
		{ "Category", "ActorSpawnerRandomizer" },
		{ "ModuleRelativePath", "Public/ActorSpawnerRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_ActivatedSpawnerContentLists = { "ActivatedSpawnerContentLists", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawnerRandomizer, ActivatedSpawnerContentLists), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_ActivatedSpawnerContentLists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_ActivatedSpawnerContentLists_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_ActivatedSpawnerContentLists_Inner = { "ActivatedSpawnerContentLists", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnerElement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSpawnerRandomizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_DeactivatedSpawnerContentLists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_DeactivatedSpawnerContentLists_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_ActivatedSpawnerContentLists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerRandomizer_Statics::NewProp_ActivatedSpawnerContentLists_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSpawnerRandomizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSpawnerRandomizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorSpawnerRandomizer_Statics::ClassParams = {
		&UActorSpawnerRandomizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorSpawnerRandomizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerRandomizer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerRandomizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerRandomizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSpawnerRandomizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorSpawnerRandomizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSpawnerRandomizer, 139405297);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActorSpawnerRandomizer>()
	{
		return UActorSpawnerRandomizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSpawnerRandomizer(Z_Construct_UClass_UActorSpawnerRandomizer, &UActorSpawnerRandomizer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActorSpawnerRandomizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSpawnerRandomizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
