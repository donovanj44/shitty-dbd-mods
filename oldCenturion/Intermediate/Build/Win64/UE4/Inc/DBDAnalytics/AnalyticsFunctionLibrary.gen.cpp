// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AnalyticsFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalyticsFunctionLibrary() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UAnalyticsFunctionLibrary_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UAnalyticsFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_EKillerTutorialSections();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_ESurvivorTutorialSections();
// End Cross Module References
	DEFINE_FUNCTION(UAnalyticsFunctionLibrary::execEndKillerTutorialSectionAnalytics)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EKillerTutorialSections,Z_Param_tutorialSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsFunctionLibrary::EndKillerTutorialSectionAnalytics(Z_Param_WorldContextObject,EKillerTutorialSections(Z_Param_tutorialSection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsFunctionLibrary::execEndSurvivorTutorialSectionAnalytics)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESurvivorTutorialSections,Z_Param_tutorialSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsFunctionLibrary::EndSurvivorTutorialSectionAnalytics(Z_Param_WorldContextObject,ESurvivorTutorialSections(Z_Param_tutorialSection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsFunctionLibrary::execIncrementHookSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsFunctionLibrary::IncrementHookSpawned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsFunctionLibrary::execStartKillerTutorialSectionAnalytics)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EKillerTutorialSections,Z_Param_tutorialSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsFunctionLibrary::StartKillerTutorialSectionAnalytics(Z_Param_WorldContextObject,EKillerTutorialSections(Z_Param_tutorialSection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsFunctionLibrary::execStartSurvivorTutorialSectionAnalytics)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESurvivorTutorialSections,Z_Param_tutorialSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsFunctionLibrary::StartSurvivorTutorialSectionAnalytics(Z_Param_WorldContextObject,ESurvivorTutorialSections(Z_Param_tutorialSection));
		P_NATIVE_END;
	}
	void UAnalyticsFunctionLibrary::StaticRegisterNativesUAnalyticsFunctionLibrary()
	{
		UClass* Class = UAnalyticsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndKillerTutorialSectionAnalytics", &UAnalyticsFunctionLibrary::execEndKillerTutorialSectionAnalytics },
			{ "EndSurvivorTutorialSectionAnalytics", &UAnalyticsFunctionLibrary::execEndSurvivorTutorialSectionAnalytics },
			{ "IncrementHookSpawned", &UAnalyticsFunctionLibrary::execIncrementHookSpawned },
			{ "StartKillerTutorialSectionAnalytics", &UAnalyticsFunctionLibrary::execStartKillerTutorialSectionAnalytics },
			{ "StartSurvivorTutorialSectionAnalytics", &UAnalyticsFunctionLibrary::execStartSurvivorTutorialSectionAnalytics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics
	{
		struct AnalyticsFunctionLibrary_eventEndKillerTutorialSectionAnalytics_Parms
		{
			UObject* WorldContextObject;
			EKillerTutorialSections tutorialSection;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tutorialSection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tutorialSection_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::NewProp_tutorialSection = { "tutorialSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnalyticsFunctionLibrary_eventEndKillerTutorialSectionAnalytics_Parms, tutorialSection), Z_Construct_UEnum_DBDAnalytics_EKillerTutorialSections, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::NewProp_tutorialSection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnalyticsFunctionLibrary_eventEndKillerTutorialSectionAnalytics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::NewProp_tutorialSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::NewProp_tutorialSection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnalyticsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsFunctionLibrary, nullptr, "EndKillerTutorialSectionAnalytics", nullptr, nullptr, sizeof(AnalyticsFunctionLibrary_eventEndKillerTutorialSectionAnalytics_Parms), Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics
	{
		struct AnalyticsFunctionLibrary_eventEndSurvivorTutorialSectionAnalytics_Parms
		{
			UObject* WorldContextObject;
			ESurvivorTutorialSections tutorialSection;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tutorialSection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tutorialSection_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::NewProp_tutorialSection = { "tutorialSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnalyticsFunctionLibrary_eventEndSurvivorTutorialSectionAnalytics_Parms, tutorialSection), Z_Construct_UEnum_DBDAnalytics_ESurvivorTutorialSections, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::NewProp_tutorialSection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnalyticsFunctionLibrary_eventEndSurvivorTutorialSectionAnalytics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::NewProp_tutorialSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::NewProp_tutorialSection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnalyticsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsFunctionLibrary, nullptr, "EndSurvivorTutorialSectionAnalytics", nullptr, nullptr, sizeof(AnalyticsFunctionLibrary_eventEndSurvivorTutorialSectionAnalytics_Parms), Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsFunctionLibrary_IncrementHookSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsFunctionLibrary_IncrementHookSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnalyticsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_IncrementHookSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsFunctionLibrary, nullptr, "IncrementHookSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsFunctionLibrary_IncrementHookSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_IncrementHookSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsFunctionLibrary_IncrementHookSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnalyticsFunctionLibrary_IncrementHookSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics
	{
		struct AnalyticsFunctionLibrary_eventStartKillerTutorialSectionAnalytics_Parms
		{
			UObject* WorldContextObject;
			EKillerTutorialSections tutorialSection;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tutorialSection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tutorialSection_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::NewProp_tutorialSection = { "tutorialSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnalyticsFunctionLibrary_eventStartKillerTutorialSectionAnalytics_Parms, tutorialSection), Z_Construct_UEnum_DBDAnalytics_EKillerTutorialSections, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::NewProp_tutorialSection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnalyticsFunctionLibrary_eventStartKillerTutorialSectionAnalytics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::NewProp_tutorialSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::NewProp_tutorialSection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnalyticsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsFunctionLibrary, nullptr, "StartKillerTutorialSectionAnalytics", nullptr, nullptr, sizeof(AnalyticsFunctionLibrary_eventStartKillerTutorialSectionAnalytics_Parms), Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics
	{
		struct AnalyticsFunctionLibrary_eventStartSurvivorTutorialSectionAnalytics_Parms
		{
			UObject* WorldContextObject;
			ESurvivorTutorialSections tutorialSection;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tutorialSection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tutorialSection_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::NewProp_tutorialSection = { "tutorialSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnalyticsFunctionLibrary_eventStartSurvivorTutorialSectionAnalytics_Parms, tutorialSection), Z_Construct_UEnum_DBDAnalytics_ESurvivorTutorialSections, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::NewProp_tutorialSection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnalyticsFunctionLibrary_eventStartSurvivorTutorialSectionAnalytics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::NewProp_tutorialSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::NewProp_tutorialSection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnalyticsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsFunctionLibrary, nullptr, "StartSurvivorTutorialSectionAnalytics", nullptr, nullptr, sizeof(AnalyticsFunctionLibrary_eventStartSurvivorTutorialSectionAnalytics_Parms), Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnalyticsFunctionLibrary_NoRegister()
	{
		return UAnalyticsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics, "EndKillerTutorialSectionAnalytics" }, // 513199435
		{ &Z_Construct_UFunction_UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics, "EndSurvivorTutorialSectionAnalytics" }, // 3278487795
		{ &Z_Construct_UFunction_UAnalyticsFunctionLibrary_IncrementHookSpawned, "IncrementHookSpawned" }, // 1481465098
		{ &Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics, "StartKillerTutorialSectionAnalytics" }, // 3580845995
		{ &Z_Construct_UFunction_UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics, "StartSurvivorTutorialSectionAnalytics" }, // 3242582923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnalyticsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AnalyticsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalyticsFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics::ClassParams = {
		&UAnalyticsFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalyticsFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnalyticsFunctionLibrary, 4193561542);
	template<> DBDANALYTICS_API UClass* StaticClass<UAnalyticsFunctionLibrary>()
	{
		return UAnalyticsFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnalyticsFunctionLibrary(Z_Construct_UClass_UAnalyticsFunctionLibrary, &UAnalyticsFunctionLibrary::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UAnalyticsFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalyticsFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
