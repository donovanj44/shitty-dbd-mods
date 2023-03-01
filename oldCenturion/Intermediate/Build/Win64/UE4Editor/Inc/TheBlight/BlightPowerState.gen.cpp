// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPowerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPowerState() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerState_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlightPowerState::execGetStateDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStateDuration();
		P_NATIVE_END;
	}
	void UBlightPowerState::StaticRegisterNativesUBlightPowerState()
	{
		UClass* Class = UBlightPowerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStateDuration", &UBlightPowerState::execGetStateDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics
	{
		struct BlightPowerState_eventGetStateDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerState_eventGetStateDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerState, nullptr, "GetStateDuration", nullptr, nullptr, sizeof(BlightPowerState_eventGetStateDuration_Parms), Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerState_GetStateDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerState_GetStateDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlightPowerState_NoRegister()
	{
		return UBlightPowerState::StaticClass();
	}
	struct Z_Construct_UClass_UBlightPowerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayCollisionIndicator_MetaData[];
#endif
		static void NewProp__displayCollisionIndicator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayCollisionIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerCanCancelEarly_MetaData[];
#endif
		static void NewProp__playerCanCancelEarly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__playerCanCancelEarly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wallDashCollisionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__wallDashCollisionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wallDashCollisionHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__wallDashCollisionHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wallDashCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__wallDashCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraPitchRecenterTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraPitchRecenterTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stateDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stateSpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightPowerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlightPowerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlightPowerState_GetStateDuration, "GetStateDuration" }, // 2677527119
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlightPowerState.h" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::NewProp__displayCollisionIndicator_MetaData[] = {
		{ "Category", "BlightPowerState" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerState_Statics::NewProp__displayCollisionIndicator_SetBit(void* Obj)
	{
		((UBlightPowerState*)Obj)->_displayCollisionIndicator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerState_Statics::NewProp__displayCollisionIndicator = { "_displayCollisionIndicator", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerState), &Z_Construct_UClass_UBlightPowerState_Statics::NewProp__displayCollisionIndicator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__displayCollisionIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__displayCollisionIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::NewProp__playerCanCancelEarly_MetaData[] = {
		{ "Category", "BlightPowerState" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	void Z_Construct_UClass_UBlightPowerState_Statics::NewProp__playerCanCancelEarly_SetBit(void* Obj)
	{
		((UBlightPowerState*)Obj)->_playerCanCancelEarly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlightPowerState_Statics::NewProp__playerCanCancelEarly = { "_playerCanCancelEarly", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlightPowerState), &Z_Construct_UClass_UBlightPowerState_Statics::NewProp__playerCanCancelEarly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__playerCanCancelEarly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__playerCanCancelEarly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRange_MetaData[] = {
		{ "Category", "BlightPowerState" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRange = { "_wallDashCollisionRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerState, _wallDashCollisionRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionHeight_MetaData[] = {
		{ "Category", "BlightPowerState" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionHeight = { "_wallDashCollisionHeight", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerState, _wallDashCollisionHeight), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRadius_MetaData[] = {
		{ "Category", "BlightPowerState" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRadius = { "_wallDashCollisionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerState, _wallDashCollisionRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::NewProp__cameraPitchRecenterTime_MetaData[] = {
		{ "Category", "BlightPowerState" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerState_Statics::NewProp__cameraPitchRecenterTime = { "_cameraPitchRecenterTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerState, _cameraPitchRecenterTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__cameraPitchRecenterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__cameraPitchRecenterTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateDuration_MetaData[] = {
		{ "Category", "BlightPowerState" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateDuration = { "_stateDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerState, _stateDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateSpeedCurve_MetaData[] = {
		{ "Category", "BlightPowerState" },
		{ "ModuleRelativePath", "Public/BlightPowerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateSpeedCurve = { "_stateSpeedCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerState, _stateSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateSpeedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightPowerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerState_Statics::NewProp__displayCollisionIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerState_Statics::NewProp__playerCanCancelEarly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerState_Statics::NewProp__wallDashCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerState_Statics::NewProp__cameraPitchRecenterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerState_Statics::NewProp__stateSpeedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightPowerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightPowerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightPowerState_Statics::ClassParams = {
		&UBlightPowerState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlightPowerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightPowerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightPowerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightPowerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightPowerState, 794721936);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightPowerState>()
	{
		return UBlightPowerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightPowerState(Z_Construct_UClass_UBlightPowerState, &UBlightPowerState::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightPowerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightPowerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
