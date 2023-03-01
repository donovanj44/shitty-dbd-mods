// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/HasObjectState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHasObjectState() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UHasObjectState_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UHasObjectState();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UHasObjectState::execSetState)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_state);
		P_NATIVE_END;
	}
	void UHasObjectState::StaticRegisterNativesUHasObjectState()
	{
		UClass* Class = UHasObjectState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetState", &UHasObjectState::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHasObjectState_SetState_Statics
	{
		struct HasObjectState_eventSetState_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHasObjectState_SetState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HasObjectState_eventSetState_Parms, state), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHasObjectState_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHasObjectState_SetState_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHasObjectState_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HasObjectState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHasObjectState_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHasObjectState, nullptr, "SetState", nullptr, nullptr, sizeof(HasObjectState_eventSetState_Parms), Z_Construct_UFunction_UHasObjectState_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHasObjectState_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHasObjectState_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHasObjectState_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHasObjectState_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHasObjectState_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHasObjectState_NoRegister()
	{
		return UHasObjectState::StaticClass();
	}
	struct Z_Construct_UClass_UHasObjectState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasObjectState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHasObjectState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHasObjectState_SetState, "SetState" }, // 690835881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasObjectState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HasObjectState.h" },
		{ "ModuleRelativePath", "Public/HasObjectState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasObjectState_Statics::NewProp__state_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HasObjectState" },
		{ "ModuleRelativePath", "Public/HasObjectState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHasObjectState_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHasObjectState, _state), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UHasObjectState_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasObjectState_Statics::NewProp__state_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasObjectState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasObjectState_Statics::NewProp__state,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasObjectState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasObjectState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHasObjectState_Statics::ClassParams = {
		&UHasObjectState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHasObjectState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasObjectState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHasObjectState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasObjectState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasObjectState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHasObjectState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHasObjectState, 385181913);
	template<> COMPETENCE_API UClass* StaticClass<UHasObjectState>()
	{
		return UHasObjectState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHasObjectState(Z_Construct_UClass_UHasObjectState, &UHasObjectState::StaticClass, TEXT("/Script/Competence"), TEXT("UHasObjectState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasObjectState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
