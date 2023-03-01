// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/RangeToActorsTrackerStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeToActorsTrackerStrategy() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(URangeToActorsTrackerStrategy::execOnInRangeToTrackedActorsChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInRangeToTrackedActorsChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	void URangeToActorsTrackerStrategy::StaticRegisterNativesURangeToActorsTrackerStrategy()
	{
		UClass* Class = URangeToActorsTrackerStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInRangeToTrackedActorsChanged", &URangeToActorsTrackerStrategy::execOnInRangeToTrackedActorsChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics
	{
		struct RangeToActorsTrackerStrategy_eventOnInRangeToTrackedActorsChanged_Parms
		{
			bool inRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((RangeToActorsTrackerStrategy_eventOnInRangeToTrackedActorsChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RangeToActorsTrackerStrategy_eventOnInRangeToTrackedActorsChanged_Parms), &Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangeToActorsTrackerStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeToActorsTrackerStrategy, nullptr, "OnInRangeToTrackedActorsChanged", nullptr, nullptr, sizeof(RangeToActorsTrackerStrategy_eventOnInRangeToTrackedActorsChanged_Parms), Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy_NoRegister()
	{
		return URangeToActorsTrackerStrategy::StaticClass();
	}
	struct Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged, "OnInRangeToTrackedActorsChanged" }, // 3731216582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RangeToActorsTrackerStrategy.h" },
		{ "ModuleRelativePath", "Public/RangeToActorsTrackerStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::NewProp__range_MetaData[] = {
		{ "Category", "RangeToActorsTrackerStrategy" },
		{ "ModuleRelativePath", "Public/RangeToActorsTrackerStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangeToActorsTrackerStrategy, _range), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::NewProp__range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::NewProp__range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::NewProp__range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangeToActorsTrackerStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::ClassParams = {
		&URangeToActorsTrackerStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URangeToActorsTrackerStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URangeToActorsTrackerStrategy, 1600693066);
	template<> DBDGAMEPLAY_API UClass* StaticClass<URangeToActorsTrackerStrategy>()
	{
		return URangeToActorsTrackerStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URangeToActorsTrackerStrategy(Z_Construct_UClass_URangeToActorsTrackerStrategy, &URangeToActorsTrackerStrategy::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("URangeToActorsTrackerStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URangeToActorsTrackerStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
