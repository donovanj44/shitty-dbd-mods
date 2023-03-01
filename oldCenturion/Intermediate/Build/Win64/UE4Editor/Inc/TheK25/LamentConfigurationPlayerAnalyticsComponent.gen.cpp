// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/LamentConfigurationPlayerAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLamentConfigurationPlayerAnalyticsComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData();
// End Cross Module References
	DEFINE_FUNCTION(ULamentConfigurationPlayerAnalyticsComponent::execOnRep_AnalyticsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AnalyticsCount();
		P_NATIVE_END;
	}
	void ULamentConfigurationPlayerAnalyticsComponent::StaticRegisterNativesULamentConfigurationPlayerAnalyticsComponent()
	{
		UClass* Class = ULamentConfigurationPlayerAnalyticsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_AnalyticsCount", &ULamentConfigurationPlayerAnalyticsComponent::execOnRep_AnalyticsCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationPlayerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent, nullptr, "OnRep_AnalyticsCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_NoRegister()
	{
		return ULamentConfigurationPlayerAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__possessionAnalytics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__possessionAnalytics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__analyticsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__analyticsCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount, "OnRep_AnalyticsCount" }, // 2369777226
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LamentConfigurationPlayerAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/LamentConfigurationPlayerAnalyticsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__possessionAnalytics_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationPlayerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__possessionAnalytics = { "_possessionAnalytics", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationPlayerAnalyticsComponent, _possessionAnalytics), Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__possessionAnalytics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__possessionAnalytics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__analyticsCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationPlayerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__analyticsCount = { "_analyticsCount", "OnRep_AnalyticsCount", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationPlayerAnalyticsComponent, _analyticsCount), METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__analyticsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__analyticsCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__possessionAnalytics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::NewProp__analyticsCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULamentConfigurationPlayerAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::ClassParams = {
		&ULamentConfigurationPlayerAnalyticsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULamentConfigurationPlayerAnalyticsComponent, 3285850163);
	template<> THEK25_API UClass* StaticClass<ULamentConfigurationPlayerAnalyticsComponent>()
	{
		return ULamentConfigurationPlayerAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULamentConfigurationPlayerAnalyticsComponent(Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent, &ULamentConfigurationPlayerAnalyticsComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("ULamentConfigurationPlayerAnalyticsComponent"), false, nullptr, nullptr, nullptr);

	void ULamentConfigurationPlayerAnalyticsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__analyticsCount(TEXT("_analyticsCount"));
		static const FName Name__possessionAnalytics(TEXT("_possessionAnalytics"));

		const bool bIsValid = true
			&& Name__analyticsCount == ClassReps[(int32)ENetFields_Private::_analyticsCount].Property->GetFName()
			&& Name__possessionAnalytics == ClassReps[(int32)ENetFields_Private::_possessionAnalytics].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULamentConfigurationPlayerAnalyticsComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULamentConfigurationPlayerAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
