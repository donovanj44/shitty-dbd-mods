// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlindableBaseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlindableBaseComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindableBaseComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindableBaseComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindingEffectorInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EBlindType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
// End Cross Module References
	DEFINE_FUNCTION(UBlindableBaseComponent::execAuthority_AddBlindingEffector)
	{
		P_GET_TINTERFACE(IBlindingEffectorInterface,Z_Param_effector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddBlindingEffector(Z_Param_effector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlindableBaseComponent::execAuthority_Blinded)
	{
		P_GET_ENUM(EBlindType,Z_Param_blindType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_blindnessDuration);
		P_GET_OBJECT(AActor,Z_Param_effectorActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Blinded(EBlindType(Z_Param_blindType),Z_Param_blindnessDuration,Z_Param_effectorActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlindableBaseComponent::execAuthority_RemoveBlindingEffector)
	{
		P_GET_TINTERFACE(IBlindingEffectorInterface,Z_Param_effector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RemoveBlindingEffector(Z_Param_effector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlindableBaseComponent::execIsBlinded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlinded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlindableBaseComponent::execOnChargeableCompletionPercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChargeableCompletionPercentChanged(Z_Param_chargeableComponent,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlindableBaseComponent::execOnRep_IsBlinded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsBlinded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlindableBaseComponent::execSetChargeable)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChargeable(Z_Param_value);
		P_NATIVE_END;
	}
	void UBlindableBaseComponent::StaticRegisterNativesUBlindableBaseComponent()
	{
		UClass* Class = UBlindableBaseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddBlindingEffector", &UBlindableBaseComponent::execAuthority_AddBlindingEffector },
			{ "Authority_Blinded", &UBlindableBaseComponent::execAuthority_Blinded },
			{ "Authority_RemoveBlindingEffector", &UBlindableBaseComponent::execAuthority_RemoveBlindingEffector },
			{ "IsBlinded", &UBlindableBaseComponent::execIsBlinded },
			{ "OnChargeableCompletionPercentChanged", &UBlindableBaseComponent::execOnChargeableCompletionPercentChanged },
			{ "OnRep_IsBlinded", &UBlindableBaseComponent::execOnRep_IsBlinded },
			{ "SetChargeable", &UBlindableBaseComponent::execSetChargeable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics
	{
		struct BlindableBaseComponent_eventAuthority_AddBlindingEffector_Parms
		{
			TScriptInterface<IBlindingEffectorInterface> effector;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_effector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::NewProp_effector = { "effector", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindableBaseComponent_eventAuthority_AddBlindingEffector_Parms, effector), Z_Construct_UClass_UBlindingEffectorInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::NewProp_effector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindableBaseComponent, nullptr, "Authority_AddBlindingEffector", nullptr, nullptr, sizeof(BlindableBaseComponent_eventAuthority_AddBlindingEffector_Parms), Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics
	{
		struct BlindableBaseComponent_eventAuthority_Blinded_Parms
		{
			EBlindType blindType;
			float blindnessDuration;
			AActor* effectorActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effectorActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_blindnessDuration;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_blindType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_blindType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::NewProp_effectorActor = { "effectorActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindableBaseComponent_eventAuthority_Blinded_Parms, effectorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::NewProp_blindnessDuration = { "blindnessDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindableBaseComponent_eventAuthority_Blinded_Parms, blindnessDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::NewProp_blindType = { "blindType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindableBaseComponent_eventAuthority_Blinded_Parms, blindType), Z_Construct_UEnum_DBDSharedTypes_EBlindType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::NewProp_blindType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::NewProp_effectorActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::NewProp_blindnessDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::NewProp_blindType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::NewProp_blindType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindableBaseComponent, nullptr, "Authority_Blinded", nullptr, nullptr, sizeof(BlindableBaseComponent_eventAuthority_Blinded_Parms), Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics
	{
		struct BlindableBaseComponent_eventAuthority_RemoveBlindingEffector_Parms
		{
			TScriptInterface<IBlindingEffectorInterface> effector;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_effector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::NewProp_effector = { "effector", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindableBaseComponent_eventAuthority_RemoveBlindingEffector_Parms, effector), Z_Construct_UClass_UBlindingEffectorInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::NewProp_effector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindableBaseComponent, nullptr, "Authority_RemoveBlindingEffector", nullptr, nullptr, sizeof(BlindableBaseComponent_eventAuthority_RemoveBlindingEffector_Parms), Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics
	{
		struct BlindableBaseComponent_eventIsBlinded_Parms
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
	void Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlindableBaseComponent_eventIsBlinded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlindableBaseComponent_eventIsBlinded_Parms), &Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindableBaseComponent, nullptr, "IsBlinded", nullptr, nullptr, sizeof(BlindableBaseComponent_eventIsBlinded_Parms), Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics
	{
		struct BlindableBaseComponent_eventOnChargeableCompletionPercentChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float totalPercentComplete;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalPercentComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindableBaseComponent_eventOnChargeableCompletionPercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindableBaseComponent_eventOnChargeableCompletionPercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindableBaseComponent, nullptr, "OnChargeableCompletionPercentChanged", nullptr, nullptr, sizeof(BlindableBaseComponent_eventOnChargeableCompletionPercentChanged_Parms), Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlindableBaseComponent_OnRep_IsBlinded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_OnRep_IsBlinded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindableBaseComponent_OnRep_IsBlinded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindableBaseComponent, nullptr, "OnRep_IsBlinded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_OnRep_IsBlinded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_OnRep_IsBlinded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindableBaseComponent_OnRep_IsBlinded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindableBaseComponent_OnRep_IsBlinded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics
	{
		struct BlindableBaseComponent_eventSetChargeable_Parms
		{
			UChargeableComponent* value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::NewProp_value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindableBaseComponent_eventSetChargeable_Parms, value), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindableBaseComponent, nullptr, "SetChargeable", nullptr, nullptr, sizeof(BlindableBaseComponent_eventSetChargeable_Parms), Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlindableBaseComponent_NoRegister()
	{
		return UBlindableBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlindableBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindingEffectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__blindingEffectors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blindingEffectors_Key_KeyProp;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__blindingEffectors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chargeableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingBlinded_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isBeingBlinded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBlinded_MetaData[];
#endif
		static void NewProp__isBlinded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBlinded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlindableBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlindableBaseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlindableBaseComponent_Authority_AddBlindingEffector, "Authority_AddBlindingEffector" }, // 3532653980
		{ &Z_Construct_UFunction_UBlindableBaseComponent_Authority_Blinded, "Authority_Blinded" }, // 454381674
		{ &Z_Construct_UFunction_UBlindableBaseComponent_Authority_RemoveBlindingEffector, "Authority_RemoveBlindingEffector" }, // 1511732636
		{ &Z_Construct_UFunction_UBlindableBaseComponent_IsBlinded, "IsBlinded" }, // 3317342178
		{ &Z_Construct_UFunction_UBlindableBaseComponent_OnChargeableCompletionPercentChanged, "OnChargeableCompletionPercentChanged" }, // 2912264703
		{ &Z_Construct_UFunction_UBlindableBaseComponent_OnRep_IsBlinded, "OnRep_IsBlinded" }, // 1293020615
		{ &Z_Construct_UFunction_UBlindableBaseComponent_SetChargeable, "SetChargeable" }, // 3212320620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindableBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlindableBaseComponent.h" },
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors = { "_blindingEffectors", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlindableBaseComponent, _blindingEffectors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors_Key_KeyProp = { "_blindingEffectors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors_ValueProp = { "_blindingEffectors", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBlindingEffectorInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__chargeableComponent = { "_chargeableComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlindableBaseComponent, _chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__chargeableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBeingBlinded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBeingBlinded = { "_isBeingBlinded", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlindableBaseComponent, _isBeingBlinded), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBeingBlinded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBeingBlinded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBlinded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlindableBaseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBlinded_SetBit(void* Obj)
	{
		((UBlindableBaseComponent*)Obj)->_isBlinded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBlinded = { "_isBlinded", "OnRep_IsBlinded", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlindableBaseComponent), &Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBlinded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBlinded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBlinded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlindableBaseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__blindingEffectors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__chargeableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBeingBlinded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindableBaseComponent_Statics::NewProp__isBlinded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlindableBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlindableBaseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlindableBaseComponent_Statics::ClassParams = {
		&UBlindableBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlindableBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlindableBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlindableBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindableBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlindableBaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlindableBaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlindableBaseComponent, 1114338948);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlindableBaseComponent>()
	{
		return UBlindableBaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlindableBaseComponent(Z_Construct_UClass_UBlindableBaseComponent, &UBlindableBaseComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlindableBaseComponent"), false, nullptr, nullptr, nullptr);

	void UBlindableBaseComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isBlinded(TEXT("_isBlinded"));
		static const FName Name__isBeingBlinded(TEXT("_isBeingBlinded"));

		const bool bIsValid = true
			&& Name__isBlinded == ClassReps[(int32)ENetFields_Private::_isBlinded].Property->GetFName()
			&& Name__isBeingBlinded == ClassReps[(int32)ENetFields_Private::_isBeingBlinded].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBlindableBaseComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlindableBaseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
