// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_GoalCoordinator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_GoalCoordinator() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_GoalCoordinator_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_GoalCoordinator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIGoalWeightContainer();
// End Cross Module References
	void UBTService_GoalCoordinator::StaticRegisterNativesUBTService_GoalCoordinator()
	{
	}
	UClass* Z_Construct_UClass_UBTService_GoalCoordinator_NoRegister()
	{
		return UBTService_GoalCoordinator::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_GoalCoordinator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__managedGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__managedGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__managedGoals_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__managedGoals_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_GoalCoordinator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_GoalCoordinator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_GoalCoordinator.h" },
		{ "ModuleRelativePath", "Public/BTService_GoalCoordinator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals_MetaData[] = {
		{ "ModuleRelativePath", "Public/BTService_GoalCoordinator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals = { "_managedGoals", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_GoalCoordinator, _managedGoals), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals_Key_KeyProp = { "_managedGoals_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals_ValueProp = { "_managedGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAIGoalWeightContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_GoalCoordinator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_GoalCoordinator_Statics::NewProp__managedGoals_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_GoalCoordinator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_GoalCoordinator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_GoalCoordinator_Statics::ClassParams = {
		&UBTService_GoalCoordinator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_GoalCoordinator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_GoalCoordinator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_GoalCoordinator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_GoalCoordinator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_GoalCoordinator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_GoalCoordinator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_GoalCoordinator, 1857487668);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_GoalCoordinator>()
	{
		return UBTService_GoalCoordinator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_GoalCoordinator(Z_Construct_UClass_UBTService_GoalCoordinator, &UBTService_GoalCoordinator::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_GoalCoordinator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_GoalCoordinator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
