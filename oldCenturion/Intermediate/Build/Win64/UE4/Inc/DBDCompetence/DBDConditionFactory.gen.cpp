// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DBDConditionFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDConditionFactory() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDBDConditionFactory_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDBDConditionFactory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDoesPerkHaveToken_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UConditionReceiver_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPlayerPerformingInteraction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UDBDConditionFactory::execDoesPerkHaveToken)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_GET_OBJECT(UPerk,Z_Param_perk);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDoesPerkHaveToken**)Z_Param__Result=UDBDConditionFactory::DoesPerkHaveToken(Z_Param_conditionReceiver,Z_Param_perk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDConditionFactory::execIsPlayerPerformingInteraction)
	{
		P_GET_TINTERFACE(IConditionReceiver,Z_Param_conditionReceiver);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_interactionSemantics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIsPlayerPerformingInteraction**)Z_Param__Result=UDBDConditionFactory::IsPlayerPerformingInteraction(Z_Param_conditionReceiver,Z_Param_Out_interactionSemantics);
		P_NATIVE_END;
	}
	void UDBDConditionFactory::StaticRegisterNativesUDBDConditionFactory()
	{
		UClass* Class = UDBDConditionFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesPerkHaveToken", &UDBDConditionFactory::execDoesPerkHaveToken },
			{ "IsPlayerPerformingInteraction", &UDBDConditionFactory::execIsPlayerPerformingInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics
	{
		struct DBDConditionFactory_eventDoesPerkHaveToken_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			UPerk* perk;
			UDoesPerkHaveToken* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_perk;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDConditionFactory_eventDoesPerkHaveToken_Parms, ReturnValue), Z_Construct_UClass_UDoesPerkHaveToken_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_perk_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_perk = { "perk", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDConditionFactory_eventDoesPerkHaveToken_Parms, perk), Z_Construct_UClass_UPerk_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_perk_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_perk_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDConditionFactory_eventDoesPerkHaveToken_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_perk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDConditionFactory, nullptr, "DoesPerkHaveToken", nullptr, nullptr, sizeof(DBDConditionFactory_eventDoesPerkHaveToken_Parms), Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics
	{
		struct DBDConditionFactory_eventIsPlayerPerformingInteraction_Parms
		{
			TScriptInterface<IConditionReceiver> conditionReceiver;
			FGameplayTagContainer interactionSemantics;
			UIsPlayerPerformingInteraction* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionSemantics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionSemantics;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_conditionReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDConditionFactory_eventIsPlayerPerformingInteraction_Parms, ReturnValue), Z_Construct_UClass_UIsPlayerPerformingInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_interactionSemantics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_interactionSemantics = { "interactionSemantics", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDConditionFactory_eventIsPlayerPerformingInteraction_Parms, interactionSemantics), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_interactionSemantics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_interactionSemantics_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_conditionReceiver = { "conditionReceiver", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDConditionFactory_eventIsPlayerPerformingInteraction_Parms, conditionReceiver), Z_Construct_UClass_UConditionReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_interactionSemantics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::NewProp_conditionReceiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDConditionFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDConditionFactory, nullptr, "IsPlayerPerformingInteraction", nullptr, nullptr, sizeof(DBDConditionFactory_eventIsPlayerPerformingInteraction_Parms), Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDConditionFactory_NoRegister()
	{
		return UDBDConditionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDBDConditionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDConditionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDConditionFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDConditionFactory_DoesPerkHaveToken, "DoesPerkHaveToken" }, // 3836611460
		{ &Z_Construct_UFunction_UDBDConditionFactory_IsPlayerPerformingInteraction, "IsPlayerPerformingInteraction" }, // 1533650048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDConditionFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDConditionFactory.h" },
		{ "ModuleRelativePath", "Public/DBDConditionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDConditionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDConditionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDConditionFactory_Statics::ClassParams = {
		&UDBDConditionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDConditionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDConditionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDConditionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDConditionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDConditionFactory, 762075524);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDBDConditionFactory>()
	{
		return UDBDConditionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDConditionFactory(Z_Construct_UClass_UDBDConditionFactory, &UDBDConditionFactory::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDBDConditionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDConditionFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
