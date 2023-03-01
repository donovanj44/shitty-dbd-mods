// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SmallGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmallGame() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USmallGame_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USmallGame();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(USmallGame::execAuthority_SetTotemDetected)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetTotemDetected(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmallGame::execGetDetectionConeAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDetectionConeAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmallGame::execMulticast_TotemFound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TotemFound_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USmallGame_Multicast_TotemFound = FName(TEXT("Multicast_TotemFound"));
	void USmallGame::Multicast_TotemFound()
	{
		ProcessEvent(FindFunctionChecked(NAME_USmallGame_Multicast_TotemFound),NULL);
	}
	static FName NAME_USmallGame_SearchForTotems = FName(TEXT("SearchForTotems"));
	void USmallGame::SearchForTotems()
	{
		ProcessEvent(FindFunctionChecked(NAME_USmallGame_SearchForTotems),NULL);
	}
	static FName NAME_USmallGame_VFXTotemFound = FName(TEXT("VFXTotemFound"));
	void USmallGame::VFXTotemFound()
	{
		ProcessEvent(FindFunctionChecked(NAME_USmallGame_VFXTotemFound),NULL);
	}
	void USmallGame::StaticRegisterNativesUSmallGame()
	{
		UClass* Class = USmallGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_SetTotemDetected", &USmallGame::execAuthority_SetTotemDetected },
			{ "GetDetectionConeAngle", &USmallGame::execGetDetectionConeAngle },
			{ "Multicast_TotemFound", &USmallGame::execMulticast_TotemFound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics
	{
		struct SmallGame_eventAuthority_SetTotemDetected_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::NewProp_value_SetBit(void* Obj)
	{
		((SmallGame_eventAuthority_SetTotemDetected_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmallGame_eventAuthority_SetTotemDetected_Parms), &Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmallGame, nullptr, "Authority_SetTotemDetected", nullptr, nullptr, sizeof(SmallGame_eventAuthority_SetTotemDetected_Parms), Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics
	{
		struct SmallGame_eventGetDetectionConeAngle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmallGame_eventGetDetectionConeAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmallGame, nullptr, "GetDetectionConeAngle", nullptr, nullptr, sizeof(SmallGame_eventGetDetectionConeAngle_Parms), Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmallGame_GetDetectionConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmallGame_GetDetectionConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmallGame_Multicast_TotemFound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmallGame_Multicast_TotemFound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmallGame_Multicast_TotemFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmallGame, nullptr, "Multicast_TotemFound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmallGame_Multicast_TotemFound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmallGame_Multicast_TotemFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmallGame_Multicast_TotemFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmallGame_Multicast_TotemFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmallGame_SearchForTotems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmallGame_SearchForTotems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmallGame_SearchForTotems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmallGame, nullptr, "SearchForTotems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmallGame_SearchForTotems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmallGame_SearchForTotems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmallGame_SearchForTotems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmallGame_SearchForTotems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmallGame_VFXTotemFound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmallGame_VFXTotemFound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USmallGame_VFXTotemFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmallGame, nullptr, "VFXTotemFound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmallGame_VFXTotemFound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmallGame_VFXTotemFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmallGame_VFXTotemFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USmallGame_VFXTotemFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USmallGame_NoRegister()
	{
		return USmallGame::StaticClass();
	}
	struct Z_Construct_UClass_USmallGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemDetected_MetaData[];
#endif
		static void NewProp__totemDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__totemDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detectionConeAngleReductionRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__detectionConeAngleReductionRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detectionConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__detectionConeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmallGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USmallGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USmallGame_Authority_SetTotemDetected, "Authority_SetTotemDetected" }, // 1716969582
		{ &Z_Construct_UFunction_USmallGame_GetDetectionConeAngle, "GetDetectionConeAngle" }, // 3210767460
		{ &Z_Construct_UFunction_USmallGame_Multicast_TotemFound, "Multicast_TotemFound" }, // 3284796861
		{ &Z_Construct_UFunction_USmallGame_SearchForTotems, "SearchForTotems" }, // 468642451
		{ &Z_Construct_UFunction_USmallGame_VFXTotemFound, "VFXTotemFound" }, // 428456253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmallGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmallGame.h" },
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmallGame_Statics::NewProp__totemDetected_MetaData[] = {
		{ "Category", "SmallGame" },
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
	void Z_Construct_UClass_USmallGame_Statics::NewProp__totemDetected_SetBit(void* Obj)
	{
		((USmallGame*)Obj)->_totemDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmallGame_Statics::NewProp__totemDetected = { "_totemDetected", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USmallGame), &Z_Construct_UClass_USmallGame_Statics::NewProp__totemDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmallGame_Statics::NewProp__totemDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmallGame_Statics::NewProp__totemDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngleReductionRate_MetaData[] = {
		{ "Category", "SmallGame" },
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngleReductionRate = { "_detectionConeAngleReductionRate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_detectionConeAngleReductionRate, USmallGame), STRUCT_OFFSET(USmallGame, _detectionConeAngleReductionRate), METADATA_PARAMS(Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngleReductionRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngleReductionRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngle_MetaData[] = {
		{ "Category", "SmallGame" },
		{ "ModuleRelativePath", "Public/SmallGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngle = { "_detectionConeAngle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_detectionConeAngle, USmallGame), STRUCT_OFFSET(USmallGame, _detectionConeAngle), METADATA_PARAMS(Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmallGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmallGame_Statics::NewProp__totemDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngleReductionRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmallGame_Statics::NewProp__detectionConeAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmallGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmallGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USmallGame_Statics::ClassParams = {
		&USmallGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USmallGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USmallGame_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USmallGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmallGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmallGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USmallGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USmallGame, 3874751352);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USmallGame>()
	{
		return USmallGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmallGame(Z_Construct_UClass_USmallGame, &USmallGame::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USmallGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmallGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
