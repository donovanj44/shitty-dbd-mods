// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlasherHitsWhileCarryingTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlasherHitsWhileCarryingTrackerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USlasherHitsWhileCarryingTrackerComponent::execOnAttack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttack(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlasherHitsWhileCarryingTrackerComponent::execOnPickup)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickup(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlasherHitsWhileCarryingTrackerComponent::execOnPostAttack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostAttack(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void USlasherHitsWhileCarryingTrackerComponent::StaticRegisterNativesUSlasherHitsWhileCarryingTrackerComponent()
	{
		UClass* Class = USlasherHitsWhileCarryingTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttack", &USlasherHitsWhileCarryingTrackerComponent::execOnAttack },
			{ "OnPickup", &USlasherHitsWhileCarryingTrackerComponent::execOnPickup },
			{ "OnPostAttack", &USlasherHitsWhileCarryingTrackerComponent::execOnPostAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics
	{
		struct SlasherHitsWhileCarryingTrackerComponent_eventOnAttack_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlasherHitsWhileCarryingTrackerComponent_eventOnAttack_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlasherHitsWhileCarryingTrackerComponent_eventOnAttack_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlasherHitsWhileCarryingTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent, nullptr, "OnAttack", nullptr, nullptr, sizeof(SlasherHitsWhileCarryingTrackerComponent_eventOnAttack_Parms), Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics
	{
		struct SlasherHitsWhileCarryingTrackerComponent_eventOnPickup_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlasherHitsWhileCarryingTrackerComponent_eventOnPickup_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlasherHitsWhileCarryingTrackerComponent_eventOnPickup_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlasherHitsWhileCarryingTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent, nullptr, "OnPickup", nullptr, nullptr, sizeof(SlasherHitsWhileCarryingTrackerComponent_eventOnPickup_Parms), Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics
	{
		struct SlasherHitsWhileCarryingTrackerComponent_eventOnPostAttack_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlasherHitsWhileCarryingTrackerComponent_eventOnPostAttack_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlasherHitsWhileCarryingTrackerComponent_eventOnPostAttack_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlasherHitsWhileCarryingTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent, nullptr, "OnPostAttack", nullptr, nullptr, sizeof(SlasherHitsWhileCarryingTrackerComponent_eventOnPostAttack_Parms), Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_NoRegister()
	{
		return USlasherHitsWhileCarryingTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__campersHitDuringLastCarry_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__campersHitDuringLastCarry;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__campersHitDuringLastCarry_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnAttack, "OnAttack" }, // 1647717944
		{ &Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPickup, "OnPickup" }, // 444706193
		{ &Z_Construct_UFunction_USlasherHitsWhileCarryingTrackerComponent_OnPostAttack, "OnPostAttack" }, // 2749727433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SlasherHitsWhileCarryingTrackerComponent.h" },
		{ "ModuleRelativePath", "Public/SlasherHitsWhileCarryingTrackerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::NewProp__campersHitDuringLastCarry_MetaData[] = {
		{ "ModuleRelativePath", "Public/SlasherHitsWhileCarryingTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::NewProp__campersHitDuringLastCarry = { "_campersHitDuringLastCarry", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherHitsWhileCarryingTrackerComponent, _campersHitDuringLastCarry), METADATA_PARAMS(Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::NewProp__campersHitDuringLastCarry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::NewProp__campersHitDuringLastCarry_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::NewProp__campersHitDuringLastCarry_ElementProp = { "_campersHitDuringLastCarry", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::NewProp__campersHitDuringLastCarry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::NewProp__campersHitDuringLastCarry_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlasherHitsWhileCarryingTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::ClassParams = {
		&USlasherHitsWhileCarryingTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlasherHitsWhileCarryingTrackerComponent, 468531096);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USlasherHitsWhileCarryingTrackerComponent>()
	{
		return USlasherHitsWhileCarryingTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlasherHitsWhileCarryingTrackerComponent(Z_Construct_UClass_USlasherHitsWhileCarryingTrackerComponent, &USlasherHitsWhileCarryingTrackerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USlasherHitsWhileCarryingTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlasherHitsWhileCarryingTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
