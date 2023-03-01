// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPowerStateHolding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPowerStateHolding() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateHolding_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateHolding();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerState();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryInteractionProperties();
// End Cross Module References
	void UBlightPowerStateHolding::StaticRegisterNativesUBlightPowerStateHolding()
	{
	}
	UClass* Z_Construct_UClass_UBlightPowerStateHolding_NoRegister()
	{
		return UBlightPowerStateHolding::StaticClass();
	}
	struct Z_Construct_UClass_UBlightPowerStateHolding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dashSpeedForProjection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__dashSpeedForProjection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowNavigation_MetaData[];
#endif
		static void NewProp__allowNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryInteractionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__secondaryInteractionProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightPowerStateHolding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlightPowerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateHolding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightPowerStateHolding.h" },
		{ "ModuleRelativePath", "Public/BlightPowerStateHolding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__dashSpeedForProjection_MetaData[] = {
		{ "Category", "BlightPowerStateHolding" },
		{ "ModuleRelativePath", "Public/BlightPowerStateHolding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__dashSpeedForProjection = { "_dashSpeedForProjection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateHolding, _dashSpeedForProjection), METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__dashSpeedForProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__dashSpeedForProjection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__allowNavigation_MetaData[] = {
		{ "Category", "BlightPowerStateHolding" },
		{ "ModuleRelativePath", "Public/BlightPowerStateHolding.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__allowNavigation_SetBit(void* Obj)
	{
		((UBlightPowerStateHolding*)Obj)->_allowNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__allowNavigation = { "_allowNavigation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerStateHolding), &Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__allowNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__allowNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__allowNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__secondaryInteractionProperties_MetaData[] = {
		{ "Category", "BlightPowerStateHolding" },
		{ "ModuleRelativePath", "Public/BlightPowerStateHolding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__secondaryInteractionProperties = { "_secondaryInteractionProperties", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateHolding, _secondaryInteractionProperties), Z_Construct_UScriptStruct_FSecondaryInteractionProperties, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__secondaryInteractionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__secondaryInteractionProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightPowerStateHolding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__dashSpeedForProjection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__allowNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateHolding_Statics::NewProp__secondaryInteractionProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightPowerStateHolding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightPowerStateHolding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightPowerStateHolding_Statics::ClassParams = {
		&UBlightPowerStateHolding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlightPowerStateHolding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateHolding_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateHolding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateHolding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightPowerStateHolding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightPowerStateHolding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightPowerStateHolding, 989034334);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightPowerStateHolding>()
	{
		return UBlightPowerStateHolding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightPowerStateHolding(Z_Construct_UClass_UBlightPowerStateHolding, &UBlightPowerStateHolding::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightPowerStateHolding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightPowerStateHolding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
