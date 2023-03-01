// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDBaseMatchGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBaseMatchGameMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseMatchGameMode_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseMatchGameMode();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseGameMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEndGameComponent_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_ANetworkFenceActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEscapeRequirementTracker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADBDBaseMatchGameMode::execGetEndGameComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEndGameComponent**)Z_Param__Result=P_THIS->GetEndGameComponent();
		P_NATIVE_END;
	}
	void ADBDBaseMatchGameMode::StaticRegisterNativesADBDBaseMatchGameMode()
	{
		UClass* Class = ADBDBaseMatchGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndGameComponent", &ADBDBaseMatchGameMode::execGetEndGameComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics
	{
		struct DBDBaseMatchGameMode_eventGetEndGameComponent_Parms
		{
			UEndGameComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDBaseMatchGameMode_eventGetEndGameComponent_Parms, ReturnValue), Z_Construct_UClass_UEndGameComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBaseMatchGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBaseMatchGameMode, nullptr, "GetEndGameComponent", nullptr, nullptr, sizeof(DBDBaseMatchGameMode_eventGetEndGameComponent_Parms), Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDBaseMatchGameMode_NoRegister()
	{
		return ADBDBaseMatchGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADBDBaseMatchGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__theFence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__theFence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapeRequirementTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__escapeRequirementTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__endGameComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__endGameComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDBaseMatchGameMode_GetEndGameComponent, "GetEndGameComponent" }, // 1218064422
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDBaseMatchGameMode.h" },
		{ "ModuleRelativePath", "Public/DBDBaseMatchGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__theFence_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBaseMatchGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__theFence = { "_theFence", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBaseMatchGameMode, _theFence), Z_Construct_UClass_ANetworkFenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__theFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__theFence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__escapeRequirementTracker_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBaseMatchGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__escapeRequirementTracker = { "_escapeRequirementTracker", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBaseMatchGameMode, _escapeRequirementTracker), Z_Construct_UClass_UEscapeRequirementTracker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__escapeRequirementTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__escapeRequirementTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__endGameComponent_MetaData[] = {
		{ "Category", "DBDBaseMatchGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDBaseMatchGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__endGameComponent = { "_endGameComponent", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBaseMatchGameMode, _endGameComponent), Z_Construct_UClass_UEndGameComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__endGameComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__endGameComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__theFence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__escapeRequirementTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::NewProp__endGameComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDBaseMatchGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::ClassParams = {
		&ADBDBaseMatchGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDBaseMatchGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDBaseMatchGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDBaseMatchGameMode, 1972349271);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDBaseMatchGameMode>()
	{
		return ADBDBaseMatchGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDBaseMatchGameMode(Z_Construct_UClass_ADBDBaseMatchGameMode, &ADBDBaseMatchGameMode::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDBaseMatchGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDBaseMatchGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
