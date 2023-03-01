// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterRepairGeneratorBehaviourData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterRepairGeneratorBehaviourData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAICharacterRepairGeneratorBehaviourData::execInit)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_GET_ENUM(ECharacterMovementTypes,Z_Param_characterMovementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_generator,ECharacterMovementTypes(Z_Param_characterMovementType));
		P_NATIVE_END;
	}
	void UAICharacterRepairGeneratorBehaviourData::StaticRegisterNativesUAICharacterRepairGeneratorBehaviourData()
	{
		UClass* Class = UAICharacterRepairGeneratorBehaviourData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAICharacterRepairGeneratorBehaviourData::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics
	{
		struct AICharacterRepairGeneratorBehaviourData_eventInit_Parms
		{
			AGenerator* generator;
			ECharacterMovementTypes characterMovementType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_characterMovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_characterMovementType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::NewProp_characterMovementType = { "characterMovementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterRepairGeneratorBehaviourData_eventInit_Parms, characterMovementType), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::NewProp_characterMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterRepairGeneratorBehaviourData_eventInit_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::NewProp_characterMovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::NewProp_characterMovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData, nullptr, "Init", nullptr, nullptr, sizeof(AICharacterRepairGeneratorBehaviourData_eventInit_Parms), Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_NoRegister()
	{
		return UAICharacterRepairGeneratorBehaviourData::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterMovementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__characterMovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__characterMovementType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourData,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviourData_Init, "Init" }, // 580480202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AICharacterRepairGeneratorBehaviourData.h" },
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviourData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__characterMovementType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__characterMovementType = { "_characterMovementType", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterRepairGeneratorBehaviourData, _characterMovementType), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__characterMovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__characterMovementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__characterMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__generator_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__generator = { "_generator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterRepairGeneratorBehaviourData, _generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__characterMovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__characterMovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::NewProp__generator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterRepairGeneratorBehaviourData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::ClassParams = {
		&UAICharacterRepairGeneratorBehaviourData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterRepairGeneratorBehaviourData, 1585657723);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterRepairGeneratorBehaviourData>()
	{
		return UAICharacterRepairGeneratorBehaviourData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterRepairGeneratorBehaviourData(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData, &UAICharacterRepairGeneratorBehaviourData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterRepairGeneratorBehaviourData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterRepairGeneratorBehaviourData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
