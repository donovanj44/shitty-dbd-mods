// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GhostStalkPowerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostStalkPowerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGhostStalkPowerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGhostStalkPowerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELeanState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGhostStalkedComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStalkerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGhostStalkPowerComponent::execAuthority_OnStalkModeChanged)
	{
		P_GET_UBOOL(Z_Param_isInStalkMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnStalkModeChanged(Z_Param_isInStalkMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStalkPowerComponent::execOnIsCrouchedChanged)
	{
		P_GET_UBOOL(Z_Param_isCrouched);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIsCrouchedChanged(Z_Param_isCrouched);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStalkPowerComponent::execOnLeanStateChanged)
	{
		P_GET_ENUM(ELeanState,Z_Param_leanState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeanStateChanged(ELeanState(Z_Param_leanState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStalkPowerComponent::execRefreshSurvivorMaximumSightDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSurvivorMaximumSightDistance();
		P_NATIVE_END;
	}
	void UGhostStalkPowerComponent::StaticRegisterNativesUGhostStalkPowerComponent()
	{
		UClass* Class = UGhostStalkPowerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnStalkModeChanged", &UGhostStalkPowerComponent::execAuthority_OnStalkModeChanged },
			{ "OnIsCrouchedChanged", &UGhostStalkPowerComponent::execOnIsCrouchedChanged },
			{ "OnLeanStateChanged", &UGhostStalkPowerComponent::execOnLeanStateChanged },
			{ "RefreshSurvivorMaximumSightDistance", &UGhostStalkPowerComponent::execRefreshSurvivorMaximumSightDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics
	{
		struct GhostStalkPowerComponent_eventAuthority_OnStalkModeChanged_Parms
		{
			bool isInStalkMode;
		};
		static void NewProp_isInStalkMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInStalkMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::NewProp_isInStalkMode_SetBit(void* Obj)
	{
		((GhostStalkPowerComponent_eventAuthority_OnStalkModeChanged_Parms*)Obj)->isInStalkMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::NewProp_isInStalkMode = { "isInStalkMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostStalkPowerComponent_eventAuthority_OnStalkModeChanged_Parms), &Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::NewProp_isInStalkMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::NewProp_isInStalkMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStalkPowerComponent, nullptr, "Authority_OnStalkModeChanged", nullptr, nullptr, sizeof(GhostStalkPowerComponent_eventAuthority_OnStalkModeChanged_Parms), Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics
	{
		struct GhostStalkPowerComponent_eventOnIsCrouchedChanged_Parms
		{
			bool isCrouched;
		};
		static void NewProp_isCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCrouched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::NewProp_isCrouched_SetBit(void* Obj)
	{
		((GhostStalkPowerComponent_eventOnIsCrouchedChanged_Parms*)Obj)->isCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::NewProp_isCrouched = { "isCrouched", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostStalkPowerComponent_eventOnIsCrouchedChanged_Parms), &Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::NewProp_isCrouched_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::NewProp_isCrouched,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStalkPowerComponent, nullptr, "OnIsCrouchedChanged", nullptr, nullptr, sizeof(GhostStalkPowerComponent_eventOnIsCrouchedChanged_Parms), Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics
	{
		struct GhostStalkPowerComponent_eventOnLeanStateChanged_Parms
		{
			ELeanState leanState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leanState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leanState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::NewProp_leanState = { "leanState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostStalkPowerComponent_eventOnLeanStateChanged_Parms, leanState), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::NewProp_leanState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::NewProp_leanState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::NewProp_leanState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStalkPowerComponent, nullptr, "OnLeanStateChanged", nullptr, nullptr, sizeof(GhostStalkPowerComponent_eventOnLeanStateChanged_Parms), Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStalkPowerComponent, nullptr, "RefreshSurvivorMaximumSightDistance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGhostStalkPowerComponent_NoRegister()
	{
		return UGhostStalkPowerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGhostStalkPowerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugMode_MetaData[];
#endif
		static void NewProp__debugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__debugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crouchAttackRequiredTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__crouchAttackRequiredTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ghostStalkedComponentClassPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__ghostStalkedComponentClassPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stalkerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stalkerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGhostStalkPowerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGhostStalkPowerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGhostStalkPowerComponent_Authority_OnStalkModeChanged, "Authority_OnStalkModeChanged" }, // 2392848983
		{ &Z_Construct_UFunction_UGhostStalkPowerComponent_OnIsCrouchedChanged, "OnIsCrouchedChanged" }, // 724914004
		{ &Z_Construct_UFunction_UGhostStalkPowerComponent_OnLeanStateChanged, "OnLeanStateChanged" }, // 2807126295
		{ &Z_Construct_UFunction_UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance, "RefreshSurvivorMaximumSightDistance" }, // 4231814193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStalkPowerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GhostStalkPowerComponent.h" },
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__debugMode_MetaData[] = {
		{ "Category", "GhostStalkPowerComponent" },
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__debugMode_SetBit(void* Obj)
	{
		((UGhostStalkPowerComponent*)Obj)->_debugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__debugMode = { "_debugMode", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGhostStalkPowerComponent), &Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__debugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__debugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__debugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__crouchAttackRequiredTimeSeconds_MetaData[] = {
		{ "Category", "GhostStalkPowerComponent" },
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__crouchAttackRequiredTimeSeconds = { "_crouchAttackRequiredTimeSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStalkPowerComponent, _crouchAttackRequiredTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__crouchAttackRequiredTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__crouchAttackRequiredTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__ghostStalkedComponentClassPtr_MetaData[] = {
		{ "Category", "GhostStalkPowerComponent" },
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__ghostStalkedComponentClassPtr = { "_ghostStalkedComponentClassPtr", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStalkPowerComponent, _ghostStalkedComponentClassPtr), Z_Construct_UClass_UGhostStalkedComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__ghostStalkedComponentClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__ghostStalkedComponentClassPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__stalkerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GhostStalkPowerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__stalkerComponent = { "_stalkerComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStalkPowerComponent, _stalkerComponent), Z_Construct_UClass_UStalkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__stalkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__stalkerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGhostStalkPowerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__debugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__crouchAttackRequiredTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__ghostStalkedComponentClassPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStalkPowerComponent_Statics::NewProp__stalkerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGhostStalkPowerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGhostStalkPowerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGhostStalkPowerComponent_Statics::ClassParams = {
		&UGhostStalkPowerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGhostStalkPowerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStalkPowerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGhostStalkPowerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGhostStalkPowerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGhostStalkPowerComponent, 1964045042);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGhostStalkPowerComponent>()
	{
		return UGhostStalkPowerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGhostStalkPowerComponent(Z_Construct_UClass_UGhostStalkPowerComponent, &UGhostStalkPowerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGhostStalkPowerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGhostStalkPowerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
