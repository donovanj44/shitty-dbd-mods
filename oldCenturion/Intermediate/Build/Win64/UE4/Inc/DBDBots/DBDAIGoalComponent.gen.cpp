// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDAIGoalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAIGoalComponent() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIGoalComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIGoalComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIGoalWeightContainer();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIGoal();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
// End Cross Module References
	void UDBDAIGoalComponent::StaticRegisterNativesUDBDAIGoalComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDAIGoalComponent_NoRegister()
	{
		return UDBDAIGoalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAIGoalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__foundWeightedGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__foundWeightedGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__foundWeightedGoals_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__foundWeightedGoals_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__activeGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeGoals_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activeGoals_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAIGoalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIGoalComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAIGoalComponent.h" },
		{ "ModuleRelativePath", "Public/DBDAIGoalComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIGoalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals = { "_foundWeightedGoals", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIGoalComponent, _foundWeightedGoals), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals_Key_KeyProp = { "_foundWeightedGoals_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals_ValueProp = { "_foundWeightedGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAIGoalWeightContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIGoalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals = { "_activeGoals", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAIGoalComponent, _activeGoals), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals_Key_KeyProp = { "_activeGoals_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals_ValueProp = { "_activeGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAIGoal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAIGoalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__foundWeightedGoals_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAIGoalComponent_Statics::NewProp__activeGoals_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDBDAIGoalComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UDBDAIGoalComponent, IAIDisplayDebugInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAIGoalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAIGoalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAIGoalComponent_Statics::ClassParams = {
		&UDBDAIGoalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDAIGoalComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIGoalComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAIGoalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIGoalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAIGoalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAIGoalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAIGoalComponent, 1046834691);
	template<> DBDBOTS_API UClass* StaticClass<UDBDAIGoalComponent>()
	{
		return UDBDAIGoalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAIGoalComponent(Z_Construct_UClass_UDBDAIGoalComponent, &UDBDAIGoalComponent::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDAIGoalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAIGoalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
