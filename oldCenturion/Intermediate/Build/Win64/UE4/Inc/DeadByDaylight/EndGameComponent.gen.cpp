// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EndGameComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEndGameComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEndGameComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
// End Cross Module References
	DEFINE_FUNCTION(UEndGameComponent::execDisableEndGameScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableEndGameScenario();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameComponent::execFireEndGameSacrificeScoreEvent)
	{
		P_GET_STRUCT(FGameEventData,Z_Param_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireEndGameSacrificeScoreEvent(Z_Param_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameComponent::execGetHasEndGameBegun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasEndGameBegun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameComponent::execPauseEndGameTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseEndGameTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameComponent::execStartEndGame_Cheat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEndGame_Cheat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameComponent::execUnpauseEndGameTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnpauseEndGameTimer();
		P_NATIVE_END;
	}
	void UEndGameComponent::StaticRegisterNativesUEndGameComponent()
	{
		UClass* Class = UEndGameComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableEndGameScenario", &UEndGameComponent::execDisableEndGameScenario },
			{ "FireEndGameSacrificeScoreEvent", &UEndGameComponent::execFireEndGameSacrificeScoreEvent },
			{ "GetHasEndGameBegun", &UEndGameComponent::execGetHasEndGameBegun },
			{ "PauseEndGameTimer", &UEndGameComponent::execPauseEndGameTimer },
			{ "StartEndGame_Cheat", &UEndGameComponent::execStartEndGame_Cheat },
			{ "UnpauseEndGameTimer", &UEndGameComponent::execUnpauseEndGameTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndGameComponent_DisableEndGameScenario_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameComponent_DisableEndGameScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameComponent_DisableEndGameScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameComponent, nullptr, "DisableEndGameScenario", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameComponent_DisableEndGameScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_DisableEndGameScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameComponent_DisableEndGameScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameComponent_DisableEndGameScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics
	{
		struct EndGameComponent_eventFireEndGameSacrificeScoreEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndGameComponent_eventFireEndGameSacrificeScoreEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::NewProp_gameEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameComponent, nullptr, "FireEndGameSacrificeScoreEvent", nullptr, nullptr, sizeof(EndGameComponent_eventFireEndGameSacrificeScoreEvent_Parms), Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics
	{
		struct EndGameComponent_eventGetHasEndGameBegun_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EndGameComponent_eventGetHasEndGameBegun_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EndGameComponent_eventGetHasEndGameBegun_Parms), &Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameComponent, nullptr, "GetHasEndGameBegun", nullptr, nullptr, sizeof(EndGameComponent_eventGetHasEndGameBegun_Parms), Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameComponent_PauseEndGameTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameComponent_PauseEndGameTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameComponent_PauseEndGameTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameComponent, nullptr, "PauseEndGameTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameComponent_PauseEndGameTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_PauseEndGameTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameComponent_PauseEndGameTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameComponent_PauseEndGameTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameComponent_StartEndGame_Cheat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameComponent_StartEndGame_Cheat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameComponent_StartEndGame_Cheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameComponent, nullptr, "StartEndGame_Cheat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameComponent_StartEndGame_Cheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_StartEndGame_Cheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameComponent_StartEndGame_Cheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameComponent_StartEndGame_Cheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameComponent_UnpauseEndGameTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameComponent_UnpauseEndGameTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameComponent_UnpauseEndGameTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameComponent, nullptr, "UnpauseEndGameTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameComponent_UnpauseEndGameTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameComponent_UnpauseEndGameTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameComponent_UnpauseEndGameTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameComponent_UnpauseEndGameTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndGameComponent_NoRegister()
	{
		return UEndGameComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndGameComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameComponent_DisableEndGameScenario, "DisableEndGameScenario" }, // 85039460
		{ &Z_Construct_UFunction_UEndGameComponent_FireEndGameSacrificeScoreEvent, "FireEndGameSacrificeScoreEvent" }, // 2248778246
		{ &Z_Construct_UFunction_UEndGameComponent_GetHasEndGameBegun, "GetHasEndGameBegun" }, // 1307151251
		{ &Z_Construct_UFunction_UEndGameComponent_PauseEndGameTimer, "PauseEndGameTimer" }, // 2272406048
		{ &Z_Construct_UFunction_UEndGameComponent_StartEndGame_Cheat, "StartEndGame_Cheat" }, // 2404568145
		{ &Z_Construct_UFunction_UEndGameComponent_UnpauseEndGameTimer, "UnpauseEndGameTimer" }, // 1860903420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EndGameComponent.h" },
		{ "ModuleRelativePath", "Public/EndGameComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGameComponent_Statics::ClassParams = {
		&UEndGameComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEndGameComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGameComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGameComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGameComponent, 1422318580);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEndGameComponent>()
	{
		return UEndGameComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGameComponent(Z_Construct_UClass_UEndGameComponent, &UEndGameComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEndGameComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
