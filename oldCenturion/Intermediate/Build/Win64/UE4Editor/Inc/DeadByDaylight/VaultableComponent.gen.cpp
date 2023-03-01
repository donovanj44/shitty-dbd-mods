// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/VaultableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaultableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVaultableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVaultableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventVaultableComponentOnVault_Parms
		{
			ADBDPlayer* vaulter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_vaulter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::NewProp_vaulter = { "vaulter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventVaultableComponentOnVault_Parms, vaulter), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::NewProp_vaulter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaultableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "VaultableComponentOnVault__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventVaultableComponentOnVault_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVaultableComponent::execOnChaseEnded)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_survivor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_chaseTimer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChaseEnded(Z_Param_survivor,Z_Param_chaseTimer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaultableComponent::execSignalVault)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_survivor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_interactionTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SignalVault(Z_Param_survivor,Z_Param_interactionTime);
		P_NATIVE_END;
	}
	void UVaultableComponent::StaticRegisterNativesUVaultableComponent()
	{
		UClass* Class = UVaultableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChaseEnded", &UVaultableComponent::execOnChaseEnded },
			{ "SignalVault", &UVaultableComponent::execSignalVault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics
	{
		struct VaultableComponent_eventOnChaseEnded_Parms
		{
			ADBDPlayer* survivor;
			float chaseTimer;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chaseTimer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::NewProp_chaseTimer = { "chaseTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaultableComponent_eventOnChaseEnded_Parms, chaseTimer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaultableComponent_eventOnChaseEnded_Parms, survivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::NewProp_chaseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaultableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaultableComponent, nullptr, "OnChaseEnded", nullptr, nullptr, sizeof(VaultableComponent_eventOnChaseEnded_Parms), Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaultableComponent_OnChaseEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaultableComponent_OnChaseEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics
	{
		struct VaultableComponent_eventSignalVault_Parms
		{
			ADBDPlayer* survivor;
			float interactionTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::NewProp_interactionTime = { "interactionTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaultableComponent_eventSignalVault_Parms, interactionTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaultableComponent_eventSignalVault_Parms, survivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::NewProp_interactionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaultableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaultableComponent, nullptr, "SignalVault", nullptr, nullptr, sizeof(VaultableComponent_eventSignalVault_Parms), Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaultableComponent_SignalVault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaultableComponent_SignalVault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaultableComponent_NoRegister()
	{
		return UVaultableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVaultableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vaultableScoreEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__vaultableScoreEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVault_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaultableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaultableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaultableComponent_OnChaseEnded, "OnChaseEnded" }, // 1113157530
		{ &Z_Construct_UFunction_UVaultableComponent_SignalVault, "SignalVault" }, // 1892199830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VaultableComponent.h" },
		{ "ModuleRelativePath", "Public/VaultableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultableComponent_Statics::NewProp__vaultableScoreEvent_MetaData[] = {
		{ "Category", "VaultableComponent" },
		{ "ModuleRelativePath", "Public/VaultableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVaultableComponent_Statics::NewProp__vaultableScoreEvent = { "_vaultableScoreEvent", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultableComponent, _vaultableScoreEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UVaultableComponent_Statics::NewProp__vaultableScoreEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultableComponent_Statics::NewProp__vaultableScoreEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultableComponent_Statics::NewProp_OnVault_MetaData[] = {
		{ "ModuleRelativePath", "Public/VaultableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVaultableComponent_Statics::NewProp_OnVault = { "OnVault", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultableComponent, OnVault), Z_Construct_UDelegateFunction_DeadByDaylight_VaultableComponentOnVault__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVaultableComponent_Statics::NewProp_OnVault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultableComponent_Statics::NewProp_OnVault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaultableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultableComponent_Statics::NewProp__vaultableScoreEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultableComponent_Statics::NewProp_OnVault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaultableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaultableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaultableComponent_Statics::ClassParams = {
		&UVaultableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVaultableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaultableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVaultableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaultableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaultableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaultableComponent, 3208421339);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UVaultableComponent>()
	{
		return UVaultableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaultableComponent(Z_Construct_UClass_UVaultableComponent, &UVaultableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UVaultableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaultableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
