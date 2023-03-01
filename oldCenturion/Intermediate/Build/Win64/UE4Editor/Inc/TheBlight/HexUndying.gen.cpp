// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/HexUndying.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexUndying() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UHexUndying_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UHexUndying();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHexUndying::execAuthority_OnCamperCleansedHexPerk)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameplayTag);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCamperCleansedHexPerk(Z_Param_gameplayTag,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHexUndying::execAuthority_OnSurvivorAdded)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorAdded(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHexUndying::execAuthority_UpdateHexPerkStatusView)
	{
		P_GET_OBJECT(UGameplayModifierContainer,Z_Param_gameplayModifierContainer);
		P_GET_UBOOL(Z_Param_isApplicable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_UpdateHexPerkStatusView(Z_Param_gameplayModifierContainer,Z_Param_isApplicable);
		P_NATIVE_END;
	}
	void UHexUndying::StaticRegisterNativesUHexUndying()
	{
		UClass* Class = UHexUndying::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnCamperCleansedHexPerk", &UHexUndying::execAuthority_OnCamperCleansedHexPerk },
			{ "Authority_OnSurvivorAdded", &UHexUndying::execAuthority_OnSurvivorAdded },
			{ "Authority_UpdateHexPerkStatusView", &UHexUndying::execAuthority_UpdateHexPerkStatusView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics
	{
		struct HexUndying_eventAuthority_OnCamperCleansedHexPerk_Parms
		{
			FGameplayTag gameplayTag;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameplayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexUndying_eventAuthority_OnCamperCleansedHexPerk_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameplayTag = { "gameplayTag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexUndying_eventAuthority_OnCamperCleansedHexPerk_Parms, gameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameplayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::NewProp_gameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexUndying.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexUndying, nullptr, "Authority_OnCamperCleansedHexPerk", nullptr, nullptr, sizeof(HexUndying_eventAuthority_OnCamperCleansedHexPerk_Parms), Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics
	{
		struct HexUndying_eventAuthority_OnSurvivorAdded_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexUndying_eventAuthority_OnSurvivorAdded_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexUndying.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexUndying, nullptr, "Authority_OnSurvivorAdded", nullptr, nullptr, sizeof(HexUndying_eventAuthority_OnSurvivorAdded_Parms), Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics
	{
		struct HexUndying_eventAuthority_UpdateHexPerkStatusView_Parms
		{
			UGameplayModifierContainer* gameplayModifierContainer;
			bool isApplicable;
		};
		static void NewProp_isApplicable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isApplicable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameplayModifierContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameplayModifierContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_isApplicable_SetBit(void* Obj)
	{
		((HexUndying_eventAuthority_UpdateHexPerkStatusView_Parms*)Obj)->isApplicable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_isApplicable = { "isApplicable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HexUndying_eventAuthority_UpdateHexPerkStatusView_Parms), &Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_isApplicable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_gameplayModifierContainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_gameplayModifierContainer = { "gameplayModifierContainer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexUndying_eventAuthority_UpdateHexPerkStatusView_Parms, gameplayModifierContainer), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_gameplayModifierContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_gameplayModifierContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_isApplicable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::NewProp_gameplayModifierContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexUndying.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexUndying, nullptr, "Authority_UpdateHexPerkStatusView", nullptr, nullptr, sizeof(HexUndying_eventAuthority_UpdateHexPerkStatusView_Parms), Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHexUndying_NoRegister()
	{
		return UHexUndying::StaticClass();
	}
	struct Z_Construct_UClass_UHexUndying_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealAuraDistanceFromTotem_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealAuraDistanceFromTotem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexUndying_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHexPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHexUndying_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHexUndying_Authority_OnCamperCleansedHexPerk, "Authority_OnCamperCleansedHexPerk" }, // 1231509986
		{ &Z_Construct_UFunction_UHexUndying_Authority_OnSurvivorAdded, "Authority_OnSurvivorAdded" }, // 2895749907
		{ &Z_Construct_UFunction_UHexUndying_Authority_UpdateHexPerkStatusView, "Authority_UpdateHexPerkStatusView" }, // 1722237563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexUndying_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HexUndying.h" },
		{ "ModuleRelativePath", "Public/HexUndying.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexUndying_Statics::NewProp__revealAuraDistanceFromTotem_MetaData[] = {
		{ "Category", "HexUndying" },
		{ "ModuleRelativePath", "Public/HexUndying.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexUndying_Statics::NewProp__revealAuraDistanceFromTotem = { "_revealAuraDistanceFromTotem", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_revealAuraDistanceFromTotem, UHexUndying), STRUCT_OFFSET(UHexUndying, _revealAuraDistanceFromTotem), METADATA_PARAMS(Z_Construct_UClass_UHexUndying_Statics::NewProp__revealAuraDistanceFromTotem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexUndying_Statics::NewProp__revealAuraDistanceFromTotem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexUndying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexUndying_Statics::NewProp__revealAuraDistanceFromTotem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexUndying_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexUndying>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexUndying_Statics::ClassParams = {
		&UHexUndying::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHexUndying_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHexUndying_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHexUndying_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexUndying_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexUndying()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexUndying_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexUndying, 409823491);
	template<> THEBLIGHT_API UClass* StaticClass<UHexUndying>()
	{
		return UHexUndying::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexUndying(Z_Construct_UClass_UHexUndying, &UHexUndying::StaticClass, TEXT("/Script/TheBlight"), TEXT("UHexUndying"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexUndying);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
