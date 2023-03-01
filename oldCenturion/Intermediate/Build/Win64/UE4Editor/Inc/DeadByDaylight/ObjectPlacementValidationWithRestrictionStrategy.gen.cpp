// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ObjectPlacementValidationWithRestrictionStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPlacementValidationWithRestrictionStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultObjectPlacementValidationStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URestrictedPlacementAreaStrategy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UObjectPlacementValidationWithRestrictionStrategy::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UObjectPlacementValidationWithRestrictionStrategy::StaticRegisterNativesUObjectPlacementValidationWithRestrictionStrategy()
	{
		UClass* Class = UObjectPlacementValidationWithRestrictionStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UObjectPlacementValidationWithRestrictionStrategy::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectPlacementValidationWithRestrictionStrategy_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacementValidationWithRestrictionStrategy_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPlacementValidationWithRestrictionStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPlacementValidationWithRestrictionStrategy_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacementValidationWithRestrictionStrategy_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacementValidationWithRestrictionStrategy_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPlacementValidationWithRestrictionStrategy_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPlacementValidationWithRestrictionStrategy_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_NoRegister()
	{
		return UObjectPlacementValidationWithRestrictionStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictedAreas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__restrictedAreas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__restrictedAreas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultObjectPlacementValidationStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectPlacementValidationWithRestrictionStrategy_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 2857895052
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectPlacementValidationWithRestrictionStrategy.h" },
		{ "ModuleRelativePath", "Public/ObjectPlacementValidationWithRestrictionStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::NewProp__restrictedAreas_MetaData[] = {
		{ "Category", "ObjectPlacementValidationWithRestrictionStrategy" },
		{ "ModuleRelativePath", "Public/ObjectPlacementValidationWithRestrictionStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::NewProp__restrictedAreas = { "_restrictedAreas", nullptr, (EPropertyFlags)0x0040000002010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPlacementValidationWithRestrictionStrategy, _restrictedAreas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::NewProp__restrictedAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::NewProp__restrictedAreas_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::NewProp__restrictedAreas_Inner = { "_restrictedAreas", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URestrictedPlacementAreaStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::NewProp__restrictedAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::NewProp__restrictedAreas_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPlacementValidationWithRestrictionStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::ClassParams = {
		&UObjectPlacementValidationWithRestrictionStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPlacementValidationWithRestrictionStrategy, 592298081);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UObjectPlacementValidationWithRestrictionStrategy>()
	{
		return UObjectPlacementValidationWithRestrictionStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPlacementValidationWithRestrictionStrategy(Z_Construct_UClass_UObjectPlacementValidationWithRestrictionStrategy, &UObjectPlacementValidationWithRestrictionStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UObjectPlacementValidationWithRestrictionStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPlacementValidationWithRestrictionStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
