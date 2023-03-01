// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_SetIsChased.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetIsChased() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_SetIsChased_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_SetIsChased();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UBTTask_SetIsChased::StaticRegisterNativesUBTTask_SetIsChased()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SetIsChased_NoRegister()
	{
		return UBTTask_SetIsChased::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetIsChased_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToSetValue_MetaData[];
#endif
		static void NewProp_ToSetValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToSetValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetIsChased_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetIsChased_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_SetIsChased.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetIsChased.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetIsChased_Statics::NewProp_ToSetValue_MetaData[] = {
		{ "Category", "BTTask_SetIsChased" },
		{ "ModuleRelativePath", "Public/BTTask_SetIsChased.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_SetIsChased_Statics::NewProp_ToSetValue_SetBit(void* Obj)
	{
		((UBTTask_SetIsChased*)Obj)->ToSetValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_SetIsChased_Statics::NewProp_ToSetValue = { "ToSetValue", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_SetIsChased), &Z_Construct_UClass_UBTTask_SetIsChased_Statics::NewProp_ToSetValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetIsChased_Statics::NewProp_ToSetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetIsChased_Statics::NewProp_ToSetValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetIsChased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetIsChased_Statics::NewProp_ToSetValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetIsChased_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetIsChased>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetIsChased_Statics::ClassParams = {
		&UBTTask_SetIsChased::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_SetIsChased_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetIsChased_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetIsChased_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetIsChased_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetIsChased()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_SetIsChased_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_SetIsChased, 3449086377);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_SetIsChased>()
	{
		return UBTTask_SetIsChased::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SetIsChased(Z_Construct_UClass_UBTTask_SetIsChased, &UBTTask_SetIsChased::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_SetIsChased"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetIsChased);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
