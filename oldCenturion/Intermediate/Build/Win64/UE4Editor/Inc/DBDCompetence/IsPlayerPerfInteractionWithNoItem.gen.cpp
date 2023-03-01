// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsPlayerPerfInteractionWithNoItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPlayerPerfInteractionWithNoItem() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseIsPlayerPerformingInteraction();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UIsPlayerPerfInteractionWithNoItem::execOnCollectableChargeStateChange)
	{
		P_GET_UBOOL(Z_Param_empty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectableChargeStateChange(Z_Param_empty);
		P_NATIVE_END;
	}
	void UIsPlayerPerfInteractionWithNoItem::StaticRegisterNativesUIsPlayerPerfInteractionWithNoItem()
	{
		UClass* Class = UIsPlayerPerfInteractionWithNoItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollectableChargeStateChange", &UIsPlayerPerfInteractionWithNoItem::execOnCollectableChargeStateChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics
	{
		struct IsPlayerPerfInteractionWithNoItem_eventOnCollectableChargeStateChange_Parms
		{
			bool empty;
		};
		static void NewProp_empty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_empty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::NewProp_empty_SetBit(void* Obj)
	{
		((IsPlayerPerfInteractionWithNoItem_eventOnCollectableChargeStateChange_Parms*)Obj)->empty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::NewProp_empty = { "empty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsPlayerPerfInteractionWithNoItem_eventOnCollectableChargeStateChange_Parms), &Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::NewProp_empty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::NewProp_empty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsPlayerPerfInteractionWithNoItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem, nullptr, "OnCollectableChargeStateChange", nullptr, nullptr, sizeof(IsPlayerPerfInteractionWithNoItem_eventOnCollectableChargeStateChange_Parms), Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_NoRegister()
	{
		return UIsPlayerPerfInteractionWithNoItem::StaticClass();
	}
	struct Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__itemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__itemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useItemInteractionSemantics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__useItemInteractionSemantics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseIsPlayerPerformingInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange, "OnCollectableChargeStateChange" }, // 3084641068
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsPlayerPerfInteractionWithNoItem.h" },
		{ "ModuleRelativePath", "Public/IsPlayerPerfInteractionWithNoItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__itemType_MetaData[] = {
		{ "Category", "IsPlayerPerfInteractionWithNoItem" },
		{ "ModuleRelativePath", "Public/IsPlayerPerfInteractionWithNoItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__itemType = { "_itemType", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsPlayerPerfInteractionWithNoItem, _itemType), Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType, METADATA_PARAMS(Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__itemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__itemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__itemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__useItemInteractionSemantics_MetaData[] = {
		{ "Category", "IsPlayerPerfInteractionWithNoItem" },
		{ "ModuleRelativePath", "Public/IsPlayerPerfInteractionWithNoItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__useItemInteractionSemantics = { "_useItemInteractionSemantics", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsPlayerPerfInteractionWithNoItem, _useItemInteractionSemantics), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__useItemInteractionSemantics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__useItemInteractionSemantics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__itemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__itemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::NewProp__useItemInteractionSemantics,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsPlayerPerfInteractionWithNoItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::ClassParams = {
		&UIsPlayerPerfInteractionWithNoItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsPlayerPerfInteractionWithNoItem, 1896679893);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsPlayerPerfInteractionWithNoItem>()
	{
		return UIsPlayerPerfInteractionWithNoItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsPlayerPerfInteractionWithNoItem(Z_Construct_UClass_UIsPlayerPerfInteractionWithNoItem, &UIsPlayerPerfInteractionWithNoItem::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsPlayerPerfInteractionWithNoItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPlayerPerfInteractionWithNoItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
