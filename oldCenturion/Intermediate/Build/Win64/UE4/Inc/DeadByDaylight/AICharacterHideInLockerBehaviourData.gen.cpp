// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterHideInLockerBehaviourData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterHideInLockerBehaviourData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviourData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALocker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAICharacterHideInLockerBehaviourData::execInit)
	{
		P_GET_OBJECT(ALocker,Z_Param_locker);
		P_GET_ENUM(ECharacterMovementTypes,Z_Param_NewCharacterMovementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_locker,ECharacterMovementTypes(Z_Param_NewCharacterMovementType));
		P_NATIVE_END;
	}
	void UAICharacterHideInLockerBehaviourData::StaticRegisterNativesUAICharacterHideInLockerBehaviourData()
	{
		UClass* Class = UAICharacterHideInLockerBehaviourData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAICharacterHideInLockerBehaviourData::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics
	{
		struct AICharacterHideInLockerBehaviourData_eventInit_Parms
		{
			ALocker* locker;
			ECharacterMovementTypes NewCharacterMovementType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewCharacterMovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCharacterMovementType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_locker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::NewProp_NewCharacterMovementType = { "NewCharacterMovementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterHideInLockerBehaviourData_eventInit_Parms, NewCharacterMovementType), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::NewProp_NewCharacterMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::NewProp_locker = { "locker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterHideInLockerBehaviourData_eventInit_Parms, locker), Z_Construct_UClass_ALocker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::NewProp_NewCharacterMovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::NewProp_NewCharacterMovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::NewProp_locker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterHideInLockerBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterHideInLockerBehaviourData, nullptr, "Init", nullptr, nullptr, sizeof(AICharacterHideInLockerBehaviourData_eventInit_Parms), Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_NoRegister()
	{
		return UAICharacterHideInLockerBehaviourData::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterMovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterMovementType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourData,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICharacterHideInLockerBehaviourData_Init, "Init" }, // 122301208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AICharacterHideInLockerBehaviourData.h" },
		{ "ModuleRelativePath", "Public/AICharacterHideInLockerBehaviourData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::NewProp_CharacterMovementType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterHideInLockerBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::NewProp_CharacterMovementType = { "CharacterMovementType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterHideInLockerBehaviourData, CharacterMovementType), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::NewProp_CharacterMovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::NewProp_CharacterMovementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::NewProp_CharacterMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::NewProp_CharacterMovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::NewProp_CharacterMovementType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterHideInLockerBehaviourData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::ClassParams = {
		&UAICharacterHideInLockerBehaviourData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviourData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterHideInLockerBehaviourData, 1807148097);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterHideInLockerBehaviourData>()
	{
		return UAICharacterHideInLockerBehaviourData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterHideInLockerBehaviourData(Z_Construct_UClass_UAICharacterHideInLockerBehaviourData, &UAICharacterHideInLockerBehaviourData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterHideInLockerBehaviourData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterHideInLockerBehaviourData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
