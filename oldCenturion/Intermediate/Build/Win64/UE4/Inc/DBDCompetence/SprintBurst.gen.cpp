// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SprintBurst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSprintBurst() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USprintBurst_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USprintBurst();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USprintBurst::execAuthority_OnIsRunningAndMovingChanged)
	{
		P_GET_UBOOL(Z_Param_isRunningAndMoving);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIsRunningAndMovingChanged(Z_Param_isRunningAndMoving);
		P_NATIVE_END;
	}
	void USprintBurst::StaticRegisterNativesUSprintBurst()
	{
		UClass* Class = USprintBurst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnIsRunningAndMovingChanged", &USprintBurst::execAuthority_OnIsRunningAndMovingChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics
	{
		struct SprintBurst_eventAuthority_OnIsRunningAndMovingChanged_Parms
		{
			bool isRunningAndMoving;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRunningAndMoving_MetaData[];
#endif
		static void NewProp_isRunningAndMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRunningAndMoving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::NewProp_isRunningAndMoving_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::NewProp_isRunningAndMoving_SetBit(void* Obj)
	{
		((SprintBurst_eventAuthority_OnIsRunningAndMovingChanged_Parms*)Obj)->isRunningAndMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::NewProp_isRunningAndMoving = { "isRunningAndMoving", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SprintBurst_eventAuthority_OnIsRunningAndMovingChanged_Parms), &Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::NewProp_isRunningAndMoving_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::NewProp_isRunningAndMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::NewProp_isRunningAndMoving_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::NewProp_isRunningAndMoving,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SprintBurst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprintBurst, nullptr, "Authority_OnIsRunningAndMovingChanged", nullptr, nullptr, sizeof(SprintBurst_eventAuthority_OnIsRunningAndMovingChanged_Parms), Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USprintBurst_NoRegister()
	{
		return USprintBurst::StaticClass();
	}
	struct Z_Construct_UClass_USprintBurst_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__exhaustedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sprintDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sprintDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exhaustionDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USprintBurst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USprintBurst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USprintBurst_Authority_OnIsRunningAndMovingChanged, "Authority_OnIsRunningAndMovingChanged" }, // 111808045
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprintBurst_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SprintBurst.h" },
		{ "ModuleRelativePath", "Public/SprintBurst.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustedEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SprintBurst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustedEffect = { "_exhaustedEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USprintBurst, _exhaustedEffect), Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprintBurst_Statics::NewProp__sprintDuration_MetaData[] = {
		{ "Category", "SprintBurst" },
		{ "ModuleRelativePath", "Public/SprintBurst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USprintBurst_Statics::NewProp__sprintDuration = { "_sprintDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USprintBurst, _sprintDuration), METADATA_PARAMS(Z_Construct_UClass_USprintBurst_Statics::NewProp__sprintDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USprintBurst_Statics::NewProp__sprintDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustionDuration_MetaData[] = {
		{ "Category", "SprintBurst" },
		{ "ModuleRelativePath", "Public/SprintBurst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustionDuration = { "_exhaustionDuration", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exhaustionDuration, USprintBurst), STRUCT_OFFSET(USprintBurst, _exhaustionDuration), METADATA_PARAMS(Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustionDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USprintBurst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprintBurst_Statics::NewProp__sprintDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprintBurst_Statics::NewProp__exhaustionDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USprintBurst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USprintBurst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USprintBurst_Statics::ClassParams = {
		&USprintBurst::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USprintBurst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USprintBurst_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USprintBurst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USprintBurst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USprintBurst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USprintBurst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USprintBurst, 514889085);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USprintBurst>()
	{
		return USprintBurst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USprintBurst(Z_Construct_UClass_USprintBurst, &USprintBurst::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USprintBurst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USprintBurst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
