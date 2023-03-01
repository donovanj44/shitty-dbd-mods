// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/ChestAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChestAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UChestAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UChestAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASearchable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UChestAnimInstance::execOnSearchedChanged)
	{
		P_GET_UBOOL(Z_Param_searched);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSearchedChanged(Z_Param_searched);
		P_NATIVE_END;
	}
	void UChestAnimInstance::StaticRegisterNativesUChestAnimInstance()
	{
		UClass* Class = UChestAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSearchedChanged", &UChestAnimInstance::execOnSearchedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics
	{
		struct ChestAnimInstance_eventOnSearchedChanged_Parms
		{
			bool searched;
		};
		static void NewProp_searched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_searched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::NewProp_searched_SetBit(void* Obj)
	{
		((ChestAnimInstance_eventOnSearchedChanged_Parms*)Obj)->searched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::NewProp_searched = { "searched", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChestAnimInstance_eventOnSearchedChanged_Parms), &Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::NewProp_searched_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::NewProp_searched,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChestAnimInstance, nullptr, "OnSearchedChanged", nullptr, nullptr, sizeof(ChestAnimInstance_eventOnSearchedChanged_Parms), Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChestAnimInstance_NoRegister()
	{
		return UChestAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UChestAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__openChestInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__openChestInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingPriedOpen_MetaData[];
#endif
		static void NewProp__isBeingPriedOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingPriedOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOpen_MetaData[];
#endif
		static void NewProp__isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningChest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningChest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChestAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChestAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChestAnimInstance_OnSearchedChanged, "OnSearchedChanged" }, // 61360016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ChestAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ChestAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__openChestInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__openChestInteraction = { "_openChestInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChestAnimInstance, _openChestInteraction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__openChestInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__openChestInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isBeingPriedOpen_MetaData[] = {
		{ "Category", "ChestAnimInstance" },
		{ "ModuleRelativePath", "Public/ChestAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isBeingPriedOpen_SetBit(void* Obj)
	{
		((UChestAnimInstance*)Obj)->_isBeingPriedOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isBeingPriedOpen = { "_isBeingPriedOpen", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChestAnimInstance), &Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isBeingPriedOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isBeingPriedOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isBeingPriedOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isOpen_MetaData[] = {
		{ "Category", "ChestAnimInstance" },
		{ "ModuleRelativePath", "Public/ChestAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isOpen_SetBit(void* Obj)
	{
		((UChestAnimInstance*)Obj)->_isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isOpen = { "_isOpen", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChestAnimInstance), &Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__owningChest_MetaData[] = {
		{ "Category", "ChestAnimInstance" },
		{ "ModuleRelativePath", "Public/ChestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__owningChest = { "_owningChest", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChestAnimInstance, _owningChest), Z_Construct_UClass_ASearchable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__owningChest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__owningChest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChestAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__openChestInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isBeingPriedOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__isOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestAnimInstance_Statics::NewProp__owningChest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChestAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChestAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChestAnimInstance_Statics::ClassParams = {
		&UChestAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChestAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChestAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UChestAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChestAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChestAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChestAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChestAnimInstance, 1632729765);
	template<> DBDANIMATION_API UClass* StaticClass<UChestAnimInstance>()
	{
		return UChestAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChestAnimInstance(Z_Construct_UClass_UChestAnimInstance, &UChestAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UChestAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChestAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
