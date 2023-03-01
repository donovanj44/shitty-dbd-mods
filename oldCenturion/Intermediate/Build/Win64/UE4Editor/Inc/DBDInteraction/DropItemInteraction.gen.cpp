// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/DropItemInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropItemInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UDropItemInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UDropItemInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDropItemInteraction::execGetItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACollectable**)Z_Param__Result=P_THIS->GetItem();
		P_NATIVE_END;
	}
	void UDropItemInteraction::StaticRegisterNativesUDropItemInteraction()
	{
		UClass* Class = UDropItemInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItem", &UDropItemInteraction::execGetItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics
	{
		struct DropItemInteraction_eventGetItem_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropItemInteraction_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DropItemInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropItemInteraction, nullptr, "GetItem", nullptr, nullptr, sizeof(DropItemInteraction_eventGetItem_Parms), Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDropItemInteraction_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDropItemInteraction_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDropItemInteraction_NoRegister()
	{
		return UDropItemInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UDropItemInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropItemInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDropItemInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDropItemInteraction_GetItem, "GetItem" }, // 3936195617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropItemInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DropItemInteraction.h" },
		{ "ModuleRelativePath", "Public/DropItemInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropItemInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropItemInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDropItemInteraction_Statics::ClassParams = {
		&UDropItemInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDropItemInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDropItemInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDropItemInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDropItemInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDropItemInteraction, 2358692081);
	template<> DBDINTERACTION_API UClass* StaticClass<UDropItemInteraction>()
	{
		return UDropItemInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDropItemInteraction(Z_Construct_UClass_UDropItemInteraction, &UDropItemInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UDropItemInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropItemInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
