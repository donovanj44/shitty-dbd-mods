// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/HighestLevelAndClosestEffectCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighestLevelAndClosestEffectCondition() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHighestLevelAndClosestEffectCondition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHighestLevelAndClosestEffectCondition::execInitEffectArrays)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_effectIDLevel1);
		P_GET_PROPERTY(FNameProperty,Z_Param_effectIDLevel2);
		P_GET_PROPERTY(FNameProperty,Z_Param_effectIDLevel3);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitEffectArrays(Z_Param_effectIDLevel1,Z_Param_effectIDLevel2,Z_Param_effectIDLevel3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHighestLevelAndClosestEffectCondition::execSetCurrentEffectLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentEffectLevel(Z_Param_level);
		P_NATIVE_END;
	}
	void UHighestLevelAndClosestEffectCondition::StaticRegisterNativesUHighestLevelAndClosestEffectCondition()
	{
		UClass* Class = UHighestLevelAndClosestEffectCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitEffectArrays", &UHighestLevelAndClosestEffectCondition::execInitEffectArrays },
			{ "SetCurrentEffectLevel", &UHighestLevelAndClosestEffectCondition::execSetCurrentEffectLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics
	{
		struct HighestLevelAndClosestEffectCondition_eventInitEffectArrays_Parms
		{
			FName effectIDLevel1;
			FName effectIDLevel2;
			FName effectIDLevel3;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_effectIDLevel3;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_effectIDLevel2;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_effectIDLevel1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::NewProp_effectIDLevel3 = { "effectIDLevel3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighestLevelAndClosestEffectCondition_eventInitEffectArrays_Parms, effectIDLevel3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::NewProp_effectIDLevel2 = { "effectIDLevel2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighestLevelAndClosestEffectCondition_eventInitEffectArrays_Parms, effectIDLevel2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::NewProp_effectIDLevel1 = { "effectIDLevel1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighestLevelAndClosestEffectCondition_eventInitEffectArrays_Parms, effectIDLevel1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::NewProp_effectIDLevel3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::NewProp_effectIDLevel2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::NewProp_effectIDLevel1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighestLevelAndClosestEffectCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighestLevelAndClosestEffectCondition, nullptr, "InitEffectArrays", nullptr, nullptr, sizeof(HighestLevelAndClosestEffectCondition_eventInitEffectArrays_Parms), Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics
	{
		struct HighestLevelAndClosestEffectCondition_eventSetCurrentEffectLevel_Parms
		{
			int32 level;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighestLevelAndClosestEffectCondition_eventSetCurrentEffectLevel_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighestLevelAndClosestEffectCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighestLevelAndClosestEffectCondition, nullptr, "SetCurrentEffectLevel", nullptr, nullptr, sizeof(HighestLevelAndClosestEffectCondition_eventSetCurrentEffectLevel_Parms), Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_NoRegister()
	{
		return UHighestLevelAndClosestEffectCondition::StaticClass();
	}
	struct Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectsLevel3_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__effectsLevel3;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__effectsLevel3_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectsLevel2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__effectsLevel2;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__effectsLevel2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectsLevel1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__effectsLevel1;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__effectsLevel1_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_InitEffectArrays, "InitEffectArrays" }, // 3620088388
		{ &Z_Construct_UFunction_UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel, "SetCurrentEffectLevel" }, // 521314675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HighestLevelAndClosestEffectCondition.h" },
		{ "ModuleRelativePath", "Public/HighestLevelAndClosestEffectCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel3_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HighestLevelAndClosestEffectCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel3 = { "_effectsLevel3", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighestLevelAndClosestEffectCondition, _effectsLevel3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel3_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel3_Inner = { "_effectsLevel3", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel2_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HighestLevelAndClosestEffectCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel2 = { "_effectsLevel2", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighestLevelAndClosestEffectCondition, _effectsLevel2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel2_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel2_Inner = { "_effectsLevel2", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel1_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HighestLevelAndClosestEffectCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel1 = { "_effectsLevel1", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighestLevelAndClosestEffectCondition, _effectsLevel1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel1_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel1_Inner = { "_effectsLevel1", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel3_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::NewProp__effectsLevel1_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighestLevelAndClosestEffectCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::ClassParams = {
		&UHighestLevelAndClosestEffectCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighestLevelAndClosestEffectCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighestLevelAndClosestEffectCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighestLevelAndClosestEffectCondition, 3086326956);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UHighestLevelAndClosestEffectCondition>()
	{
		return UHighestLevelAndClosestEffectCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighestLevelAndClosestEffectCondition(Z_Construct_UClass_UHighestLevelAndClosestEffectCondition, &UHighestLevelAndClosestEffectCondition::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UHighestLevelAndClosestEffectCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighestLevelAndClosestEffectCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
