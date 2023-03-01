// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/KnivesLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnivesLauncher() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UKnivesLauncher_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UKnivesLauncher();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileLauncher();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	THEK23_API UClass* Z_Construct_UClass_AThrowingKnives_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UKnivesLauncher::execGetLocallyPredictedAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLocallyPredictedAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKnivesLauncher::execGetPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AThrowingKnives**)Z_Param__Result=P_THIS->GetPower();
		P_NATIVE_END;
	}
	void UKnivesLauncher::StaticRegisterNativesUKnivesLauncher()
	{
		UClass* Class = UKnivesLauncher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocallyPredictedAmmo", &UKnivesLauncher::execGetLocallyPredictedAmmo },
			{ "GetPower", &UKnivesLauncher::execGetPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics
	{
		struct KnivesLauncher_eventGetLocallyPredictedAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnivesLauncher_eventGetLocallyPredictedAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnivesLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKnivesLauncher, nullptr, "GetLocallyPredictedAmmo", nullptr, nullptr, sizeof(KnivesLauncher_eventGetLocallyPredictedAmmo_Parms), Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics
	{
		struct KnivesLauncher_eventGetPower_Parms
		{
			AThrowingKnives* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnivesLauncher_eventGetPower_Parms, ReturnValue), Z_Construct_UClass_AThrowingKnives_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnivesLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKnivesLauncher, nullptr, "GetPower", nullptr, nullptr, sizeof(KnivesLauncher_eventGetPower_Parms), Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKnivesLauncher_GetPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKnivesLauncher_GetPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKnivesLauncher_NoRegister()
	{
		return UKnivesLauncher::StaticClass();
	}
	struct Z_Construct_UClass_UKnivesLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInSuperModeThrow_MetaData[];
#endif
		static void NewProp__isInSuperModeThrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInSuperModeThrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxAmmoTunable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxAmmoTunable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__launchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__launchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__knifeSpawnForwardOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__knifeSpawnForwardOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__knifeSpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__knifeSpawnOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKnivesLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerProjectileLauncher,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKnivesLauncher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKnivesLauncher_GetLocallyPredictedAmmo, "GetLocallyPredictedAmmo" }, // 298841458
		{ &Z_Construct_UFunction_UKnivesLauncher_GetPower, "GetPower" }, // 459735905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKnivesLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KnivesLauncher.h" },
		{ "ModuleRelativePath", "Public/KnivesLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__isInSuperModeThrow_MetaData[] = {
		{ "ModuleRelativePath", "Public/KnivesLauncher.h" },
	};
#endif
	void Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__isInSuperModeThrow_SetBit(void* Obj)
	{
		((UKnivesLauncher*)Obj)->_isInSuperModeThrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__isInSuperModeThrow = { "_isInSuperModeThrow", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKnivesLauncher), &Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__isInSuperModeThrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__isInSuperModeThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__isInSuperModeThrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__maxAmmoTunable_MetaData[] = {
		{ "Category", "KnivesLauncher" },
		{ "ModuleRelativePath", "Public/KnivesLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__maxAmmoTunable = { "_maxAmmoTunable", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKnivesLauncher, _maxAmmoTunable), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__maxAmmoTunable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__maxAmmoTunable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__launchSpeed_MetaData[] = {
		{ "Category", "KnivesLauncher" },
		{ "ModuleRelativePath", "Public/KnivesLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__launchSpeed = { "_launchSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKnivesLauncher, _launchSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__launchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__launchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnForwardOffset_MetaData[] = {
		{ "Category", "KnivesLauncher" },
		{ "ModuleRelativePath", "Public/KnivesLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnForwardOffset = { "_knifeSpawnForwardOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKnivesLauncher, _knifeSpawnForwardOffset), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnForwardOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnForwardOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnOffset_MetaData[] = {
		{ "Category", "KnivesLauncher" },
		{ "ModuleRelativePath", "Public/KnivesLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnOffset = { "_knifeSpawnOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKnivesLauncher, _knifeSpawnOffset), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKnivesLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__isInSuperModeThrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__maxAmmoTunable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__launchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnForwardOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKnivesLauncher_Statics::NewProp__knifeSpawnOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKnivesLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKnivesLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKnivesLauncher_Statics::ClassParams = {
		&UKnivesLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKnivesLauncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKnivesLauncher_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKnivesLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKnivesLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKnivesLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKnivesLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKnivesLauncher, 109662517);
	template<> THEK23_API UClass* StaticClass<UKnivesLauncher>()
	{
		return UKnivesLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKnivesLauncher(Z_Construct_UClass_UKnivesLauncher, &UKnivesLauncher::StaticClass, TEXT("/Script/TheK23"), TEXT("UKnivesLauncher"), false, nullptr, nullptr, nullptr);

	void UKnivesLauncher::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isInSuperModeThrow(TEXT("_isInSuperModeThrow"));

		const bool bIsValid = true
			&& Name__isInSuperModeThrow == ClassReps[(int32)ENetFields_Private::_isInSuperModeThrow].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UKnivesLauncher"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKnivesLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
