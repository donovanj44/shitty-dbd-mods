// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DedicatedServerHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDedicatedServerHandlerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDedicatedServerHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDedicatedServerHandlerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualSet();
// End Cross Module References
	DEFINE_FUNCTION(UDedicatedServerHandlerComponent::execOnGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDedicatedServerHandlerComponent::execReceiveGameEvent)
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
	void UDedicatedServerHandlerComponent::StaticRegisterNativesUDedicatedServerHandlerComponent()
	{
		UClass* Class = UDedicatedServerHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameEvent", &UDedicatedServerHandlerComponent::execOnGameEvent },
			{ "ReceiveGameEvent", &UDedicatedServerHandlerComponent::execReceiveGameEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics
	{
		struct DedicatedServerHandlerComponent_eventOnGameEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DedicatedServerHandlerComponent_eventOnGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DedicatedServerHandlerComponent_eventOnGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDedicatedServerHandlerComponent, nullptr, "OnGameEvent", nullptr, nullptr, sizeof(DedicatedServerHandlerComponent_eventOnGameEvent_Parms), Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics
	{
		struct DedicatedServerHandlerComponent_eventReceiveGameEvent_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DedicatedServerHandlerComponent_eventReceiveGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DedicatedServerHandlerComponent_eventReceiveGameEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DedicatedServerHandlerComponent_eventReceiveGameEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DedicatedServerHandlerComponent_eventReceiveGameEvent_Parms, scoreType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDedicatedServerHandlerComponent, nullptr, "ReceiveGameEvent", nullptr, nullptr, sizeof(DedicatedServerHandlerComponent_eventReceiveGameEvent_Parms), Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDedicatedServerHandlerComponent_NoRegister()
	{
		return UDedicatedServerHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlantaRituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__atlantaRituals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDedicatedServerHandlerComponent_OnGameEvent, "OnGameEvent" }, // 3541571690
		{ &Z_Construct_UFunction_UDedicatedServerHandlerComponent_ReceiveGameEvent, "ReceiveGameEvent" }, // 2390771536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DedicatedServerHandlerComponent.h" },
		{ "ModuleRelativePath", "Public/DedicatedServerHandlerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::NewProp__atlantaRituals_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::NewProp__atlantaRituals = { "_atlantaRituals", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDedicatedServerHandlerComponent, _atlantaRituals), Z_Construct_UScriptStruct_FAtlantaRitualSet, METADATA_PARAMS(Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::NewProp__atlantaRituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::NewProp__atlantaRituals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::NewProp__atlantaRituals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDedicatedServerHandlerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::ClassParams = {
		&UDedicatedServerHandlerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDedicatedServerHandlerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDedicatedServerHandlerComponent, 1223958475);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDedicatedServerHandlerComponent>()
	{
		return UDedicatedServerHandlerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDedicatedServerHandlerComponent(Z_Construct_UClass_UDedicatedServerHandlerComponent, &UDedicatedServerHandlerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDedicatedServerHandlerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDedicatedServerHandlerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
