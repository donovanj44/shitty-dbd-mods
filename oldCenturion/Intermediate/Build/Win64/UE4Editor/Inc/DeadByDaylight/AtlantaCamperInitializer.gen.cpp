// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaCamperInitializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaCamperInitializer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaCamperInitializer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaCamperInitializer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UAtlantaCamperInitializer::StaticRegisterNativesUAtlantaCamperInitializer()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaCamperInitializer_NoRegister()
	{
		return UAtlantaCamperInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaCamperInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeartbeatOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeartbeatOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaCamperInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaCamperInitializer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtlantaCamperInitializer.h" },
		{ "ModuleRelativePath", "Public/AtlantaCamperInitializer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaCamperInitializer_Statics::NewProp_HeartbeatOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtlantaCamperInitializer" },
		{ "ModuleRelativePath", "Public/AtlantaCamperInitializer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtlantaCamperInitializer_Statics::NewProp_HeartbeatOffset = { "HeartbeatOffset", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaCamperInitializer, HeartbeatOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAtlantaCamperInitializer_Statics::NewProp_HeartbeatOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCamperInitializer_Statics::NewProp_HeartbeatOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaCamperInitializer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaCamperInitializer_Statics::NewProp_HeartbeatOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaCamperInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaCamperInitializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaCamperInitializer_Statics::ClassParams = {
		&UAtlantaCamperInitializer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtlantaCamperInitializer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCamperInitializer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaCamperInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCamperInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaCamperInitializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaCamperInitializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaCamperInitializer, 2343500933);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaCamperInitializer>()
	{
		return UAtlantaCamperInitializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaCamperInitializer(Z_Construct_UClass_UAtlantaCamperInitializer, &UAtlantaCamperInitializer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaCamperInitializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaCamperInitializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
