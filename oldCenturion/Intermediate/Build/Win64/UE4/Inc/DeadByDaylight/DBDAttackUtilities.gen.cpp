// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAttackUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAttackUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
// End Cross Module References
	DEFINE_FUNCTION(UDBDAttackUtilities::execGetCurrentAttackSubstateRemainingTime)
	{
		P_GET_OBJECT(AActor,Z_Param_attacker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDAttackUtilities::GetCurrentAttackSubstateRemainingTime(Z_Param_attacker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttackUtilities::execGetCurrentAttackType)
	{
		P_GET_OBJECT(AActor,Z_Param_attacker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAttackType*)Z_Param__Result=UDBDAttackUtilities::GetCurrentAttackType(Z_Param_attacker);
		P_NATIVE_END;
	}
	void UDBDAttackUtilities::StaticRegisterNativesUDBDAttackUtilities()
	{
		UClass* Class = UDBDAttackUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentAttackSubstateRemainingTime", &UDBDAttackUtilities::execGetCurrentAttackSubstateRemainingTime },
			{ "GetCurrentAttackType", &UDBDAttackUtilities::execGetCurrentAttackType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics
	{
		struct DBDAttackUtilities_eventGetCurrentAttackSubstateRemainingTime_Parms
		{
			const AActor* attacker;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttackUtilities_eventGetCurrentAttackSubstateRemainingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::NewProp_attacker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::NewProp_attacker = { "attacker", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttackUtilities_eventGetCurrentAttackSubstateRemainingTime_Parms, attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::NewProp_attacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::NewProp_attacker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttackUtilities, nullptr, "GetCurrentAttackSubstateRemainingTime", nullptr, nullptr, sizeof(DBDAttackUtilities_eventGetCurrentAttackSubstateRemainingTime_Parms), Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics
	{
		struct DBDAttackUtilities_eventGetCurrentAttackType_Parms
		{
			const AActor* attacker;
			EAttackType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttackUtilities_eventGetCurrentAttackType_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_attacker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_attacker = { "attacker", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttackUtilities_eventGetCurrentAttackType_Parms, attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_attacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_attacker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttackUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttackUtilities, nullptr, "GetCurrentAttackType", nullptr, nullptr, sizeof(DBDAttackUtilities_eventGetCurrentAttackType_Parms), Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDAttackUtilities_NoRegister()
	{
		return UDBDAttackUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAttackUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAttackUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDAttackUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackSubstateRemainingTime, "GetCurrentAttackSubstateRemainingTime" }, // 1809271139
		{ &Z_Construct_UFunction_UDBDAttackUtilities_GetCurrentAttackType, "GetCurrentAttackType" }, // 222967089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDAttackUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDAttackUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAttackUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAttackUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAttackUtilities_Statics::ClassParams = {
		&UDBDAttackUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAttackUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAttackUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAttackUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAttackUtilities, 3894568098);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAttackUtilities>()
	{
		return UDBDAttackUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAttackUtilities(Z_Construct_UClass_UDBDAttackUtilities, &UDBDAttackUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAttackUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAttackUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
