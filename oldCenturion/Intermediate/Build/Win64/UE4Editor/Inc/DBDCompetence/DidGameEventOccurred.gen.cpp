// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DidGameEventOccurred.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDidGameEventOccurred() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDidGameEventOccurred_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDidGameEventOccurred();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UDidGameEventOccurred::StaticRegisterNativesUDidGameEventOccurred()
	{
	}
	UClass* Z_Construct_UClass_UDidGameEventOccurred_NoRegister()
	{
		return UDidGameEventOccurred::StaticClass();
	}
	struct Z_Construct_UClass_UDidGameEventOccurred_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDidGameEventOccurred_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDidGameEventOccurred_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DidGameEventOccurred.h" },
		{ "ModuleRelativePath", "Public/DidGameEventOccurred.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDidGameEventOccurred_Statics::NewProp_EventTag_MetaData[] = {
		{ "Category", "DidGameEventOccurred" },
		{ "ModuleRelativePath", "Public/DidGameEventOccurred.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDidGameEventOccurred_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDidGameEventOccurred, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UDidGameEventOccurred_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDidGameEventOccurred_Statics::NewProp_EventTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDidGameEventOccurred_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidGameEventOccurred_Statics::NewProp_EventTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDidGameEventOccurred_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDidGameEventOccurred>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDidGameEventOccurred_Statics::ClassParams = {
		&UDidGameEventOccurred::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDidGameEventOccurred_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDidGameEventOccurred_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDidGameEventOccurred_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDidGameEventOccurred_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDidGameEventOccurred()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDidGameEventOccurred_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDidGameEventOccurred, 235905143);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDidGameEventOccurred>()
	{
		return UDidGameEventOccurred::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDidGameEventOccurred(Z_Construct_UClass_UDidGameEventOccurred, &UDidGameEventOccurred::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDidGameEventOccurred"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDidGameEventOccurred);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
