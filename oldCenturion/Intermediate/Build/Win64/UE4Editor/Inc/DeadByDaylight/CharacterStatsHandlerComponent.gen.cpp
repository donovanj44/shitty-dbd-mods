// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterStatsHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStatsHandlerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterStatsHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterStatsHandlerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterStatsHandlerComponent::execInitializePreMatchStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePreMatchStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterStatsHandlerComponent::execOnGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterStatsHandlerComponent::execReceiveGameEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_scoreType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveGameEvent(EDBDScoreTypes(Z_Param_scoreType),Z_Param_amount,Z_Param_instigator,Z_Param_target);
		P_NATIVE_END;
	}
	void UCharacterStatsHandlerComponent::StaticRegisterNativesUCharacterStatsHandlerComponent()
	{
		UClass* Class = UCharacterStatsHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializePreMatchStats", &UCharacterStatsHandlerComponent::execInitializePreMatchStats },
			{ "OnGameEvent", &UCharacterStatsHandlerComponent::execOnGameEvent },
			{ "ReceiveGameEvent", &UCharacterStatsHandlerComponent::execReceiveGameEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterStatsHandlerComponent_InitializePreMatchStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterStatsHandlerComponent_InitializePreMatchStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterStatsHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_InitializePreMatchStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsHandlerComponent, nullptr, "InitializePreMatchStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterStatsHandlerComponent_InitializePreMatchStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsHandlerComponent_InitializePreMatchStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterStatsHandlerComponent_InitializePreMatchStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterStatsHandlerComponent_InitializePreMatchStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics
	{
		struct CharacterStatsHandlerComponent_eventOnGameEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStatsHandlerComponent_eventOnGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStatsHandlerComponent_eventOnGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterStatsHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsHandlerComponent, nullptr, "OnGameEvent", nullptr, nullptr, sizeof(CharacterStatsHandlerComponent_eventOnGameEvent_Parms), Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics
	{
		struct CharacterStatsHandlerComponent_eventReceiveGameEvent_Parms
		{
			EDBDScoreTypes scoreType;
			float amount;
			AActor* instigator;
			AActor* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_scoreType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_scoreType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStatsHandlerComponent_eventReceiveGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStatsHandlerComponent_eventReceiveGameEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStatsHandlerComponent_eventReceiveGameEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStatsHandlerComponent_eventReceiveGameEvent_Parms, scoreType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterStatsHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStatsHandlerComponent, nullptr, "ReceiveGameEvent", nullptr, nullptr, sizeof(CharacterStatsHandlerComponent_eventReceiveGameEvent_Parms), Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterStatsHandlerComponent_NoRegister()
	{
		return UCharacterStatsHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterStatsHandlerComponent_InitializePreMatchStats, "InitializePreMatchStats" }, // 2438409659
		{ &Z_Construct_UFunction_UCharacterStatsHandlerComponent_OnGameEvent, "OnGameEvent" }, // 1349379618
		{ &Z_Construct_UFunction_UCharacterStatsHandlerComponent_ReceiveGameEvent, "ReceiveGameEvent" }, // 1610635952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterStatsHandlerComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterStatsHandlerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStatsHandlerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics::ClassParams = {
		&UCharacterStatsHandlerComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterStatsHandlerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterStatsHandlerComponent, 454822093);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterStatsHandlerComponent>()
	{
		return UCharacterStatsHandlerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterStatsHandlerComponent(Z_Construct_UClass_UCharacterStatsHandlerComponent, &UCharacterStatsHandlerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterStatsHandlerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStatsHandlerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
