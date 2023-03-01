// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AIMoveToInteractData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMoveToInteractData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIMoveToInteractData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIMoveToInteractData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes();
// End Cross Module References
	DEFINE_FUNCTION(UAIMoveToInteractData::execInit)
	{
		P_GET_OBJECT(AActor,Z_Param_interactActor);
		P_GET_ENUM(ECharacterMovementTypes,Z_Param_characterMovementTypes);
		P_GET_OBJECT(AActor,Z_Param_targetPositionActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_interactActor,ECharacterMovementTypes(Z_Param_characterMovementTypes),Z_Param_targetPositionActor);
		P_NATIVE_END;
	}
	void UAIMoveToInteractData::StaticRegisterNativesUAIMoveToInteractData()
	{
		UClass* Class = UAIMoveToInteractData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAIMoveToInteractData::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics
	{
		struct AIMoveToInteractData_eventInit_Parms
		{
			AActor* interactActor;
			ECharacterMovementTypes characterMovementTypes;
			AActor* targetPositionActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPositionActor;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_characterMovementTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_characterMovementTypes_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::NewProp_targetPositionActor = { "targetPositionActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToInteractData_eventInit_Parms, targetPositionActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::NewProp_characterMovementTypes = { "characterMovementTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToInteractData_eventInit_Parms, characterMovementTypes), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::NewProp_characterMovementTypes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::NewProp_interactActor = { "interactActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToInteractData_eventInit_Parms, interactActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::NewProp_targetPositionActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::NewProp_characterMovementTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::NewProp_characterMovementTypes_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::NewProp_interactActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIMoveToInteractData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMoveToInteractData, nullptr, "Init", nullptr, nullptr, sizeof(AIMoveToInteractData_eventInit_Parms), Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMoveToInteractData_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMoveToInteractData_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIMoveToInteractData_NoRegister()
	{
		return UAIMoveToInteractData::StaticClass();
	}
	struct Z_Construct_UClass_UAIMoveToInteractData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterMovementTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__characterMovementTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__characterMovementTypes_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetPositionActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetPositionActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIMoveToInteractData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourData,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIMoveToInteractData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMoveToInteractData_Init, "Init" }, // 1323329348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToInteractData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AIMoveToInteractData.h" },
		{ "ModuleRelativePath", "Public/AIMoveToInteractData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__characterMovementTypes_MetaData[] = {
		{ "Category", "AIMoveToInteractData" },
		{ "ModuleRelativePath", "Public/AIMoveToInteractData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__characterMovementTypes = { "_characterMovementTypes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMoveToInteractData, _characterMovementTypes), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__characterMovementTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__characterMovementTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__characterMovementTypes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__targetPositionActor_MetaData[] = {
		{ "Category", "AIMoveToInteractData" },
		{ "ModuleRelativePath", "Public/AIMoveToInteractData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__targetPositionActor = { "_targetPositionActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMoveToInteractData, _targetPositionActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__targetPositionActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__targetPositionActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__interactActor_MetaData[] = {
		{ "Category", "AIMoveToInteractData" },
		{ "ModuleRelativePath", "Public/AIMoveToInteractData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__interactActor = { "_interactActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMoveToInteractData, _interactActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__interactActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__interactActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIMoveToInteractData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__characterMovementTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__characterMovementTypes_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__targetPositionActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToInteractData_Statics::NewProp__interactActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIMoveToInteractData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMoveToInteractData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIMoveToInteractData_Statics::ClassParams = {
		&UAIMoveToInteractData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIMoveToInteractData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteractData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIMoveToInteractData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteractData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIMoveToInteractData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIMoveToInteractData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIMoveToInteractData, 894754675);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAIMoveToInteractData>()
	{
		return UAIMoveToInteractData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIMoveToInteractData(Z_Construct_UClass_UAIMoveToInteractData, &UAIMoveToInteractData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAIMoveToInteractData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMoveToInteractData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
