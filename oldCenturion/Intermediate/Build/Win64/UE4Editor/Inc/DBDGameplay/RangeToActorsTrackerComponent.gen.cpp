// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/RangeToActorsTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeToActorsTrackerComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URangeToActorsTrackerComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void URangeToActorsTrackerComponent::StaticRegisterNativesURangeToActorsTrackerComponent()
	{
		UClass* Class = URangeToActorsTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &URangeToActorsTrackerComponent::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URangeToActorsTrackerComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangeToActorsTrackerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangeToActorsTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeToActorsTrackerComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeToActorsTrackerComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangeToActorsTrackerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeToActorsTrackerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangeToActorsTrackerComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangeToActorsTrackerComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URangeToActorsTrackerComponent_NoRegister()
	{
		return URangeToActorsTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_URangeToActorsTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rangeTrackers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__rangeTrackers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rangeTrackers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URangeToActorsTrackerComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1600399339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RangeToActorsTrackerComponent.h" },
		{ "ModuleRelativePath", "Public/RangeToActorsTrackerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::NewProp__rangeTrackers_MetaData[] = {
		{ "Category", "RangeToActorsTrackerComponent" },
		{ "ModuleRelativePath", "Public/RangeToActorsTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::NewProp__rangeTrackers = { "_rangeTrackers", nullptr, (EPropertyFlags)0x0020080002010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangeToActorsTrackerComponent, _rangeTrackers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::NewProp__rangeTrackers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::NewProp__rangeTrackers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::NewProp__rangeTrackers_Inner = { "_rangeTrackers", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URangeToActorsTrackerStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::NewProp__rangeTrackers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::NewProp__rangeTrackers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangeToActorsTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::ClassParams = {
		&URangeToActorsTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URangeToActorsTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URangeToActorsTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URangeToActorsTrackerComponent, 3122448373);
	template<> DBDGAMEPLAY_API UClass* StaticClass<URangeToActorsTrackerComponent>()
	{
		return URangeToActorsTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URangeToActorsTrackerComponent(Z_Construct_UClass_URangeToActorsTrackerComponent, &URangeToActorsTrackerComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("URangeToActorsTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URangeToActorsTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
