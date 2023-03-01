// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/QuestEventsHandlerUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEventsHandlerUtilities() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UQuestEventsHandlerUtilities_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UQuestEventsHandlerUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Archives();
	ARCHIVES_API UClass* Z_Construct_UClass_UQuestEventsHandler_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestEventsHandlerUtilities::execInitializeQuestEventHandler)
	{
		P_GET_OBJECT(UQuestEventsHandler,Z_Param_questEventsHandler);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEventsHandlerUtilities::InitializeQuestEventHandler(Z_Param_questEventsHandler);
		P_NATIVE_END;
	}
	void UQuestEventsHandlerUtilities::StaticRegisterNativesUQuestEventsHandlerUtilities()
	{
		UClass* Class = UQuestEventsHandlerUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeQuestEventHandler", &UQuestEventsHandlerUtilities::execInitializeQuestEventHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics
	{
		struct QuestEventsHandlerUtilities_eventInitializeQuestEventHandler_Parms
		{
			UQuestEventsHandler* questEventsHandler;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_questEventsHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_questEventsHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::NewProp_questEventsHandler_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::NewProp_questEventsHandler = { "questEventsHandler", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEventsHandlerUtilities_eventInitializeQuestEventHandler_Parms, questEventsHandler), Z_Construct_UClass_UQuestEventsHandler_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::NewProp_questEventsHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::NewProp_questEventsHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::NewProp_questEventsHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEventsHandlerUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEventsHandlerUtilities, nullptr, "InitializeQuestEventHandler", nullptr, nullptr, sizeof(QuestEventsHandlerUtilities_eventInitializeQuestEventHandler_Parms), Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestEventsHandlerUtilities_NoRegister()
	{
		return UQuestEventsHandlerUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEventsHandlerUtilities_InitializeQuestEventHandler, "InitializeQuestEventHandler" }, // 4100697377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestEventsHandlerUtilities.h" },
		{ "ModuleRelativePath", "Public/QuestEventsHandlerUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEventsHandlerUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics::ClassParams = {
		&UQuestEventsHandlerUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEventsHandlerUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestEventsHandlerUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestEventsHandlerUtilities, 2138967340);
	template<> ARCHIVES_API UClass* StaticClass<UQuestEventsHandlerUtilities>()
	{
		return UQuestEventsHandlerUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestEventsHandlerUtilities(Z_Construct_UClass_UQuestEventsHandlerUtilities, &UQuestEventsHandlerUtilities::StaticClass, TEXT("/Script/Archives"), TEXT("UQuestEventsHandlerUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEventsHandlerUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
