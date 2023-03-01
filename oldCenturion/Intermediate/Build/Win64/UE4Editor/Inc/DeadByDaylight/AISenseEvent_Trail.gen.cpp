// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AISenseEvent_Trail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent_Trail() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISenseEvent_Trail_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISenseEvent_Trail();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITrailEvent();
// End Cross Module References
	void UAISenseEvent_Trail::StaticRegisterNativesUAISenseEvent_Trail()
	{
	}
	UClass* Z_Construct_UClass_UAISenseEvent_Trail_NoRegister()
	{
		return UAISenseEvent_Trail::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseEvent_Trail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseEvent_Trail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_Trail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AISenseEvent_Trail.h" },
		{ "ModuleRelativePath", "Public/AISenseEvent_Trail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_Trail_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "AISenseEvent_Trail" },
		{ "ModuleRelativePath", "Public/AISenseEvent_Trail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseEvent_Trail_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseEvent_Trail, Event), Z_Construct_UScriptStruct_FAITrailEvent, METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_Trail_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Trail_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseEvent_Trail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseEvent_Trail_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseEvent_Trail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseEvent_Trail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseEvent_Trail_Statics::ClassParams = {
		&UAISenseEvent_Trail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseEvent_Trail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Trail_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_Trail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Trail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseEvent_Trail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseEvent_Trail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseEvent_Trail, 1232092681);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAISenseEvent_Trail>()
	{
		return UAISenseEvent_Trail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseEvent_Trail(Z_Construct_UClass_UAISenseEvent_Trail, &UAISenseEvent_Trail::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAISenseEvent_Trail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent_Trail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
