// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/BetterTogether.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBetterTogether() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBetterTogether_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBetterTogether();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBetterTogether::execOnStartedGeneratorRepair)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameplayTag);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartedGeneratorRepair(Z_Param_gameplayTag,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UBetterTogether::StaticRegisterNativesUBetterTogether()
	{
		UClass* Class = UBetterTogether::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStartedGeneratorRepair", &UBetterTogether::execOnStartedGeneratorRepair },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics
	{
		struct BetterTogether_eventOnStartedGeneratorRepair_Parms
		{
			FGameplayTag gameplayTag;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameplayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BetterTogether_eventOnStartedGeneratorRepair_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameplayTag = { "gameplayTag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BetterTogether_eventOnStartedGeneratorRepair_Parms, gameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameplayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::NewProp_gameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterTogether.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBetterTogether, nullptr, "OnStartedGeneratorRepair", nullptr, nullptr, sizeof(BetterTogether_eventOnStartedGeneratorRepair_Parms), Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBetterTogether_NoRegister()
	{
		return UBetterTogether::StaticClass();
	}
	struct Z_Construct_UClass_UBetterTogether_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__durationByLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__durationByLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__genToReveal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__genToReveal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__affectedCampers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__affectedCampers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__affectedCampers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevealDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RevealDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldRevealSurvivors_MetaData[];
#endif
		static void NewProp_ShouldRevealSurvivors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldRevealSurvivors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldRevealKiller_MetaData[];
#endif
		static void NewProp_ShouldRevealKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldRevealKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBetterTogether_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBetterTogether_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterTogether_OnStartedGeneratorRepair, "OnStartedGeneratorRepair" }, // 2149355368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBetterTogether_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BetterTogether.h" },
		{ "ModuleRelativePath", "Public/BetterTogether.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBetterTogether_Statics::NewProp__durationByLevel_MetaData[] = {
		{ "Category", "BetterTogether" },
		{ "ModuleRelativePath", "Public/BetterTogether.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBetterTogether_Statics::NewProp__durationByLevel = { "_durationByLevel", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_durationByLevel, UBetterTogether), STRUCT_OFFSET(UBetterTogether, _durationByLevel), METADATA_PARAMS(Z_Construct_UClass_UBetterTogether_Statics::NewProp__durationByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBetterTogether_Statics::NewProp__durationByLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBetterTogether_Statics::NewProp__genToReveal_MetaData[] = {
		{ "ModuleRelativePath", "Public/BetterTogether.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterTogether_Statics::NewProp__genToReveal = { "_genToReveal", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBetterTogether, _genToReveal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBetterTogether_Statics::NewProp__genToReveal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBetterTogether_Statics::NewProp__genToReveal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBetterTogether_Statics::NewProp__affectedCampers_MetaData[] = {
		{ "ModuleRelativePath", "Public/BetterTogether.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBetterTogether_Statics::NewProp__affectedCampers = { "_affectedCampers", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBetterTogether, _affectedCampers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBetterTogether_Statics::NewProp__affectedCampers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBetterTogether_Statics::NewProp__affectedCampers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterTogether_Statics::NewProp__affectedCampers_Inner = { "_affectedCampers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBetterTogether_Statics::NewProp_RevealDistance_MetaData[] = {
		{ "Category", "BetterTogether" },
		{ "ModuleRelativePath", "Public/BetterTogether.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBetterTogether_Statics::NewProp_RevealDistance = { "RevealDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBetterTogether, RevealDistance), METADATA_PARAMS(Z_Construct_UClass_UBetterTogether_Statics::NewProp_RevealDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBetterTogether_Statics::NewProp_RevealDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealSurvivors_MetaData[] = {
		{ "Category", "BetterTogether" },
		{ "ModuleRelativePath", "Public/BetterTogether.h" },
	};
#endif
	void Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealSurvivors_SetBit(void* Obj)
	{
		((UBetterTogether*)Obj)->ShouldRevealSurvivors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealSurvivors = { "ShouldRevealSurvivors", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBetterTogether), &Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealSurvivors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealSurvivors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealKiller_MetaData[] = {
		{ "Category", "BetterTogether" },
		{ "ModuleRelativePath", "Public/BetterTogether.h" },
	};
#endif
	void Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealKiller_SetBit(void* Obj)
	{
		((UBetterTogether*)Obj)->ShouldRevealKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealKiller = { "ShouldRevealKiller", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBetterTogether), &Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealKiller_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterTogether_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterTogether_Statics::NewProp__durationByLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterTogether_Statics::NewProp__genToReveal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterTogether_Statics::NewProp__affectedCampers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterTogether_Statics::NewProp__affectedCampers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterTogether_Statics::NewProp_RevealDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterTogether_Statics::NewProp_ShouldRevealKiller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBetterTogether_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterTogether>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBetterTogether_Statics::ClassParams = {
		&UBetterTogether::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBetterTogether_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBetterTogether_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBetterTogether_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBetterTogether_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBetterTogether()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBetterTogether_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBetterTogether, 1106491176);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UBetterTogether>()
	{
		return UBetterTogether::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBetterTogether(Z_Construct_UClass_UBetterTogether, &UBetterTogether::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UBetterTogether"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterTogether);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
