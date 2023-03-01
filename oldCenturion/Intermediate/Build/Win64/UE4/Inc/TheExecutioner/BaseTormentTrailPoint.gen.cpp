// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/BaseTormentTrailPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTormentTrailPoint() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ABaseTormentTrailPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseTormentTrailPoint::execEndOfDisapearCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOfDisapearCosmetic();
		P_NATIVE_END;
	}
	static FName NAME_ABaseTormentTrailPoint_DisappearCosmetic = FName(TEXT("DisappearCosmetic"));
	void ABaseTormentTrailPoint::DisappearCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseTormentTrailPoint_DisappearCosmetic),NULL);
	}
	void ABaseTormentTrailPoint::StaticRegisterNativesABaseTormentTrailPoint()
	{
		UClass* Class = ABaseTormentTrailPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndOfDisapearCosmetic", &ABaseTormentTrailPoint::execEndOfDisapearCosmetic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseTormentTrailPoint_DisappearCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseTormentTrailPoint_DisappearCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseTormentTrailPoint_DisappearCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTormentTrailPoint, nullptr, "DisappearCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseTormentTrailPoint_DisappearCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTormentTrailPoint_DisappearCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseTormentTrailPoint_DisappearCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseTormentTrailPoint_DisappearCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseTormentTrailPoint_EndOfDisapearCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseTormentTrailPoint_EndOfDisapearCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseTormentTrailPoint_EndOfDisapearCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTormentTrailPoint, nullptr, "EndOfDisapearCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseTormentTrailPoint_EndOfDisapearCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTormentTrailPoint_EndOfDisapearCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseTormentTrailPoint_EndOfDisapearCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseTormentTrailPoint_EndOfDisapearCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister()
	{
		return ABaseTormentTrailPoint::StaticClass();
	}
	struct Z_Construct_UClass_ABaseTormentTrailPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__indexInTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__indexInTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trailMeshList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__trailMeshList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trailMeshList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__splineMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__splineMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailAliveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentTrailAliveTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__collisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseTormentTrailPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseTormentTrailPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseTormentTrailPoint_DisappearCosmetic, "DisappearCosmetic" }, // 1079567911
		{ &Z_Construct_UFunction_ABaseTormentTrailPoint_EndOfDisapearCosmetic, "EndOfDisapearCosmetic" }, // 1553183973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTormentTrailPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTormentTrailPoint.h" },
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__indexInTrail_MetaData[] = {
		{ "Category", "BaseTormentTrailPoint" },
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__indexInTrail = { "_indexInTrail", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTormentTrailPoint, _indexInTrail), nullptr, METADATA_PARAMS(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__indexInTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__indexInTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__trailMeshList_MetaData[] = {
		{ "Category", "BaseTormentTrailPoint" },
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__trailMeshList = { "_trailMeshList", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTormentTrailPoint, _trailMeshList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__trailMeshList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__trailMeshList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__trailMeshList_Inner = { "_trailMeshList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__splineMeshComponent_MetaData[] = {
		{ "Category", "BaseTormentTrailPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__splineMeshComponent = { "_splineMeshComponent", nullptr, (EPropertyFlags)0x002008000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTormentTrailPoint, _splineMeshComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__splineMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__splineMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__tormentTrailAliveTime_MetaData[] = {
		{ "Category", "BaseTormentTrailPoint" },
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__tormentTrailAliveTime = { "_tormentTrailAliveTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTormentTrailPoint, _tormentTrailAliveTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__tormentTrailAliveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__tormentTrailAliveTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionRadius_MetaData[] = {
		{ "Category", "BaseTormentTrailPoint" },
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionRadius = { "_collisionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTormentTrailPoint, _collisionRadius), METADATA_PARAMS(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionComponent_MetaData[] = {
		{ "Category", "BaseTormentTrailPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionComponent = { "_collisionComponent", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTormentTrailPoint, _collisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseTormentTrailPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__indexInTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__trailMeshList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__trailMeshList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__splineMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__tormentTrailAliveTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTormentTrailPoint_Statics::NewProp__collisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseTormentTrailPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTormentTrailPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseTormentTrailPoint_Statics::ClassParams = {
		&ABaseTormentTrailPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseTormentTrailPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTormentTrailPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseTormentTrailPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseTormentTrailPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseTormentTrailPoint, 1150275518);
	template<> THEEXECUTIONER_API UClass* StaticClass<ABaseTormentTrailPoint>()
	{
		return ABaseTormentTrailPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseTormentTrailPoint(Z_Construct_UClass_ABaseTormentTrailPoint, &ABaseTormentTrailPoint::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("ABaseTormentTrailPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTormentTrailPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
