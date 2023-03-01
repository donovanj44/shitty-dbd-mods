// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsOriginatingPerkBoundToTotems.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsOriginatingPerkBoundToTotems() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOriginatingPerkBoundToTotems();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYUTILITIES_API UEnum* Z_Construct_UEnum_GameplayUtilities_EComparisonOperation();
// End Cross Module References
	DEFINE_FUNCTION(UIsOriginatingPerkBoundToTotems::execInit)
	{
		P_GET_ENUM(EComparisonOperation,Z_Param_comparisonOperator);
		P_GET_PROPERTY(FIntProperty,Z_Param_totemCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(EComparisonOperation(Z_Param_comparisonOperator),Z_Param_totemCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsOriginatingPerkBoundToTotems::execOnRep_TotemCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TotemCount();
		P_NATIVE_END;
	}
	void UIsOriginatingPerkBoundToTotems::StaticRegisterNativesUIsOriginatingPerkBoundToTotems()
	{
		UClass* Class = UIsOriginatingPerkBoundToTotems::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UIsOriginatingPerkBoundToTotems::execInit },
			{ "OnRep_TotemCount", &UIsOriginatingPerkBoundToTotems::execOnRep_TotemCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics
	{
		struct IsOriginatingPerkBoundToTotems_eventInit_Parms
		{
			EComparisonOperation comparisonOperator;
			int32 totemCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totemCount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_comparisonOperator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_comparisonOperator_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::NewProp_totemCount = { "totemCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsOriginatingPerkBoundToTotems_eventInit_Parms, totemCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::NewProp_comparisonOperator = { "comparisonOperator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsOriginatingPerkBoundToTotems_eventInit_Parms, comparisonOperator), Z_Construct_UEnum_GameplayUtilities_EComparisonOperation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::NewProp_comparisonOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::NewProp_totemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::NewProp_comparisonOperator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::NewProp_comparisonOperator_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsOriginatingPerkBoundToTotems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsOriginatingPerkBoundToTotems, nullptr, "Init", nullptr, nullptr, sizeof(IsOriginatingPerkBoundToTotems_eventInit_Parms), Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsOriginatingPerkBoundToTotems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsOriginatingPerkBoundToTotems, nullptr, "OnRep_TotemCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_OnRep_TotemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_NoRegister()
	{
		return UIsOriginatingPerkBoundToTotems::StaticClass();
	}
	struct Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__totemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__comparisonOperator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__comparisonOperator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__comparisonOperator_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_Init, "Init" }, // 1051948363
		{ &Z_Construct_UFunction_UIsOriginatingPerkBoundToTotems_OnRep_TotemCount, "OnRep_TotemCount" }, // 650041543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsOriginatingPerkBoundToTotems.h" },
		{ "ModuleRelativePath", "Public/IsOriginatingPerkBoundToTotems.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__totemCount_MetaData[] = {
		{ "Category", "IsOriginatingPerkBoundToTotems" },
		{ "ModuleRelativePath", "Public/IsOriginatingPerkBoundToTotems.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__totemCount = { "_totemCount", "OnRep_TotemCount", (EPropertyFlags)0x0040000100010021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsOriginatingPerkBoundToTotems, _totemCount), METADATA_PARAMS(Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__totemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__totemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__comparisonOperator_MetaData[] = {
		{ "Category", "IsOriginatingPerkBoundToTotems" },
		{ "ModuleRelativePath", "Public/IsOriginatingPerkBoundToTotems.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__comparisonOperator = { "_comparisonOperator", nullptr, (EPropertyFlags)0x0040000000010021, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsOriginatingPerkBoundToTotems, _comparisonOperator), Z_Construct_UEnum_GameplayUtilities_EComparisonOperation, METADATA_PARAMS(Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__comparisonOperator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__comparisonOperator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__comparisonOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__totemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__comparisonOperator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::NewProp__comparisonOperator_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsOriginatingPerkBoundToTotems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::ClassParams = {
		&UIsOriginatingPerkBoundToTotems::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsOriginatingPerkBoundToTotems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsOriginatingPerkBoundToTotems, 2911436522);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsOriginatingPerkBoundToTotems>()
	{
		return UIsOriginatingPerkBoundToTotems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsOriginatingPerkBoundToTotems(Z_Construct_UClass_UIsOriginatingPerkBoundToTotems, &UIsOriginatingPerkBoundToTotems::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsOriginatingPerkBoundToTotems"), false, nullptr, nullptr, nullptr);

	void UIsOriginatingPerkBoundToTotems::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__comparisonOperator(TEXT("_comparisonOperator"));
		static const FName Name__totemCount(TEXT("_totemCount"));

		const bool bIsValid = true
			&& Name__comparisonOperator == ClassReps[(int32)ENetFields_Private::_comparisonOperator].Property->GetFName()
			&& Name__totemCount == ClassReps[(int32)ENetFields_Private::_totemCount].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UIsOriginatingPerkBoundToTotems"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsOriginatingPerkBoundToTotems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
