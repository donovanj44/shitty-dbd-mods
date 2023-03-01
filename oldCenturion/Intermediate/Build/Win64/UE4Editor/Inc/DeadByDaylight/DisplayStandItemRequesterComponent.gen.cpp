// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DisplayStandItemRequesterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayStandItemRequesterComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDisplayStandItemRequesterComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDisplayStandItemRequesterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDisplayStandItemRequesterComponent::execLoadItemsOnCharacter)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadItemsOnCharacter(Z_Param_actor);
		P_NATIVE_END;
	}
	void UDisplayStandItemRequesterComponent::StaticRegisterNativesUDisplayStandItemRequesterComponent()
	{
		UClass* Class = UDisplayStandItemRequesterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadItemsOnCharacter", &UDisplayStandItemRequesterComponent::execLoadItemsOnCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics
	{
		struct DisplayStandItemRequesterComponent_eventLoadItemsOnCharacter_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisplayStandItemRequesterComponent_eventLoadItemsOnCharacter_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayStandItemRequesterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayStandItemRequesterComponent, nullptr, "LoadItemsOnCharacter", nullptr, nullptr, sizeof(DisplayStandItemRequesterComponent_eventLoadItemsOnCharacter_Parms), Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDisplayStandItemRequesterComponent_NoRegister()
	{
		return UDisplayStandItemRequesterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayStandItemRequesterComponent_LoadItemsOnCharacter, "LoadItemsOnCharacter" }, // 3570808837
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayStandItemRequesterComponent.h" },
		{ "ModuleRelativePath", "Public/DisplayStandItemRequesterComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayStandItemRequesterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics::ClassParams = {
		&UDisplayStandItemRequesterComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayStandItemRequesterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisplayStandItemRequesterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisplayStandItemRequesterComponent, 40616005);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDisplayStandItemRequesterComponent>()
	{
		return UDisplayStandItemRequesterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisplayStandItemRequesterComponent(Z_Construct_UClass_UDisplayStandItemRequesterComponent, &UDisplayStandItemRequesterComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDisplayStandItemRequesterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayStandItemRequesterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
