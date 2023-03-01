// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_Patrol_Discovery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Patrol_Discovery() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_Patrol_Discovery_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_Patrol_Discovery();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_Patrol();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UBTService_Patrol_Discovery::StaticRegisterNativesUBTService_Patrol_Discovery()
	{
	}
	UClass* Z_Construct_UClass_UBTService_Patrol_Discovery_NoRegister()
	{
		return UBTService_Patrol_Discovery::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Patrol_Discovery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstFindOnNbNeighborTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstFindOnNbNeighborTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFindRandomLocationOnTileAttempts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxFindRandomLocationOnTileAttempts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectPatrolPointIfInPressureZone_MetaData[];
#endif
		static void NewProp_RejectPatrolPointIfInPressureZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RejectPatrolPointIfInPressureZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_Patrol,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_Patrol_Discovery.h" },
		{ "ModuleRelativePath", "Public/BTService_Patrol_Discovery.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_FirstFindOnNbNeighborTiles_MetaData[] = {
		{ "Category", "BTService_Patrol_Discovery" },
		{ "ModuleRelativePath", "Public/BTService_Patrol_Discovery.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_FirstFindOnNbNeighborTiles = { "FirstFindOnNbNeighborTiles", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol_Discovery, FirstFindOnNbNeighborTiles), METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_FirstFindOnNbNeighborTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_FirstFindOnNbNeighborTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_MaxFindRandomLocationOnTileAttempts_MetaData[] = {
		{ "Category", "BTService_Patrol_Discovery" },
		{ "ModuleRelativePath", "Public/BTService_Patrol_Discovery.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_MaxFindRandomLocationOnTileAttempts = { "MaxFindRandomLocationOnTileAttempts", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_Patrol_Discovery, MaxFindRandomLocationOnTileAttempts), METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_MaxFindRandomLocationOnTileAttempts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_MaxFindRandomLocationOnTileAttempts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_RejectPatrolPointIfInPressureZone_MetaData[] = {
		{ "Category", "BTService_Patrol_Discovery" },
		{ "ModuleRelativePath", "Public/BTService_Patrol_Discovery.h" },
	};
#endif
	void Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_RejectPatrolPointIfInPressureZone_SetBit(void* Obj)
	{
		((UBTService_Patrol_Discovery*)Obj)->RejectPatrolPointIfInPressureZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_RejectPatrolPointIfInPressureZone = { "RejectPatrolPointIfInPressureZone", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTService_Patrol_Discovery), &Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_RejectPatrolPointIfInPressureZone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_RejectPatrolPointIfInPressureZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_RejectPatrolPointIfInPressureZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_FirstFindOnNbNeighborTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_MaxFindRandomLocationOnTileAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::NewProp_RejectPatrolPointIfInPressureZone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Patrol_Discovery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::ClassParams = {
		&UBTService_Patrol_Discovery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_Patrol_Discovery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_Patrol_Discovery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_Patrol_Discovery, 1380137213);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_Patrol_Discovery>()
	{
		return UBTService_Patrol_Discovery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_Patrol_Discovery(Z_Construct_UClass_UBTService_Patrol_Discovery, &UBTService_Patrol_Discovery::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_Patrol_Discovery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Patrol_Discovery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
