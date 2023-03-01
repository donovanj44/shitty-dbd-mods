// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDMetaGameplay/Public/DBDEmblem_KillerChaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEmblem_KillerChaser() {}
// Cross Module References
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_KillerChaser_NoRegister();
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_KillerChaser();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEmblem();
	UPackage* Z_Construct_UPackage__Script_DBDMetaGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDRankDesignTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDEmblem_KillerChaser::execOnChaseStart)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_chasedPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChaseStart(Z_Param_chasedPlayer);
		P_NATIVE_END;
	}
	void UDBDEmblem_KillerChaser::StaticRegisterNativesUDBDEmblem_KillerChaser()
	{
		UClass* Class = UDBDEmblem_KillerChaser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChaseStart", &UDBDEmblem_KillerChaser::execOnChaseStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics
	{
		struct DBDEmblem_KillerChaser_eventOnChaseStart_Parms
		{
			ADBDPlayer* chasedPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chasedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::NewProp_chasedPlayer = { "chasedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDEmblem_KillerChaser_eventOnChaseStart_Parms, chasedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::NewProp_chasedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerChaser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDEmblem_KillerChaser, nullptr, "OnChaseStart", nullptr, nullptr, sizeof(DBDEmblem_KillerChaser_eventOnChaseStart_Parms), Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDEmblem_KillerChaser_NoRegister()
	{
		return UDBDEmblem_KillerChaser::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rankTunablesClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__rankTunablesClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedPlayersPenaltyDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__hookedPlayersPenaltyDelay;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookedPlayersPenaltyDelay_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hookedPlayersPenaltyDelay_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chasePointsByDurationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chasePointsByDurationCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDEmblem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDMetaGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDEmblem_KillerChaser_OnChaseStart, "OnChaseStart" }, // 3473939128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDEmblem_KillerChaser.h" },
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerChaser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__rankTunablesClass_MetaData[] = {
		{ "Category", "DBDEmblem_KillerChaser" },
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerChaser.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__rankTunablesClass = { "_rankTunablesClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem_KillerChaser, _rankTunablesClass), Z_Construct_UClass_UDBDRankDesignTunables_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__rankTunablesClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__rankTunablesClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerChaser.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay = { "_hookedPlayersPenaltyDelay", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem_KillerChaser, _hookedPlayersPenaltyDelay), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay_Key_KeyProp = { "_hookedPlayersPenaltyDelay_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay_ValueProp = { "_hookedPlayersPenaltyDelay", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__chasePointsByDurationCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerChaser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__chasePointsByDurationCurve = { "_chasePointsByDurationCurve", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem_KillerChaser, _chasePointsByDurationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__chasePointsByDurationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__chasePointsByDurationCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__rankTunablesClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__hookedPlayersPenaltyDelay_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::NewProp__chasePointsByDurationCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEmblem_KillerChaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::ClassParams = {
		&UDBDEmblem_KillerChaser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEmblem_KillerChaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEmblem_KillerChaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEmblem_KillerChaser, 2318548380);
	template<> DBDMETAGAMEPLAY_API UClass* StaticClass<UDBDEmblem_KillerChaser>()
	{
		return UDBDEmblem_KillerChaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEmblem_KillerChaser(Z_Construct_UClass_UDBDEmblem_KillerChaser, &UDBDEmblem_KillerChaser::StaticClass, TEXT("/Script/DBDMetaGameplay"), TEXT("UDBDEmblem_KillerChaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEmblem_KillerChaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
