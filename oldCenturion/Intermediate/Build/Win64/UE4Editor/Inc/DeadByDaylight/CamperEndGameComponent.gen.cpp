// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperEndGameComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperEndGameComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperEndGameComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperEndGameComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEndGameEntity_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCamperEndGameComponent::execGetSacrificedByEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSacrificedByEndGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperEndGameComponent::execOnDelayBeforeSacrificeEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDelayBeforeSacrificeEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperEndGameComponent::execOnEndGameSacrificeEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndGameSacrificeEnd();
		P_NATIVE_END;
	}
	void UCamperEndGameComponent::StaticRegisterNativesUCamperEndGameComponent()
	{
		UClass* Class = UCamperEndGameComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSacrificedByEndGame", &UCamperEndGameComponent::execGetSacrificedByEndGame },
			{ "OnDelayBeforeSacrificeEnd", &UCamperEndGameComponent::execOnDelayBeforeSacrificeEnd },
			{ "OnEndGameSacrificeEnd", &UCamperEndGameComponent::execOnEndGameSacrificeEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics
	{
		struct CamperEndGameComponent_eventGetSacrificedByEndGame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CamperEndGameComponent_eventGetSacrificedByEndGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CamperEndGameComponent_eventGetSacrificedByEndGame_Parms), &Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperEndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperEndGameComponent, nullptr, "GetSacrificedByEndGame", nullptr, nullptr, sizeof(CamperEndGameComponent_eventGetSacrificedByEndGame_Parms), Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperEndGameComponent_OnDelayBeforeSacrificeEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperEndGameComponent_OnDelayBeforeSacrificeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperEndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperEndGameComponent_OnDelayBeforeSacrificeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperEndGameComponent, nullptr, "OnDelayBeforeSacrificeEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperEndGameComponent_OnDelayBeforeSacrificeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperEndGameComponent_OnDelayBeforeSacrificeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperEndGameComponent_OnDelayBeforeSacrificeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperEndGameComponent_OnDelayBeforeSacrificeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperEndGameComponent_OnEndGameSacrificeEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperEndGameComponent_OnEndGameSacrificeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperEndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperEndGameComponent_OnEndGameSacrificeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperEndGameComponent, nullptr, "OnEndGameSacrificeEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperEndGameComponent_OnEndGameSacrificeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperEndGameComponent_OnEndGameSacrificeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperEndGameComponent_OnEndGameSacrificeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperEndGameComponent_OnEndGameSacrificeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCamperEndGameComponent_NoRegister()
	{
		return UCamperEndGameComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCamperEndGameComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__readyToBeSacrificed_MetaData[];
#endif
		static void NewProp__readyToBeSacrificed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__readyToBeSacrificed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__delayBeforeSacrifice_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__delayBeforeSacrifice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__endGameEntityClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__endGameEntityClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCamperEndGameComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCamperEndGameComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCamperEndGameComponent_GetSacrificedByEndGame, "GetSacrificedByEndGame" }, // 2258575596
		{ &Z_Construct_UFunction_UCamperEndGameComponent_OnDelayBeforeSacrificeEnd, "OnDelayBeforeSacrificeEnd" }, // 695823265
		{ &Z_Construct_UFunction_UCamperEndGameComponent_OnEndGameSacrificeEnd, "OnEndGameSacrificeEnd" }, // 3873617613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperEndGameComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CamperEndGameComponent.h" },
		{ "ModuleRelativePath", "Public/CamperEndGameComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__readyToBeSacrificed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperEndGameComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__readyToBeSacrificed_SetBit(void* Obj)
	{
		((UCamperEndGameComponent*)Obj)->_readyToBeSacrificed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__readyToBeSacrificed = { "_readyToBeSacrificed", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCamperEndGameComponent), &Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__readyToBeSacrificed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__readyToBeSacrificed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__readyToBeSacrificed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__delayBeforeSacrifice_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperEndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__delayBeforeSacrifice = { "_delayBeforeSacrifice", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperEndGameComponent, _delayBeforeSacrifice), METADATA_PARAMS(Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__delayBeforeSacrifice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__delayBeforeSacrifice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__endGameEntityClass_MetaData[] = {
		{ "Category", "CamperEndGameComponent" },
		{ "ModuleRelativePath", "Public/CamperEndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__endGameEntityClass = { "_endGameEntityClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperEndGameComponent, _endGameEntityClass), Z_Construct_UClass_AEndGameEntity_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__endGameEntityClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__endGameEntityClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCamperEndGameComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__readyToBeSacrificed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__delayBeforeSacrifice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperEndGameComponent_Statics::NewProp__endGameEntityClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCamperEndGameComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamperEndGameComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCamperEndGameComponent_Statics::ClassParams = {
		&UCamperEndGameComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCamperEndGameComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCamperEndGameComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCamperEndGameComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperEndGameComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCamperEndGameComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCamperEndGameComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCamperEndGameComponent, 1491740937);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCamperEndGameComponent>()
	{
		return UCamperEndGameComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCamperEndGameComponent(Z_Construct_UClass_UCamperEndGameComponent, &UCamperEndGameComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCamperEndGameComponent"), false, nullptr, nullptr, nullptr);

	void UCamperEndGameComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__delayBeforeSacrifice(TEXT("_delayBeforeSacrifice"));
		static const FName Name__readyToBeSacrificed(TEXT("_readyToBeSacrificed"));

		const bool bIsValid = true
			&& Name__delayBeforeSacrifice == ClassReps[(int32)ENetFields_Private::_delayBeforeSacrifice].Property->GetFName()
			&& Name__readyToBeSacrificed == ClassReps[(int32)ENetFields_Private::_readyToBeSacrificed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCamperEndGameComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCamperEndGameComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
