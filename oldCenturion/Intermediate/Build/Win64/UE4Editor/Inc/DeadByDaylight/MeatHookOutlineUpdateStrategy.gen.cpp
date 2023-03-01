// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MeatHookOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeatHookOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMeatHookOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UMeatHookOutlineUpdateStrategy::execAuthority_AddBasementHookToPlayerMapItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddBasementHookToPlayerMapItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeatHookOutlineUpdateStrategy::execLocal_AddBasementOfferingReveal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_AddBasementOfferingReveal();
		P_NATIVE_END;
	}
	void UMeatHookOutlineUpdateStrategy::StaticRegisterNativesUMeatHookOutlineUpdateStrategy()
	{
		UClass* Class = UMeatHookOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddBasementHookToPlayerMapItem", &UMeatHookOutlineUpdateStrategy::execAuthority_AddBasementHookToPlayerMapItem },
			{ "Local_AddBasementOfferingReveal", &UMeatHookOutlineUpdateStrategy::execLocal_AddBasementOfferingReveal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Authority_AddBasementHookToPlayerMapItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Authority_AddBasementHookToPlayerMapItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHookOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Authority_AddBasementHookToPlayerMapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeatHookOutlineUpdateStrategy, nullptr, "Authority_AddBasementHookToPlayerMapItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Authority_AddBasementHookToPlayerMapItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Authority_AddBasementHookToPlayerMapItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Authority_AddBasementHookToPlayerMapItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Authority_AddBasementHookToPlayerMapItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Local_AddBasementOfferingReveal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Local_AddBasementOfferingReveal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHookOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Local_AddBasementOfferingReveal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeatHookOutlineUpdateStrategy, nullptr, "Local_AddBasementOfferingReveal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Local_AddBasementOfferingReveal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Local_AddBasementOfferingReveal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Local_AddBasementOfferingReveal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Local_AddBasementOfferingReveal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_NoRegister()
	{
		return UMeatHookOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleOutlineColorCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibleOutlineColorCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOutlineColorSlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultOutlineColorSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarryingOutlineColorSlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CarryingOutlineColorSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookedOutlineColorSlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HookedOutlineColorSlasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Authority_AddBasementHookToPlayerMapItem, "Authority_AddBasementHookToPlayerMapItem" }, // 3522338141
		{ &Z_Construct_UFunction_UMeatHookOutlineUpdateStrategy_Local_AddBasementOfferingReveal, "Local_AddBasementOfferingReveal" }, // 1382736703
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeatHookOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/MeatHookOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_VisibleOutlineColorCamper_MetaData[] = {
		{ "Category", "MeatHookOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/MeatHookOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_VisibleOutlineColorCamper = { "VisibleOutlineColorCamper", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeatHookOutlineUpdateStrategy, VisibleOutlineColorCamper), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_VisibleOutlineColorCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_VisibleOutlineColorCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_DefaultOutlineColorSlasher_MetaData[] = {
		{ "Category", "MeatHookOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/MeatHookOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_DefaultOutlineColorSlasher = { "DefaultOutlineColorSlasher", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeatHookOutlineUpdateStrategy, DefaultOutlineColorSlasher), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_DefaultOutlineColorSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_DefaultOutlineColorSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_CarryingOutlineColorSlasher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeatHookOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/MeatHookOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_CarryingOutlineColorSlasher = { "CarryingOutlineColorSlasher", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeatHookOutlineUpdateStrategy, CarryingOutlineColorSlasher), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_CarryingOutlineColorSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_CarryingOutlineColorSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_HookedOutlineColorSlasher_MetaData[] = {
		{ "Category", "MeatHookOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/MeatHookOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_HookedOutlineColorSlasher = { "HookedOutlineColorSlasher", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeatHookOutlineUpdateStrategy, HookedOutlineColorSlasher), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_HookedOutlineColorSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_HookedOutlineColorSlasher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_VisibleOutlineColorCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_DefaultOutlineColorSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_CarryingOutlineColorSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::NewProp_HookedOutlineColorSlasher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeatHookOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::ClassParams = {
		&UMeatHookOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeatHookOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeatHookOutlineUpdateStrategy, 605637440);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMeatHookOutlineUpdateStrategy>()
	{
		return UMeatHookOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeatHookOutlineUpdateStrategy(Z_Construct_UClass_UMeatHookOutlineUpdateStrategy, &UMeatHookOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMeatHookOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeatHookOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
