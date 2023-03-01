// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/HatchetLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHatchetLauncher() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_UHatchetLauncher_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_UHatchetLauncher();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileLauncher();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UHatchetLauncher::execIsLaunchedHatchetFullyCharged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLaunchedHatchetFullyCharged();
		P_NATIVE_END;
	}
	void UHatchetLauncher::StaticRegisterNativesUHatchetLauncher()
	{
		UClass* Class = UHatchetLauncher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLaunchedHatchetFullyCharged", &UHatchetLauncher::execIsLaunchedHatchetFullyCharged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics
	{
		struct HatchetLauncher_eventIsLaunchedHatchetFullyCharged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HatchetLauncher_eventIsLaunchedHatchetFullyCharged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HatchetLauncher_eventIsLaunchedHatchetFullyCharged_Parms), &Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHatchetLauncher, nullptr, "IsLaunchedHatchetFullyCharged", nullptr, nullptr, sizeof(HatchetLauncher_eventIsLaunchedHatchetFullyCharged_Parms), Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHatchetLauncher_NoRegister()
	{
		return UHatchetLauncher::StaticClass();
	}
	struct Z_Construct_UClass_UHatchetLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetLaunchPitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hatchetLaunchPitchMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetLaunchPitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hatchetLaunchPitchMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hatchetMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetMinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hatchetMinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetMaxAngleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hatchetMaxAngleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetMinAngleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hatchetMinAngleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetPitchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hatchetPitchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetSpeedWhenThrowFullyCharged_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hatchetSpeedWhenThrowFullyCharged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__speedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__angleOffsetCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__angleOffsetCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__angleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__angleOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHatchetLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerProjectileLauncher,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHatchetLauncher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHatchetLauncher_IsLaunchedHatchetFullyCharged, "IsLaunchedHatchetFullyCharged" }, // 3707627709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HatchetLauncher.h" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMax_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMax = { "_hatchetLaunchPitchMax", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _hatchetLaunchPitchMax), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMin_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMin = { "_hatchetLaunchPitchMin", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _hatchetLaunchPitchMin), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxSpeed_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxSpeed = { "_hatchetMaxSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _hatchetMaxSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinSpeed_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinSpeed = { "_hatchetMinSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _hatchetMinSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxAngleOffset_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxAngleOffset = { "_hatchetMaxAngleOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _hatchetMaxAngleOffset), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxAngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxAngleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinAngleOffset_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinAngleOffset = { "_hatchetMinAngleOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _hatchetMinAngleOffset), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinAngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinAngleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetPitchCurve_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetPitchCurve = { "_hatchetPitchCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _hatchetPitchCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetPitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetPitchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetSpeedWhenThrowFullyCharged_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetSpeedWhenThrowFullyCharged = { "_hatchetSpeedWhenThrowFullyCharged", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _hatchetSpeedWhenThrowFullyCharged), METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetSpeedWhenThrowFullyCharged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetSpeedWhenThrowFullyCharged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__speedCurve_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__speedCurve = { "_speedCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _speedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__speedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__speedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffsetCurve_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffsetCurve = { "_angleOffsetCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _angleOffsetCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffset_MetaData[] = {
		{ "Category", "HatchetLauncher" },
		{ "ModuleRelativePath", "Public/HatchetLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffset = { "_angleOffset", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetLauncher, _angleOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHatchetLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetLaunchPitchMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMaxAngleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetMinAngleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetPitchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__hatchetSpeedWhenThrowFullyCharged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__speedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffsetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetLauncher_Statics::NewProp__angleOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHatchetLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHatchetLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHatchetLauncher_Statics::ClassParams = {
		&UHatchetLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHatchetLauncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHatchetLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHatchetLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHatchetLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHatchetLauncher, 635482046);
	template<> THEHUNTRESS_API UClass* StaticClass<UHatchetLauncher>()
	{
		return UHatchetLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHatchetLauncher(Z_Construct_UClass_UHatchetLauncher, &UHatchetLauncher::StaticClass, TEXT("/Script/TheHuntress"), TEXT("UHatchetLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHatchetLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
