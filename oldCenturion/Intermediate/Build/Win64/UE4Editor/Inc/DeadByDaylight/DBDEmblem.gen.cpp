// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDEmblem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEmblem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEmblem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEmblem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionPoints();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UDBDEmblem::execClient_FinalizeReplication)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_points);
		P_GET_TARRAY(FProgressionPoints,Z_Param_progressionPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_FinalizeReplication_Implementation(Z_Param_points,Z_Param_progressionPoints);
		P_NATIVE_END;
	}
	static FName NAME_UDBDEmblem_Client_FinalizeReplication = FName(TEXT("Client_FinalizeReplication"));
	void UDBDEmblem::Client_FinalizeReplication(const float points, TArray<FProgressionPoints> const& progressionPoints)
	{
		DBDEmblem_eventClient_FinalizeReplication_Parms Parms;
		Parms.points=points;
		Parms.progressionPoints=progressionPoints;
		ProcessEvent(FindFunctionChecked(NAME_UDBDEmblem_Client_FinalizeReplication),&Parms);
	}
	void UDBDEmblem::StaticRegisterNativesUDBDEmblem()
	{
		UClass* Class = UDBDEmblem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_FinalizeReplication", &UDBDEmblem::execClient_FinalizeReplication },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progressionPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_progressionPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_progressionPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_points;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_progressionPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_progressionPoints = { "progressionPoints", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDEmblem_eventClient_FinalizeReplication_Parms, progressionPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_progressionPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_progressionPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_progressionPoints_Inner = { "progressionPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProgressionPoints, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDEmblem_eventClient_FinalizeReplication_Parms, points), METADATA_PARAMS(Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_points_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_progressionPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_progressionPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDEmblem, nullptr, "Client_FinalizeReplication", nullptr, nullptr, sizeof(DBDEmblem_eventClient_FinalizeReplication_Parms), Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDEmblem_NoRegister()
	{
		return UDBDEmblem::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEmblem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__definition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__definition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__progressionPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__progressionPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__progressionPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__points_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__points;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEmblem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDEmblem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDEmblem_Client_FinalizeReplication, "Client_FinalizeReplication" }, // 1818587670
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDEmblem.h" },
		{ "ModuleRelativePath", "Public/DBDEmblem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_Statics::NewProp__definition_MetaData[] = {
		{ "Category", "DBDEmblem" },
		{ "ModuleRelativePath", "Public/DBDEmblem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDEmblem_Statics::NewProp__definition = { "_definition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem, _definition), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_Statics::NewProp__definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_Statics::NewProp__definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_Statics::NewProp__progressionPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDEmblem_Statics::NewProp__progressionPoints = { "_progressionPoints", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem, _progressionPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_Statics::NewProp__progressionPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_Statics::NewProp__progressionPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDEmblem_Statics::NewProp__progressionPoints_Inner = { "_progressionPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProgressionPoints, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_Statics::NewProp__points_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDEmblem_Statics::NewProp__points = { "_points", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem, _points), METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_Statics::NewProp__points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_Statics::NewProp__points_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDEmblem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_Statics::NewProp__definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_Statics::NewProp__progressionPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_Statics::NewProp__progressionPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_Statics::NewProp__points,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEmblem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEmblem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEmblem_Statics::ClassParams = {
		&UDBDEmblem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDEmblem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEmblem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEmblem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEmblem, 506676348);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDEmblem>()
	{
		return UDBDEmblem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEmblem(Z_Construct_UClass_UDBDEmblem, &UDBDEmblem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDEmblem"), false, nullptr, nullptr, nullptr);

	void UDBDEmblem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__points(TEXT("_points"));
		static const FName Name__progressionPoints(TEXT("_progressionPoints"));

		const bool bIsValid = true
			&& Name__points == ClassReps[(int32)ENetFields_Private::_points].Property->GetFName()
			&& Name__progressionPoints == ClassReps[(int32)ENetFields_Private::_progressionPoints].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDBDEmblem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEmblem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
