// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AchievementHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementHandlerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAchievementHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAchievementHandlerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperKONextToRaisedPalletAchievement_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGeneratorRepairWithGenericPerksEscapeAchievement_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAchievementHandlerComponent::execOnGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementHandlerComponent::execReceiveGameEvent)
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
	void UAchievementHandlerComponent::StaticRegisterNativesUAchievementHandlerComponent()
	{
		UClass* Class = UAchievementHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameEvent", &UAchievementHandlerComponent::execOnGameEvent },
			{ "ReceiveGameEvent", &UAchievementHandlerComponent::execReceiveGameEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics
	{
		struct AchievementHandlerComponent_eventOnGameEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHandlerComponent_eventOnGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHandlerComponent_eventOnGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AchievementHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementHandlerComponent, nullptr, "OnGameEvent", nullptr, nullptr, sizeof(AchievementHandlerComponent_eventOnGameEvent_Parms), Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics
	{
		struct AchievementHandlerComponent_eventReceiveGameEvent_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHandlerComponent_eventReceiveGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHandlerComponent_eventReceiveGameEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHandlerComponent_eventReceiveGameEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHandlerComponent_eventReceiveGameEvent_Parms, scoreType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::NewProp_scoreType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AchievementHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementHandlerComponent, nullptr, "ReceiveGameEvent", nullptr, nullptr, sizeof(AchievementHandlerComponent_eventReceiveGameEvent_Parms), Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAchievementHandlerComponent_NoRegister()
	{
		return UAchievementHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperKONextToRaisedPalletAchievement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperKONextToRaisedPalletAchievement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorRepairWithGenericPerksOnlyEscapeAchievement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__generatorRepairWithGenericPerksOnlyEscapeAchievement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAchievementHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementHandlerComponent_OnGameEvent, "OnGameEvent" }, // 1695291997
		{ &Z_Construct_UFunction_UAchievementHandlerComponent_ReceiveGameEvent, "ReceiveGameEvent" }, // 3603216700
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AchievementHandlerComponent.h" },
		{ "ModuleRelativePath", "Public/AchievementHandlerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__camperKONextToRaisedPalletAchievement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__camperKONextToRaisedPalletAchievement = { "_camperKONextToRaisedPalletAchievement", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementHandlerComponent, _camperKONextToRaisedPalletAchievement), Z_Construct_UClass_UCamperKONextToRaisedPalletAchievement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__camperKONextToRaisedPalletAchievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__camperKONextToRaisedPalletAchievement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__generatorRepairWithGenericPerksOnlyEscapeAchievement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__generatorRepairWithGenericPerksOnlyEscapeAchievement = { "_generatorRepairWithGenericPerksOnlyEscapeAchievement", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementHandlerComponent, _generatorRepairWithGenericPerksOnlyEscapeAchievement), Z_Construct_UClass_UGeneratorRepairWithGenericPerksEscapeAchievement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__generatorRepairWithGenericPerksOnlyEscapeAchievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__generatorRepairWithGenericPerksOnlyEscapeAchievement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementHandlerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__camperKONextToRaisedPalletAchievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHandlerComponent_Statics::NewProp__generatorRepairWithGenericPerksOnlyEscapeAchievement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementHandlerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementHandlerComponent_Statics::ClassParams = {
		&UAchievementHandlerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAchievementHandlerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHandlerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementHandlerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHandlerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementHandlerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementHandlerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementHandlerComponent, 2416462429);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAchievementHandlerComponent>()
	{
		return UAchievementHandlerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementHandlerComponent(Z_Construct_UClass_UAchievementHandlerComponent, &UAchievementHandlerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAchievementHandlerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementHandlerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
