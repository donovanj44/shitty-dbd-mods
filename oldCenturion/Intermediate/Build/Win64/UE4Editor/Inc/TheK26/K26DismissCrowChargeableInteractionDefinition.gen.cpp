// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26DismissCrowChargeableInteractionDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26DismissCrowChargeableInteractionDefinition() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26PowerStatusHandlerComponent_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(UK26DismissCrowChargeableInteractionDefinition::execOnDamageStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldDamageState);
		P_GET_ENUM(ECamperDamageState,Z_Param_currentDamageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageStateChanged(ECamperDamageState(Z_Param_oldDamageState),ECamperDamageState(Z_Param_currentDamageState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26DismissCrowChargeableInteractionDefinition::execOnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSet(Z_Param_killer,Z_Param_chargeableComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26DismissCrowChargeableInteractionDefinition::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UK26DismissCrowChargeableInteractionDefinition::StaticRegisterNativesUK26DismissCrowChargeableInteractionDefinition()
	{
		UClass* Class = UK26DismissCrowChargeableInteractionDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamageStateChanged", &UK26DismissCrowChargeableInteractionDefinition::execOnDamageStateChanged },
			{ "OnKillerSet", &UK26DismissCrowChargeableInteractionDefinition::execOnKillerSet },
			{ "OnLevelReadyToPlay", &UK26DismissCrowChargeableInteractionDefinition::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics
	{
		struct K26DismissCrowChargeableInteractionDefinition_eventOnDamageStateChanged_Parms
		{
			ECamperDamageState oldDamageState;
			ECamperDamageState currentDamageState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentDamageState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldDamageState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::NewProp_currentDamageState = { "currentDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26DismissCrowChargeableInteractionDefinition_eventOnDamageStateChanged_Parms, currentDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::NewProp_currentDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::NewProp_oldDamageState = { "oldDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26DismissCrowChargeableInteractionDefinition_eventOnDamageStateChanged_Parms, oldDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::NewProp_oldDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::NewProp_currentDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::NewProp_currentDamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::NewProp_oldDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::NewProp_oldDamageState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26DismissCrowChargeableInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition, nullptr, "OnDamageStateChanged", nullptr, nullptr, sizeof(K26DismissCrowChargeableInteractionDefinition_eventOnDamageStateChanged_Parms), Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics
	{
		struct K26DismissCrowChargeableInteractionDefinition_eventOnKillerSet_Parms
		{
			ASlasherPlayer* killer;
			UChargeableComponent* chargeableComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26DismissCrowChargeableInteractionDefinition_eventOnKillerSet_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26DismissCrowChargeableInteractionDefinition_eventOnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::NewProp_chargeableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26DismissCrowChargeableInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition, nullptr, "OnKillerSet", nullptr, nullptr, sizeof(K26DismissCrowChargeableInteractionDefinition_eventOnKillerSet_Parms), Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26DismissCrowChargeableInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_NoRegister()
	{
		return UK26DismissCrowChargeableInteractionDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isLevelReadyToPlay_MetaData[];
#endif
		static void NewProp__isLevelReadyToPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLevelReadyToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k26PowerStatusHandlerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k26PowerStatusHandlerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chargeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged, "OnDamageStateChanged" }, // 3474647192
		{ &Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnKillerSet, "OnKillerSet" }, // 3384623598
		{ &Z_Construct_UFunction_UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1500142
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "K26DismissCrowChargeableInteractionDefinition.h" },
		{ "ModuleRelativePath", "Public/K26DismissCrowChargeableInteractionDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__isLevelReadyToPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26DismissCrowChargeableInteractionDefinition.h" },
	};
#endif
	void Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__isLevelReadyToPlay_SetBit(void* Obj)
	{
		((UK26DismissCrowChargeableInteractionDefinition*)Obj)->_isLevelReadyToPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__isLevelReadyToPlay = { "_isLevelReadyToPlay", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26DismissCrowChargeableInteractionDefinition), &Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__isLevelReadyToPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__isLevelReadyToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__isLevelReadyToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__k26PowerStatusHandlerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26DismissCrowChargeableInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__k26PowerStatusHandlerComponent = { "_k26PowerStatusHandlerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26DismissCrowChargeableInteractionDefinition, _k26PowerStatusHandlerComponent), Z_Construct_UClass_UK26PowerStatusHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__k26PowerStatusHandlerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__k26PowerStatusHandlerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__chargeTime_MetaData[] = {
		{ "Category", "K26DismissCrowChargeableInteractionDefinition" },
		{ "ModuleRelativePath", "Public/K26DismissCrowChargeableInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__chargeTime = { "_chargeTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26DismissCrowChargeableInteractionDefinition, _chargeTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__chargeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__chargeTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__isLevelReadyToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__k26PowerStatusHandlerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::NewProp__chargeTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26DismissCrowChargeableInteractionDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::ClassParams = {
		&UK26DismissCrowChargeableInteractionDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26DismissCrowChargeableInteractionDefinition, 2661271445);
	template<> THEK26_API UClass* StaticClass<UK26DismissCrowChargeableInteractionDefinition>()
	{
		return UK26DismissCrowChargeableInteractionDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26DismissCrowChargeableInteractionDefinition(Z_Construct_UClass_UK26DismissCrowChargeableInteractionDefinition, &UK26DismissCrowChargeableInteractionDefinition::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26DismissCrowChargeableInteractionDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26DismissCrowChargeableInteractionDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
