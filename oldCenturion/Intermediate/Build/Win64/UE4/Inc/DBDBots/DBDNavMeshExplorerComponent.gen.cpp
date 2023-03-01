// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDNavMeshExplorerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDNavMeshExplorerComponent() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDNavMeshExplorerComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDNavMeshExplorerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDPathFollowingComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
// End Cross Module References
	void UDBDNavMeshExplorerComponent::StaticRegisterNativesUDBDNavMeshExplorerComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDNavMeshExplorerComponent_NoRegister()
	{
		return UDBDNavMeshExplorerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pathFollowingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyAutoExploredAtGameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FullyAutoExploredAtGameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplorationBoxHalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExplorationBoxHalfExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExploreAtInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExploreAtInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExploreAtAgentMoveDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExploreAtAgentMoveDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDNavMeshExplorerComponent.h" },
		{ "ModuleRelativePath", "Public/DBDNavMeshExplorerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp__pathFollowingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDNavMeshExplorerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp__pathFollowingComponent = { "_pathFollowingComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavMeshExplorerComponent, _pathFollowingComponent), Z_Construct_UClass_UDBDPathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp__pathFollowingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp__pathFollowingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_FullyAutoExploredAtGameTime_MetaData[] = {
		{ "Category", "DBDNavMeshExplorerComponent" },
		{ "ModuleRelativePath", "Public/DBDNavMeshExplorerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_FullyAutoExploredAtGameTime = { "FullyAutoExploredAtGameTime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavMeshExplorerComponent, FullyAutoExploredAtGameTime), METADATA_PARAMS(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_FullyAutoExploredAtGameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_FullyAutoExploredAtGameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExplorationBoxHalfExtent_MetaData[] = {
		{ "Category", "DBDNavMeshExplorerComponent" },
		{ "ModuleRelativePath", "Public/DBDNavMeshExplorerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExplorationBoxHalfExtent = { "ExplorationBoxHalfExtent", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavMeshExplorerComponent, ExplorationBoxHalfExtent), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExplorationBoxHalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExplorationBoxHalfExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtInterval_MetaData[] = {
		{ "Category", "DBDNavMeshExplorerComponent" },
		{ "ModuleRelativePath", "Public/DBDNavMeshExplorerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtInterval = { "ExploreAtInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavMeshExplorerComponent, ExploreAtInterval), METADATA_PARAMS(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtAgentMoveDistance_MetaData[] = {
		{ "Category", "DBDNavMeshExplorerComponent" },
		{ "ModuleRelativePath", "Public/DBDNavMeshExplorerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtAgentMoveDistance = { "ExploreAtAgentMoveDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavMeshExplorerComponent, ExploreAtAgentMoveDistance), METADATA_PARAMS(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtAgentMoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtAgentMoveDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp__pathFollowingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_FullyAutoExploredAtGameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExplorationBoxHalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::NewProp_ExploreAtAgentMoveDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDNavMeshExplorerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::ClassParams = {
		&UDBDNavMeshExplorerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDNavMeshExplorerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDNavMeshExplorerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDNavMeshExplorerComponent, 90826851);
	template<> DBDBOTS_API UClass* StaticClass<UDBDNavMeshExplorerComponent>()
	{
		return UDBDNavMeshExplorerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDNavMeshExplorerComponent(Z_Construct_UClass_UDBDNavMeshExplorerComponent, &UDBDNavMeshExplorerComponent::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDNavMeshExplorerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDNavMeshExplorerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
