// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_FindInteractor_Totem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_FindInteractor_Totem() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_FindInteractor_Totem_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_FindInteractor_Totem();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_FindInteractor();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
// End Cross Module References
	void UBTService_FindInteractor_Totem::StaticRegisterNativesUBTService_FindInteractor_Totem()
	{
	}
	UClass* Z_Construct_UClass_UBTService_FindInteractor_Totem_NoRegister()
	{
		return UBTService_FindInteractor_Totem::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveGoalWeightAtMinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InactiveGoalWeightAtMinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveGoalWeightMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InactiveGoalWeightMaxDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_FindInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_FindInteractor_Totem.h" },
		{ "ModuleRelativePath", "Public/BTService_FindInteractor_Totem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightAtMinDistance_MetaData[] = {
		{ "Category", "BTService_FindInteractor_Totem" },
		{ "ModuleRelativePath", "Public/BTService_FindInteractor_Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightAtMinDistance = { "InactiveGoalWeightAtMinDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_FindInteractor_Totem, InactiveGoalWeightAtMinDistance), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightAtMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightAtMinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightMaxDistance_MetaData[] = {
		{ "Category", "BTService_FindInteractor_Totem" },
		{ "ModuleRelativePath", "Public/BTService_FindInteractor_Totem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightMaxDistance = { "InactiveGoalWeightMaxDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_FindInteractor_Totem, InactiveGoalWeightMaxDistance), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightMaxDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightAtMinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::NewProp_InactiveGoalWeightMaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_FindInteractor_Totem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::ClassParams = {
		&UBTService_FindInteractor_Totem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_FindInteractor_Totem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_FindInteractor_Totem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_FindInteractor_Totem, 3789854385);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_FindInteractor_Totem>()
	{
		return UBTService_FindInteractor_Totem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_FindInteractor_Totem(Z_Construct_UClass_UBTService_FindInteractor_Totem, &UBTService_FindInteractor_Totem::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_FindInteractor_Totem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_FindInteractor_Totem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
