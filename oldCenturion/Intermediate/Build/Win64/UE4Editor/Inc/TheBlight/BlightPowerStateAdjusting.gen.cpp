// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPowerStateAdjusting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPowerStateAdjusting() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateAdjusting_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateAdjusting();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerState();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UBlightPowerStateAdjusting::StaticRegisterNativesUBlightPowerStateAdjusting()
	{
	}
	UClass* Z_Construct_UClass_UBlightPowerStateAdjusting_NoRegister()
	{
		return UBlightPowerStateAdjusting::StaticClass();
	}
	struct Z_Construct_UClass_UBlightPowerStateAdjusting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistanceForSurvivorFacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxDistanceForSurvivorFacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__smashBreakables_MetaData[];
#endif
		static void NewProp__smashBreakables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__smashBreakables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowNavigation_MetaData[];
#endif
		static void NewProp__allowNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bounceAwayFromCollision_MetaData[];
#endif
		static void NewProp__bounceAwayFromCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bounceAwayFromCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__adjustRotationOnCollision_MetaData[];
#endif
		static void NewProp__adjustRotationOnCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__adjustRotationOnCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlightPowerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightPowerStateAdjusting.h" },
		{ "ModuleRelativePath", "Public/BlightPowerStateAdjusting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__maxDistanceForSurvivorFacing_MetaData[] = {
		{ "Category", "BlightPowerStateAdjusting" },
		{ "ModuleRelativePath", "Public/BlightPowerStateAdjusting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__maxDistanceForSurvivorFacing = { "_maxDistanceForSurvivorFacing", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateAdjusting, _maxDistanceForSurvivorFacing), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__maxDistanceForSurvivorFacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__maxDistanceForSurvivorFacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__smashBreakables_MetaData[] = {
		{ "Category", "BlightPowerStateAdjusting" },
		{ "ModuleRelativePath", "Public/BlightPowerStateAdjusting.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__smashBreakables_SetBit(void* Obj)
	{
		((UBlightPowerStateAdjusting*)Obj)->_smashBreakables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__smashBreakables = { "_smashBreakables", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerStateAdjusting), &Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__smashBreakables_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__smashBreakables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__smashBreakables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__allowNavigation_MetaData[] = {
		{ "Category", "BlightPowerStateAdjusting" },
		{ "ModuleRelativePath", "Public/BlightPowerStateAdjusting.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__allowNavigation_SetBit(void* Obj)
	{
		((UBlightPowerStateAdjusting*)Obj)->_allowNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__allowNavigation = { "_allowNavigation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerStateAdjusting), &Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__allowNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__allowNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__allowNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__bounceAwayFromCollision_MetaData[] = {
		{ "Category", "BlightPowerStateAdjusting" },
		{ "ModuleRelativePath", "Public/BlightPowerStateAdjusting.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__bounceAwayFromCollision_SetBit(void* Obj)
	{
		((UBlightPowerStateAdjusting*)Obj)->_bounceAwayFromCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__bounceAwayFromCollision = { "_bounceAwayFromCollision", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerStateAdjusting), &Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__bounceAwayFromCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__bounceAwayFromCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__bounceAwayFromCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__adjustRotationOnCollision_MetaData[] = {
		{ "Category", "BlightPowerStateAdjusting" },
		{ "ModuleRelativePath", "Public/BlightPowerStateAdjusting.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__adjustRotationOnCollision_SetBit(void* Obj)
	{
		((UBlightPowerStateAdjusting*)Obj)->_adjustRotationOnCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__adjustRotationOnCollision = { "_adjustRotationOnCollision", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerStateAdjusting), &Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__adjustRotationOnCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__adjustRotationOnCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__adjustRotationOnCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__maxDistanceForSurvivorFacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__smashBreakables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__allowNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__bounceAwayFromCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::NewProp__adjustRotationOnCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightPowerStateAdjusting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::ClassParams = {
		&UBlightPowerStateAdjusting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightPowerStateAdjusting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightPowerStateAdjusting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightPowerStateAdjusting, 2462310303);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightPowerStateAdjusting>()
	{
		return UBlightPowerStateAdjusting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightPowerStateAdjusting(Z_Construct_UClass_UBlightPowerStateAdjusting, &UBlightPowerStateAdjusting::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightPowerStateAdjusting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightPowerStateAdjusting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
