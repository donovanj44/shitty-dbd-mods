// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/CollectItemInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectItemInteraction() {}
// Cross Module References
	DBDINTERACTION_API UFunction* Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DBDINTERACTION_API UFunction* Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UCollectItemInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UCollectItemInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CollectItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDInteraction, nullptr, "CollectItemInteractionOnCollectUpdateEnd__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CollectItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDInteraction, nullptr, "CollectItemInteractionOnCollectUpdateStart__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCollectItemInteraction::execGetItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACollectable**)Z_Param__Result=P_THIS->GetItem();
		P_NATIVE_END;
	}
	void UCollectItemInteraction::StaticRegisterNativesUCollectItemInteraction()
	{
		UClass* Class = UCollectItemInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItem", &UCollectItemInteraction::execGetItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics
	{
		struct CollectItemInteraction_eventGetItem_Parms
		{
			ACollectable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CollectItemInteraction_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CollectItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollectItemInteraction, nullptr, "GetItem", nullptr, nullptr, sizeof(CollectItemInteraction_eventGetItem_Parms), Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCollectItemInteraction_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCollectItemInteraction_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCollectItemInteraction_NoRegister()
	{
		return UCollectItemInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UCollectItemInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCollectUpdateEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollectUpdateEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCollectUpdateStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollectUpdateStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectItemInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCollectItemInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCollectItemInteraction_GetItem, "GetItem" }, // 3391215476
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectItemInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CollectItemInteraction.h" },
		{ "ModuleRelativePath", "Public/CollectItemInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/CollectItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateEnd = { "OnCollectUpdateEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollectItemInteraction, OnCollectUpdateEnd), Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/CollectItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateStart = { "OnCollectUpdateStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollectItemInteraction, OnCollectUpdateStart), Z_Construct_UDelegateFunction_DBDInteraction_CollectItemInteractionOnCollectUpdateStart__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectItemInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectItemInteraction_Statics::NewProp_OnCollectUpdateStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectItemInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectItemInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectItemInteraction_Statics::ClassParams = {
		&UCollectItemInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCollectItemInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollectItemInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectItemInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectItemInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectItemInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectItemInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectItemInteraction, 3010804485);
	template<> DBDINTERACTION_API UClass* StaticClass<UCollectItemInteraction>()
	{
		return UCollectItemInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectItemInteraction(Z_Construct_UClass_UCollectItemInteraction, &UCollectItemInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UCollectItemInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectItemInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
