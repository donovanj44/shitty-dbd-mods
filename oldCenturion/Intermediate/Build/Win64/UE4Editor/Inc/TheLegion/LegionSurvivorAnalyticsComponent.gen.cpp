// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLegion/Public/LegionSurvivorAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegionSurvivorAnalyticsComponent() {}
// Cross Module References
	THELEGION_API UClass* Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_NoRegister();
	THELEGION_API UClass* Z_Construct_UClass_ULegionSurvivorAnalyticsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheLegion();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameEventDispatcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULegionSurvivorAnalyticsComponent::execOnGameEventDispatched)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameEventDispatched(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULegionSurvivorAnalyticsComponent::execSetGameEventDispatcher)
	{
		P_GET_OBJECT(UGameEventDispatcher,Z_Param_gameEventDispatcher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameEventDispatcher(Z_Param_gameEventDispatcher);
		P_NATIVE_END;
	}
	void ULegionSurvivorAnalyticsComponent::StaticRegisterNativesULegionSurvivorAnalyticsComponent()
	{
		UClass* Class = ULegionSurvivorAnalyticsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameEventDispatched", &ULegionSurvivorAnalyticsComponent::execOnGameEventDispatched },
			{ "SetGameEventDispatcher", &ULegionSurvivorAnalyticsComponent::execSetGameEventDispatcher },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics
	{
		struct LegionSurvivorAnalyticsComponent_eventOnGameEventDispatched_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LegionSurvivorAnalyticsComponent_eventOnGameEventDispatched_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LegionSurvivorAnalyticsComponent_eventOnGameEventDispatched_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegionSurvivorAnalyticsComponent, nullptr, "OnGameEventDispatched", nullptr, nullptr, sizeof(LegionSurvivorAnalyticsComponent_eventOnGameEventDispatched_Parms), Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics
	{
		struct LegionSurvivorAnalyticsComponent_eventSetGameEventDispatcher_Parms
		{
			UGameEventDispatcher* gameEventDispatcher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::NewProp_gameEventDispatcher = { "gameEventDispatcher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LegionSurvivorAnalyticsComponent_eventSetGameEventDispatcher_Parms, gameEventDispatcher), Z_Construct_UClass_UGameEventDispatcher_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::NewProp_gameEventDispatcher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegionSurvivorAnalyticsComponent, nullptr, "SetGameEventDispatcher", nullptr, nullptr, sizeof(LegionSurvivorAnalyticsComponent_eventSetGameEventDispatcher_Parms), Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_NoRegister()
	{
		return ULegionSurvivorAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLegion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_OnGameEventDispatched, "OnGameEventDispatched" }, // 4200466185
		{ &Z_Construct_UFunction_ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher, "SetGameEventDispatcher" }, // 1104314660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LegionSurvivorAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalyticsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegionSurvivorAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics::ClassParams = {
		&ULegionSurvivorAnalyticsComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegionSurvivorAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegionSurvivorAnalyticsComponent, 1706364686);
	template<> THELEGION_API UClass* StaticClass<ULegionSurvivorAnalyticsComponent>()
	{
		return ULegionSurvivorAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegionSurvivorAnalyticsComponent(Z_Construct_UClass_ULegionSurvivorAnalyticsComponent, &ULegionSurvivorAnalyticsComponent::StaticClass, TEXT("/Script/TheLegion"), TEXT("ULegionSurvivorAnalyticsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegionSurvivorAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
