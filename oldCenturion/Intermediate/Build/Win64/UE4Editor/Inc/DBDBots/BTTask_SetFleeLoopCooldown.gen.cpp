// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_SetFleeLoopCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetFleeLoopCooldown() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_SetFleeLoopCooldown();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UBTTask_SetFleeLoopCooldown::StaticRegisterNativesUBTTask_SetFleeLoopCooldown()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_NoRegister()
	{
		return UBTTask_SetFleeLoopCooldown::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_SetFleeLoopCooldown.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetFleeLoopCooldown.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "BTTask_SetFleeLoopCooldown" },
		{ "ModuleRelativePath", "Public/BTTask_SetFleeLoopCooldown.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetFleeLoopCooldown, Duration), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetFleeLoopCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::ClassParams = {
		&UBTTask_SetFleeLoopCooldown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetFleeLoopCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_SetFleeLoopCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_SetFleeLoopCooldown, 3530946165);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_SetFleeLoopCooldown>()
	{
		return UBTTask_SetFleeLoopCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SetFleeLoopCooldown(Z_Construct_UClass_UBTTask_SetFleeLoopCooldown, &UBTTask_SetFleeLoopCooldown::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_SetFleeLoopCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetFleeLoopCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
