// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FearMarketManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFearMarketManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFearMarketManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFearMarketManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFearMarketOfferingInstance();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFearMarketItemInstance();
// End Cross Module References
	DEFINE_FUNCTION(UFearMarketManager::execReceivedFearMarketData)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceivedFearMarketData(Z_Param_success);
		P_NATIVE_END;
	}
	void UFearMarketManager::StaticRegisterNativesUFearMarketManager()
	{
		UClass* Class = UFearMarketManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceivedFearMarketData", &UFearMarketManager::execReceivedFearMarketData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics
	{
		struct FearMarketManager_eventReceivedFearMarketData_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FearMarketManager_eventReceivedFearMarketData_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FearMarketManager_eventReceivedFearMarketData_Parms), &Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FearMarketManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFearMarketManager, nullptr, "ReceivedFearMarketData", nullptr, nullptr, sizeof(FearMarketManager_eventReceivedFearMarketData_Parms), Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFearMarketManager_NoRegister()
	{
		return UFearMarketManager::StaticClass();
	}
	struct Z_Construct_UClass_UFearMarketManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__gameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__existingFearMarket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__existingFearMarket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingPurchaseFearMarketItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingPurchaseFearMarketItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFearMarketManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFearMarketManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFearMarketManager_ReceivedFearMarketData, "ReceivedFearMarketData" }, // 568308809
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FearMarketManager.h" },
		{ "ModuleRelativePath", "Public/FearMarketManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketManager_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFearMarketManager_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFearMarketManager, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFearMarketManager_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketManager_Statics::NewProp__gameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketManager_Statics::NewProp__existingFearMarket_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFearMarketManager_Statics::NewProp__existingFearMarket = { "_existingFearMarket", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFearMarketManager, _existingFearMarket), Z_Construct_UScriptStruct_FFearMarketOfferingInstance, METADATA_PARAMS(Z_Construct_UClass_UFearMarketManager_Statics::NewProp__existingFearMarket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketManager_Statics::NewProp__existingFearMarket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFearMarketManager_Statics::NewProp_PendingPurchaseFearMarketItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/FearMarketManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFearMarketManager_Statics::NewProp_PendingPurchaseFearMarketItem = { "PendingPurchaseFearMarketItem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFearMarketManager, PendingPurchaseFearMarketItem), Z_Construct_UScriptStruct_FFearMarketItemInstance, METADATA_PARAMS(Z_Construct_UClass_UFearMarketManager_Statics::NewProp_PendingPurchaseFearMarketItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketManager_Statics::NewProp_PendingPurchaseFearMarketItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFearMarketManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketManager_Statics::NewProp__gameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketManager_Statics::NewProp__existingFearMarket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFearMarketManager_Statics::NewProp_PendingPurchaseFearMarketItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFearMarketManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFearMarketManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFearMarketManager_Statics::ClassParams = {
		&UFearMarketManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFearMarketManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFearMarketManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFearMarketManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFearMarketManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFearMarketManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFearMarketManager, 3859740232);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFearMarketManager>()
	{
		return UFearMarketManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFearMarketManager(Z_Construct_UClass_UFearMarketManager, &UFearMarketManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFearMarketManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFearMarketManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
