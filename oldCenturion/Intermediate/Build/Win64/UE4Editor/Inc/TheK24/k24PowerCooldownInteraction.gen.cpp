// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/k24PowerCooldownInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodek24PowerCooldownInteraction() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_Uk24PowerCooldownInteraction_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_Uk24PowerCooldownInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_AK24Power_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(Uk24PowerCooldownInteraction::execSetK24Power)
	{
		P_GET_OBJECT(AK24Power,Z_Param_k24Power);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetK24Power(Z_Param_k24Power);
		P_NATIVE_END;
	}
	void Uk24PowerCooldownInteraction::StaticRegisterNativesUk24PowerCooldownInteraction()
	{
		UClass* Class = Uk24PowerCooldownInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetK24Power", &Uk24PowerCooldownInteraction::execSetK24Power },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics
	{
		struct k24PowerCooldownInteraction_eventSetK24Power_Parms
		{
			AK24Power* k24Power;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_k24Power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::NewProp_k24Power = { "k24Power", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(k24PowerCooldownInteraction_eventSetK24Power_Parms, k24Power), Z_Construct_UClass_AK24Power_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::NewProp_k24Power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/k24PowerCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uk24PowerCooldownInteraction, nullptr, "SetK24Power", nullptr, nullptr, sizeof(k24PowerCooldownInteraction_eventSetK24Power_Parms), Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Uk24PowerCooldownInteraction_NoRegister()
	{
		return Uk24PowerCooldownInteraction::StaticClass();
	}
	struct Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playedCooldownSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playedCooldownSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownLvl3SpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cooldownLvl3SpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cooldownSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k24PowerCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__k24PowerCooldownTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Uk24PowerCooldownInteraction_SetK24Power, "SetK24Power" }, // 2617014267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "k24PowerCooldownInteraction.h" },
		{ "ModuleRelativePath", "Public/k24PowerCooldownInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__playedCooldownSpeedCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/k24PowerCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__playedCooldownSpeedCurve = { "_playedCooldownSpeedCurve", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uk24PowerCooldownInteraction, _playedCooldownSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__playedCooldownSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__playedCooldownSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownLvl3SpeedCurve_MetaData[] = {
		{ "Category", "k24PowerCooldownInteraction" },
		{ "ModuleRelativePath", "Public/k24PowerCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownLvl3SpeedCurve = { "_cooldownLvl3SpeedCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uk24PowerCooldownInteraction, _cooldownLvl3SpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownLvl3SpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownLvl3SpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownSpeedCurve_MetaData[] = {
		{ "Category", "k24PowerCooldownInteraction" },
		{ "ModuleRelativePath", "Public/k24PowerCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownSpeedCurve = { "_cooldownSpeedCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uk24PowerCooldownInteraction, _cooldownSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__k24PowerCooldownTime_MetaData[] = {
		{ "Category", "k24PowerCooldownInteraction" },
		{ "ModuleRelativePath", "Public/k24PowerCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__k24PowerCooldownTime = { "_k24PowerCooldownTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uk24PowerCooldownInteraction, _k24PowerCooldownTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__k24PowerCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__k24PowerCooldownTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__playedCooldownSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownLvl3SpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__cooldownSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::NewProp__k24PowerCooldownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uk24PowerCooldownInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::ClassParams = {
		&Uk24PowerCooldownInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Uk24PowerCooldownInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Uk24PowerCooldownInteraction, 2704891856);
	template<> THEK24_API UClass* StaticClass<Uk24PowerCooldownInteraction>()
	{
		return Uk24PowerCooldownInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Uk24PowerCooldownInteraction(Z_Construct_UClass_Uk24PowerCooldownInteraction, &Uk24PowerCooldownInteraction::StaticClass, TEXT("/Script/TheK24"), TEXT("Uk24PowerCooldownInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Uk24PowerCooldownInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
