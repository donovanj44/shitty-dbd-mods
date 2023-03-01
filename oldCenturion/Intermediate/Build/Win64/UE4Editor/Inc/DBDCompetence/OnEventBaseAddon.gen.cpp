// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/OnEventBaseAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnEventBaseAddon() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FName NAME_UOnEventBaseAddon_OnEventFired = FName(TEXT("OnEventFired"));
	void UOnEventBaseAddon::OnEventFired(FGameEventData const& gameEventData)
	{
		OnEventBaseAddon_eventOnEventFired_Parms Parms;
		Parms.gameEventData=gameEventData;
		ProcessEvent(FindFunctionChecked(NAME_UOnEventBaseAddon_OnEventFired),&Parms);
	}
	void UOnEventBaseAddon::StaticRegisterNativesUOnEventBaseAddon()
	{
	}
	struct Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnEventBaseAddon_eventOnEventFired_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::NewProp_gameEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnEventBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnEventBaseAddon, nullptr, "OnEventFired", nullptr, nullptr, sizeof(OnEventBaseAddon_eventOnEventFired_Parms), Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnEventBaseAddon_NoRegister()
	{
		return UOnEventBaseAddon::StaticClass();
	}
	struct Z_Construct_UClass_UOnEventBaseAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventToListenTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__eventToListenTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnEventBaseAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnEventBaseAddon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnEventBaseAddon_OnEventFired, "OnEventFired" }, // 2614054233
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnEventBaseAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnEventBaseAddon.h" },
		{ "ModuleRelativePath", "Public/OnEventBaseAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnEventBaseAddon_Statics::NewProp__eventToListenTo_MetaData[] = {
		{ "Category", "OnEventBaseAddon" },
		{ "ModuleRelativePath", "Public/OnEventBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnEventBaseAddon_Statics::NewProp__eventToListenTo = { "_eventToListenTo", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnEventBaseAddon, _eventToListenTo), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UOnEventBaseAddon_Statics::NewProp__eventToListenTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnEventBaseAddon_Statics::NewProp__eventToListenTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnEventBaseAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnEventBaseAddon_Statics::NewProp__eventToListenTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnEventBaseAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnEventBaseAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnEventBaseAddon_Statics::ClassParams = {
		&UOnEventBaseAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnEventBaseAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnEventBaseAddon_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnEventBaseAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnEventBaseAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnEventBaseAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnEventBaseAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnEventBaseAddon, 3673980863);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UOnEventBaseAddon>()
	{
		return UOnEventBaseAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnEventBaseAddon(Z_Construct_UClass_UOnEventBaseAddon, &UOnEventBaseAddon::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UOnEventBaseAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnEventBaseAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
