// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AIMoveToPositionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMoveToPositionData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIMoveToPositionData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIMoveToPositionData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIMoveToPositionData::execInit)
	{
		P_GET_OBJECT(AActor,Z_Param_positionActor);
		P_GET_ENUM(ECharacterMovementTypes,Z_Param_movementType);
		P_GET_UBOOL(Z_Param_usePathfinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_positionActor,ECharacterMovementTypes(Z_Param_movementType),Z_Param_usePathfinding);
		P_NATIVE_END;
	}
	void UAIMoveToPositionData::StaticRegisterNativesUAIMoveToPositionData()
	{
		UClass* Class = UAIMoveToPositionData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAIMoveToPositionData::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics
	{
		struct AIMoveToPositionData_eventInit_Parms
		{
			AActor* positionActor;
			ECharacterMovementTypes movementType;
			bool usePathfinding;
		};
		static void NewProp_usePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_usePathfinding;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_movementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_movementType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_positionActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_usePathfinding_SetBit(void* Obj)
	{
		((AIMoveToPositionData_eventInit_Parms*)Obj)->usePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_usePathfinding = { "usePathfinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIMoveToPositionData_eventInit_Parms), &Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_usePathfinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_movementType = { "movementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToPositionData_eventInit_Parms, movementType), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_movementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_positionActor = { "positionActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToPositionData_eventInit_Parms, positionActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_usePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_movementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_movementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::NewProp_positionActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIMoveToPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMoveToPositionData, nullptr, "Init", nullptr, nullptr, sizeof(AIMoveToPositionData_eventInit_Parms), Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMoveToPositionData_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMoveToPositionData_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIMoveToPositionData_NoRegister()
	{
		return UAIMoveToPositionData::StaticClass();
	}
	struct Z_Construct_UClass_UAIMoveToPositionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__usePathfinding_MetaData[];
#endif
		static void NewProp__usePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__usePathfinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__movementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__movementType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__positionActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__positionActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIMoveToPositionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourData,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIMoveToPositionData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMoveToPositionData_Init, "Init" }, // 3323311564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToPositionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AIMoveToPositionData.h" },
		{ "ModuleRelativePath", "Public/AIMoveToPositionData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__usePathfinding_MetaData[] = {
		{ "Category", "AIMoveToPositionData" },
		{ "ModuleRelativePath", "Public/AIMoveToPositionData.h" },
	};
#endif
	void Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__usePathfinding_SetBit(void* Obj)
	{
		((UAIMoveToPositionData*)Obj)->_usePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__usePathfinding = { "_usePathfinding", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAIMoveToPositionData), &Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__usePathfinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__usePathfinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__usePathfinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__movementType_MetaData[] = {
		{ "Category", "AIMoveToPositionData" },
		{ "ModuleRelativePath", "Public/AIMoveToPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__movementType = { "_movementType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMoveToPositionData, _movementType), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__movementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__movementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__movementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__positionActor_MetaData[] = {
		{ "Category", "AIMoveToPositionData" },
		{ "ModuleRelativePath", "Public/AIMoveToPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__positionActor = { "_positionActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMoveToPositionData, _positionActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__positionActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__positionActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIMoveToPositionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__usePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__movementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__movementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToPositionData_Statics::NewProp__positionActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIMoveToPositionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMoveToPositionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIMoveToPositionData_Statics::ClassParams = {
		&UAIMoveToPositionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIMoveToPositionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToPositionData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIMoveToPositionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToPositionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIMoveToPositionData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIMoveToPositionData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIMoveToPositionData, 3459786237);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAIMoveToPositionData>()
	{
		return UAIMoveToPositionData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIMoveToPositionData(Z_Construct_UClass_UAIMoveToPositionData, &UAIMoveToPositionData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAIMoveToPositionData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMoveToPositionData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
