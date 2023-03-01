// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentAttackTrailPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentAttackTrailPoint() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentAttackTrailPoint_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentAttackTrailPoint();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ABaseTormentTrailPoint();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	static FName NAME_ATormentAttackTrailPoint_DisplayTrailSplineMesh = FName(TEXT("DisplayTrailSplineMesh"));
	void ATormentAttackTrailPoint::DisplayTrailSplineMesh(const USplineComponent* splinemesh, const int32 indexInTrail)
	{
		TormentAttackTrailPoint_eventDisplayTrailSplineMesh_Parms Parms;
		Parms.splinemesh=splinemesh;
		Parms.indexInTrail=indexInTrail;
		ProcessEvent(FindFunctionChecked(NAME_ATormentAttackTrailPoint_DisplayTrailSplineMesh),&Parms);
	}
	void ATormentAttackTrailPoint::StaticRegisterNativesATormentAttackTrailPoint()
	{
	}
	struct Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_indexInTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_indexInTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_splinemesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_splinemesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_indexInTrail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_indexInTrail = { "indexInTrail", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentAttackTrailPoint_eventDisplayTrailSplineMesh_Parms, indexInTrail), METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_indexInTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_indexInTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_splinemesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_splinemesh = { "splinemesh", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentAttackTrailPoint_eventDisplayTrailSplineMesh_Parms, splinemesh), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_splinemesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_splinemesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_indexInTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::NewProp_splinemesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentAttackTrailPoint, nullptr, "DisplayTrailSplineMesh", nullptr, nullptr, sizeof(TormentAttackTrailPoint_eventDisplayTrailSplineMesh_Parms), Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATormentAttackTrailPoint_NoRegister()
	{
		return ATormentAttackTrailPoint::StaticClass();
	}
	struct Z_Construct_UClass_ATormentAttackTrailPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackPointDelayToEnableCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackPointDelayToEnableCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATormentAttackTrailPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseTormentTrailPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATormentAttackTrailPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATormentAttackTrailPoint_DisplayTrailSplineMesh, "DisplayTrailSplineMesh" }, // 3119679903
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TormentAttackTrailPoint.h" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailPoint_Statics::NewProp__attackPointDelayToEnableCollision_MetaData[] = {
		{ "Category", "TormentAttackTrailPoint" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailPoint_Statics::NewProp__attackPointDelayToEnableCollision = { "_attackPointDelayToEnableCollision", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailPoint, _attackPointDelayToEnableCollision), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailPoint_Statics::NewProp__attackPointDelayToEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailPoint_Statics::NewProp__attackPointDelayToEnableCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATormentAttackTrailPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailPoint_Statics::NewProp__attackPointDelayToEnableCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATormentAttackTrailPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATormentAttackTrailPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATormentAttackTrailPoint_Statics::ClassParams = {
		&ATormentAttackTrailPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATormentAttackTrailPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailPoint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATormentAttackTrailPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATormentAttackTrailPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATormentAttackTrailPoint, 167066053);
	template<> THEEXECUTIONER_API UClass* StaticClass<ATormentAttackTrailPoint>()
	{
		return ATormentAttackTrailPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATormentAttackTrailPoint(Z_Construct_UClass_ATormentAttackTrailPoint, &ATormentAttackTrailPoint::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("ATormentAttackTrailPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATormentAttackTrailPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
