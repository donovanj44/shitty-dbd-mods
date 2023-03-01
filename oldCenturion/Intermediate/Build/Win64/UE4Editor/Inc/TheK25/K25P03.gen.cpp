// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25P03.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25P03() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25P03_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25P03();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25P03::execOnCamperUnhookedFromScourgeHook)
	{
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCamperUnhookedFromScourgeHook(Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25P03::execOnDamageStateChanged)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameplayTag);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageStateChanged(Z_Param_gameplayTag,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25P03::execOnSurvivorRemoved)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorRemoved(Z_Param_survivor);
		P_NATIVE_END;
	}
	void UK25P03::StaticRegisterNativesUK25P03()
	{
		UClass* Class = UK25P03::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCamperUnhookedFromScourgeHook", &UK25P03::execOnCamperUnhookedFromScourgeHook },
			{ "OnDamageStateChanged", &UK25P03::execOnDamageStateChanged },
			{ "OnSurvivorRemoved", &UK25P03::execOnSurvivorRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics
	{
		struct K25P03_eventOnCamperUnhookedFromScourgeHook_Parms
		{
			FGameEventData gameEventData;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25P03_eventOnCamperUnhookedFromScourgeHook_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::NewProp_gameEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25P03.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25P03, nullptr, "OnCamperUnhookedFromScourgeHook", nullptr, nullptr, sizeof(K25P03_eventOnCamperUnhookedFromScourgeHook_Parms), Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics
	{
		struct K25P03_eventOnDamageStateChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25P03_eventOnDamageStateChanged_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameplayTag = { "gameplayTag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25P03_eventOnDamageStateChanged_Parms, gameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameplayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::NewProp_gameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25P03.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25P03, nullptr, "OnDamageStateChanged", nullptr, nullptr, sizeof(K25P03_eventOnDamageStateChanged_Parms), Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25P03_OnDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25P03_OnDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics
	{
		struct K25P03_eventOnSurvivorRemoved_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25P03_eventOnSurvivorRemoved_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25P03.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25P03, nullptr, "OnSurvivorRemoved", nullptr, nullptr, sizeof(K25P03_eventOnSurvivorRemoved_Parms), Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25P03_OnSurvivorRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25P03_OnSurvivorRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25P03_NoRegister()
	{
		return UK25P03::StaticClass();
	}
	struct Z_Construct_UClass_UK25P03_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__state2ActionSpeedDebuffPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__state2ActionSpeedDebuffPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfSurvivorsWaitingForDamageStateChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfSurvivorsWaitingForDamageStateChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25P03_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25P03_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25P03_OnCamperUnhookedFromScourgeHook, "OnCamperUnhookedFromScourgeHook" }, // 3507015974
		{ &Z_Construct_UFunction_UK25P03_OnDamageStateChanged, "OnDamageStateChanged" }, // 3296302774
		{ &Z_Construct_UFunction_UK25P03_OnSurvivorRemoved, "OnSurvivorRemoved" }, // 2738022461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P03_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25P03.h" },
		{ "ModuleRelativePath", "Public/K25P03.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P03_Statics::NewProp__state2ActionSpeedDebuffPercentage_MetaData[] = {
		{ "Category", "K25P03" },
		{ "ModuleRelativePath", "Public/K25P03.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25P03_Statics::NewProp__state2ActionSpeedDebuffPercentage = { "_state2ActionSpeedDebuffPercentage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_state2ActionSpeedDebuffPercentage, UK25P03), STRUCT_OFFSET(UK25P03, _state2ActionSpeedDebuffPercentage), METADATA_PARAMS(Z_Construct_UClass_UK25P03_Statics::NewProp__state2ActionSpeedDebuffPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P03_Statics::NewProp__state2ActionSpeedDebuffPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P03_Statics::NewProp__numberOfSurvivorsWaitingForDamageStateChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25P03.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK25P03_Statics::NewProp__numberOfSurvivorsWaitingForDamageStateChange = { "_numberOfSurvivorsWaitingForDamageStateChange", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P03, _numberOfSurvivorsWaitingForDamageStateChange), METADATA_PARAMS(Z_Construct_UClass_UK25P03_Statics::NewProp__numberOfSurvivorsWaitingForDamageStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P03_Statics::NewProp__numberOfSurvivorsWaitingForDamageStateChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25P03_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P03_Statics::NewProp__state2ActionSpeedDebuffPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P03_Statics::NewProp__numberOfSurvivorsWaitingForDamageStateChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25P03_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25P03>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25P03_Statics::ClassParams = {
		&UK25P03::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25P03_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25P03_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25P03_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P03_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25P03()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25P03_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25P03, 1109185785);
	template<> THEK25_API UClass* StaticClass<UK25P03>()
	{
		return UK25P03::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25P03(Z_Construct_UClass_UK25P03, &UK25P03::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25P03"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25P03);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
