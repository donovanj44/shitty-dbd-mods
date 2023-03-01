// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagUtilities/Public/GameplayTagContainerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagContainerComponent() {}
// Cross Module References
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayTagUtilities();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayTagContainerComponent::execAdd)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Add(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTagContainerComponent::execRemove)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Remove(Z_Param_state);
		P_NATIVE_END;
	}
	void UGameplayTagContainerComponent::StaticRegisterNativesUGameplayTagContainerComponent()
	{
		UClass* Class = UGameplayTagContainerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UGameplayTagContainerComponent::execAdd },
			{ "Remove", &UGameplayTagContainerComponent::execRemove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics
	{
		struct GameplayTagContainerComponent_eventAdd_Parms
		{
			FGameplayTag state;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTagContainerComponent_eventAdd_Parms, state), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagContainerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagContainerComponent, nullptr, "Add", nullptr, nullptr, sizeof(GameplayTagContainerComponent_eventAdd_Parms), Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTagContainerComponent_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTagContainerComponent_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics
	{
		struct GameplayTagContainerComponent_eventRemove_Parms
		{
			FGameplayTag state;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTagContainerComponent_eventRemove_Parms, state), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagContainerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagContainerComponent, nullptr, "Remove", nullptr, nullptr, sizeof(GameplayTagContainerComponent_eventRemove_Parms), Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTagContainerComponent_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTagContainerComponent_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister()
	{
		return UGameplayTagContainerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagContainerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagContainerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTagUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTagContainerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTagContainerComponent_Add, "Add" }, // 2847978719
		{ &Z_Construct_UFunction_UGameplayTagContainerComponent_Remove, "Remove" }, // 1290488923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagContainerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayTagContainerComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayTagContainerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagContainerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagContainerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagContainerComponent_Statics::ClassParams = {
		&UGameplayTagContainerComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagContainerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagContainerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagContainerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTagContainerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagContainerComponent, 3400100837);
	template<> GAMEPLAYTAGUTILITIES_API UClass* StaticClass<UGameplayTagContainerComponent>()
	{
		return UGameplayTagContainerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagContainerComponent(Z_Construct_UClass_UGameplayTagContainerComponent, &UGameplayTagContainerComponent::StaticClass, TEXT("/Script/GameplayTagUtilities"), TEXT("UGameplayTagContainerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagContainerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
