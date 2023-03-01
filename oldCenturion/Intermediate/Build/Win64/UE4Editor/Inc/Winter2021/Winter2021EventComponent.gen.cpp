// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/Winter2021EventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinter2021EventComponent() {}
// Cross Module References
	WINTER2021_API UClass* Z_Construct_UClass_UWinter2021EventComponent_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_UWinter2021EventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
	WINTER2021_API UClass* Z_Construct_UClass_ASnowman_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_USnowmanSpawnPlacementStrategy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UWinter2021EventComponent::execDBD_Winter2021ForceRespawnAllSnowmen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_Winter2021ForceRespawnAllSnowmen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWinter2021EventComponent::execDBD_Winter2021RecalculateSpawnPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_Winter2021RecalculateSpawnPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWinter2021EventComponent::execDBD_Winter2021ShowSnowmenSpawnCollisionChecks)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_numberOfSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_Winter2021ShowSnowmenSpawnCollisionChecks(Z_Param_numberOfSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWinter2021EventComponent::execDBD_Winter2021VisualizeCalculatedSpawnData)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_numberOfSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_Winter2021VisualizeCalculatedSpawnData(Z_Param_numberOfSeconds);
		P_NATIVE_END;
	}
	void UWinter2021EventComponent::StaticRegisterNativesUWinter2021EventComponent()
	{
		UClass* Class = UWinter2021EventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_Winter2021ForceRespawnAllSnowmen", &UWinter2021EventComponent::execDBD_Winter2021ForceRespawnAllSnowmen },
			{ "DBD_Winter2021RecalculateSpawnPoints", &UWinter2021EventComponent::execDBD_Winter2021RecalculateSpawnPoints },
			{ "DBD_Winter2021ShowSnowmenSpawnCollisionChecks", &UWinter2021EventComponent::execDBD_Winter2021ShowSnowmenSpawnCollisionChecks },
			{ "DBD_Winter2021VisualizeCalculatedSpawnData", &UWinter2021EventComponent::execDBD_Winter2021VisualizeCalculatedSpawnData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinter2021EventComponent, nullptr, "DBD_Winter2021ForceRespawnAllSnowmen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinter2021EventComponent, nullptr, "DBD_Winter2021RecalculateSpawnPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics
	{
		struct Winter2021EventComponent_eventDBD_Winter2021ShowSnowmenSpawnCollisionChecks_Parms
		{
			float numberOfSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numberOfSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::NewProp_numberOfSeconds = { "numberOfSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Winter2021EventComponent_eventDBD_Winter2021ShowSnowmenSpawnCollisionChecks_Parms, numberOfSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::NewProp_numberOfSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinter2021EventComponent, nullptr, "DBD_Winter2021ShowSnowmenSpawnCollisionChecks", nullptr, nullptr, sizeof(Winter2021EventComponent_eventDBD_Winter2021ShowSnowmenSpawnCollisionChecks_Parms), Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics
	{
		struct Winter2021EventComponent_eventDBD_Winter2021VisualizeCalculatedSpawnData_Parms
		{
			float numberOfSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numberOfSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::NewProp_numberOfSeconds = { "numberOfSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Winter2021EventComponent_eventDBD_Winter2021VisualizeCalculatedSpawnData_Parms, numberOfSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::NewProp_numberOfSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinter2021EventComponent, nullptr, "DBD_Winter2021VisualizeCalculatedSpawnData", nullptr, nullptr, sizeof(Winter2021EventComponent_eventDBD_Winter2021VisualizeCalculatedSpawnData_Parms), Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWinter2021EventComponent_NoRegister()
	{
		return UWinter2021EventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWinter2021EventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmen_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__snowmen;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snowmen_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanSpawnPlacementStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snowmanSpawnPlacementStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__snowmanClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanSpawnPlacementStrategyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__snowmanSpawnPlacementStrategyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numbSnowmenToSpawnAtStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__numbSnowmenToSpawnAtStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWinter2021EventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWinter2021EventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen, "DBD_Winter2021ForceRespawnAllSnowmen" }, // 307502661
		{ &Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints, "DBD_Winter2021RecalculateSpawnPoints" }, // 1056634051
		{ &Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks, "DBD_Winter2021ShowSnowmenSpawnCollisionChecks" }, // 3645354988
		{ &Z_Construct_UFunction_UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData, "DBD_Winter2021VisualizeCalculatedSpawnData" }, // 2301673339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021EventComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Winter2021EventComponent.h" },
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmen = { "_snowmen", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinter2021EventComponent, _snowmen), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmen_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmen_Inner = { "_snowmen", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASnowman_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategy = { "_snowmanSpawnPlacementStrategy", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinter2021EventComponent, _snowmanSpawnPlacementStrategy), Z_Construct_UClass_USnowmanSpawnPlacementStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanClass_MetaData[] = {
		{ "Category", "Winter2021EventComponent" },
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanClass = { "_snowmanClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinter2021EventComponent, _snowmanClass), Z_Construct_UClass_ASnowman_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategyClass_MetaData[] = {
		{ "Category", "Winter2021EventComponent" },
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategyClass = { "_snowmanSpawnPlacementStrategyClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinter2021EventComponent, _snowmanSpawnPlacementStrategyClass), Z_Construct_UClass_USnowmanSpawnPlacementStrategy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__numbSnowmenToSpawnAtStart_MetaData[] = {
		{ "Category", "Winter2021EventComponent" },
		{ "ModuleRelativePath", "Public/Winter2021EventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__numbSnowmenToSpawnAtStart = { "_numbSnowmenToSpawnAtStart", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinter2021EventComponent, _numbSnowmenToSpawnAtStart), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__numbSnowmenToSpawnAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__numbSnowmenToSpawnAtStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWinter2021EventComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmen_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__snowmanSpawnPlacementStrategyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021EventComponent_Statics::NewProp__numbSnowmenToSpawnAtStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWinter2021EventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinter2021EventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWinter2021EventComponent_Statics::ClassParams = {
		&UWinter2021EventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWinter2021EventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021EventComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWinter2021EventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021EventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWinter2021EventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWinter2021EventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWinter2021EventComponent, 2063611839);
	template<> WINTER2021_API UClass* StaticClass<UWinter2021EventComponent>()
	{
		return UWinter2021EventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWinter2021EventComponent(Z_Construct_UClass_UWinter2021EventComponent, &UWinter2021EventComponent::StaticClass, TEXT("/Script/Winter2021"), TEXT("UWinter2021EventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWinter2021EventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
