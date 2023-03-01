// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EscapeRequirementTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeRequirementTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEscapeRequirementTracker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEscapeRequirementTracker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameState_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEscapeRequirementTracker::execOnGameEventDispatched)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameEventDispatched(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UEscapeRequirementTracker::StaticRegisterNativesUEscapeRequirementTracker()
	{
		UClass* Class = UEscapeRequirementTracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameEventDispatched", &UEscapeRequirementTracker::execOnGameEventDispatched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics
	{
		struct EscapeRequirementTracker_eventOnGameEventDispatched_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeRequirementTracker_eventOnGameEventDispatched_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeRequirementTracker_eventOnGameEventDispatched_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeRequirementTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeRequirementTracker, nullptr, "OnGameEventDispatched", nullptr, nullptr, sizeof(EscapeRequirementTracker_eventOnGameEventDispatched_Parms), Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEscapeRequirementTracker_NoRegister()
	{
		return UEscapeRequirementTracker::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeRequirementTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dbdGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dbdGameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapeGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__escapeGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__escapeGenerators_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeRequirementTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEscapeRequirementTracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEscapeRequirementTracker_OnGameEventDispatched, "OnGameEventDispatched" }, // 1495572898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeRequirementTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscapeRequirementTracker.h" },
		{ "ModuleRelativePath", "Public/EscapeRequirementTracker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__dbdGameState_MetaData[] = {
		{ "ModuleRelativePath", "Public/EscapeRequirementTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__dbdGameState = { "_dbdGameState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeRequirementTracker, _dbdGameState), Z_Construct_UClass_ADBDGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__dbdGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__dbdGameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__escapeGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/EscapeRequirementTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__escapeGenerators = { "_escapeGenerators", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeRequirementTracker, _escapeGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__escapeGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__escapeGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__escapeGenerators_Inner = { "_escapeGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEscapeRequirementTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__dbdGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__escapeGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeRequirementTracker_Statics::NewProp__escapeGenerators_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeRequirementTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeRequirementTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEscapeRequirementTracker_Statics::ClassParams = {
		&UEscapeRequirementTracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEscapeRequirementTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeRequirementTracker_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEscapeRequirementTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeRequirementTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeRequirementTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEscapeRequirementTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEscapeRequirementTracker, 3656131575);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEscapeRequirementTracker>()
	{
		return UEscapeRequirementTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEscapeRequirementTracker(Z_Construct_UClass_UEscapeRequirementTracker, &UEscapeRequirementTracker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEscapeRequirementTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeRequirementTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
